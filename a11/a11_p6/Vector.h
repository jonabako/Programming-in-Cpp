class Vector{
	private:
		int size;
		double *ptr;
	public:
		Vector();
		Vector(int, double*);
		Vector(const Vector&);
		~Vector();
		
		void setSize(int);
		void setMemory(double*);
		
		int getSize();
		double* getMemory();
		
		void print();
		double norm();
		Vector add(const Vector) const;
		Vector sub(const Vector) const;
		double mult(const Vector) const;
};
