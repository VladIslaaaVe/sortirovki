#include <stdio.h>
#include <stdlib.h>

void method2(int n, int mass[])
{
    int newElement, location;

    for (int i = 1; i < n; i++)
    {
        newElement = mass[i];
        location = i - 1;
        while (location >= 0 && mass[location] > newElement)
        {
            mass[location + 1] = mass[location];
            location = location - 1;
        }
        mass[location + 1] = newElement;
    }
}

int main()
{
    int N;
    printf("Input N: ");
    scanf_s("%d", &N);

    int* mass;
    mass = (int*)malloc(N * sizeof(int));

    printf("Input the array elements:\n");
    for (int i = 0; i < N; i++)
        scanf_s("%d", &mass[i]);

    method2(N, mass);

    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");

    free(mass);
    return 0;
}
