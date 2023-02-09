#pragma once
class Num_arr
{
public:
	Num_arr();
	Num_arr(int);
	void print_arr();
	void set_num_el(int);
	int get_num_el();
	void set_arr();
	double* get_arr();
	double find_max_el();
	void delete_arr();
private:
	int num_el;
	double* arr;
};