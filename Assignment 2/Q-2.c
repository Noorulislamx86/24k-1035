#include <stdio.h>
#include <string.h>
void count(char slogan[]) {
	int number[128]={0};
	
	for (int i = 0 ; slogan[i] !='\0' ; i++){
		number[(int) slogan[i]]++;
	}
	printf("Variable %s :\n",slogan);	
	for(int a=0 ; a<128 ; a++){
		if (number[a] > 0)
		{
		printf("%c appears %d\n",a, number[a]);
			}
	}
	printf("\n");
 }
int main (){
	char slogan[3][100] = {"buy now", "save big", "limited offer"};
	
	for(int b=0 ; b<3 ; b++){
		count(slogan[b]);	
	}	
	return 0;
}