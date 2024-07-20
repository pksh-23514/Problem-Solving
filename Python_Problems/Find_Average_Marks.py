# Description  : Given the Dictionary containing the [key:value] pairs of [name:marks] for a list of 'n' Students.
#                Print the Average of the marks obtained by a given Student upto 2 decimal places.
# Sample Input : 3
#                Krishna 67 68 69
#                Arjun 70 98 63
#                Malika 52 56 60
#                Malika
# Sample Output: 56.00
# *****************************************************************************************************************************************************************************

if (__name__ == "__main__"):
    n = int (input ("Enter the Number of Students = "))

    print ("Enter the Name of the Student with the corresponding Marks received:")
    student_marks = {}
    # Enter the [name:marks] pair for the Students in the Dictionary.
    for _ in range (n):
        name, *line = input ().split ()
        scores = list (map (float, line))
        student_marks [name] = scores

    query_name = input ("Enter the Student's name to be searched: ")

    marks = student_marks [query_name]
    total_marks = 0
    subject_count = 0

    for i in marks:

        # Find the Total Marks received by the Student.
        total_marks += i

        # Find the Subject Count for the Student.
        subject_count += 1

    print (f"Average marks for {query_name} is: {(total_marks / subject_count) : 5.2f}")
