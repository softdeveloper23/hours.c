#include "cs50.h"
#include <stdio.h>

float calc_hours(int d, int num_weeks, int weeks[]);

int main(void)
{
    int num_weeks = get_int("Number of weeks taking CS50: ");
    int weeks[num_weeks];

    for (int i = 0; i < num_weeks; i++)
    {
        printf("Week %i HW Hours: ", i);
        scanf("%d", &weeks[i]);
    }
    char data;
    do
    {
        data = get_char("Enter T for total hours, A for average hours per week: ");
    } while (data != 'T' && data != 'A');

    printf("%.1f hours \n", calc_hours(data, num_weeks, weeks));
}

float calc_hours(int d, int num_weeks, int weeks[])
{
    float total_hours = 0;
    float average = 0;

    for (int i = 0; i < num_weeks; i++)
    {
        total_hours += weeks[i];
    }

    if (d == 'T')
    {
        return total_hours;
    }
    else if (d == 'A')
    {
        return average = (total_hours / num_weeks);
    }
    else
    {
        // Default return value
        return 0;
    }
}
