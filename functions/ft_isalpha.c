int ft_isalpha(int c)
{
    c = (char)c;
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

#include <stdio.h>
#include <ctype.h>
void run_tests(char input, int expected)
{
    int result = ft_isalpha(input);
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
    char example2 = 'A';
    char example3 = 'b';
    char example4 = '5';
    char example5 = ' ';

    int expected1 = isalpha(example1) ? 1 : 0;
    int expected2 = isalpha(example2) ? 1 : 0;
    int expected3 = isalpha(example3) ? 1 : 0;
    int expected4 = isalpha(example4) ? 1 : 0;
    int expected5 = isalpha(example5) ? 1 : 0;

    run_tests(example1, expected1);
    run_tests(example2, expected2);
    run_tests(example3, expected3);
    run_tests(example4, expected4);
    run_tests(example5, expected5);

    return 0;
}
