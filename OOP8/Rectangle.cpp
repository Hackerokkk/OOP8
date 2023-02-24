#include "Rectangle.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Rectangle::Rectangle()
{
	x = 0;
	y = 0;

}
Rectangle::Rectangle(double x, double y)
{
	this->x = x;
	this->y = y;
	setX(x);
	setY(y);
}
Rectangle::Rectangle(const Rectangle& r)
{
	this->x = r.x;
	this->y = r.y;
	setX(x);
	setY(y);
}

double Rectangle::Area() {
	s = getX() * getY();
	return s;
}
double Rectangle::Perimeter() {
	p = 2 * getX() + 2 * getY();
	return p;
}

Rectangle::operator string () const
{
	stringstream ss;
	ss << "X= " << getX() << endl
		<< "Y= " << getY() << endl
		<< "P= " << p << endl
		<< "S= " << s << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Rectangle& r)
{
	return out << string(r);
}
istream& operator >> (istream& in, Rectangle& r)
{
	double x, y;
	cout << "x= "; in >> x;
	cout << "y= "; in >> y;
	r.setX(x);
	r.setY(y);
	return in;
}