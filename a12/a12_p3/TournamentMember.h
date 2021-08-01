using namespace std;

class TournamentMember{
	private:
		char firstname[36];
		char lastname[36];
		char birthday[11];
		float height;
		int age;
		static string location;
		
	public:
		TournamentMember();
		
		TournamentMember(const char*, const char*, const char*, float, int);
		TournamentMember(const TournamentMember&);
		
		~TournamentMember();
		
		void setFirstName(const char* fn){
		    int i;
		    for(i=0; i<36; i++){
		        firstname[i] = fn[i];
		    }
		}
		
		void setLastName(const char* ln){
		    int i;
		    for(i=0; i<36; i++){
		        lastname[i] = ln[i];
		    }
		}
		
		void setBirthday(const char* bd){
		    int i;
		    for(i=0; i<11; i++){
		        birthday[i] = bd[i];
		    }
		}
		
		void setHeight(float h){
		    height = h;
		}
		
		void setAge(int a){
		    age = a;
		}
		
		string getFirstName(){
		    return firstname;
		}
		
		string getLastName(){
		    return lastname;
		}
		
		string getBirthday(){
		    return birthday;
		}
		
		float getHeight(){
		    return height;
		}
		
		int getAge(){
		    return age;
		}
		

		void printMember();
				

		static void changeLocation(string);
		
};

class Player:public TournamentMember{
	private: 
		int number;
		string position; 
		int goals;
		string foot;
	public:

		Player();
		Player(const char*, const char*, const char*, float, int, int, 
		string, int, string);
		Player(const Player&);
		
		~Player();
		
		void setNumber(int n){
			number = n;
		}
		void setPosition(string p){
			position = p;
		}
		void setFoot(string f){
			foot = f;
		}
		void setGoals(int g){
			goals = g;
		}

		int getNumber(){
			return number;
		}
		string getPosition(){
			return position;
		}
		string getFoot(){
			return foot;
		}
		int getGoals(){
			return goals;
		}
		
		void printPlayer();
		
		void incrementGoals();
};
