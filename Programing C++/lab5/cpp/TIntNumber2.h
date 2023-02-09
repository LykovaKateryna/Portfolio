#pragma once
#include "func.h"
class TIntNumber2 : private TIntNumber
{
public:
	TIntNumber2(vector<char>);
	TIntNumber2();
	int convert_to_dec();
	TIntNumber& operator++();
	TIntNumber& operator--();
	vector<char> get_num();
	void print_num();
};