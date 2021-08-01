#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    int n;
    // input number of files
    cout<<"Enter number of input files: ";
    cin>>n;
    cout<<endl;
    
    string filename;
    string STRING;
    
    // input filenames and open them
	ifstream* input = new ifstream[n];
    for (int i = 0; i < n; i++){
    	cout<<"Enter name of input file: ";
        cin>>filename;
        input[i].open(filename, ios::binary);
        // check if all files exist
		if (!input[i].good()){
            cout<<"\aInput file '"<<filename<<"' could not be opened!\n";
            exit(1); // if not, exit and do not concatenate
        }
    }
    
    // set name of output file and copy content of files
    ofstream out("concatn.txt", ios::binary);
    for (int i = 0; i < n; i++){
        while (getline(input[i], STRING)){
            out<<STRING<<endl; // output separated by endl
        }
    }
	
    cout<<"\nOutput file 'concatn.txt' was created succesfully :)\n";

    delete[]input;
    
    return 0;
}
