#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter a 5-digit number: ");
	scanf("%d",&n);
	int sum = 0;
	while(n!= 0)
	{
		rem=n%10;
		sum = sum+rem;
		n = n/10;
	}
	printf("Digit sum; %d", sum);
}
	
