#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void return_max_min(int array[], int N, int *max, int *min){
    int f_max = array[0];
    int f_min = array[0];

    for (int i = 0; i < N; i++){
        if (array[i] >= f_max)
            f_max = array[i];
        else if (array[i] <= f_min)
            f_min = array[i];
    }   

    *max = f_max;
    *min = f_min;
}

void create_array(int array[], int N){
    srand(time(NULL));
    for (int i = 0; i< N; i++)
        array[i] = rand();
}

void print_array(int array[], int N){
    printf("{");
    for (int i = 0; i< N; i++){
        printf("%d ", array[i]);
    }
    printf("}\n");
}

int main(){
    int N = 5;
    int array[N];
    int *max = (int *)malloc(sizeof(int));
    int *min = (int *)malloc(sizeof(int));

    create_array(array, N);
    print_array(array, N);
    return_max_min(array, N, max, min);
    printf("Max: %d\n", *max);
    printf("Min: %d", *min);

    return 0;
}
