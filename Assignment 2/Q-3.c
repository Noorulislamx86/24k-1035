#include <stdio.h>
#include <string.h>

void variable(char var[] , char svar[]){
int a=0;
	svar[a++]= var[0];
	for(int i = 1 ; var[i]!= '\0' ; i++)  {
		if (var[i] != var[i-1]) {
			svar[a++]=var[i];
	}
	 }
		svar[a]!='\0';
	}
   int main(){
   char var[3][20]= {"booooook", "coooool", "heeeey"};
   char svar[3][20];
   for(int b=0 ; b<3 ; b++){
   	variable(var[b],svar[b]);
   	printf("compressed word are %s\n", svar[b]);
   }
     return 0;
}