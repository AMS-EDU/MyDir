#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int arr[10];

	printf("Input 10 elements in the array :\n");

	for(int i = 0; i < 10; i++){
		printf("element - %d: ", i);
		scanf("%d", &arr[i]);
	}

	printf("\nElements in array are: ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", arr[i]);


	printf("\n");
	return 0;
}