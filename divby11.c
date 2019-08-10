/*Max range of input integer in this program is 2147483647 */

#include<stdio.h>
int reverse(int n)
{
    int rev=0, rem;
    while(n>0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    return rev;
}

int main()
{
    int num;
    scanf("%d",&num);
    int sumodd=0,evensum=0,diff,number;
    number = reverse(num);
    // number=num;
    int i=1;
    while (number>0)
    {
        if(i%2!=0)
        {
            sumodd += (number%10);
            number /= 10;
        }
        else{
            evensum  += (number%10);
            number /= 10;
        }        
        i++;
    }
    // printf("%d %d\n ",sumodd,evensum);    
    diff = sumodd - evensum;
    printf("%d\n",diff);
    // if(diff%11 == 0)
    // {
    //     printf("The number %d is divisible by 11 \n",num);
    // }else{
    //     printf("The number %d is not divisible by 11 \n",num);        
    // }
    return 0;
}