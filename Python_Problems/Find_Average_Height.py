# Description  : Given the heights of all the plants in the greenhouse, find the average height of all the plants with distinct heights in the greenhouse.
# Sample Input : 10
#                161 182 161 154 176 170 167 171 170 174
# Sample Output: 169.375
# *****************************************************************************************************************************************************************************

def average (arr):

    # To find the distinct heights of the plants, convert the List to Set (as all duplicates will be removed).
    my_set = set (arr)

    plant_count = 0
    plant_height_sum = 0

    for item in my_set:
        plant_height_sum += item
        plant_count += 1

    return (plant_height_sum / plant_count)

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))
    arr = list (map (int, input ().split ()))

    result = average (arr)
    print ("Average of the distinct height Plants is: ", result)
