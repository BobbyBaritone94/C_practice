   #include <stdio.h>

   #include <string.h>

   #include "encode.h"

   #define MAXIMUM 80 // maximum length of sentence

   int main() {

   // take input from console

   printf("Enter sentence followed by enter: ");

   char strng[MAXIMUM+1];

   fgets(strng, MAXIMUM, stdin);

   printf("Enter shift amount followed by enter: ");

   int n;

   scanf("%d", &n);

   // call encode funtion and print encoded sentence

   decode(strng, n);

   printf("Decoded sentence: %s", strng);

   }