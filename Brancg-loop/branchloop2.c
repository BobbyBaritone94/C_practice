#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc<2){
	printf("Please provide two names, followed by a number\n");
	}else if(!((argv[2][1]>='A' && argv[2][1]<='z') || (argv[1][1]>='A' && argv[1][1] <='z'))){
	printf("Error-missing a name");
	}else{
	
	char target ='?';
	int index = atoi(argv[3]);
	int fiSize= strlen(argv[1]);
	int laSize= strlen(argv[2]);	
	char first[50];
	strcpy(first,argv[1]);
	char last[50];
	strcpy(last,argv[2]);

	




		//Print name 10 times
		for(int i = 0; i<10;i++){
		printf("%s %s\n",first,last);
		}
		//compare length of names
		if(strlen(first)>strlen(last)){
		printf("my first name is bigger than my last name.\n");		
		}else if(strlen(first)<strlen(last)){
		printf("my last name is bigger than my first name.\n");
		}else{
		printf("my first and last name have the same number of characters.\n");
		}

			
		//find the letter given by the index
		
		for(int i = 0; i<(fiSize+laSize);i++){
	
		if((i+1)==index){
			
			if(index>strlen(first)){
			target= last[index-strlen(first)-1];
				
			}else{
			target= first[index-1];

			}
		
		}
		}
		
		
	

		//if the index is too long the above loop will not assign a value to target  
		if(target=='?'){
		printf("Error-index too long\n");
		}else{
		//Make first and last name upper case
		
	

		for(int i=0;i< strlen(argv[1]);i++){
	
		if(first[i]>='a' && first[i]<='z'){

			first[i]=first[i]-32;
		}

		}



		
		
		for(int j =0;j< strlen(last);j++){
			
		if(last[j]>='a' && last[j]<='z'){
		
			last[j]=last[j]-32;
		}

		}
		
		printf("%s %s %d %c\n", first, last, index, target);

		}

	}

return 0;
}
