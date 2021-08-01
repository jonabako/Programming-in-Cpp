class Box{
	private:
		double height;
		double width;
		double depth;
	public:
		Box();
		Box(double, double, double);
		Box(const Box &);
		~Box();
		
		void getHeight(double);
		void getWidth(double);
		void getDepth(double);
		
		double setHeight();
		double setWidth();
		double setDepth();
		
		double Volume();
};
