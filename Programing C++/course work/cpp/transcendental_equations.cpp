#include "pch.h"
#include "transcendental_equations.h"
Tran_eq::Tran_eq(vector<vector<double>> table, double x, double y, double e, int num) :Base_eq(table, x, y, e, num) {};
string Tran_eq::solution_Yacobi()
{
	return Base_eq::solution_Yacobi();
}
string Tran_eq::solution_Gaus_Zeydel()
{
	return Base_eq::solution_Gaus_Zeydel();
}
string Tran_eq::find_x(double y)
{
	string res = "";
	if ((-exp(param[0][1] * y) - param[0][2]) <= 0 || param[0][0] == 0)
	{
		res = "Немає розв'язків";
	}
	else
	{
		res = to_string(log(-exp(param[0][1] * y) - param[0][2]) / param[0][0]);
	}
	return res;
}
string Tran_eq::find_y(double x)
{
	string res = "";
	if ((-exp(param[1][0] * x) - param[1][2]) <= 0 || param[1][1] == 0)
	{
		res = "Немає розв'язків";
	}
	else
	{
		res = to_string(log(-exp(param[1][0] * x) - param[1][2]) / param[1][1]);
	}
	return res;
}
string Tran_eq::it_print(double x, double y, int num)
{
	string res = "";
	res += "Ітерація " + to_string(num) + ": x = " + to_string(x) + "\n";
	res += "y = " + to_string(y) + "\n";
	return res;
}
string Tran_eq::res_print(double x, double y)
{
	string res = "";
	res += "Результат: x = " + to_string(x) + "\n";
	res += "y = " + to_string(y) + "\n";
	return res;
}