#include "func.h"
TIntNumber16::TIntNumber16(vector<char> p) :TIntNumber(p) {};
TIntNumber16::TIntNumber16() :TIntNumber() {};
int TIntNumber16::convert_to_dec()
{
    int dec = 0;
    int base = 1;
    if (num[0] != '-')
    {
        for (int i = num.size() - 1; i >= 0; i--)
        {
            if (isdigit(num[i]))
            {
                dec += (num.at(i) - '0') * base;
            }
            else
            {
                dec += (num.at(i) - '0' - 7) * base;
            }
            base *= 16;
        }
    }
    else
    {
        for (int i = num.size() - 1; i >= 1; i--)
        {
            if (isdigit(num[i]))
            {
                dec += -(num.at(i) - '0') * base;
            }
            else
            {
                dec += -(num.at(i) - '0' - 7) * base;
            }
            base *= 16;
        }
    }
    return dec;
}
TIntNumber& TIntNumber16::operator++()
{
    int i = num.size() - 1;
    if (num[0] != '-')
    {
        while (i >= 0)
        {
            if (num[i] == 'F')
            {
                num[i] = '0';
                i--;
            }
            else if (num[i] == '9')
            {
                num[i] == 'A';
                break;
            }
            else
            {
                num[i] += 1;
                break;
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
            if (num[i] == '0')
            {
                num[i] = 'F';
                i--;
            }
            else if (num[i] == 'A')
            {
                num[i] = '9';
                break;
            }
            else
            {
                num[i] -= 1;
                break;
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
TIntNumber& TIntNumber16::operator--()
{
    int i = num.size() - 1;
    if (num[0] != '-')
    {
        while (i >= 0)
        {
            if (num[i] == '0')
            {
                num[i] = 'F';
                i--;
            }
            else if (num[i] == 'A')
            {
                num[i] = '9';
                break;
            }
            else
            {
                num[i] -= 1;
                break;
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
            if (num[i] == 'F')
            {
                num[i] = '0';
                i--;
            }
            else if (num[i] == '9')
            {
                num[i] == 'A';
                break;
            }
            else
            {
                num[i] += 1;
                break;
            }
        }
        if (i == 0)
        {
            num.insert(num.begin()+1, '1');
        }
    }
    return *this;
}
vector<char> TIntNumber16::get_num()
{
    return TIntNumber::get_num();
}
void TIntNumber16::print_num()
{
    return TIntNumber::print_num();
}