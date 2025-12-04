#include <stdio.h>
#include <stdlib.h>

int main() {
	int *a;
	int length = 0;
	
	printf("Enter a number(length of array): ");
	scanf("%d", &length);

	a =  malloc(length * sizeof(int));
	
	printf("a: %p\n", a);

	for (int i = 0; i < length; i++) {
	printf("Enter element %d: ", i + 1);
	scanf("%d", a + i);
	}

	int largest = *a;
    
    for (int i = 1; i < length; i++) {
		if (*(a + i) > largest) {
        largest = *(a + 1);
 	       }
	}
    
    printf("The largest element is: %d\n", largest);
    

	free(a);

	return 0;
}
