#pragma once
#include "base_equations.h"
/// <summary>
/// Клас для заданої системи нелінійних тригонометричних рівнянь.
/// </summary>
class Trig_eq: private Base_eq
{
public:
	Trig_eq(vector<vector<double>>, double, double, double, int);
	string find_x(double);
	string find_y(double);
	string solution_Yacobi();
	string solution_Gaus_Zeydel();
	string it_print(double, double, int);
	string res_print(double, double);
};