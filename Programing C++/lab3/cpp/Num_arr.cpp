#include "func.h"
Num_arr::Num_arr(int e)
{
	num_el = e;
	arr = new double[num_el];
	for (int i = 0; i < num_el; i++)
	{
		arr[i] = rand() % 199 - 99;
	}
}
Num_arr::Num_arr()
{
	num_el = 0;
	arr = new double[num_el];
}
void Num_arr::print_arr()
{
	for (int i = 0; i < num_el; i++)
	{
		cout << arr[i] << "; ";
	}
	cout << endl;
}
void Num_arr::set_num_el(int e)
{
	num_el = e;
}
int Num_arr::get_num_el()
{
	return num_el;
}
void Num_arr::set_arr()
{
	arr = new double[num_el];
	for (int i = 0; i < num_el; i++)
	{
		arr[i] = rand() % 199 - 99;
	}
}
double* Num_arr::get_arr()
{
	return arr;
}
double Num_arr::find_max_el()
{
	double max = arr[0];
	for (int i = 1; i < num_el; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
void Num_arr::delete_arr()
{
	delete[] arr;
}