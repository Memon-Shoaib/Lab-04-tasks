#include <stdio.h>

int main() {
	
	int f_mem, usage;
	printf("Enter family members: ");
	scanf("%d", &f_mem);
	printf("Enter monthly usage of Water (litres): ");
	scanf("%d", &usage);
	
	if (usage > 3000) {
		if (f_mem > 6)
		printf("Allowed large family exception");
		else
		printf("Fine applied");
	}
	
	
	
	
	return 0;
}
