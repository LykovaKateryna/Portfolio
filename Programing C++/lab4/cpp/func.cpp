#include "func.h"
double set_side(int num)
{
	cout << "Input side " << num << ": ";
	string side;
	getline(cin, side);
	int i = 0;
	while (i < size(side) || size(side) == 0)
	{
		if ((!isdigit(side[i]) && side[i] != '.') || side[0] == '0')
		{
			cout << "Length of side is incorrect. Please enter correct length: ";
			getline(cin, side);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	if (stod(side) < 1.1 || stod(side) >= 100)
	{
		cout << "Side length is incorrect. Enter length in the interval (1.1 <= length < 100): " << endl;
		side = to_string(set_side(num));
	}
	return stod(side);
}
double set_num(double side1, double side2, double side3)
{
	string num;
	getline(cin, num);
	int i = 0;
	while (i < size(num) || size(num) == 0)
	{
		if ((!isdigit(num[i]) && num[i] != '.') || num[0] == '0')
		{
			cout << "Number is incorrect. Please enter correct number: ";
			getline(cin, num);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return stod(num);
}
Triangle find_biggest_area(Triangle trian1, Triangle trian2, Triangle trian3)
{
	double s1 = trian1.area();
	double s2 = trian2.area();
	double s3 = trian3.area();
	cout << "Area of triangle 1: " << s1 << endl;
	cout << "Area of triangle 2: " << s2 << endl;
	cout << "Area of triangle 3: " << s3 << endl;
	double max = s1;
	if (s1 == s2 && s2 == s3)
	{
		cout << "Triangles 1, 2 and 3 have the same area: " << max << endl;
		return trian1;
	}
	else if (s1 == s2)
	{
		if (max < s3)
		{
			max = s3;
			cout << "Triangle 3 has biggest area: " << max << endl;
			return trian3;
		}
		cout << "Triangles 1 and 2 have biggest area: " << max << endl;
		return trian1;
	}
	else if (s1 == s3)
	{
		if (max < s2)
		{
			max = s2;
			cout << "Triangle 2 has biggest area: " << max << endl;
			return trian2;
		}
		cout << "Triangles 1 and 3 have biggest area: " << max << endl;
		return trian1;
	}
	else if (s2 == s3)
	{
		if (max < s2)
		{
			max = s2;
			cout << "Triangles 2 and 3 have biggest area: " << max << endl;
			return trian2;
		}
		cout << "Triangle 1 has biggest area: " << max << endl;
		return trian1;
	}
	else
	{
		if (max < s2)
		{
			max = s2;
			if (max < s3)
			{
				max = s3;
				cout << "Triangle 3 has biggest area: " << max << endl;
				return trian3;
			}
			cout << "Triangle 2 has biggest area: " << max << endl;
			return trian2;
		}
		else if (max < s3)
		{
			max = s3;
			cout << "Triangle 3 has biggest area: " << max << endl;
			return trian3;
		}
		cout << "Triangle 1 has biggest area: " << max << endl;
		return trian1;
	}
}