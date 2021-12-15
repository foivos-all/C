#include <stdio.h>

int main()
{
	int F0, F1, Fn, n, counter;
	
	printf("Give n: \n");
	scanf("%d", &n);
	
	F0 = 0;
	F1 = 1;
	
	printf("%d\t%d\t", F0, F1);
	
	for (counter = 2; counter < n; counter++)
	{
		Fn = F1 + F0;
		
		printf("%d\t", Fn);
		
		F0 = F1;
		F1 = Fn;
		
		if ((counter + 1) % 5 == 0)
			printf("\n");
			
		if (counter > 18)
			break;
	}
	
	return 0;
}
