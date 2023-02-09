#include "func.h"
int main()
{
	srand(time(NULL));
	int num = set_num_show();
	vector<TvShow> shows = set_shows(num);
	int mode = choose_mode();
	create_file("first", shows, mode);
	shows = read_file("first");
	cout << "Shows: " << endl;
	print_file("first");
	cout << "Durations of shows: " << endl;
	print_show_duration(shows);
	vector<TvShow> new_shows = set_day_shows(shows);
	create_file("second", new_shows, 1);
	new_shows = read_file("second");
	cout << "Day shows: " << endl;
	print_file("second");
	return 0;
}