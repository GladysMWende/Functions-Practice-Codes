#include <stdio.h>

void modify(int num1)
{
	num1 = num1 + 1;
}

int main()
{
	int num1 = 10;

	printf("Before Modification\n");
	printf("num1 is %d\n", num1);

	modify(num1);

	printf("After Modification\n");
	printf("num1 is %d\n", num1);

	return 0;
}

#include <stdio.h>

int modify(int num1)
{
	num1 = num1 + 1;
	return num1;
}

int main()
{
	int num1 = 10;

	printf("Before Modification\n");
	printf("num1 is %d\n", num1);

	num1 = modify(num1);

	printf("After Modification\n");
	printf("num1 is %d\n", num1);

	return 0;
}


#include <stdio.h>

void modify(int num1, int num2)
{
	num1 = num1 + 1;
	num2 = num2 + 1;
}

int main()
{
	int num1 = 10, num2 = 20;

	printf("Before Modification\n");
	printf("num1 is %d num2 is %d\n", num1, num2);

	modify(num1, num2);

	printf("After Modification\n");
	printf("num1 is %d num2 is %d\n", num1, num2);

	return 0;
}


#include <stdio.h>

int modify(int num1, int num2)
{
	num1 = num1 + 1;
	num2 = num2 + 1;
	return num1;
	return num2;
}

int main()
{
	int num1 = 10, num2 = 20;

	printf("Before Modification\n");
	printf("num1 is %d num2 is %d\n", num1, num2);

	num1, num2 = modify(num1, num2);

	printf("After Modification\n");
	printf("num1 is %d num2 is %d\n", num1, num2);

	return 0;
}




