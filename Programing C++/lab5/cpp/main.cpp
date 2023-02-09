#include "func.h"
int main()
{
	srand(time(NULL));
	int size2, size16;
	cout << "Enter number of binary numbers: ";
	size2 = set_num();
	cout << "Enter number of hexadecimal numbers: ";
	size16 = set_num();
	vector<TIntNumber2> vec2(size2);
	vec2 = create_array_of_2(vec2);
	vector<TIntNumber16> vec16(size16);
	vec16 = create_array_of_16(vec16);
	cout << "Array of binary numbers: ";
	print_array(vec2);
	cout << "Array of hexadecimal numbers: ";
	print_array(vec16);
	vec2 = increment_array(vec2);
	vec16 = decrement_array(vec16);
	cout << "Array of binary numbers after incrementation: ";
	print_array(vec2);
	cout << "Array of hexadecimal numbers after decrementing: ";
	print_array(vec16);
	vector<int> vec10(size2 + size16);
	vec10 = convert_arrays_to_dec(vec2, vec16, vec10);
	cout << "Array of decimal numbers: ";
	print_array(vec10);
	cout << "Max element of array of decimal numbers: " << find_max(vec10);
}