#include "pch.h"
#include "base_equations.h"
Base_eq::Base_eq(vector<vector<double>>table, double x, double y, double e, int num)
{
	param.resize(2, vector<double>(3));
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			param[i][j] = table[i][j];
		}
	}
	x0 = x;
	y0 = y;
	eps = e;
	max = num;
}
string Base_eq::solution_Yacobi()
{
	double new_x = x0;
	double new_y = y0;
	double old_x;
	double old_y;
	double dif_x = eps + 1;
	double dif_y = eps + 1;
	int num = 0;
	string res = "";
	while (dif_x > eps || dif_y > eps)
	{
		num++;
		if (num > max)
		{
			res = "Кількість ітерацій перевищила максимальну. Немає розв'язків";
			return res;
		}
		old_x = new_x;
		old_y = new_y;
		res += it_print(new_x, old_x, 0);
		if (find_x(old_y) == "Немає розв'язків")
		{
			res = find_x(old_y);
			return res;
		}
		new_x = stod(find_x(old_y));
		if (find_y(old_x) == "Немає розв'язків")
		{
			res = find_y(old_x);
			return res;
		}
		new_y = stod(find_y(old_x));
		dif_x = abs(new_x - old_x);
		dif_y = abs(new_y - old_y);
		res += it_print(new_x, new_y, num);
	}
	res += res_print(new_x, new_y);
	return res;
}
string Base_eq::solution_Gaus_Zeydel()
{
	double new_x = x0;
	double new_y = y0;
	double old_x;
	double old_y;
	double dif_x = 1;
	double dif_y = 1;
	int num = 0;
	string res = "";
	while (dif_x > eps || dif_y > eps)
	{
		num++;
		if (num > max)
		{
			res = "Кількість ітерацій перевищила максимальну. Немає розв'язків";
			return res;
		}
		old_x = new_x;
		old_y = new_y;
		if (find_x(old_y) == "Немає розв'язків")
		{
			res = find_x(old_y);
			return res;
		}
		new_x = stod(find_x(old_y));
		if (find_y(new_x) == "Немає розв'язків")
		{
			res = find_y(new_x);
			return res;
		}
		new_y = stod(find_y(new_x));
		dif_x = abs(new_x - old_x);
		dif_y = abs(new_y - old_y);
		res += it_print(new_x, new_y, num);
	}
	res += res_print(new_x, new_y);
	return res;
}