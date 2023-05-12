#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void method1(int n, int mass[], int sortedMass[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mass[i] > mass[j])
                k++;
        }
        sortedMass[k] = mass[i];
    }
}

int main()
{
    int N;
    printf("Input N: ");
    scanf_s("%d", &N);
    
    int* mass, * sortedMass;
    mass = (int*)malloc(N * sizeof(int));
    sortedMass = (int*)malloc(N * sizeof(int));
    
    printf("Input the array elements:\n");
    for (int i = 0; i < N; i++)
        scanf_s("%d", &mass[i]);
    
    method2(N, mass, sortedMass);
    
    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", sortedMass[i]);
    printf("\n");
    
    free(mass);
    free(sortedMass);
    _getch();
    return 0;
}
