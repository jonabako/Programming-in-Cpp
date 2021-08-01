class Complex{
	private:
		int real;
		int imag;
	public:
		Complex();
		Complex(int, int);
		Complex(const Complex&);
		~Complex();
		
		void setReal(int);
		void setImag(int);
		
		int getReal();
		int getImag();
		
		void print();
		Complex conjugate();
		Complex add(Complex);
		Complex sub(Complex);
		Complex multiply(Complex);
};
