#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

int	main()
{
	char *testcases = "AaBZz01 .";
	printf("ft_isalpha: \n");
	while (*testcases)
	{
		char c = *testcases;
		char *result = ( (isalpha(c) > 0) == (ft_isalpha(c) > 0)) ? "PASSED": "FAILED";
		printf("Input: %d; Expect: %d; Result: %d; Test: %s\n", c, isalpha(c), ft_isalpha(c), result);
		result = (isdigit(c) == ft_isdigit(c)) ? "PASSED": "FAILED";
		testcases++;
	}
	printf("ft_isdigit: \n");
	testcases = "1s7F. ";
	while (*testcases)
        {
                char c = *testcases;
                char *result = ((isdigit(c) > 0) == (ft_isdigit(c) > 0)) ? "PASSED": "FAILED";
                printf("Input: %d; Expect: %d; Result: %d; Test: %s\n", c, isdigit(c), ft_isdigit(c), result);                testcases++;
        }

	printf("ft_isalnum: \n");
        testcases = "1s7F.P ";
        while (*testcases)
        {
                char c = *testcases;
                char *result = ((isalnum(c) > 0) == (ft_isalnum(c) > 0)) ? "PASSED": "FAILED";
                printf("Input: %d; Expect: %d; Result: %d; Test: %s\n", c, isalnum(c), ft_isalnum(c), result);                testcases++;
        }
}
