#include <stdio.h>
#include <math.h>


int main() {
	float numbers[10] = { 4, 4,4,4,4,4,4,4,4,4};
	float average = 0;
	int i;
	for (i = 0;i < 10; i++) {
		average += sqrt(numbers[i]);
	}

	average = average / 10;

	printf("%f \n",average); 
	
	return 0;
}


