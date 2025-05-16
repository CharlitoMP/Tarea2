#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    //Crear la lista original 
int TAMANO = 0;
printf("Digite el tamaño de la lista: ");
scanf("%i", &TAMANO);
int lista[TAMANO];
srand(time(NULL));

for (int i = 0; i < TAMANO; i++) {
    lista[i] = (rand()%50) + 1;
// Utilizar el algoritmo Bubble Sort
}
clock_t incio_bubble_sort = clock();
int lista_algoritmo_bubble_sort[TAMANO];
for(int i = 0; i<TAMANO; i++){
    lista_algoritmo_bubble_sort[i] = lista[i];

}
for (int i = 0; i < TAMANO - 1; i++) {
    for (int j = 0; j < TAMANO - i - 1; j++) {
        if (lista[j] > lista[j + 1]) {
            
            int temp = lista[j];
            lista[j] = lista[j + 1];
            lista[j + 1] = temp;
        }
    }
    
}
clock_t fin_bubble_sort = clock();
    double tiempo_bubble_sort = (double)(fin_bubble_sort - incio_bubble_sort)/CLOCKS_PER_SEC;
printf("Lista Bubble Sort:\n");
    for (int i = 0; i < TAMANO; i++) {
        printf("%d ", lista[i]);
    }
    // Utilizar el algoritmo Selection Sort
    clock_t incio_Selection_sort = clock();
    int lista_algoritmo_selection_sort[TAMANO];
    for(int i= 0; i<TAMANO; i++){
        lista_algoritmo_selection_sort[i] = lista[i];
    }
        for (int i = 0; i < TAMANO - 1; i++) {
        int min_indi = i;
        for (int j = i + 1; j < TAMANO; j++) {
            if (lista[j] < lista[min_indi]) {
                min_indi = j;
            }
        }
        if (min_indi != i) {
            int temp = lista[i];
            lista[i] = lista[min_indi];
            lista[min_indi] = temp;
        }
    }
    clock_t fin_Selection_sort = clock();
    double tiempo_selection_sort = (double)(fin_Selection_sort - incio_Selection_sort)/CLOCKS_PER_SEC;
    printf("Lista Selection Sort:\n");
    for (int i = 0; i < TAMANO; i++) {
        printf("%d ", lista_algoritmo_selection_sort[i]);
    }
    // comparación de los algoritmos
    
    printf("Bubble Sort: %.6f segundos\n", tiempo_bubble_sort);
    printf("Selection Sort: %.6f segundos\n", tiempo_selection_sort);
return 0;
}
