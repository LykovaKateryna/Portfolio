#include "func.h"
int set_num_show()
{
	string num;
	cout << "Enter number of TV shows: ";
	getline(cin, num);
	int i = 0;
	while (i < size(num) || size(num) == 0)
	{
		if (!isdigit(num[i]) || num[0] == '0')
		{
			cout << "Your answer is incorrect. Please enter the correct answer: ";
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
string set_title()
{
	string text;
	cout << "Enter the title of the show: ";
	getline(cin, text);
	while (size(text) > 30)
	{
		cout << "The title is too long. Please enter title not more than 30 characters long: ";
		getline(cin, text);
	}
	return text;
}
Time set_show_time_start()
{
	Time num;
	num.hours = rand() % 24;
	num.minutes = rand() % 60;
	return num;
}
Time set_show_time_end(Time start)
{
	Time num;
	num.hours = start.hours + rand() % 9;
	num.minutes = start.minutes + rand() % 60;
	if (num.minutes >= 60)
	{
		num.minutes -= 60;
		num.hours++;
	}
	if (num.hours >= 24)
	{
		num.hours -= 24;
	}
	return num;
}
TvShow set_show()
{
	TvShow new_show;
	strcpy_s(new_show.title, set_title().c_str());
	new_show.start = set_show_time_start();
	new_show.end = set_show_time_end(new_show.start);
	return new_show;
}
vector<TvShow> set_shows(int num)
{
	vector<TvShow> shows;
	for (int i = 0; i < num; i++)
	{
		shows.push_back(set_show());
	}
	return shows;
}
void print_show(TvShow show, int num)
{
	cout << "Title of the show " << num << ": " << show.title << endl;
	cout << "Time of the start of the show " << num << ": ";
	print_time(show.start);
	cout << "Time of the end of the show " << num << ": ";
	print_time(show.end);
}
void print_time(Time time)
{
	cout << time.hours << ":" << time.minutes << endl;
}
void print_shows(vector<TvShow> shows)
{
	for (int i = 0; i < shows.size(); i++)
	{
		print_show(shows[i], i + 1);
	}
}
int choose_mode()
{
	string str;
	cout << "Choose writing mode: 1 - for overwriting the file, 2 - for adding to the file: ";
	cin >> str;
	while (str != "1" && str != "2")
	{
		cout << "You entered a wrong answer. Please enter '1' or '2': ";
		cin >> str;
	}
	return stoi(str);
}
enum File_mode {
	OVERWRITING = 1,
	ADDING = 2
};
void create_file(string file_name, vector <TvShow> shows, int mode) 
{
	ofstream file;
	if (File_mode::OVERWRITING == mode) {
		file.open(file_name, ios::binary);
	}
	else {
		file.open(file_name, ios::binary | ios::app);
	}

	for (TvShow show : shows) {
		file.write((char*)(&show), sizeof(TvShow));
	}
	file.close();
}
Time show_duration(Time start, Time end)
{
	Time dur;
	if (end.hours == start.hours)
	{
		dur.hours = 0;
		dur.minutes = end.minutes - start.minutes;
	}
	else 
	{
		dur.hours = end.hours - start.hours - 1;
		if (dur.hours < 0)
		{
			dur.hours = 24 - start.hours - 1 + end.hours;
		}
		dur.minutes = 60 - start.minutes + end.minutes;
		if (dur.minutes >= 60)
		{
			dur.minutes -= 60;
			dur.hours += 1;
		}
	}
	return dur;
}
void print_show_duration(vector<TvShow> shows)
{
	for (int i = 0; i < shows.size(); i++)
	{
		cout << "The duration of show " << i + 1 << " is: ";
		print_time(show_duration(shows[i].start, shows[i].end));
	}
}
bool is_day_show(TvShow show)
{
	bool res = false;
	if (show.start.hours >= 9 && show.start.hours <= 18 && show.end.hours <= 18 && show.end.hours >= 9)
	{
		if (show.end.hours == 18)
		{
			if (show.end.minutes == 0)
			{
				res = true;
			}
		}
		else
		{
			res = true;
		}
	}
	return res;
}
vector<TvShow> read_file(string file_name)
{
	vector<TvShow> shows;
	TvShow show;
	ifstream file(file_name, ios::binary);
	while (file.read((char*)(&show), sizeof(TvShow)))
	{
		shows.push_back(show);
	}
	file.close();
	return shows;
}
vector<TvShow> set_day_shows(vector<TvShow> shows)
{
	vector<TvShow> new_shows;
	for (TvShow show : shows)
	{
		if (is_day_show(show))
		{
			new_shows.push_back(show);
		}
	}
	return new_shows;
}
void print_file(string file_name)
{
	TvShow show;
	ifstream file(file_name, ios::binary);
	int i = 0;
	while (file.read((char*)(&show), sizeof(TvShow)))
	{
		print_show(show, i + 1);
		i++;
	}
	file.close();
}