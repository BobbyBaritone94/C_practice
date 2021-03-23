#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	if(argc<=2||argc>3){
	printf("Please provide only two names\n");
	}else{
		//Print name 10 times
		for(int i = 0; i<10;i++){
		printf("%s %s\n",argv[1],argv[2]);
		}
		//compare length of names
		if(strlen(argv[1])>strlen(argv[2])){
		printf("my first name is bigger than my last name.\n");		
		}else if(strlen(argv[2])>strlen(argv[1])){
		printf("my last name is bigger than my first name.\n");
		}else{
		printf("my first and last name have the same number of characters.\n");
		}
		
	}
	
}
