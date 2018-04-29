#pragma once
#pragma once
#include <ostream>
#include <istream>
#include <iostream>
class Point
{
	int x, y, z;
public:
	static int counter;
	void SetX(int);
	int GetX();
	void SetY(int);
	int GetY();
	void SetZ(int);
	int GetZ();
	Point(int, int, int);
	Point();
	Point(int);
	Point(int,int);
	int getCnt();
	~Point();
	friend std::ostream & operator <<(std::ostream &, const Point &);
	friend std::istream & operator >> (std::istream &, Point &);
	explicit operator int();
};

