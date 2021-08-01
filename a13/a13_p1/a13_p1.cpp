#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	ifstream input;
	ofstream output;
	string line;
	char src[50], dest[50];

	fgets(src, sizeof(src), stdin);
	src[strlen(src)-1]='\0';
	
	input.open(src);
	if(!input){
		cout << "Error opening input file!\n";
		exit(1);
	}
	
	src[strlen(src)-4]='\0';
	strcpy(dest, src);
	strcat(dest, "_copy.txt");

	output.open(dest);
	if(!output){
		cout << "Error opening output file!\n";
		input.close();
		exit(2);
	}
	
	if(input && output){
		while(!input.eof()){
			getline(input, line);
			output << line << "\n";
		}
        cout << "Output file created!\n";
	}
	else
		cout << "Output file could not be created!\n";
 
    input.close();
    output.close();
	
	return 0;
}
