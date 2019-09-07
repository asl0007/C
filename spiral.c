/*
Problem Statement:
A Sober Walk
Our hoary culture had several great persons since time immemorial and king Vikramaditya's nava ratnas (nine gems) belongs to this ilk. They are named in Shloka:
Among these Varahamihira was an astrologer of eminence and his book Brihat Jataka is reckoned as the ultimate authority in astrology. He was once talking with Amarasimha, another gem among the nava ratnas and the author of Sanskrit thesauras, Amarakosha. Amarasimhawanted to know the final position of a person, who starts from the origin (0,0) and travels per following scheme:
He first travels right and travels 10 units of distance.
His Second turn is upward for 20 units.
Third turn is to the left for 30 units.
Fourth is downward for 40 units.
_...And thus he travels , every time increasing the travel distance by 10 units.
While Varahamitra could use his astology skills to predict movement based on planetary positions use your programming expertise to print the final osition, given the number of turns (n)
2<=n<=1000    

INPUT 
3

Output
-20 20

INPUT 
4

Output
-20 -20

*/

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
