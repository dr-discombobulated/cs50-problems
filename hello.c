# include <stdio.h>
# include <cs50.h>

int main(void)
{
    string name = get_string("name, please.\n");
    printf("hello, %s\n", name);
}