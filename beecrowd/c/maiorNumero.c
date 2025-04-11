#include <stdio.h>

double biggerThan(double numbers[])
{
    int wasSwapped = 0;

    do
    {
        wasSwapped = 0;
        for (int i = 0; i < 2; i++)
        {
            if (numbers[i] < numbers[i + 1])
            {
                double tmp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = tmp;
                wasSwapped = 1;
            }
        }

    } while (wasSwapped);

    return numbers[0];
}

int main()
{
    double numbers[3], bigger;
    scanf("%lf %lf %lf", &numbers[0], &numbers[1], &numbers[2]);
    bigger = biggerThan(numbers);

    printf("%0.lf eh o maior\n", bigger);

    return 0;
}