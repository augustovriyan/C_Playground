#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE (1 << 20) // 1 MB

// Function to measure memory read speed
double measure_read_speed(int* array) {
    clock_t start_time = clock();
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        volatile int value = array[i];
        (void)value; // Prevents the compiler from optimizing the loop away
    }
    clock_t end_time = clock();

    return ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
}

// Function to measure memory write speed
double measure_write_speed(int* array) {
    clock_t start_time = clock();
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = i;
    }
    clock_t end_time = clock();

    return ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
}

int main() {
    int* array = (int*)malloc(ARRAY_SIZE * sizeof(int));

    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Measure read speed
    double read_time = measure_read_speed(array);
    printf("Memory read speed: %.6f seconds\n", read_time);

    // Measure write speed
    double write_time = measure_write_speed(array);
    printf("Memory write speed: %.6f seconds\n", write_time);

    free(array);

    return 0;
}
