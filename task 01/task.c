#include <stdio.h>

int main() {
	
	float usage;
	printf("Enter monthly water usage in Litres: ");
	scanf("%f", &usage);
	
	if (usage <= 3000)
	printf("Efficeint usage");
	else 
	printf("High usage detected");
	
	
	
	
	return 0;
}
