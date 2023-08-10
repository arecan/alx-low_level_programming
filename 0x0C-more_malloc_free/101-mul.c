#include <stdlib.h>
#include <stdio.h>

int _isdigit(const char *argv)
{
    int i = 0;
    while (argv[i])
    {
        if (argv[i] >= '0' && argv[i] <= '9')
            i++;
        else
            return 1;
    }
    return 0;
}

int _atoi(const char *s)
{
    int i = 0, result = 0;
    while (s[i])
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result *= 10;
            result += (s[i] - '0');
        }
        i++;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int i;
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }
    for (i = 1; i < argc; i++)
    {
        if (_isdigit(argv[i]))
        {
            printf("Error\n");
            exit(98);
        }
    }
    return 0;
}

