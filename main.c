// Program to generate the first 150 prime numbers using the "Seive of Eraosthenes"

#include <stdio.h>

int main(void) {

  // Step 1: Define array of primes and initialize to 0
  int n = 150;
  unsigned int primes[n];
  // 0 and 1 are not prime numbers => prime numbers start at 2
  for (int i = 2; i <= n; i++)
    primes[i] = 0;

  // Step2: Set "i = 2"
  int i = 2;

  // Step3: If i > n algorithm terminates
  while (i <= n) {
    // Step4: If p[i] == 0; i is prime
    if (primes[i] == 0)
      printf("%d\n", i);

    // Step5: Set P[i*j] = 1
    for (int j = 1; i * j <= n; j++) {
      primes[i * j] = 1;
    }

    // Step 6: Add 1 to i and go to step 3
    i++;
  }
    
  return 0;
}