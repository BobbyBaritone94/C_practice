
#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc==2){
	printf("Hello World, my name is %s\n ", argv[1]);
	}
	if(argc==3){
	printf("Hello World, my name is %s %s\n ",argv[1], argv[2]);
	}
	if(argc==4){
	printf("Hello World, my name is %s %s %s\n ",argv[1], argv[2], argv[3]);
	}
	if(argc>4){
	printf("Too many names provided. The max is three.");
	}
	if(argc==1){
		printf("No name provided by user");
	}

	return 0;
}

