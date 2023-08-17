#include <stdio.h>
#include "isupper.h"

int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    printf("%c: %d\n", lowercase, _isupper(lowercase));
    printf("%c: %d\n", uppercase, _isupper(uppercase));

    return 0;
}
