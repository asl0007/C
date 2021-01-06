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
_...And thus he travels , every time increasing the travel distance by 10 units.
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
A number is divisible by 11 if and only if the differnce  between the sum of digit at even and odd place is either zero or divisible by 11.Check whether the number is divisible by 11 or not and print the difference between the sum of the digit at even and odd place.

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
``
`A`
`bc`
`DEF` 
`ghij`
`KLMNO`
``
#### Problem link
https://www.hackerrank.com/challenges/30-hello-world/problem
#Solution
```
int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105]; 
    
    // Read a full line of input from stdin and save it to our variable, input_string.
    scanf("%[^\n]", input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n");
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    printf("%s",input_string);
    return 0;
}
```
#### Problem link
https://www.hackerrank.com/challenges/30-data-types/problem
#Solution
```
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int a;
    double b;
    char c[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d \n %lf \n %[^\n]",&a, &b, c);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",a+i);
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n",b+d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s",s);
    printf("%s",c);
    return 0;
}
```
#### Problem link
https://www.hackerrank.com/challenges/30-operators/problem
#Solution
````````
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip, tax, total;
    tip = (meal_cost * tip_percent)/100;
    tax = (meal_cost * tax_percent)/100;
    total = meal_cost + tip + tax;
    printf("%0.0lf",round(total));
}

int main()
{
    char* meal_cost_endptr;
    char* meal_cost_str = readline();
    double meal_cost = strtod(meal_cost_str, &meal_cost_endptr);

    if (meal_cost_endptr == meal_cost_str || *meal_cost_endptr != '\0') { exit(EXIT_FAILURE); }

    char* tip_percent_endptr;
    char* tip_percent_str = readline();
    int tip_percent = strtol(tip_percent_str, &tip_percent_endptr, 10);

    if (tip_percent_endptr == tip_percent_str || *tip_percent_endptr != '\0') { exit(EXIT_FAILURE); }

    char* tax_percent_endptr;
    char* tax_percent_str = readline();
    int tax_percent = strtol(tax_percent_str, &tax_percent_endptr, 10);

    if (tax_percent_endptr == tax_percent_str || *tax_percent_endptr != '\0') { exit(EXIT_FAILURE); }

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
````````

#### Problem link
https://www.hackerrank.com/challenges/30-conditional-statements/problem
#Solution
``````````````````
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        if (n%2 != 0){
            printf("Weird");
        }else if((n>=2 && n<=5) || n>20){
            printf("Not Weird");
        }else{
            printf("Weird");
        }
        return 0;
    }
``````````````````
