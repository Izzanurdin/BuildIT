#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, hasil = 0;
    scanf("%i", &a);
    scanf("%i", &b);
    
    for(int i=a; i<=b; i++){
        hasil += i;
    }
    printf("%i", hasil);
    return 0;
}