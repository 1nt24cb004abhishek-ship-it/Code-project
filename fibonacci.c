#include <stdio.h>  // Include standard input-output library 
int main() { 
int n, i;        
// n = number of terms, i = loop counter 
int a = 0, b = 1, c; // Initialize first two Fibonacci numbers: a=0, b=1; c will store the next term 
printf("Enter number of terms: ");  // Ask user to input how many terms to print 
scanf("%d", &n);
 printf("Fibonacci series: ");
// Loop n times to generate Fibonacci numbers 
for(i = 1; i <= n; i++) { 
printf("%d ", a);    // Print current term 
c = a + b;
    
 a = b;
               // 
b = c;
 } 
               //
printf("\n");  // Print newline after series 
return 0;
 } 
      //
 