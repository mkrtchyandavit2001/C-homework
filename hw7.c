#include <stdio.h>

int main(){

	int num1 = 0;
        int num2 = 0;
        int num3 = 0;
	int num4 = 0;
	int min = 0;

	printf("Nermucel arajin tivy: ");
	scanf("%d", &num1);
	printf("Nermucel erkrord tivy: ");
        scanf("%d", &num2);
	printf("Nermucel errord tivy: ");
        scanf("%d", &num3);
	printf("Nermucel chorrord tivy: ");
        scanf("%d", &num4);

	int result = num1 + num2 + num3 + num4;

	if(result == 0){

		min = num1;

		if(min < num2){
			min = num2;
		}
		else if(min < num3){
			min = num3;
		}
		else if(min < num4){
			min = num4;
		}
		/*else if(min < num4){
			min = num4;
		}*/
		printf("%d", min);
	}


return 0;
}
