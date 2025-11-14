#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_Array(int *array, int size);
void print_Array(int *array, int size, int limit);
void bubleSort(int *array, int size);
void selectSort(int *array, int size);
void print_table(double *times);

int main(){
    double *times = (double*)malloc(4 * sizeof(double));
    srand(time(NULL));

    // Тест с 10 элементами
    printf("Пузырьковая сортировка на 10 элементов\n");
    int size = 10;
    int *array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел\n");
    print_Array(array, size, size);

    clock_t start = clock();
    bubleSort(array, size);
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[0] = seconds;

    printf("Отсортированный массив чисел\n");
    print_Array(array, size, size);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    // Тест с 1000 элементами
    printf("Пузырьковая сортировка на 1000 элементов\n");
    size = 1000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    bubleSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[1] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    // Тест с 10000 элементами
    printf("Пузырьковая сортировка на 10000 элементов\n");
    size = 10000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    bubleSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[2] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    // Тест с 100000 элементами
    printf("Пузырьковая сортировка на 100000 элементов\n");
    size = 100000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    bubleSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[3] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);





    printf("Сортировка выборос на 10 элементов\n");
    size = 10;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[4] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Сортировка выборос на 1000 элементов\n");
    size = 1000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[5] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Сортировка выборос на 10_000 элементов\n");
    size = 10000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[6] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    
    printf("Сортировка выборос на 100_000 элементов\n");
    size = 100000;
    array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    fill_Array(array, size);
    printf("Изначальный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);

    start = clock();
    selectSort(array, size);
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    times[7] = seconds;

    printf("Отсортированный массив чисел (первые 20 элементов)\n");
    print_Array(array, size, 20);
    printf("Время выполнения: %f секунд\n\n", seconds);
    free(array);

    print_table(times);
    return 0;
}

void fill_Array(int *array, int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() % size;
    }
}

void print_Array(int *array, int size, int limit){
    int elements_to_print = (limit < size) ? limit : size;
    for (int i = 0; i < elements_to_print; i++){ 
        printf("%d)%d ", i, array[i]);
    }
    printf("\n");
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

void print_table(double *times) {
    printf("+=========================+========================+========================+\n");
    printf("|      Тип сортировки     |    Кол-во элементов    |    Время выполнения    |\n");
    printf("+=========================+========================+========================+\n");
    printf("| Пузырьковая сортировка  |          10            |        %f        |\n", times[0]);
    printf("+=========================+========================+========================+\n");
    printf("| Пузырьковая сортировка  |         1000           |        %f        |\n", times[1]);
    printf("+=========================+========================+========================+\n");
    printf("| Пузырьковая сортировка  |        10_000           |        %f        |\n", times[2]);
    printf("+=========================+========================+========================+\n");
    printf("| Пузырьковая сортировка  |       100_000           |        %f        |\n", times[3]);
    printf("+=========================+========================+========================+\n");
    printf("| Сортировка выбором      |          10            |        %f        |\n", times[4]);
    printf("+=========================+========================+========================+\n");
    printf("| Сортировка выбором      |         1000           |        %f        |\n", times[5]);
    printf("+=========================+========================+========================+\n");
    printf("| Сортировка выбором      |        10_000           |        %f        |\n", times[6]);
    printf("+=========================+========================+========================+\n");
    printf("| Сортировка выбором      |       100_000           |        %f        |\n", times[7]);
    printf("+=========================+========================+========================+\n");


    
}