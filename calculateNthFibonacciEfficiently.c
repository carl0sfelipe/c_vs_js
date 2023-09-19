#include <stdio.h>   // Include the standard input/output library for functions like printf.
#include <gmp.h>     // Include the GNU Multiple Precision arithmetic library for handling large numbers.
#include <time.h>    // Include the time library for measuring execution time.

// Define a function to calculate the nth Fibonacci number efficiently using GMP.
void calculateNthFibonacciEfficiently(mpz_t result, unsigned long n) {
    mpz_t a, b, temp;  // Declare three arbitrary precision integers: a, b, and temp.
    mpz_inits(a, b, temp, NULL);  // Initialize the integers.

    mpz_set_ui(a, 0);  // Set the value of 'a' to 0.
    mpz_set_ui(b, 1);  // Set the value of 'b' to 1.

    // Loop from 2 to n to compute the nth Fibonacci number.
    for (unsigned long i = 2; i <= n; i++) {
        mpz_add(temp, a, b);  // Add 'a' and 'b', and store the result in 'temp'.
        mpz_swap(a, b);       // Swap the values of 'a' and 'b'.
        mpz_set(b, temp);     // Set 'b' to the value of 'temp' (the sum of the previous 'a' and 'b').
    }

    mpz_set(result, b);  // Set the value of 'result' to 'b', which now contains the nth Fibonacci number.
    mpz_clears(a, b, temp, NULL);  // Clear the memory occupied by 'a', 'b', and 'temp'.
}

int main() {
    unsigned long num = 1476;  // Declare a variable 'num' and set its value to 1476.
    mpz_t result;              // Declare an arbitrary precision integer named 'result'.
    mpz_init(result);          // Initialize 'result'.

    clock_t start = clock();   // Capture the current clock ticks and store them in 'start'.
    calculateNthFibonacciEfficiently(result, num);  // Call the function to calculate Fibonacci(1476).
    clock_t end = clock();     // Capture the clock ticks after the function completes.

    // Calculate the time difference between 'start' and 'end' in seconds.
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    gmp_printf("Fibonacci(%lu) = %Zd\n", num, result);  // Print the result using gmp_printf.
    printf("Execution time: %f seconds\n", time_spent); // Print the execution time.

    mpz_clear(result);  // Clear the memory occupied by 'result'.
    return 0;           // Return 0 indicating successful completion of the program.
}
