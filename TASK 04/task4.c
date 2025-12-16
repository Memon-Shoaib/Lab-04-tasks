#include <stdio.h>

int main() {
	
	int category;
	
	printf("Enter your category (1-4):");
	scanf("%d", &category);
	switch (category) {
		
		case 1:
			printf("low usage household");
			break;
		case 2:
		printf("Average Household");
		break;
		case 3:
		printf("High usage household");
		break;
		case 4:
		printf("Excessive usage household");
		break;
		default:
		printf("invalid category code");	
	}
	
	
	
	return 0;
}
