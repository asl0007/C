# C Programming language

#### Problem link - Hello World
https://www.hackerrank.com/challenges/30-hello-world/problem
##### Solution
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
#### Problem link - Data Types
https://www.hackerrank.com/challenges/30-data-types/problem
##### Solution
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
#### Problem link - Operators
https://www.hackerrank.com/challenges/30-operators/problem
##### Solution
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

#### Problem link - Intro to Conditional Statements
https://www.hackerrank.com/challenges/30-conditional-statements/problem
##### Solution
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

#### Problem link - Loops
https://www.hackerrank.com/challenges/30-loops/problem
##### Solution
`````````
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   int n; 
scanf("%d",&n);
   for(int i=1;i<=10;i++)
   {if(n>=2&&n<=20)
      printf("%d x %d = %d\n",n,i,n*i);
   }
    return 0;
}
`````````

#### Problem link- Review Loop
https://www.hackerrank.com/challenges/30-review-loop/problem
##### Solution
``````````
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,n;
    char s[10000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        n=strlen(s);
        for(i=0;i<n;i++){
            if(i%2==0)
                printf("%c",s[i]);
        }
        printf(" ");
        for(i=0;i<n;i++){
            if(i%2!=0)
                printf("%c",s[i]);
        }   
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
``````````

#### Problem link - Array
https://www.hackerrank.com/challenges/30-arrays/problem
##### Solution
`````````````
#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,i;
    scanf("%d",&N);
    int A[10000];
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=N-1;i>=0;i--){
        printf("%d ",A[i]);
    }
}
`````````````
