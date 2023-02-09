#include "func.h"
vector<TIntNumber2> create_array_of_2(vector<TIntNumber2> vec)
{
	vector<char> el(20);
	for (int i = 0; i < vec.size(); i++)
	{
		if (rand() % 2)
		{
			el[0] = '-';
		}
		else
		{
			el[0] = 48 + rand() % 2;
		}
		for (int j = 1; j < 20; j++)
		{
			el[j] = 48 + rand() % 2;
		}
		TIntNumber2 p(el);
		vec[i] = p;
	}
	return vec;
}
vector<TIntNumber16> create_array_of_16(vector<TIntNumber16> vec)
{
	vector<char> el(5);
	for (int i = 0; i < vec.size(); i++)
	{
		if (rand() % 2)
		{
			el[0] = '-';
		}
		else
		{
			if (rand() % 2)
			{
				el[0] = 48 + rand() % 10;
			}
			else
			{
				el[0] = 65 + rand() % 6;
			}
		}
		for (int j = 1; j < 5; j++)
		{
			if (rand() % 2)
			{
				el[j] = 48 + rand() % 10;
			}
			else
			{
				el[j] = 65 + rand() % 6;
			}
		}
		TIntNumber16 p(el);
		vec[i] = p;
	}
	return vec;
}
void print_array(vector<TIntNumber2> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i].print_num();
		cout << "; ";
	}
	cout << endl;
}
void print_array(vector<TIntNumber16> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i].print_num();
		cout << "; ";
	}
	cout << endl;
}
void print_array(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "; ";
	}
	cout << endl;
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
			cout << "Number is incorrect. Please enter whole positive number: ";
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
vector<TIntNumber2> increment_array(vector<TIntNumber2> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		++vec[i];
	}
	return vec;
}
vector<TIntNumber16> decrement_array(vector<TIntNumber16> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		--vec[i];
	}
	return vec;
}
vector<int> convert_arrays_to_dec(vector<TIntNumber2> vec2, vector<TIntNumber16> vec16, vector<int> vec10)
{
	int j = 0;
	for (int i = 0; i < vec2.size(); i++)
	{
		vec10[j] = vec2[i].convert_to_dec();
		j++;
	}
	for (int i = 0; i < vec16.size(); i++)
	{
		vec10[j] = vec16[i].convert_to_dec();
		j++;
	}
	return vec10;
}
int find_max(vector<int> vec)
{
	int max = vec[0];
	for (int i = 0; i < vec.size(); i++)
	{
		if (max < vec[i])
		{
			max = vec[i];
		}
	}
	return max;
}