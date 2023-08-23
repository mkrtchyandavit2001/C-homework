#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;

	printf("Nermucel arajin tivy: ");
	scanf("%d", &num1);
	printf("Nermucel erkrord tivy: ");
	scanf("%d", &num2);

	printf("Amenamec tivn e: ");
	if(num1 > num2){
		printf("%d", num1);
	}
	else{
		printf("%d", num2);
	}

return 0;
}
