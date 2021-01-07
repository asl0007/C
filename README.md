# C

Programming language

#Problem Statement
https://www.codechef.com/FLMOCK02/problems/LECANDY
Little Elephant and Candies
A Little Elephant and his friends from the Zoo of Lviv like candies very much.
There are N elephants in the Zoo. The elephant with number K (1 ≤ K ≤ N) will be happy if he receives at least AK candies. There are C candies in all in the Zoo.
The Zoo staff is interested in knowing whether it is possible to make all the N elephants happy by giving each elephant at least as many candies as he wants, that is, the Kth elephant should receive at least AK candies. Each candy can be given to only one elephant. Print Yes if it is possible and No otherwise.

Input

The first line of the input file contains an integer T, the number of test cases. T test cases follow. Each test case consists of exactly 2 lines. The first line of each test case contains two space separated integers N and C, the total number of elephants and the total number of candies in the Zoo respectively. The second line contains N space separated integers A1, A2, ..., AN.

Output

For each test case output exactly one line containing the string Yes if it possible to make all elephants happy and the string No otherwise. Output is case sensitive. So do not print YES or yes.

Constraints

1 ≤ T ≤ 1000
1 ≤ N ≤ 100
1 ≤ C ≤ 109
1 ≤ AK ≤ 10000, for K = 1, 2, ..., N

Example

Input:
2
2 3
1 1
3 7
4 2 2

Output:
Yes
No

Explanation

Case 1. We can give one candy to the first elephant and two candies to the second elephant and make them both happy. Hence the answer is Yes. Alternatively we can give one candy to each elephant and left one candy for ourselves but they again will be happy.

Case 2. Even if we give four candies to the first elephant and two candies to the second elephant we will have only one candy left and can not make last elephant happy since he needs two candies for his happiness. Hence the answer is No.
Solution
https://github.com/asl0007/C/blob/master/lecandy.c

#Problem Statement
https://www.codechef.com/FLMOCK01/problems/CHN15A
Mutated Minions

Gru has not been in the limelight for a long time and is, therefore, planning something particularly nefarious. Frustrated by his minions' incapability which has kept him away from the limelight, he has built a transmogrifier — a machine which mutates minions.
Each minion has an intrinsic characteristic value (similar to our DNA), which is an integer. The transmogrifier adds an integer K to each of the minions' characteristic value.
Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations.
Given the initial characteristic integers of N minions, all of which are then transmogrified, find out how many of them become Wolverine-like.

Input Format:
The first line contains one integer, T, which is the number of test cases. Each test case is then described in two lines.
The first line contains two integers N and K, as described in the statement.
The next line contains N integers, which denote the initial characteristic values for the minions.

Output Format:
For each testcase, output one integer in a new line, which is the number of Wolverine-like minions after the transmogrification.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ K ≤ 100
All initial characteristic values lie between 1 and 105, both inclusive.

Example

Input:
1
5 10
2 4 1 35 1

Output:
1

Explanation:
After transmogrification, the characteristic values become {12,14,11,45,11}, out of which only 14 is divisible by 7. So only the second minion becomes Wolverine-like.

Solution
https://github.com/asl0007/C/blob/master/mutated_minion.c

#Problem Statement
https://www.codechef.com/FLMOCK04/problems/SUBINC
Count Subarrays
Given an array A1, A2, ..., AN, count the number of subarrays of array A which are non-decreasing.
A subarray A[i, j], where 1 ≤ i ≤ j ≤ N is a sequence of integers Ai, Ai+1, ..., Aj.
A subarray A[i, j] is non-decreasing if Ai ≤ Ai+1 ≤ Ai+2 ≤ ... ≤ Aj. You have to count the total number of such subarrays.

Input

The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output

For each test case, output in a single line the required answer.

Constraints
1 ≤ T ≤ 5
1 ≤ N ≤ 105
1 ≤ Ai ≤ 109

Subtasks
Subtask 1 (20 points) : 1 ≤ N ≤ 100
Subtask 2 (30 points) : 1 ≤ N ≤ 1000
Subtask 3 (50 points) : Original constraints

Example

Input:
2
4
1 4 2 3
1
5

Output:
6
1

Explanation

Example case 1.
All valid subarrays are A[1, 1], A[1, 2], A[2, 2], A[3, 3], A[3, 4], A[4, 4].
Note that singleton subarrays are identically non-decreasing.

Example case 2.
Only single subarray A[1, 1] is non-decreasing.

Solution
https://github.com/asl0007/C/blob/master/subarray.c

#Problem Statement
A Sober Walk
Our hoary culture had several great persons since time immemorial and king Vikramaditya's nava ratnas (nine gems) belongs to this ilk. They are named in Shloka:
Among these Varahamihira was an astrologer of eminence and his book Brihat Jataka is reckoned as the ultimate authority in astrology. He was once talking with Amarasimha, another gem among the nava ratnas and the author of Sanskrit thesauras, Amarakosha. Amarasimhawanted to know the final position of a person, who starts from the origin (0,0) and travels per following scheme:
He first travels right and travels 10 units of distance.
His Second turn is upward for 20 units.
Third turn is to the left for 30 units.
Fourth is downward for 40 units.
\_...And thus he travels , every time increasing the travel distance by 10 units.
While Varahamitra could use his astology skills to predict movement based on planetary positions use your programming expertise to print the final osition, given the number of turns (n)

Constraint
2<=n<=1000

INPUT
3

Output
-20 20

INPUT
4

Output
-20 -20

Solution
https://github.com/asl0007/C/blob/master/spiral.c

#Problem Statement
A number is divisible by 11 if and only if the differnce between the sum of digit at even and odd place is either zero or divisible by 11.Check whether the number is divisible by 11 or not and print the difference between the sum of the digit at even and odd place.

Input
Any number

Output
Difference between the sum of digit at odd and even place
Yes (if number is divisible by 11) / No (if number is not divisible by 11)

Example

Input
1542687

Output
3
No

Solution
https://github.com/asl0007/C/blob/master/divby11.c

##Problem Statement
Given a number N that signifies the number of rows, write a function to print a tiangle of alphabets where the case of the alphabets changes for every row. The function should loop through the alphabets so A will come after Z. For example, if N is 5 then output would be:

```
A
bc
DEF
ghij
KLMNO
```

Solution
https://github.com/asl0007/C/blob/master/alphabetsPattern.c
