#include <stdio.h>

int subseqMaiorInArray(int[], int);
int subseqMaiorInArray_(int[], int, int);

int main() {
    int n; // Número de elementos do array que será fornecido como entrada+
    scanf("%d", &n);

    int arr[n]; // Criando array de inteiros com n elementos+
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    printf("%d\n", subseqMaiorInArray(arr, n)); // A função leva como entrada o array e o número de elementos dele+

    return 0;
}

int subseqMaiorInArray(int arr[], int n) {
    subseqMaiorInArray_(arr, n, n); 
    /* Essa função chama outra função, pois precisamos de outro argumento, 
    que sera passado para o parametro que será manipulado para guardar todas as listas que serão percorridas, 
    que inicialmente será do mesmo tamanho do vetor, pois a maior sublista possível é o próprio vetor+*/
}

int subseqMaiorInArray_(int arr[], int n, int sub) { // Este parametro em questão se chama sub+
    static int soma = 0; 
    /* Uma variavel estática irá armazenar a maior soma, tem que ser estática pois 
    não queremos que ela seja reiniciada cada vez que recursivamente chamamos a função+*/
    if (sub >= 2) {
        int aux = 0; 
        /*Uma variável auxiliar é criada para realizar a soma da sublista atual e, 
        se for maior que a soma que anteriormente armazenamos como a maior, soma recebe o valor de aux+*/

        for (int i = 0; i <= (n - sub); ++i) {
            for (int j = i; j < (i + sub); ++j) {
                aux += arr[j];
            }
            if (aux > soma)
                soma = aux; // Desta forma garantimos que soma irá sempre receber o valor da maior soma da maior sublista+
            aux = 0;
        }
        
        --sub; // Iremos da maior sublista possível para a menor possível que é 2 (isso explica a condição do if superior)+
        return subseqMaiorInArray_(arr, n, sub); // Chamada recursiva para ir para a próxima sublisa+
    }
    return soma; // Retorna a maior soma da maior sublista
}