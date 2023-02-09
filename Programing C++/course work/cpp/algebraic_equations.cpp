#include "pch.h"
#include "algebraic_equations.h"
Alg_eq::Alg_eq(vector<vector<double>> table, double x, double y, double e, int num) :Base_eq(table, x, y, e, num) {};
string Alg_eq::solution_Yacobi()
{
	return Base_eq::solution_Yacobi();
}
string Alg_eq::solution_Gaus_Zeydel()
{
	return Base_eq::solution_Gaus_Zeydel();
}
string Alg_eq::find_x(double y)
{
	string res = "";
	if (((-param[0][1] * pow(y, 2) - param[0][2]) / param[0][0]) < 0 || param[0][0] == 0)
	{
		res = "Немає розв'язків";
	}
	else
	{
		res = to_string(pow(((-param[0][1] * pow(y, 2) - param[0][2]) / param[0][0]), 0.5));
	}
	return res;
}
string Alg_eq::find_y(double x)
{
	string res = "";
	if (((-param[1][0] * pow(x, 2) - param[1][2]) / param[1][1]) < 0 || param[1][1] == 0)
	{
		res = "Немає розв'язків";
	}
	else
	{
		res = to_string(pow(((-param[1][0] * pow(x, 2) - param[1][2]) / param[1][1]), 0.5));
	}
	return res;
}
string Alg_eq::it_print(double x, double y, int num)
{
	string res = "";
	res += "Ітерація " + to_string(num) + ": x = " + to_string(x) + " або -" + to_string(x) + "\n";
	res += "y = " + to_string(y) + " або -" + to_string(y) + "\n";
	return res;
}
string Alg_eq::res_print(double x, double y)
{
	string res = "";
	res += "Результат: x = " + to_string(x) + " або -" + to_string(x) + "\n";
	res += "y = " + to_string(y) + " або -" + to_string(y) + "\n";
	return res;
}
