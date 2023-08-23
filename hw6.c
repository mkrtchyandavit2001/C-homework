#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
        int num3 = 0;

	printf("Mutqagrel arajin tivy: ");
	scanf("%d", &num1);
	printf("Mutqagrel erkrord tivy: ");
        scanf("%d", &num2);
	printf("Mutqagrel errord tivy: ");
        scanf("%d", &num3);

	if(num1 == num2 > num3 || num1 == num2 < num3){
	if(num1 > num3){
		printf("%d", num1);
	}
	else{
		printf("%d", num3);
	}
	}
	else if(num1 == num3 > num2 || num1 == num3 < num2){
	if(num1 > num2){
                printf("%d", num1);
        }
        else{
                printf("%d", num2);
        }
	}
	else if(num2 == num3 > num1 || num2 == num3 < num1){
        if(num2 > num1){
                printf("%d", num2);
        }
        else{
                printf("%d", num1);
        }
        }


return 0;
}
