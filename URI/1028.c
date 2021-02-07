#include <stdio.h>

// Aluno: João Pedro Silva de Queiroz
// Questão: URI - 1028

int main()
{
    int n, i;
    scanf("%i", &n);
    for (i = 0; i < n; ++i)
    {
        int f1, f2;
        scanf("%i %i", &f1, &f2);

        while (f1 != f2)
        {
            if (f1 > f2)
                f1 -= f2;
            else
                f2 -= f1;
        }
        printf("%i\n", f1);
    }
    return 0;
}