#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
n : nombre de disques utilisés
D : emplacement de départ
A : emplacement d'arrivée
I : emplacement intermédiaire
*/

void toursHanoi(int n, char D, char A, char I)
{

    if (n == 1)
    {
        printf("Disque 1 de %c a %c \n", D, A);
        return;
    }
    else
    {
        // D à A
        toursHanoi(n - 1, D, I, A);
        printf("Disque %d de %c a %c \n", n, D, A);
        // I à A
        toursHanoi(n - 1, I, A, D);
    }
}

int main()
{
    double temps;
    clock_t start, end;
    int nDisques = 3;

    start = clock();
    toursHanoi(nDisques, 'A', 'C', 'B');
    end = clock();
    temps = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Temps d'éxécution: %f secondes\n", temps);
}