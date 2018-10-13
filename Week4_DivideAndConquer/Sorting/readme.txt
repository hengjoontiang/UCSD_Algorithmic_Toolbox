TestCase

partition3

10
5 2 5 3 1 6 7 8 9 10

count_swap = 2 ; correct
j4 ; correct

5 5 2 3 1 6 7 8 9 10


After incorporating the swapping, we get

2 3 1 5 5 6 7 8 9 10



Fail Test 4

11
11 12 21 5 5 1 0 3 4 5 11

wrong answer:
0 1 3 11 5 5 5 4 11 12 21



//basic partition3 is incorrect

11
11 12 21 5 5 1 0 3 4 5 11
11 11 5 1 0 3 4 5 21 12 5


manual operations

11 12 21 5 5 1 0 3 4 5 11
x=a[0] = 11

i=1
11 12 21 5 5 1 0 3 4 5 11
a[1] = 12 <= x=11 false

i=2
11 12 21 5 5 1 0 3 4 5 11
a[2] = 21 <= x = 11 false

i =3 
11 12 21 5 5 1 0 3 4 5 11
a[3] = 5 <= x = 11 true





Now next phase of testing
Based upon the limits given, generate random files
