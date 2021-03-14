#include <stdio.h>

int main() {
    int ns, nj, n = 0;
    scanf("%d %d", &ns, &nj);

    int simbolos[50] = { 0 };
    for (int i = 0; i < ns; i++) {
        simbolos[i] = i;
    }

    int simbColTotal[50] = { -1 };

    for (int i = 0; i < nj; i++) {
        int numSimbCol;
        scanf("%d", &numSimbCol);

        char simbColSpc[100] = { ' ' };
        scanf(" %[^\n]s", simbColSpc);

        for (int j = 0; j < numSimbCol * 2; j++) {
            if (simbColSpc[j] != ' ') {
                simbColTotal[n] = simbColSpc[j] - '0';

                for (int k = 0; k < ns; k++) {
                    if (simbColTotal[n] == simbolos[k])
                        simbolos[k] = -1;
                }
                n++;
            }
        }
    }

    printf("[");
    int matches = 0;
    for (int i = 0; i < ns; i++) {
        if (simbolos[i] != -1) {
            matches++;
            if (matches == 1)
                printf(" %d", simbolos[i]);
            else
                printf(", %d", simbolos[i]);
        }
    }
    if (matches > 0)
        printf(" ]");
    else 
        printf("]");
}