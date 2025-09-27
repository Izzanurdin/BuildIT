#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, hasil;
    scanf("%i", &N); 
    
    for(int i=1; i<=10; i++){
        hasil = N * i;
        printf("%i x %i = %i\n", N, i, hasil);
    }
        
    return 0;
}
