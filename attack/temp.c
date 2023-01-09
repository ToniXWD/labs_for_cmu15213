#include "stdio.h"
#include "string.h"
#include "stdio.h"

int main()
{
    char *s[100];
    unsigned a = 0xf;
    sprintf(s,"%.4x",a);
    printf(s);
}