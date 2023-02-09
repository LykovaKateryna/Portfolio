#include "pch.h"
#include "trigonometric_equations.h"
Trig_eq::Trig_eq(vector<vector<double>> table, double x, double y, double e, int num) :Base_eq(table, x, y, e, num) {};
string Trig_eq::solution_Yacobi()
{
	return Base_eq::solution_Yacobi();
}
string Trig_eq::solution_Gaus_Zeydel()
{
	return Base_eq::solution_Gaus_Zeydel();
}
string Trig_eq::find_x(double y)
{
	string res = "";
	if (param[1][0] == 0)
	{
		res = "Немає розв'язків";
	}
	else
	{
		res = to_string((-cos(y + param[1][1]) - param[1][2]) / param[1][0]);
	}
	return res;
}
string Trig_eq::find_y(double x)
{
	string res = "";
	if (param[0][1] == 0)
	{
		res = "Немає розв'язків";
	}
	else
	{
		res = to_string((-sin(x + param[0][0]) - param[0][2]) / param[0][1]);
	}
	return res;
}
string Trig_eq::it_print(double x, double y, int num)
{
	string res = "";
	res += "Ітерація " + to_string(num) + ": x = " + to_string(x) + "\n";
	res += "y = " + to_string(y) + "\n";
	return res;
}
string Trig_eq::res_print(double x, double y)
{
	string res = "";
	res += "Результат: x = " + to_string(x) + "\n";
	res += "y = " + to_string(y) + "\n";
	return res;
}