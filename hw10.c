#include <stdio.h>

int main(){

	char ch1 = 0;
	char ch2 = 0;

	printf("Mutqagrel arajin tary: ");
	scanf("%c", &ch1);
	printf("Mutqagrel erkrord tary: ");
	scanf("%c", &ch2);

	if(ch1 + 32 == ch2 || ch1 - 32 == ch2){
		printf("Sinvolnern artahaytum en nuyn tari mecatar ev poqrqtar tesqy: \n");
	}
	else{
		printf("Sinvolnern chen artahaytum nuyn tari mecatar ev poqrqtar tesqy: \n");
	}

return 0;
}
