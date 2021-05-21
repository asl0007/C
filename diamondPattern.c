// Write a C program to print diamond pattern
/*
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     *
*/
#include <stdio.h>

int main(void) {
    int i,j,k;
    for(i=0;i<5;i++){
        for(k=5;k>i;k--){
            printf(" ");
        }
        for(j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=4;i>0;i--){
        printf(" ");
        for(k=5;k>i;k--){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
	return 0;
}

// Output
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     *
