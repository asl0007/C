problem link- https://www.codechef.com/FLMOCK04/problems/SUBINC

soluion

#include<stdio.h>
int main()
{
  long int i,j,n,t;
  scanf("%ld",&t);
  for(i=0;i<t;i++)
    {
      long int count=0,len=1;
      scanf("%ld",&n);
      long long int a[n];
      for(j=0;j<n;j++)
          scanf("%ld",&a[j]);
      for(j=0;j<n-1;j++)
        {
            if(a[j+1]>=a[j])
                len++;
            else
                {
                    count=count+(len*(len-1))/2;
                    len=1;
                }
        }
        if(len>1)
            count=count+(len*(len-1))/2;
        printf("%ld",n+count);
        printf("\n");
  }
  return 0;
}
