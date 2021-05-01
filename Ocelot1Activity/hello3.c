#include <stdio.h>
int main(int argc, char *argv[])
{
	int colorInteger;
	char colorsArr[4][10] ={
		"red",
		"blue",
		"yellow",
		"green"
	};

	if(argc==2){
	printf("what is your favorite color\n 1: red \n 2: blue \n 3: yellow \n 4: green \n");
	
	scanf("%d", &colorInteger);
	
	printf("My name is %s\n and my favorite color is %s", argv[1], colorsArr+(colorInteger-1)); 
	}
	if(argc==3){	
	printf("what is your favorite color\n 1: red \n 2: blue \n 3: yellow \n 4: green \n");
	
	scanf("%d", &colorInteger);
	
	printf("My name is %s %s\n and my favorite color is %s", argv[1] , argv[2], colorsArr+(colorInteger-1)); 
	}
	if(argc==4){
	printf("what is your favorite color\n 1: red \n 2: blue \n 3: yellow \n 4: green \n");
	
	scanf("%d", &colorInteger);
	
	printf("My name is %s %s %s\n and my favorite color is %s", argv[1],argv[2],argv[3], colorsArr+(colorInteger-1)); 
	}
	if(argc==1){
	printf("error missing parameters"); 
	}
	if(argc>4){
	printf("error too many names"); 
	}
	return 0;
}
