#include <stdio.h>
#include <stdint.h>
#include <time.h>

uint64_t calculateNthFibonacciEfficiently(uint64_t n) {
    if (n <= 1) return n;

    uint64_t a = 0, b = 1;

    for (uint64_t i = 2; i <= n; i++) {
        uint64_t temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    uint64_t num = 1476;

    clock_t start = clock();  // Início da medição de tempo
    uint64_t result = calculateNthFibonacciEfficiently(num);
    clock_t end = clock();  // Fim da medição de tempo

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;  // Calcula o tempo em segundos

    printf("Fibonacci(%llu) = %llu\n", num, result);
    printf("Execution time: %f seconds\n", time_spent);
    return 0;
}
