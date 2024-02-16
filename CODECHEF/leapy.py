import calendar

tc = int(input())

for _ in range(tc):
    year = int(input())
    if calendar.isleap(year):
        print("It is a leap year.")
    else:
        while(True):
            year=year+1
            if calendar.isleap(year):
                print("Not a leap year. Suggested:",year)
                break