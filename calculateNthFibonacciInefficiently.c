#include <stdio.h>   // This includes the standard input-output library, essential for functions like printf.
#include <time.h>    // This includes the library for time-related functions, used to measure execution time.
#include <stdint.h>  // This includes the library for fixed-width integer types, such as uint64_t.

// This defines a function named 'fibonacci'.
uint64_t fibonacci(uint64_t n) {
    // If 'n' is less than or equal to 1 (i.e., 0 or 1), it returns 'n' itself.
    if (n <= 1) return n;
    // Otherwise, it returns the sum of the two previous numbers in the Fibonacci sequence.
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// The main function that gets executed when the program starts.
int main() {
    uint64_t num = 35;  // Defines a variable named 'num' and assigns the value 35 to it.
    // 'uint64_t' indicates that 'num' is a 64-bit unsigned integer.
    // Defines variables to measure start and end time.
    clock_t start, end;
    double time_spent;  // Defines a variable to store the time taken.

    start = clock();    // Captures the current time (in clock ticks) and stores it in 'start'.

    // Calls the 'fibonacci' function to calculate the 35th number in the sequence.
    uint64_t result = fibonacci(num);

    end = clock();  // Captures the time after executing the fibonacci function.

    // Calculates the time taken in seconds.
    time_spent = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Prints the result and the time taken.
    printf("Fibonacci(%llu) = %llu\n", num, result);
    printf("Execution time: %f seconds\n", time_spent);

    return 0;  // Indicates successful completion of the program.
}

