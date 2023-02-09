#include "func.h"
int main()
{
	srand(time(NULL));
	cout << "Triangle 1 is created automaticaly" << endl << endl;
	Triangle trian1;
	cout << "Triangle 2:" << endl;
	double side1 = set_side(1);
	Triangle trian2(side1);
	cout << endl << "Triangle 3:" << endl;
	side1 = set_side(1);
	double side2 = set_side(2);
	double side3 = set_side(3);
	Triangle trian3(side1, side2, side3);
	cout << endl << "Triangle 1:" << endl;
	trian1.print_sides();
	cout << "Triangle 2:" << endl;
	trian2.print_sides();
	cout << "Triangle 3:" << endl;
	trian3.print_sides();
	++trian1;
	cout << "Triangle 1 after incrimination of sides:" << endl;
	trian1.print_sides();
	--trian2;
	cout << "Triangle 2 after decrementation of sides:" << endl;
	trian2.print_sides();
	double num;
	cout << "Enter the number by which you want to raise the sides of the triangle 3: ";
	num = set_num(trian3.get_side1(), trian3.get_side2(), trian3.get_side3());
	trian3 += num;
	cout << "Triangle 3 after adding a number to sides:" << endl;
	trian3.print_sides();
	Triangle trian_big = find_biggest_area(trian1, trian2, trian3);
	cout << endl << "Triangle with biggest area:" << endl;
	trian_big.print_sides();
	return 0;
}