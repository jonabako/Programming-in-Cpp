#include <iostream>
class worker{
	private:
		int reg_nr;
		std::string name;
	public:
		worker();
		worker(int, std::string);
		~worker();
		
		friend std::ostream& operator<<(std::ostream&, const worker&);
		friend std::istream& operator>>(std::istream&, worker&);
};
