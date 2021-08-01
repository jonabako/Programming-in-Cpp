#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

int main(){

	Player p1("Gideon\0", "Jung\0", "1994-09-12", 1.89, 26, 
	28, "Center-Back", 5, "right");
    Player p2("Tim\0", "Leibold\0", "1993-11-30", 1.74, 27, 
	21, "Left-Back", 15, "left");
    Player p3("David\0", "Kinsombi\0", "1995-12-12", 1.83, 24, 
	6, "Central Midfield", 16, "right");

    TournamentMember::changeLocation("Hamburg");

    p1.incrementGoals();
	
	cout << endl;
	
    cout << "First player data:\n";
    p1.printMember();
    p1.printPlayer();

	cout << endl;
    
	cout << "Second player data:\n";
    p2.printMember();
    p2.printPlayer();

	cout << endl;

	cout << "Third player data:\n";
    p3.printMember();
    p3.printPlayer();
    
	cout << endl;
    
    return 0;
}
