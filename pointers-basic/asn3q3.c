#include <stdio.h>


// Pointer arguments get values stored at the memory addresses the "point to" which
// modifies the variables in the main() function whose addresses were passed as arguments.
int smoothie_proportions(int n, int* strawberries, float* sugar, float* juice){

    // If n is not a positive number of smoothies, bail out and return an error indication.
	if ( n <= 0){
		return 1;
	}

	// Otherwise, modify the memory pointed to by the pointers so that they contain
	// the amounts of ingredients needed to make n smoothies.
	*strawberries = 12 * n;
	*sugar = 0.5 * n;
	*juice = 1.5 * n;

	return 0;
	
}

int main()
{
	int strawberries;
	float sugar;
	float juice;

	int result;
	int num_smoothies;

	printf("Enter the number of smoothies you would like: ");
	scanf("%d", &num_smoothies);

	result = smoothie_proportions(num_smoothies, &strawberries, &sugar, 
				      &juice);
		
	if (result == 0) {
		printf("You will need  %d strawberries,  %0.2f tsp sugar, and %0.2f cups of juice.\n", strawberries, sugar, juice);
	}
	else{
		printf("You chose an invalid number of smoothies!\n");
	}

	return 0;
}



