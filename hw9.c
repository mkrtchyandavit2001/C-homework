#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;

	printf("Mutqagrel arajin tivy: ");
	scanf("%d", &num1);
	printf("Mutqagrel erkrord tivy: ");
        scanf("%d", &num2);

	if(num1 % num2 == 0 || num2 % num1 == 0){
		printf("Tvery karokh en bajanvel: \n");
	}
	else{
		printf("Tvery chen karokh bajanvel: \n");
	}

return 0;
}
