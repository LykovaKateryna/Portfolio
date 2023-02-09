#include "func.h"
int main()
{
	srand(time(NULL));
	cout << "enter number of arrays: ";
	int num_arr = set_num();
	Num_arr* arr_of_arr = create_arr_of_arr(num_arr);
	print_arr_of_arr(num_arr, arr_of_arr);
	int num_min;
	Num_arr min_arr = find_arr_with_min_max(num_arr, arr_of_arr, num_min);
	cout << "array with minimum maximum element: " << endl << "array " << num_min + 1 << ": ";
	min_arr.print_arr();
	delete_arr_of_arr(num_arr, arr_of_arr);
	return 0;
}