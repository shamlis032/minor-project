#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int get_1st_weekday(int year)
{
    int d;
    d =(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
    return d;
}

int main()
{
   system("color 3f");
   int year , month ,daysinmonth, day,weekday=0 , startingday;
     printf("\n enter your desired year: ");
   scanf("%d",&year);

   char *months[12]={"january" , "february" , "march" , "april" , "may" , "june" , "july" , "august" ,"september" ,"october" , "november" , "december"};
   int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};



   if((year%4==0&&year%100!=0) || year%400==0)
   {
       monthday[1]=29;

   }
   startingday=get_1st_weekday(year);
      for(month=0;month<12;month++)
   {
       daysinmonth=monthday[month];
       printf("\n \n*************%s*************\n",months[month]);
        printf("\n  sunday  monday  tuesday  wednesday  thursday  friday  sat\n");
       for(weekday=0;weekday<startingday;weekday++)
       {

       printf("     ");
       }

   for(day=1; day<=daysinmonth; day++)
   {
       printf("%5d", day);

   if(++weekday>6)
   {
       printf("\n");
       weekday=0;
   }
   startingday=weekday;
   }
   }

    return 0;
}
