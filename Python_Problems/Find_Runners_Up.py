# Description  : Given the 'n' participants' Score sheet for your University Sports Day, find the Runners-up Score.
# Sample Input : 5
#                2 3 6 6 5
# Sample Output: 5
# *****************************************************************************************************************************************************************************

def func_method (arr):
    
    # Using the set() function, only the unique scores are passed to the List.
    my_list = list (set (arr))

    # Using the Reverse sort() function, the List is sorted from Largest to Smallest scores.
    my_list.sort (reverse = True)

    # The second score of the List is the Runners-up Score.
    print ("Runners-up score using the In-Built Functions: ", my_list [1])

def flag_method (arr):

    # Initialize the pointers with the smallest value possible.
    first = float ('-inf')
    second = float ('-inf')

    # Traverse the List of scores to find the second Largest score.
    for i in arr:

        # If the score is greater than the Largest score, update both the pointers.
        if (i > first):
            second = first
            first = i

        # If the score is greater than the second Largest score and lesser than the Largest score, update the second Largest score.
        elif ((i > second) and (i != first)):
            second = i

    # The last value of the second Largest score is the Runners-up Score.
    print ("Runners-up score using the Pointer approach: ", second)

if (__name__ == "__main__"):
    n = int (input ("Enter the value of n = "))
    print ("Enter the Scores:")
    arr = map (int, input ().split ())

    # func_method (arr)
    flag_method (arr)
