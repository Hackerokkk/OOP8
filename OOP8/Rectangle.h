#pragma once
#include <sstream>
#include "Pair.h"
#include <iostream>
#include <string>
using namespace std;
class Rectangle:public Pair
{
	double p=0, s=0;
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(const Rectangle&);

	double Area();
	double Perimeter();
	operator string () const;
	friend bool operator << (ostream&, Rectangle&);
	friend bool operator >> (istream&, const Rectangle&);
};

