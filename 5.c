#include <stdio.h>
#include <cs50.h>
#include <string.h>

string he11o(void);
void hello(string string);


int main (void)
{
    string string = he11o();
    hello(string);
    return 0;
}

string he11o(void)
{
    string string = get_string("Name: ");
    return string;
}

void hello(string string)
{
    printf("Hello %s!\n", string);
}