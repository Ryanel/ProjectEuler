#include <stdio.h>
//Find all multiples of 3 to 5 and get the sum.
int main()
{
	int i=0;
	int total=0;
	while(i<1000)
	{
		// If i is divisible by 3 or 5
		if(i%3 == 0 || i%5 ==0 )
		{
			total+=i;
		}
		i++;
	}
	printf("Sum:%d\n",total);
}