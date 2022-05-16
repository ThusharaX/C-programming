
## Question

An aptitude test of a particular university will take 10 applicants at a time. Those who scored more than the average mark will be qualified to enter the university. Others have to take the test again. Write a C program to enter marks in an array and find how many applicants have failed the test.

    (a) Declare an integer array called marks of size 10.
    (b) Initialize all the array elements to -1.
    (c) Read the marks from keyboard and store then in the array.

If the input a mark less than 0 or grater than 100, display an appropriate error message and ask to re-enter the mark.

Input format:

```
Input mark 1: 92
Input mark 2: 110
Invalid mark. Please re-enter.
Input mark 2: 76
....................................
....................................
Input mark 10: 84
```

(d) Display the number of failed candidates.

Example:

Input array:
92 76 80 48 66 89 61 56 92 84
Output:
Number of failed applicants: 4