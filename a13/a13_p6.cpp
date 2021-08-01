#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main(){
	// strore value 8, 20 times into created vector
	vector<int> vec(20, 8);
	
	// try and catch block for exceptions
	try{
		cout<<vec.at(20); // counting from 0, position 20, meaning
						  // accessing the 21st element
    }
	catch (out_of_range& error){ // exception of type out_of_range
    	cerr<< error.what()<<endl; // print the type of exception
    }

	return 0;
}
