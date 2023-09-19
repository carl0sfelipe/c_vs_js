// This defines a function named 'fibonacci'.
function fibonacci(n) {
    // If 'n' is less than or equal to 1 (i.e., 0 or 1), it returns 'n' itself.
    if (n <= 1) return n;
    // Otherwise, it returns the sum of the two previous numbers in the Fibonacci sequence.
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// This defines a variable named 'num' and assigns the value 35 to it.
let num = 35;

// Captures the current time in milliseconds since January 1, 1970 (standard in JavaScript) and stores it in the 'start' variable.
let start = Date.now();

// Calls the 'fibonacci' function to calculate the 35th number in the sequence and stores the result in the 'result' variable.
let result = fibonacci(num);

// Captures the current time again, after executing the 'fibonacci' function.
let end = Date.now();

// Calculates the execution time in seconds by converting the time difference from milliseconds to seconds.
let executionTimeInSeconds = (end - start) / 1000;

// Prints the result and the execution time to the console.
console.log(`Fibonacci(${num}) = ${result}`);
console.log(`Execution time: ${executionTimeInSeconds} seconds`);

