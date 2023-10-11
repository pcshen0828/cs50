#include <cs50.h>
#include <stdio.h>

int get_start_size(void);
int get_end_size(int start);
int get_years(int start, int end);
void print_years(int years);

int main(void)
{
    int start = get_start_size();

    int end = get_end_size(start);

    int years = get_years(start, end);

    print_years(years);
}

int get_start_size(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    return start;
}

int get_end_size(int start)
{
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    return end;
}

int get_years(int start, int end)
{
    int years = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    return years;
}

void print_years(int years)
{
    printf("Years: %i\n", years);
}
