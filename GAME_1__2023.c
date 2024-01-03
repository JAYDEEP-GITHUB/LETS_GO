#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int c; 
c=g();
return 0;
}
int g()
{
int ran_num,guess , nguess=1;
srand(time(0));
ran_num= rand()%100+1;
 //printf("THE RAMDOM NUMBER GENERATED IS :%d\n",ran_num);      
 printf("\t\t-----  PLAY WITH ME  -----\n \t\t^^^^^ GUESS THE NUMBER  ^^^^^");
printf("\n*************************************************************************************\n");
do
{
    printf("ENTER THE NUMBER BETWEEN 1 TO 100 \n");
    scanf("%d",&guess);
    if(guess>ran_num)     
    {
 printf("\t***LOWER NUMBER PLEASE ***\n ");  
    }
     else if ( guess<ran_num)
     {
      printf("\t***HIGHER NUMBER PLEASE ***\n");  
     }
      else
      {
           printf("YOU GUESSED THE NUMBER IN %d ATTEMPTS \n",nguess);  
      }
     nguess++;
} while (guess!=ran_num );
 
 return 0;
}