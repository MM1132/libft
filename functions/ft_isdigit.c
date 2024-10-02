int ft_isdigit(int c)
{
    c = (char)c;
    return c >= '0' && c <= '9';
}

#include <stdio.h>
#include <ctype.h>
void run_tests(char input, int expected)
{
    int result = ft_isdigit(input);
    if (result == expected)
        printf("Test passed!\n");
    else
        printf("Test failed!\n");

    printf("Input: \"%c\"\n", input);
    printf("Expected: %d, Got: %d\n\n", expected, result);
}

int main(void)
{
    char example1 = 'a';
    int expected1 = isdigit(example1) ? 1 : 0;

    char example2 = 'A';
    int expected2 = isdigit(example2) ? 1 : 0;

    char example3 = '1';
    int expected3 = isdigit(example3) ? 1 : 0;

    char example4 = '5';
    int expected4 = isdigit(example4) ? 1 : 0;

    char example5 = ' ';
    int expected5 = isdigit(example5) ? 1 : 0;

    run_tests(example1, expected1);
    run_tests(example2, expected2);
    run_tests(example3, expected3);
    run_tests(example4, expected4);
    run_tests(example5, expected5);

    return 0;
}
