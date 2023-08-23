#include <stdio.h>

int main(){

	char sym = 0;
	
	printf("Nermucel mecatar: ");
	scanf("%c", &sym);

	if(sym >= 65 && sym <= 90){
		printf("Dzer nermucac tari poqratarn e: ");
		printf("%c \n", sym + 32);
	}

return 0;
}
