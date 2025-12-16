#include <stdio.h>

int main() {
	
	float usage;
	
	printf("Enter monthly water usage in Litres: ");
	scanf("%f", &usage);
	
	if (usage <= 3000) {
	
	printf("No Fine");
}
	else if (usage <= 5000) {
	
	printf("Fine = 200 PKR");
}
    else if (usage <= 7000) {
    	
    printf("Fine = 500 PKR");
	}
	else if (usage > 7000) {
	printf("Fine = 1000 + Wate Supply Restricted");
	}
	
	return 0;
}
