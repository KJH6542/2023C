#include <stdio.h>

int main()
{
	struct str
	{
		int num1;
		int num2;
	};
	struct str s;
	s.num1 = 3;
	s.num2 = 4;
	int sum = s.num1 + s.num2;
	printf("sum = %d",sum);
}
