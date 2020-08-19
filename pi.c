// Bailey–Borwein–Plouffe formula for calculating pi.
// Vanaj Moorthy
// 12/06/2020

#include <stdio.h>
#include <math.h>

int main()
{
    printf("How many digits you want: ");
    int digits_of_pi;
    scanf("%d", &digits_of_pi);

    int count = 1;
    while (1)
    {
        double sum = 0;
        int n;

        for (n = 0; n <= count; n++)
        {
            sum += ((1 / pow(16, (double)n)) *
                    ((4 / (8 * (double)n + 1)) -
                     (2 / (8 * (double)n + 4)) -
                     (1 / (8 * (double)n + 5)) -
                     (1 / (8 * (double)n + 6))));
        }

        printf("%d : %.*f\n", count, digits_of_pi, sum);
        count++;
    }
    return 0;
}
