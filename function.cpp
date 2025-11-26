#include<stdio.h>
void eo();
int main()
{
eo();
eo();
eo();
eo();
eo();
return 0;	
}
void eo()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	printf("Number is Even");
	else
	printf("Number is Odd");
}
