#include <stdio.h>
int main() {
	int arr[2][3][3] = {
    	{{2, 4, 5},
		{3, 2, 1},
		{1, 5, 6} 
		},
		{
		
		{5, 4, 3},
		{7, 6, 5},
		{9, 7, 6}
    	}
    	
	
};
int sum[2]= {0,0};
for (int page=0; page<2; page++) {
	for (int i=0; i<3;i++) {
		for (int j=0; j<3;j++) 
		sum[page] += arr[page][i][j];
	}
}
for (int page = 0; page < 2; page++) {
    printf("Sum of elements on page %d: %d\n", page+1, sum[page]);
    }

  return 0;
}
