class Creature {
    public:
        Creature();  
        void run() const;
        ~Creature();
 
    protected:
        int distance;
};
class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
        ~Wizard();
 
    private:
        int distFactor;
};
class Dragon : public Creature {
    public:
        Dragon();
        void fly() const;
        ~Dragon();
 
    private:
        int HeightFactor;
};
class Elf : public Creature {
    public:
        Elf();
        void dig() const;
        ~Elf();
 
    private:
        int DepthFactor;
};
