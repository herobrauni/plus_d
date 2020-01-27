#include <stdio.h>
#include <cs50.h>
#include <string.h>

void he11o(void);


int main (void)
{
    he11o();
    return 0;
}

void he11o(void)
{
    string string = get_string("Name: ");
    printf("Hello %s!\n", string);
}