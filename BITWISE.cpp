#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 2 values:");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND:%d\n",c);
    c=a|b;
	printf("Bitwise OR:%d\n",c);
	c=a^b;
	printf("Bitwise Ex-OR:%d\n",c);
    c=a<<b;
	printf("Bitwise Left shift:%d\n",c);
	c=a>>b;
	printf("Bitwise right shift:%d\n",c);
	return 0;
}
