#include <stdio.h>
#include "deposit.h"

int main()
{
	int sum, time;
	do 
	{
		printf("\nInput deposit amount:");
		scanf("%d", &sum);
		printf("Input amount of days:");
		scanf("%d", &time);
	} 
	while (check(sum, time) == 0);
	printf("%.2f\n", calc(sum, time));

return 0;
}
