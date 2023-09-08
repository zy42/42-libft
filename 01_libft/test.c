#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main()
{
	char *testcases = "AaBZz01 .";
	while (*testcases)
	{
		char c = *testcases;
		char *result = (isalpha(c) == ft_isalpha(c)) ? "PASSED": "FAILED";
		printf("Input: %d; Expect: %d; Result: %d; Test: %s\n", c, isalpha(c), ft_isalpha(c), result);
		testcases++;
	}
}
