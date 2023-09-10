#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);

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

	printf("ft_isascii: \n");
        testcases = "1j89\nxc.";
        while (*testcases)
        {
                char c = *testcases;
                char *result = ((isascii(c) > 0) == (ft_isascii(c) > 0)) ? "PASSED": "FAILED";
                printf("Input: %d; Expect: %d; Result: %d; Test: %s\n", c, isascii(c), ft_isascii(c), result);                testcases++;
        }

	printf("ft_isprint: \n");
        testcases = "1s7F.P\n";
        while (*testcases)
        {
                char c = *testcases;
                char *result = ((isprint(c) > 0) == (ft_isprint(c) > 0)) ? "PASSED": "FAILED";
                printf("Input: %d; Expect: %d; Result: %d; Test: %s\n", c, isprint(c), ft_isprint(c), result);                testcases++;
        }

	printf("ft_strlen: \n");
        const char *str_arr[] = 
	{
		"First","Second","Third entry",NULL
	};
	int index = 0;
        while (str_arr[index] != NULL)
        {
                const	char *c = str_arr[index];
                char *result = (strlen(c) == ft_strlen(c)) ? "PASSED": "FAILED";
                printf("Input: %s; Expect: %ld; Result: %ld; Test: %s\n", c, strlen(c), ft_strlen(c), result);
		index++;
	}

	printf("ft_memset: \n");
	int c = 'X';
	void *dest = "test string";
	int n[7] = {5, 0,1,2,3,4, -1};
	index = 0;
        while (n[index] > 0)
        {
                size_t len = n[index];
                char *result = (memset(dest,c,len) == ft_memset(dest,c,len)) ? "PASSED": "FAILED";
                printf("Input: %c; Expect: %p; Result: %p; Test: %s\n", c, memset(dest,c,len), ft_memset(dest,c,len), result);
                index++;
        }
}
