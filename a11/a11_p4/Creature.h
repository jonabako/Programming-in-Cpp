class Creature {
	public: // data members are private
		Creature();  
		void run() const;
		~Creature();

	protected:
		int distance; // distance property
};

class Wizard : public Creature {
	public:
	// constructor protoypes 
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor; // factor to multiply inherited distance
};

class Dragon : public Creature { // new derived creature class, Dragon
	public:
		Dragon();
		void fly() const;
		~Dragon();

	private:
		int HeightFactor; // new height property
};

class Elf : public Creature { // new creature, Elf
	public:
		Elf();
		void dig() const;
		~Elf();

	private:
		int DepthFactor; // new depth property
};
