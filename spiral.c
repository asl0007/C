#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int x=0,y=0,inc=0;
    for(int i=0; num; i++)
    {
        //right coordinate(1st Quadrant)
        if(num)
        {
            inc += 10;
            x += inc;
            num--;
        }
        //top coordinate(2nd Quadrant)
        if(num)
        {
            inc += 10;
            y += inc;
            num--;
        }
        //left coordinate(3rd Quadrant)
        if(num)
        {
            inc += 10;
            x -= inc;
            num--;
        }
        //down coordinate(4th Quadrant)
        if(num)
        {
            inc += 10;
            y -= inc;
            num--;
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}