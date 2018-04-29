#include "Point.h"

void sample() {
	Point p1(1,3,5);
	Point p2(5);
	//Point p3();
	std::cout<<p1.getCnt()<<std::endl;
	std::cout << p1.GetX() << " " << p1.GetY() << " " << p1.GetZ() <<std::endl;
}

int main()
{
	sample();
	Point p(1,4,5);
	int sum = (int)p;
	std::cout << p.getCnt() << std::endl;
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}

