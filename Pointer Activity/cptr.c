#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** argv){

        int defaultNum = 5; 
        if(argc >= 2){ 
               
                defaultNum = atoi(argv[1]);
                
        }

        while(defaultNum--){


                int iteration=1;
              
                char userCharacter;
                int userInteger;
                char userString[100];
                float userFloat;
               
                char* pointerCharacter;
                int* pointerInteger;
                char* pointerString;
                float* pointerFloat;

              
                printf("Enter a single char \n" );
                scanf("%c",&userCharacter);

                printf("Enter an integer \n" );
                scanf("%d",&userInteger);

                printf("Enter a phrase \n" );
                scanf(" %100[^\n]",userString);
                
                
                printf("Enter a floating point number \n" );
                scanf("%f",&userFloat);

               
                printf("\nIteration %d\n\n",iteration);

                printf("--ADDRESSES BEFORE ASSIGNING--\n");
                printf(" Character pointer : %p\n" , pointerCharacter);
                printf(" Integer pointer :  %p\n" , pointerInteger);
                printf(" String pointer : %p\n" , pointerString);
                printf(" Floating point pointer : %p\n\n\n" , pointerFloat);

                pointerCharacter = &userCharacter;
                pointerInteger = &userInteger;
                pointerString = userString;
                pointerFloat = &userFloat;
                

                printf("--VALUES ENTERED--\n");
                printf("Character : %c\n", *pointerCharacter);
                printf("Integer : %d\n", *pointerInteger);
                printf("String : %s\n", pointerString);
                printf("Floating point : %f\n\n\n", *pointerFloat);

                printf("--ADDRESSES AFTER ASSIGNING--\n");
                printf(" Character pointer : %p\n" , pointerCharacter);
                printf(" Integer pointer :  %p\n" , pointerInteger);
                printf(" String pointer : %p\n" , pointerString);
                printf(" Floating point pointer : %p\n\n\n" , pointerFloat);

                getchar();

                iteration++;

        }

        return 0;

}