#include "func.h"
Num_arr* create_arr_of_arr(int num_arr)
{
	Num_arr* arr_of_arr = new Num_arr[num_arr];
	int num_e;
	for (int i = 0; i < num_arr; i++)
	{
		cout << "enter size of array " << i + 1 << ": ";
		num_e = set_num();
		Num_arr obj(num_e);
		arr_of_arr[i] = obj;
	}
	return arr_of_arr;
}
void print_arr_of_arr(int num_arr, Num_arr* arr_of_arr)
{
	cout << "arrays: " << endl;
	for (int i = 0; i < num_arr; i++)
	{
		cout << "array " << i + 1 << ": ";
		arr_of_arr[i].print_arr();
	}
	cout << endl;
}
void delete_arr_of_arr(int num_arr, Num_arr* arr_of_arr)
{
	for (int i = 0; i < num_arr; i++)
	{
		arr_of_arr[i].delete_arr();
	}
	delete[] arr_of_arr;
}
Num_arr find_arr_with_min_max(int num_arr, Num_arr* arr_of_arr, int& num_min_arr)
{
	double min = arr_of_arr[0].find_max_el();
	double m;
	num_min_arr = 0;
	for (int i = 1; i < num_arr; i++)
	{
		m = arr_of_arr[i].find_max_el();
		if (min > m)
		{
			min = m;
			num_min_arr = i;
		}
	}
	return arr_of_arr[num_min_arr];
}
int set_num()
{
	string num;
	getline(cin, num);
	int i = 0;
	while (i < size(num) || size(num) == 0)
	{
		if (!isdigit(num[i]) || num[0] == '0')
		{
			cout << "your answer is incorrect. Please enter the correct answer: ";
			getline(cin, num);
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return stoi(num);
}