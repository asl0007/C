#include<stdio.h>

int main()
{
    int arr[100],len;
    int i,small,large,sum;
    //input Length of array
    scanf("%d",&len);
    //input arrray elements
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    if (len<=3)
    return 0;
    large=arr[0];
    small=arr[1];
    for(i=0;i<len;i++)
    {
        //largest element at even position
        if(i%2==0)
        {
            if(arr[i]<arr[i+2] && large<=arr[i+2])
            {
                large = arr[i+2];
            }
        }else
        //smallest element at odd index
        {
            if(arr[i]>arr[i+2] && small>=arr[i+2] && arr[i+2]>0)
            {
                small = arr[i+2];
            }
        }
        
    }
    sum = large + small;
    printf("%d",sum);
    return 0;
}