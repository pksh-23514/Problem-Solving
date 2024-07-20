# Description  : An extra day is added to the calendar almost every four years as February 29 called a Leap day and the year is called a Leap year.
#                The Leap year can be evenly divided by 4, is a Leap year, unless:
#                The year can be evenly divided by 100, it is NOT a Leap year, unless:
#                The year is also evenly divisible by 400. Then it is a Leap year.
# Sample Input : 1990
# Sample Output: False
# *****************************************************************************************************************************************************************************

def is_leap (year):
    leap = False

    # If the year is divisible by 4 and not divisible by 100 or divisible by 400, it is a Leap year.
    if ((year % 4 == 0) and ((year % 100 != 0) or (year % 400 == 0))):
        leap = True

    return leap

if (__name__ == "__main__"):
    year = int (input ("Enter the value of Year = "))
    print (is_leap (year))
