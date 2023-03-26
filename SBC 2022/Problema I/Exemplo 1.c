#include <stdio.h>
#include <string.h>

void main()
{
    char pwd[15];
    int i;
    char status = 'S';

    for (i = 0; i < 15; i++) {
        pwd[i] = getche();
        if(pwd[i] == '9')
            status = 'F';
    }

    printf("\n%c", status);

    return 0;
}

