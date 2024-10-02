int ft_str_is_alpha(char *str)
{
    int index;

    index = 0;
    while (str[index] != 0)
    {
        if (!(str[index] >= 'A' && str[index] <= 'Z'))
        {
            if (!(str[index] >= 'a' && str[index] <= 'z'))
            {
                return (0);
            }
        }
        index++;
    }
    return (1);
}

#include <stdio.h>
void run_test(char *input, int expected)
{
    int result = ft_str_is_alpha(input);
    if (result == expected)
        printf("Test passed!\n");
    else
        printf("Test failed!\n");

    printf("Input: \"%s\"\n", input);
    printf("Expected: %d, Got: %d\n\n", expected, result);
}

int main(void)
{
    char example1[] = "12523jalksjlNot only alhabet";
    char example2[] = "thisISonlyAlphabetere";
    char example3[] = "ThisIsNOTonlyAlphabet!";
    char example4[] = " thisisdefinitelynotonlyALPHABET";
    char example5[] = "hello";

    // Define expected outputs for each test case
    int expected1 = 0; // Not only alphabet, includes numbers
    int expected2 = 1; // Only alphabet
    int expected3 = 0; // Not only alphabet, includes '!'
    int expected4 = 0; // Not only alphabet, includes space
    int expected5 = 1; // Only alphabet

    // Run tests
    run_test(example1, expected1);
    run_test(example2, expected2);
    run_test(example3, expected3);
    run_test(example4, expected4);
    run_test(example5, expected5);

    return 0;
}