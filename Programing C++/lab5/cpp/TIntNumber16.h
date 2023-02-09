#pragma once
#include "func.h"
class TIntNumber16 : private TIntNumber
{
public:
	TIntNumber16(vector<char>);
	TIntNumber16();
	int convert_to_dec();
	TIntNumber& operator++();
	TIntNumber& operator--();
	vector<char> get_num();
	void print_num();
};