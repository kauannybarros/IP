//https://www.thehuxley.com/problem/4146?locale=pt_BR

#include <stdio.h>
int main () {
    long long int N, somaN, multiplo, multiComum, A, B, paA, paB, resultado;
    
    scanf("%lld", &N);
    scanf("%lld %lld", &A, &B);

    somaN = N * (N+1) /2;
    multiComum = (1 + N / (A * B)) * (N / (A * B)) * A * B / 2;
    paA = (1 + N/A) * (N/A) * A/2;
    paB = (1 + N/B) * (N/B) * B/2;
    multiplo = paA + paB;
    resultado = multiComum + somaN - multiplo;
    
   if (resultado % 2 == 0) {
       printf("%lld\nLá ele!!!\n", resultado);
   }
   else {
       printf("%lld\nOpa xupenio AULAS...\n", resultado);
   }
   return 0;
}
