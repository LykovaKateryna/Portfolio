#pragma once
class Triangle
{
public:
	Triangle();
	Triangle(double);
	Triangle(double, double, double);
	void print_sides();
	double get_side1();
	double get_side2();
	double get_side3();
	double area();
	Triangle& operator++();
	Triangle& operator--();
	Triangle& operator+=(double);
	Triangle& operator-=(double);
private:
	double side1;
	double side2;
	double side3;
};