#pragma once
#include <iostream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Pair
{
public:
	double x, y;

	void setX(double value);
	void setY(double value);

	double getX() const { return x; }
	double getY() const { return y; }

	Pair();
	Pair(double, double);
	Pair(const Pair&);

	double Product();

	operator string () const;
	friend bool operator << (ostream&, Pair&);
	friend bool operator >> (istream&, const Pair&);
};

