#pragma once
#include "Num_arr.h"
#include <iostream>
#include <time.h>
#include <string>
using namespace std;
Num_arr* create_arr_of_arr(int);
void print_arr_of_arr(int, Num_arr*);
void delete_arr_of_arr(int, Num_arr*);
Num_arr find_arr_with_min_max(int, Num_arr*, int&);
int set_num();