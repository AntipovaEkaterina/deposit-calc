#include <stdio.h> 

int check(int sum, int time)
{
	if ((sum >= 10000) && (time <= 365) && (time >= 0))
		return 1;
	return 0;
}

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
	while (check(sum, time)==0);

return 0;
}
