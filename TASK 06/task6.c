#include <stdio.h>

int main() {
	
	int monthly, days;
	printf("Enter mothly usage of waters (litres): ");
	scanf("%d", &monthly);
	printf("\nEnter number of days water was saved: ");
	scanf("%d", &days);
//	float usage = monthly / days;
	if (monthly < 2500 && days > 10) 
		printf("Bonus: 300 PKR discount");
	else 
	printf("No bonus");
	
	return 0;
}
