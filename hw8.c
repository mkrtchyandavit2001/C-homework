#include <stdio.h>

int main(){

	int year = 0;

	printf("Mutqagrel tarin: ");
	scanf("%d", &year);

	if(year % 4 == 0){
		printf("Tarin nahanj e: \n");
	}
	else{
		printf("Tarin nahanj che: \n");
	}
	
return 0;
}
