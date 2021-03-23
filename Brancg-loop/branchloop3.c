
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
if(argc==4){

	int printTimes = atoi(argv[3]);
	int fiSize= strlen(argv[1]);
	int laSize= strlen(argv[2]);	
	int totalSize=fiSize+laSize;
	char first[50];
	strcpy(first,argv[1]);
	char last[50];
	strcpy(last,argv[2]);
	char firstRev[50];
	char lastRev[50];
		//Print name specified times
	if(printTimes!=0){	
	int i = 0;
	       	do{
			i++;
			printf("%s %s\n",first,last);
		
		}while(i<printTimes);
	}
		//make letters lower case 
		for(int j =0;j< strlen(first);j++){
			
			if(first[j]>='A' && first[j]<='Z'){
		
				first[j]=first[j]+32;
			}
		}
		
		for(int j =0;j< strlen(last);j++){
			
			if(last[j]>='A' && last[j]<='Z'){
	
				last[j]=last[j]+32;
			}
		}
	

		//reverse the words
		for(int i = 0; i<=fiSize;i++){
		firstRev[i]=first[fiSize-1-i];
		}

		for(int i=0;i<=laSize;i++){
		lastRev[i]=last[laSize-1-i];
		}
		
		printf("%s %s %d \n", lastRev, firstRev , totalSize);
}else{
	printf("Error-invalid arguements\n Please enter a first and last name seperated by a space \nwhen calling the program");
}

return 0;
}
