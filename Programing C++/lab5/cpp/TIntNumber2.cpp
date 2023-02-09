#include "func.h"
TIntNumber2::TIntNumber2(vector<char> p) :TIntNumber(p) {};
TIntNumber2::TIntNumber2() :TIntNumber() {};
int TIntNumber2::convert_to_dec()
{
    int dec = 0;
    int base = 1;
    if (num[0] != '-')
    {
        for (int i = num.size() - 1; i >= 0; i--)
        {
            dec += (num.at(i) - '0') * base;
            base *= 2;
        }
    }
    else
    {
        for (int i = num.size() - 1; i >= 1; i--)
        {
            dec += -((num.at(i) - '0') * base);
            base *= 2;
        }
    }
    return dec;
}
TIntNumber& TIntNumber2::operator++()
{
    int i = num.size() - 1;
    if (num[0] != '-')
    {
        while (i >= 0)
        {
            if (num[i] == '0')
            {
                num[i] = '1';
                break;
            }
            else
            {
                num[i] = '0';
                i--;
            }
        }
        if (i == -1)
        {
            num.insert(num.begin(), '1');
        }
    }
    else
    {
        while (i >= 1)
        {
            if (num[i] == '1')
            {
                num[i] = '0';
                break;
            }
            else
            {
                num[i] = '1';
                i--;
            }
        }
        if (i == 0)
        {
            num.clear();
            num.push_back('1');
        }
    }
    return *this;
}
TIntNumber& TIntNumber2::operator--()
{
    int i = num.size() - 1;;
    if (num[0] != '-')
    {
        while (i >= 0)
        {
            if (num[i] == '1')
            {
                num[i] = '0';
                break;
            }
            else
            {
                num[i] = '1';
                i--;
            }
        }
        if (i == -1)
        {
            num.clear();
            num.push_back('-');
            num.push_back('1');
        }
    }
    else
    {
        while (i >= 1)
        {
            if (num[i] == '0')
            {
                num[i] = '1';
                break;
            }
            else
            {
                num[i] = '0';
                i--;
            }
        }
        if (i == 0)
        {
            num.insert(num.begin() + 1, '1');
        }
    }
    return *this;
}
vector<char> TIntNumber2::get_num()
{
    return TIntNumber::get_num();
}
void TIntNumber2::print_num()
{
    return TIntNumber::print_num();
}