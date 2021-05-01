#include <stdio.h>

   #include <string.h>

   #include <ctype.h>

   // function to encode

   void encode(char* strng, int n) {

   int lenth = strlen(strng);

   int i;

   for(i = 0; i < lenth; ++i) {

       // shift alphabets in circular fashion

       if(islower(strng[i])) {

           int t = strng[i] - 97;

           int shift = (t + n) % 26;

           strng[i] = 97 + shift;

       }

       else if(isupper(strng[i])) {

           int t = strng[i] - 65;

           int shift = (t + n) % 26;

           strng[i] = 65 + shift;

       }

       else continue; // ignore characters other than alphabet

   }

   }

   // function to decode

   void decode(char* strng, int n) {

   int lenth = strlen(strng);

   int i;

   for(i = 0; i < lenth; ++i) {

       // shift alphabets in circular fashion

       if(islower(strng[i])) {

           int t = 122 - strng[i];

           int shift = (t + n) % 26;

           strng[i] = 122 - shift;

       }

       else if(isupper(strng[i])) {

           int t = 90 - strng[i];

           int shift = (t + n) % 26;

           strng[i] = 90 - shift;

       }

       else continue; // ignore characters other than alphabet

   }

   }