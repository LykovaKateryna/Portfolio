#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
struct Time
{
	int hours;
	int minutes;
};
struct TvShow
{
	char title[30];
	Time start;
	Time end;
};
int set_num_show();
string set_title();
Time set_show_time_start();
Time set_show_time_end(Time);
TvShow set_show();
vector<TvShow> set_shows(int);
void print_show(TvShow show, int num);
void print_time(Time time);
void print_shows(vector<TvShow> shows);
int choose_mode();
void create_file(string file_name, vector <TvShow> shows, int mode);
Time show_duration(Time start, Time end);
void print_show_duration(vector<TvShow> shows);
bool is_day_show(TvShow show); 
vector<TvShow> set_day_shows(vector<TvShow> shows);
vector<TvShow> read_file(string file_name);
void print_file(string file_name);