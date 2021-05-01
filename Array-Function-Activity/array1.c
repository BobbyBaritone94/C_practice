#include<stdio.h>
#include <ctype.h>
#include<string.h>
#define MAX 40

//taking string as argument
void printCharCount(char* fullname)
{
   int i,j,charCounter;
   char currentChar,searchChar;
   i=0;
   //looping for each character
       for(currentChar=fullname[i];currentChar!='\0';){
           currentChar=tolower(currentChar);//converting to lowercase
           charCounter=1;
           if((currentChar >= 'a' && currentChar <= 'z')){ //if chracter is alphabetic
               j=i+1; //start searching from next character
               if(i!=0)
                   printf(", ");//printing comma after first element
               for(searchChar=fullname[j];searchChar!='\0';){
                   searchChar=tolower(searchChar);
                   if((searchChar >= 'a' && searchChar <= 'z' && searchChar==currentChar)){
                       charCounter++;//if character is found increment counter and set that character to -1
                       fullname[j]=-1; // so that we will not recount it
                   }
                   j++;
                   searchChar=fullname[j];//increment character
               }
               printf("%c - %d",currentChar,charCounter);
               fullname[i]=-1;
           }
           i++;
           currentChar=fullname[i];//increment current character
       }
       printf("\n");
      
}
int main(int argc,char* argv[])
{
   int i;
   char fullname[MAX];//Array of maximum characters
   if(argc<3 || argc>4){ //checking number of arguments passed
       printf("Please give minimum 2 and maximum 4 words\n");
   }else{
       //copying first word to full name
       strcpy(fullname,argv[1]);
       for(i=2;i<argc;i++){ // copying remaining to full name
           strcat(fullname," ");
           strcat(fullname,argv[i]);
       }
       printf("\n%s\n",fullname);//printing full name
       printCharCount(fullname); // printed unique characters
   }
   return 0;
}