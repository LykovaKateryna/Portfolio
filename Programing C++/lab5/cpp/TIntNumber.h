#pragma once
#include "func.h"
#include <vector>
using namespace std;
class TIntNumber
{
public:
	TIntNumber(vector<char>);
	TIntNumber();
	virtual int convert_to_dec() = 0;
	virtual TIntNumber& operator++() = 0;
	virtual TIntNumber& operator--() = 0;
	vector<char> get_num();
	void print_num();
protected:
	vector<char> num;
};