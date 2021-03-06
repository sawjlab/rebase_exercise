#include <stdio.h>
#include <stdlib.h>

#define MAXPRIME 1000

int main(){
  int *primes;			/* Odd numbers starting with 3 */
  int maxfactor;
  int factor;
  int j;

  printf("This is a program to compute prime nubmers using the\n");
  printf("Sieve of Eratosthenes\n");

  primes = malloc(sizeof(int)*MAXPRIME/2);

  for(i=3;i<MAXPRIME;i += 2) {
    int index = (i-3)/2;
    primes[index] = 1;
  }

  maxfactor = sqrt(double(MAXPRIME));

  for(factor=3;factor<=maxfactor;factor += 2) {
    int index = (factor-3)/2;
    if(primes[index]) {		/* Only need to seive of prime */
      for(j = factor;j*factor<MAXPRIME; j += factor) {
	int ind = (j-3)/2;
	primes[ind] = 0;
      }
    }
  }
}
	
