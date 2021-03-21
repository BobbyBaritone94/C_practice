#include <stdio.h>


//find the smallest of three given ints

int main(void) {
   int first;
   int second;
   int third;
   /* Type your code here. */
   scanf("%d",&first);
   scanf("%d",&second);
   scanf("%d",&third);
   
  
   
   if(first<second&&first<third)
   {
      printf("%d",first);
   }else if(second<first&&second<third)
   {
      printf("%d",second);
   }else{
      printf("%d",third);
   }
   

   return 0;
}


//Remove the gray from an rgb code

#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int smallestValue;
   int red;
   int green;
   int blue;
   
   scanf("%d",&red);
   scanf("%d",&green);
   scanf("%d",&blue);
   
   if(red<=green&&red<=blue)
   {
      smallestValue = red;
   }else if(green<=red&&green<=blue)
   {
      smallestValue = green;
   }else{
      smallestValue = blue;
   }
   
   red = red - smallestValue;
   green = green - smallestValue;
   blue = blue - smallestValue;
   
   printf("%d %d %d\n", red, green, blue);
   

   return 0;
}

// Primary U.S. interstate highways are numbered 1-99. 
//Odd numbers (like the 5 or 95) go north/south, and evens 
//(like the 10 or 90) go east/west. Auxiliary highways 
//are numbered 100-999, and service the primary highway indicated 
//by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90.

// Given a highway number, indicate whether it is a 
//primary or auxiliary highway. If auxiliary, 
//indicate what primary highway it serves. Also indicate if 
//the (primary) highway runs north/south or east/west.



#include <stdio.h>

int main(void) {
   int highwayNumber;
   
   scanf("%d", &highwayNumber); 
   /* Type your code here. */
   
   if(highwayNumber<100&&highwayNumber>0){
      
      if(highwayNumber%2==0){
         printf("I-%d is primary, going east/west.\n", highwayNumber);
      }else{
         printf("I-%d is primary, going north/south.\n", highwayNumber);
      }   
   }else if(highwayNumber<1000&&highwayNumber>99){
      int primary = highwayNumber%100;
      
      if(highwayNumber%2==0){
         printf("I-%d is auxiliary, serving I-%d, going east/west.\n", highwayNumber, primary);
      }else{
         printf("I-%d is auxiliary, serving I-%d, going north/south.\n", highwayNumber, primary);
      }
   }else{
   printf("%d is not a valid interstate highway number.\n", highwayNumber);
   }
   return 0;
}


// Write a program that takes a date as input and 
// outputs the date's season. 
// The input is a string to represent the month 
// and an int to represent the day.

#include <stdio.h>
#include <string.h>

int main(void) {
   char inputMonth[50];
   int inputDay;
   const char *months[12];
   months[0]="January";
   months[1]="February";
   months[2]="March";
   months[3]="April";
   months[4]="May";
   months[5]="June";
   months[6]="July";
   months[7]="August";
   months[8]="September";
   months[9]="October";
   months[10]="November";
   months[11]="December";
   
   scanf("%s", inputMonth); 
   scanf("%d", &inputDay); 
   int validMonth=-1;
  
   for(int i = 0; i<12 ; i++)
   {
      if(0==strcmp(months[i],inputMonth))
      {
         validMonth=i;
      }
   }
   if(validMonth==-1||inputDay>31||inputDay<1){
      printf("Invalid\n");
   }else{
      if((validMonth==2&&inputDay>=20)||(validMonth==3)||(validMonth==4)||(validMonth==5&&inputDay<=20))
      {
         printf("Spring\n");  
      }else if((validMonth==5&&inputDay>=21)||(validMonth==6)||(validMonth==7)||(validMonth==8&&inputDay<=21))
      {
         printf("Summer\n");  
      }else if((validMonth==8&&inputDay>=22)||(validMonth==9)||(validMonth==10)||(validMonth==11&&inputDay<=22))
      {
         printf("Autumn\n");
      }else{
         printf("Winter\n");  
      }
      
   }

   return 0;
}


// Write a program with total change amount as
//  an integer input, and output the change using 
//  the fewest coins, one coin type per line. The coin 
//  types are Dollars, Quarters, Dimes, Nickels, and Pennies. 
// Use singular and plural coin names as appropriate, 
// like 1 Penny vs. 2 Pennies.

#include <stdio.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   int change;
   int b;
   int q;
   int d;
   int n;
   int p;
   char bw[50];
   char qw[50];
   char dw[50];
   char nw[50];
   char pw[50];
   
   scanf("%d",&change);
   
    if(change<=0)
   {
      printf("No change\n");
   }else{
   b = change/100;
   change = change%100;
   q = change/25;
   change = change%25;
   d = change/10;
   change = change%10;
   n = change/5;
   p = change%5;
   
   if(b==1){
      strcpy(bw,"Dollar\n");
   }else if(b==0){
      strcpy(bw,"");
   }else{
      strcpy(bw,"Dollars\n");
   }
   
   if(q==1){
      strcpy(qw,"Quarter\n");
   }else if(q==0){
      strcpy(qw,"");
   }else{
      strcpy(qw,"Quarters\n");
   }
   
   if(d==1){
      strcpy(dw,"Dime\n");
   }else if(d==0){
      strcpy(dw,"");
   }else{
     strcpy(dw,"Dimes\n");
   }
   
   if(n==1){
     strcpy(nw,"Nickel\n");
   }else if(n==0){
      strcpy(nw,"");
   }else{
     strcpy(nw,"Nickels\n");
   }
   
   if(p==1){
      strcpy(pw,"Penny\n");
   }else if(p==0){
      strcpy(pw,"");
   }else{
     strcpy(pw,"Pennies\n");
   }
   
   if(b>0)
   {
      printf("%d %s",b,bw);
   }
   if(q>0)
   {
      printf("%d %s",q,qw);  
   }
   if(d>0)
   {
      printf("%d %s",d,dw);  
   }
   if(n>0)
   {
      printf("%d %s",n,nw);  
   }
   if(p>0)
   {
      printf("%d %s",p,pw);  
   }
   }
  
   return 0;
}


// A year in the modern Gregorian Calendar consists of 365 days. 
// In reality, the earth takes longer to rotate around the sun.
//  To account for the difference in time, every 4 years, a leap year takes place. 
//  A leap year is when a year has 366 days: An extra day, February 29th. 
//  The requirements for a given year to be a leap year are:

// 1) The year must be divisible by 4

// 2) If the year is a century year (1700, 1800, etc.), 
// the year must be evenly divisible by 400

// Some example leap years are 1600, 1712, and 2016.

// Write a program that takes in a year and determines 
// whether that year is a leap year.

#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   bool isLeapYear = false;
   
   scanf("%d", &inputYear);
   /* Type your code here. */
   if(((inputYear%4==0)&&(inputYear%100!=0))||((inputYear%100==0)&&(inputYear%400==0)))
   {
      isLeapYear=true;  
   }
   
   if(isLeapYear){
   printf("%d - leap year\n",inputYear);
   }else{
   printf("%d - not a leap year\n",inputYear);   
   }   
   return 0;
}

// Write a program that takes in a positive integer as 
// input, and outputs a string of 1's and 0's 
// representing the integer in binary. For an 
// integer x, the algorithm is:



#include <stdio.h>
#include <math.h> 
#include <string.h>

int main(void) {
int x;
scanf("%d",&x);
int i = 0;
int output[100];


while(x>0)
{
   output[i]=(x%2);
   
   x=x/2;
    printf("%d",output[i]);
    i++;
   /* Type your code here. */
}

// int j = i;

// while(j>0){
//  printf("%d",output[j-1]);
//    j--;
// }
printf("\n");

   return 0;
}



// Write a program whose input is two integers, 
// and whose output is the first integer and subsequent 
// increments of 5 as long as the value is less 
// than or equal to the second integer.

#include <stdio.h>

int main(void) {
   int lower;
   int higher;
   
   scanf("%d",&lower);
   scanf("%d",&higher);
   int i =lower;
   
   if(lower>higher){
      printf("Second integer can't be less than the first.\n");
   }else{
   while(i<=higher){
   printf("%d ",i);
   
   i=i+5;  
     
 
}

   printf("\n");

}
   return 0;
}
