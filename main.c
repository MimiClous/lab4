#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_Array(int *array, int size);

void bubleSort(int *array, int size);
void selectSort(int *array, int size);
void print_table(double *times);
void quickSort(int *array, int size);


int main(){
    double *times = (double*)malloc(12 * sizeof(double));
    

    printf("Пузырьковая сортировка на 10 элементов\n");
    int size = 10;
    int *array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    clock_t start = clock();
    bubleSort(array, size);
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[0] = seconds;



    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    printf("Пузырьковая сортировка на 1000 элементов\n");
    size = 1000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);



    start = clock();
    bubleSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[1] = seconds;



    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    printf("Пузырьковая сортировка на 10000 элементов\n");
    size = 10000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    bubleSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[2] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    printf("Пузырьковая сортировка на 100000 элементов\n");
    size = 100000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    bubleSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[3] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);





    printf("Сортировка выбором на 10 элементов\n");
    size = 10;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);

    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[4] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Сортировка выбором на 1000 элементов\n");
    size = 1000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[5] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Сортировка выбором на 10000 элементов\n");
    size = 10000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[6] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Сортировка выбором на 100000 элементов\n");
    size = 100000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[7] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);




    printf("Быстрая сортировка на 10 элементов\n");
    size = 10;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);

    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[8] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Быстрая сортировка на 1000 элементов\n");
    size = 1000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[9] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Быстрая сортировка на 10000 элементов\n");
    size = 10000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[10] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Быстрая сортировка на 100000 элементов\n");
    size = 100000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);


    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[11] = seconds;


    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    print_table(times);













    return 0;
}

void fill_Array(int *array, int size){
    srand(time(NULL));
    for (int i = 0; i < size; i++){
        array[i] = rand() % size;
    }
}



void bubleSort(int *array, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void selectSort(int *array, int size) {
    for (int i = 0; i < size-1; i++){
        int min = i;
        for (int j = i+1; j < size; j++){
            if (array[j] < array[min]){
                min = j;
            }
        }
        if (min != i){
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
void quickSort(int *array, int size) {

    if (size <= 1) {
        return;
    }
    
    int pivot = array[size / 2];  
    int *left = (int*)malloc(size * sizeof(int));
    int *right = (int*)malloc(size * sizeof(int));
    int *middle = (int*)malloc(size * sizeof(int));
    
    if (left == NULL || right == NULL || middle == NULL) {
        printf("Ошибка выделения памяти!\n");
        free(left);
        free(right);
        free(middle);
        return;
    }
    
    int left_count = 0, right_count = 0, middle_count = 0;
    

    for (int i = 0; i < size; i++) {
        if (array[i] < pivot) {
            left[left_count++] = array[i];
        } else if (array[i] > pivot) {
            right[right_count++] = array[i];
        } else {
            middle[middle_count++] = array[i];
        }
    }
    
    quickSort(left, left_count);
    quickSort(right, right_count);
    
    int index = 0;
    
    for (int i = 0; i < left_count; i++) {
        array[index++] = left[i];
    }
    for (int i = 0; i < middle_count; i++) {
        array[index++] = middle[i];
    }
    for (int i = 0; i < right_count; i++) {
        array[index++] = right[i];
    }
    
    free(left);
    free(right);
    free(middle);
}

void print_table(double *times) {
    printf("+=========================+========================+=========================+\n");
    printf("|      Тип сортировки     |    Кол-во элементов    |    Время выполнения     |\n");
    printf("+=========================+========================+=========================+\n");
    printf("|                         |          10            |        %8.6f сек.    |\n", times[0]);
    printf("|                         +------------------------+-------------------------+\n");
    printf("|                         |         1000           |        %8.6f сек.    |\n", times[1]);
    printf("|  Пузырьковая сортировка +------------------------+-------------------------+\n");
    printf("|                         |        10 000          |        %8.4f сек.    |\n", times[2]);
    printf("|                         +------------------------+-------------------------+\n");
    printf("|                         |        100 000         |        %8.4f сек.    |\n", times[3]);
    printf("+=========================+========================+=========================+\n");
    printf("|                         |          10            |        %8.6f сек.    |\n", times[4]);
    printf("|                         +------------------------+-------------------------+\n");
    printf("|                         |         1000           |        %8.6f сек.    |\n", times[5]);
    printf("|   Сортировка выбором    +------------------------+-------------------------+\n");
    printf("|                         |        10 000          |        %8.4f сек.    |\n", times[6]);
    printf("|                         +------------------------+-------------------------+\n");
    printf("|                         |        100 000         |        %8.4f сек.    |\n", times[7]);
    printf("+=========================+========================+========================++\n");
    printf("|                         |          10            |        %8.6f сек.    |\n", times[8]);
    printf("|                         +------------------------+-------------------------+\n");
    printf("|                         |         1000           |        %8.6f сек.    |\n", times[9]);
    printf("+   Быстрая сортировка    +------------------------+-------------------------+\n");
    printf("|                         |        10 000          |        %8.4f сек.    |\n", times[10]);
    printf("|                         +------------------------+-------------------------+\n");
    printf("|                         |        100 000         |        %8.4f сек.    |\n", times[11]);
    printf("+=========================+========================+=========================+\n");
}


    
