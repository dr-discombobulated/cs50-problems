#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int changeremaining;

    do
    {
        changeremaining = get_int("Change owed: ");
    }
    while (changeremaining < 0);

    int answer = 0;
    int calculation;

    do
    {
        calculation = changeremaining / 25;
        answer = answer + calculation;
        changeremaining = changeremaining % 25;
    }
    while (changeremaining >= 25);

    do
    {
        calculation = changeremaining / 10;
        answer = answer + calculation;
        changeremaining = changeremaining % 10;
    }
    while (changeremaining >= 10);

    do
    {
        calculation = changeremaining / 5;
        answer = answer + calculation;
        changeremaining = changeremaining % 5;
    }
    while (changeremaining >= 5);

    do
    {
        calculation = changeremaining / 1;
        answer = answer + calculation;
        changeremaining = changeremaining % 1;
    }
    while (changeremaining >= 1);

    printf("%i\n", answer);
}