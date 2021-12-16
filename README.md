# endterm-c-
Vacations
For every student of a school,we know the places where they traveled during theholidays (the data is given with pairs: student number, place of travel). The students who have been in more than one place give more data pairs about themselves. We form groups of students who vacationedin exactly the same places (each of these groups should have the largest possible size). Write a program that determines the following:1.The total number of places where the students traveled.2.The number of visited places for each student.3.The place where most students were.4.A student who did not travel anywhere.5.How many groups of studentscan be made according to the principle in the task descrip-tion?






InputThe first line of the standard inputcontainsthe number of students (1≤N≤1000), and the number of data pairs (1≤M≤2000). In the next M*2 lines, there is a data pair in every two lines: the identifier number of a student (1≤Si≤N), and aplace of travel (a word with at most 10 letters of the English alphabet). Every student has been to at most 10 places, the total number of places does not exceed 1000.Nobody visited a place twice.





OutputThe standard outputshould contain a line with a single # character before the solution ofeach subtask. This # character line is followed by as many lines as needed for the output of a subtask. If you cannot solve a subtask, you should output only the line containing the # character. If the output format is not correct (less/more # characters are in the output), you will get “Output format error”, even if you have correct solutions for some subtasks.


Subtask 1(20points):Printthe number of different places that were visited by at least one stu-dent.

Subtask 2(20 points): Print a line for each person who traveled at least once (in any order). Every line should contain a student identifier and the count of places visited by that person.

Subtask 3(20 points):Print the place visited by most students. In case of multiple possible solu-tions, you must give the one that occurs first in the input.

Subtask 4(20points): A single line should contain the identifier of a student who has not traveled anywhere.  In  case  of  multiple  possible  answers,  you  can  print  any  of  them.  If  there  is  no  such student, then print -1.

Subtask 5(20points): Print how many groups can beformedof studentswho visited exactly the sameplaces. The students who have not traveled anywhereare not put into any group.
Programming C2 test20212ExampleInputOutput5 61Hawaii2Cyprus1Cyprus3Tahiti4Hawaii2Hawaii#3#1222314 1#Hawaii#5#3Explanation for

subtask 5: the first group contains students1 and 2 who went to both Hawaii and Cyprus, in the second group there is only student 3 who went to Tahiti, and student 4 trav-eled only to Hawaii so she must make a separate third group.
