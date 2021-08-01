#include <iostream>

using namespace std;

// exception class called OwnException derived from exception
class OwnException : public exception {
	private:
	    string exception_string;
	public:
		// overwrite what() method
		string what(){
	    	return "OwnException\n";
		}
	    OwnException(string error){
	    	error = exception_string;
		}
};

// function with integer parameter which can throw four exception types
void find_error(int c){
	switch(c){
		case(1):
			throw('c');
			break;
		case(2):
			throw(12);
			break;
		case(3):
			throw(true);
			break;
		default:
			throw OwnException("Default case exception");
			break;
	}
}

int main() {
    for(int i = 0; i < 4; i++){
		try{
            find_error(i);
        }
        // catch blocks printing the values of thrown exceptions
        catch(char& c){
            cerr<<"Caught in main: "<<c<<endl;
		}
        catch(int& c){
            cerr<<"Caught in main: "<<c<<endl;
		}
        catch(bool& c){
            cerr<<"Caught in main: "<<(c ? "TRUE\n" : "FALSE\n");
		}
        catch(OwnException& c){
            cerr<<"Caught in main: "<<c.what()<<endl;}
    }
    
  return 0;

}
