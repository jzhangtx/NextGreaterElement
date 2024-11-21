Next Greater Element


Given an array of positive integers A, find the first greater number for every element on its right. If a greater number does not exist, use -1.

Example:
Input: [1, 5, 2, 3, 5]
Output: [5, -1, 3, 5, -1]

Input Format
The first line contains an integer ‘T’, denoting the number of test cases.

For each test case the input has two lines:

An integer ‘n’ denoting the length of the array.
n space-separated integers denoting elements of the array.
Output Format
For each test case, a line containing space-separated elements of the result. 

Sample Input 
4
5
1 5 2 3 5
4
1 2 3 4
5
3 2 1 4 5
4
4 3 2 1
Expected Output
5 -1 3 5 -1
2 3 4 -1
4 4 4 5 -1
-1 -1 -1 -1