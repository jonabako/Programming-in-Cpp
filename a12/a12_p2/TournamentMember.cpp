#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

string TournamentMember::location = "Bremen";

TournamentMember::TournamentMember(){
	cout << "Default constructor called!\n";
}

TournamentMember::TournamentMember(const char* fn, const char* ln, 
const char* bd, float h, int a){
	int i;
    for(i=0; i<36; i++){
        firstname[i] = fn[i];
    }
	for(i=0; i<36; i++){
        lastname[i] = ln[i];
    }
    for(i=0; i<11; i++){
        birthday[i] = bd[i];
    }
    height = h;
	age = a;
	cout << "Constructor with parameters called!\n";
}

TournamentMember::TournamentMember(const TournamentMember& temp){
	int i;
    for(i=0; i<36; i++){
        firstname[i] = temp.firstname[i];
    }
	for(i=0; i<36; i++){
        lastname[i] = temp.lastname[i];
    }
    for(i=0; i<11; i++){
        birthday[i] = temp.birthday[i];
    }
	height = temp.height;
	age = temp.age;
	cout << "Copy constructor called!\n";
}

TournamentMember::~TournamentMember(){
	cout << "Member data destructed!\n";
}

void TournamentMember::printMember(){
    cout << "Name: " << firstname <<" "<< lastname << endl;
    cout << "Date of birth: " << birthday << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " m\n";
    cout << "Location: " << location << endl;
}

void TournamentMember::changeLocation(string l){
	location = l;
}
