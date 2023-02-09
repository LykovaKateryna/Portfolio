#include "func.h"
TIntNumber::TIntNumber(vector<char> p)
{
	num.resize(p.size());
	for (int i = 0; i < p.size(); i++)
	{
		num[i] = p[i];
	}
}
TIntNumber::TIntNumber()
{
	num.resize(20);
	for (int i = 0; i < 20; i++)
	{
		num[i] = 0;
	}
}
vector<char> TIntNumber::get_num()
{
	return num;
}
void TIntNumber::print_num()
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i];
	}
}