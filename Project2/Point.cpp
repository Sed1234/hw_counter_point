#include "Point.h"

void Point::SetX(int x)
{
	this->x = x;
}

int Point::GetX()
{
	return x;
}

void Point::SetY(int y)
{
	this->y = y;
}

int Point::GetY()
{
	return y;
}

void Point::SetZ(int z)
{
	this->z = z;
}

int Point::GetZ()
{
	return z;
}


Point::Point()
{
	std::cout << "Point is created ()" << std::endl;
	counter++;
}
Point::Point (int x) {
	this->x = x;
	std::cout << "Point is created1" << std::endl;
	counter++;
}
Point::Point(int x, int y) : Point(x)
{
	this->y = y;
}
Point::Point(int x, int y, int z) : Point(x, y)
{
	this->z = z;
}

Point::~Point()
{
}

Point::operator int()
{
	return int(x + y + z);
}

std::ostream & operator <<(std::ostream & os, const Point & mp)
{
	os << mp.x << ' ' << mp.y << ' ' << mp.z;
	return os;
}

std::istream & operator >> (std::istream & is, Point & mp)
{
	is >> mp.x >> mp.y >> mp.z;
	return is;
}
int Point::getCnt() {
	return Point::counter;
}

int Point::counter= 0;
