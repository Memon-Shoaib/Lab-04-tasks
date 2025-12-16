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
	int usage;
	
	printf("\nEnter monthly water usage in Litres: ");
	scanf("%d", &usage);
	if (usage <= 3000)
	printf("Bill = 500 PKR\n");
	
	else 
	printf("Bill = 1000 PKR\n");
	
	if (usage <= 3000)
	printf("No Fine");
	else if (usage <= 5000) 
	
	printf("Fine = 200 PKR");
	
    else if (usage <= 7000) 	
    printf("Fine = 500 PKR");
	
	else if (usage > 7000) 
	printf("Fine = 1000 + Wate Supply Restricted");
	
	int days;
	
	printf("\nEnter number of days water was saved: ");
	scanf("%d", &days);
	if (usage < 2500 && days > 10) 
		printf("Bonus: 300 PKR discount");
	else 
	printf("No bonus");
	return 0;
}
