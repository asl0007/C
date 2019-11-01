/**
Problem link: https://www.codechef.com/NOV19B/problems/HRDSEQ
**/
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int arr[128], n, k, i, j;
        int count=1;
        scanf("%d ",&n);
        arr[0]=0;//first element
        arr[1]=0;//second element
	    //next n element
        for(i=2;i<n;i++){
            k=i-1;
            for(j=i-2;j>=0;j--){
                if(arr[j]==arr[k]){
                    arr[i]=k-j;
                    break;
                }
                else{
                    arr[i]=0;
                }
            }
        }
	    //count occurence
        for(i=0;i<n-1;i++){
            if(arr[i]==arr[n-1]){
                count++;
            }
        }
        printf("%d ",count);
    }
	return 0;
}

