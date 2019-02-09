Problem link- https://www.codechef.com/FLMOCK02/problems/LECANDY

solution

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,c,k,remc,sum=0;
	    int arr[10000];
	    scanf("%d %d",&n,&c);
	    remc=c;
	    for(k=0;k<n;k++){
	        scanf("%d ",&arr[k]);
	        sum += arr[k];
	        remc -= arr[k];
	    }
	    if(sum>c)printf("No\n");
	    else if(remc>=0)printf("Yes\n");
	    else printf("No\n");
	}
	return 0;
}
