Problem link- https://www.codechef.com/FLMOCK01/problems/CHN15A

solution

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,i,count=0;
	    int arr[100000];
	    scanf("%d %d",&n,&k);
	    for(i=0;i<n;i++){
	        scanf("%d ",&arr[i]);
	        arr[i] += k;
	        if(arr[i]%7==0)
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
