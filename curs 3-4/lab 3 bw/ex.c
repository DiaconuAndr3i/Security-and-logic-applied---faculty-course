#include <stdio.h>

int main()
{

	int admin = 0;
	char buffer[10];
	gets (buffer);
	if (admin)
	{
		printf ("You are admin.\n");
	}
	else
	{
		printf ("You are not admin.\n");
	}
	return 0;
}
