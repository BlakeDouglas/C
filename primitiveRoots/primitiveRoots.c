// Program to find all primitive roots of n < 1000
// Created By: Blake Douglas

#include <stdio.h>
#include <math.h>

int main(void) 
{
  int n;
  int flag = 0;
  int rootN = 0;
  int primRoots[1000];
  int primSize = sizeof(primRoots) / sizeof(int);
  int holder = 1;
  int indexHolder = 0;
  int holderFlag = 0;

  // Get n value from user
  printf("Enter n: ");
  scanf("%d", &n);


  rootN = (int)sqrt(n);
  int small = 0;

  // Makes sure n is between 2 and 1000
  if (n < 2 || n > 1000) 
  {
    printf("Invalid input");
    return 0;
  }

  // Checks if n is prime
  for (int i = 2; i <= rootN; i++) 
  {
    if (n % i == 0) 
    {
      if (flag == 0) 
      {
        // Holds smallest divisor of n
        small = i;
      }
      flag = 1;
    }
  }

  // Sets all array vals to 0
  for (int i = 0; i < primSize - 1; i++) 
  {
    primRoots[i] = 0;
  }

  // If prime
  if (flag == 0) 
  {
    // Base
    for (int j = 2; j < n; j++) 
    {
      // Reset holder vals
      holder = 1;
      holderFlag = 0;
      // Exponent
      for (int i = 1; i < n - 1; i++) 
      {
        holder = (j * holder) % n;
        // If n is not unique
          if (holder == 1) 
            holderFlag = 1;
      }
      // If it's unique through all of its exponents
      if (holderFlag == 0) 
        primRoots[indexHolder++] = j;
    }

    // Prints primitive roots
    printf("%d is prime.\nIts primitive roots are: ", n);
    for (int i = 0; i < indexHolder; i++) 
      printf("%d ", primRoots[i]);
  }
  // If n is not prime
  else
    printf("%d is not prime. Its smallest non-trivial divisor is %d", n, small);


  return 0;
}