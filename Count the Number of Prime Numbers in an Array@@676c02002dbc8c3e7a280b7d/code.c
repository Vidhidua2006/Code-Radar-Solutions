#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n, count = 0;
    scanf("%d", &n); // Read the number of elements

    int arr[n]; // Declare the array to store n elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Loop through the array and check for prime numbers
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++; // Increment count for each prime number
        }
    }

    // Print the count of prime numbers
    printf("%d\n", count);
    return 0;
}
