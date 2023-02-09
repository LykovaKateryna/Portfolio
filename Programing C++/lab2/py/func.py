import pickle
import random
import structures as struct
def set_num_show():
    num = input("Enter number of TV shows: ")
    while (not num.isdigit()) or int(num) < 0:
        num = input("Your answer is incorrect. Please enter the correct answer: ")
    return int(num)
def set_title():
    text = input("Enter the title of the show: ")
    return text
def set_show_time_start():
    hours = random.randint(0, 23)
    minutes = random.randint(0, 59)
    num = struct.Time(hours, minutes)
    return num
def set_show_time_end(start):
    hours = start.hours + random.randint(0, 8)
    if hours >= 24:
        hours -= 24
    minutes = start.minutes + random.randint(0, 59)
    if minutes >= 60:
        minutes -=60
        hours += 1
    num = struct.Time(hours, minutes)
    return num
def set_show():
    title = set_title()
    start = set_show_time_start()
    end = set_show_time_end(start)
    new_show = struct.TvShow(title, start, end)
    return new_show
def set_shows(num):
    shows = []
    for i in range(num):
        shows.append(set_show())
    return shows
def print_show(show, num):
    print("Title of the show", num, ": ", show.title)
    print("Time of the start of the show", num, ": ", end = "")
    print_time(show.start)
    print("Time of the end of the show", num, ": ", end = "")
    print_time(show.end)
def print_time(time):
    print(time.hours, ":", time.minutes)
def print_shows(shows):
    for i in range(len(shows)):
        print_show(shows[i], i + 1)
def choose_mode():
    str = input("Choose writing mode: 1 - for overwriting the file, 2 - for adding to the file: ")
    while str != "1" and str != "2":
        str = input("You entered a wrong answer. Please enter '1' or '2': ")
    if str == "1":
        return "wb"
    else:
        return "ab"
def create_file(file_name, shows, mode):
    with open(file_name, mode) as file:
        for show in shows:
            pickle.dump(show, file)
def show_duration(start, end):
    if end.hours == start.hours:
        hours = 0
        minutes = end.minutes - start.minutes
    else:
        hours = end.hours - start.hours - 1
        
        minutes = 60 - start.minutes + end.minutes
        if minutes >= 60:
            minutes -= 60
            hours += 1
        if hours < 0:
            hours = 24 - start.hours - 1 + end.hours
    dur = struct.Time(hours, minutes)
    return dur
def print_show_duration(shows):
    for i in range(len(shows)):
        print("The duration of show", i + 1, "is: ", end = "")
        print_time(show_duration(shows[i].start, shows[i].end))
def is_day_show(show):
    res = False
    if show.start.hours >= 9 and show.start.hours <= 18 and show.end.hours <= 18 and show.end.hours >= 9:
        if show.end.hours == 18:
            if show.end.minutes == 0:
                res = True
        else:
            res = True
    return res
def set_day_shows(shows):
    new_shows = []
    for show in shows:
        if is_day_show(show):
            new_shows.append(show)
    return new_shows
def read_file(file_name):
    shows = []
    with open(file_name, "rb") as file:
        while True:
            try:
                show = pickle.load(file)
                shows.append(show)
            except EOFError:
                break
    return shows
def print_file(file_name):
    i = 0
    with open(file_name, "rb") as file:
        while True:
            try:
                show = pickle.load(file)
                print_show(show, i + 1)
                i += 1 
            except EOFError:
                break