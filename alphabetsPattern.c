/* C program which prints alphabetical pattern forming a triangle like this:
INPUT:  For N==5
Output

A
bc
DEF
ghij
KLMNO

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);//input no of rows
    int k=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(k>90)
            k=65;
            if(i%2==0){
                printf("%c",k);//Letter in upper case
                k++;
            }
            else{
                printf("%c",k+32);//Letter in lower case
                k++;
            }
        }
        printf ("\n");
    }

    return 0;
}
