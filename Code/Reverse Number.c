#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;
	
	//take the input
    printf("Enter an integer: ");
    scanf("%d", &n);

	//while digits still exist
    while(n != 0)
    {
        remainder = n%10; //take the last digit
        reversedNumber = reversedNumber*10 + remainder; //reverse it
        n /= 10; //divide by 10 to discard the last digit
    }

    printf("Reversed Number = %d", reversedNumber); //print the result

    return 0;
}
