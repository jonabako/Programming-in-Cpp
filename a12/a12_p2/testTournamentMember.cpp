#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

int main(){
    TournamentMember one("Milot\0", "Rashica\0", "1996-06-28", 1.78, 24);

	TournamentMember two = TournamentMember();

	two.setFirstName("Matheus\0");
    two.setLastName("Cunha\0");
    two.setBirthday("1999-05-27");
    two.setHeight(1.84);
    two.setAge(38);

    TournamentMember three(two);
    
    cout<<endl;
    
    cout << "First member:\n";
    one.printMember();
    
    cout<<endl;
    
    cout << "Second member:\n";
    two.printMember();

    cout<<endl;
    
    two.changeLocation("Berlin");
    
    cout << "Third member:\n";
    three.printMember();
    
    cout<<endl;

    return 0;
}
