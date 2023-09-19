function calculateNthFibonacciEfficiently(n) {
    if (n <= 1) return n;

    let a = BigInt(0), b = BigInt(1);

    for (let i = 2; i <= n; i++) {
        let temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

let num = 1476;

let start = Date.now();  // Início da medição de tempo
let result = calculateNthFibonacciEfficiently(num);
let end = Date.now();  // Fim da medição de tempo

let executionTimeInSeconds = (end - start) / 1000;  // Calcula o tempo em segundos

console.log(`Fibonacci(${num}) = ${result.toString()}`);
console.log(`Execution time: ${executionTimeInSeconds} seconds`);
