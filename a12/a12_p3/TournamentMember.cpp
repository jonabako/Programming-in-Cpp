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

Player::Player(){
	cout << "Player default constructor called!\n";	
}

Player::Player(const char* fn, const char* ln, const char* bd, float h, 
int a, int n, string p, int g, string f):TournamentMember(fn, ln, bd, h, a){
	number = n;
	position = p;
	goals = g;
	foot = f;
	cout << "Player constructor with parameters called!\n";	
}

Player::Player(const Player& temp){
	number = temp.number;
	position = temp.position;
	goals = temp.goals;
	foot = temp.foot;
	cout << "Player copy constructor called!\n";
}

Player::~Player(){
	cout << "Player data destructed!\n";
}

void Player::printPlayer(){
	cout << "Player number: " << number << endl;
    cout << "Player position: " << position << endl;
    cout << "Number of goals: " << goals << endl;
    cout << "The player is " << foot << "-footed\n";
}

void Player::incrementGoals(){
	goals++;
}
