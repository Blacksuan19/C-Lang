#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int sum, x;
	if (ch == 'A')
	{
		if (sum  > 1000)
		{
			x = x + 1;
		}
	}
	if (ch == 'P')
	{
		if (sum  <= 1000)
		{
			x = x + 2;
		}
	}
	if (ch == 'F')
	{
		if (sum  > 1000)
		{
			x = x + 3;
		}
	}
	return 0;
}