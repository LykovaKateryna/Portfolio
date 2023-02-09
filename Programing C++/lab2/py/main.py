import func
def main():
    num = func.set_num_show()
    shows = func.set_shows(num)
    mode = func.choose_mode()
    func.create_file("first", shows, mode)
    shows = func.read_file("first")
    print("Shows:")
    func.print_file("first")
    print("Durations of shows:")
    func.print_show_duration(shows)
    new_shows = func.set_day_shows(shows)
    func.create_file("second", new_shows, "wb")
    new_shows = func.read_file("second")
    print("Day shows:")
    func.print_file("second")

if __name__ == '__main__':
    main()
