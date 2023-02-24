#include "Pair.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Pair::Pair() : x(0), y(0)
{}
Pair::Pair(double x, double y)
	: x(x), y(y)
{}
Pair::Pair(const Pair& p)
{
	x = p.x;
	y = p.y;
}

void Pair::setX(double value)
{
		x = value;
}
void Pair::setY(double value)
{
		y = value;
}

double Pair::Product() {
	double z = x * y;
	return z;
}

Pair::operator string () const
{
	stringstream ss;
	ss << "X=" << getX() << endl
		<< "Y=" << getY() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Pair& p)
{
	return out << string(p);
}

istream& operator >> (istream& in, Pair& p)
{
	string brand, color;
	double x, y;
	cout << "X="; in >> x;
	cout << "Y="; in >> y;
	p.setX(x);
	p.setY(y);
	return in;
}