// Check wheteher the no is prime or not
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int flag=1;
    for (int i=2;i<n/2;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
	return 0;
}



/*
Sum of duplicate prime numbers in an array.
Example:
[20,3,81,9,2,9,3,3,66,11,5,90,5]
Answer in this case should be 8
*/
#include <stdio.h>
#include<string.h>
#include<math.h>
//Check whether the no is prime or not
int isPrime(int x){
    int flag=1;//flag variable to tell the no is prime
    if(x==0 || x==1){
		flag=0;
	}	    
    for(int i=2;i<sqrt(x)+1;i++){//
        if(x%i==0){
            flag=0;
        }
    }
    return flag;
}

int main(void) {
    int arr[]={20,3,81,9,2,9,3,3,66,11,5,90,5};
    int len,i,j,sum=0;
    len = sizeof(arr)/sizeof(arr[0]);//To calculate length of array
    int prime[len],k=0,count;
    for(i=0;i<len;i++){
        if(isPrime(arr[i]) ){
	//Store distinct prime numbers 
            for(j=0;j<i;j++){
                if(arr[i]==arr[j]){
                    break;
                }
            }
            if(i==j){
                prime[k]=arr[i];
                k++;
            }
        }
    }
	// Traversing array from back side(end) and checking whether the given value repeats in the given array or not
    while(k--){
        count =0;
        for(i=0;i<len;i++){
            if(prime[k]==arr[i]){
                count++;
            }
        }
        if(count>1){
            sum+=prime[k];
//             printf("%d\n",prime[k]);
//             printf("%d ",sum);
        }
    }
    printf("%d",sum);
	return 0;
}

