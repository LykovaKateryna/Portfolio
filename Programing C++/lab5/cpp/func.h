#pragma once
#include "TIntNumber.h"
#include "TIntNumber16.h"
#include "TIntNumber2.h"
#include <string>
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
vector<TIntNumber2> create_array_of_2(vector<TIntNumber2>);
vector<TIntNumber16> create_array_of_16(vector<TIntNumber16>);
void print_array(vector<TIntNumber2>);
void print_array(vector<TIntNumber16>);
void print_array(vector<int>);
int set_num();
vector<TIntNumber2> increment_array(vector<TIntNumber2>);
vector<TIntNumber16> decrement_array(vector<TIntNumber16>);
vector<int> convert_arrays_to_dec(vector<TIntNumber2>, vector<TIntNumber16>, vector<int>);
int find_max(vector<int>);