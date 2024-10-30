#include <stdio.h>
int main(){
	int sticks(int n){
		if(n%5==0){
			return -1;
		}else{
			return n%5;
	}
	}	
  int Yo;
	printf("enter the number of match sticks:");
	scanf("%d", &Yo);	
	int conclusion=sticks(Yo);	
	if(conclusion==-1)  {
		printf("It is impossible to win game ");
	}else{
		printf("You need to pick %d match sticks to win the game",conclusion);
	}
  return 0;
}