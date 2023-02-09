#include "func.h"
Triangle::Triangle()
{
	side1 = 1 + 0.1* (rand() % 980);
	side2 = 1 + 0.1 * (rand() % 980);
	side3 = 1 + 0.1 * (rand() % 980);
	while ((side2 >= (side1 + side3)) || (side1 >= (side2 + side3)) || (side3 >= (side1 + side2)))
	{
		side3 = 1 + 0.1 * (rand() % 980);
	}
}
void Triangle::print_sides()
{
	cout << "Side 1: " << side1 << endl;
	cout << "Side 2: " << side2 << endl;
	cout << "Side 3: " << side3 << endl << endl;
}
Triangle::Triangle(double side11)
{
	side1 = side11;
	side2 = 1 + 0.1 * (rand() % 980);
	side3 = 1 + 0.1 * (rand() % 980);
	while ((side2 >= (side1 + side3)) || (side1 >= (side2 + side3)) || (side3 >= (side1 + side2)))
	{
		side3 = 1 + 0.1 * (rand() % 980);
	}
}
Triangle::Triangle(double side11, double side22, double side33)
{
	side1 = side11;
	side2 = side22;
	side3 = side33;
	while ((side2 >= (side1 + side3)) || (side1 >= (side2 + side3)) || (side3 >= (side1 + side2)))
	{
		cout << "Length of side 3 is incorrect. ";
		side3 = set_side(3);
	}
}
double Triangle::get_side1()
{
	return side1;
}
double Triangle::get_side2()
{
	return side2;
}
double Triangle::get_side3()
{
	return side3;
}
double Triangle::area()
{
	double area;
	if ((side2 >= (side1 + side3)) || (side1 >= (side2 + side3)) || (side3 >= (side1 + side2)))
	{
		return 0;
	}
	else
	{
		double half_perimeter = (side1 + side2 + side3) / 2;
		area = pow(half_perimeter * (half_perimeter - side1) * (half_perimeter - side2) * (half_perimeter - side3), 0.5);
		return area;
	}
}
Triangle& Triangle::operator++()
{
	++side1;
	++side2;
	++side3;
	return *this;
}
Triangle& Triangle::operator--()
{
	--side1;
	--side2;
	--side3;
	return *this;
}
Triangle& Triangle::operator+=(double num)
{
	side1 += num;
	side2 += num;
	side3 += num;
	return *this;
}
Triangle& Triangle::operator-=(double num)
{
	side1 -= num;
	side2 -= num;
	side3 -= num;
	return *this;
}