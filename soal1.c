#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double kecepatan, waktu, jarak;
    scanf("%lf", &jarak);
    scanf("%lf", &waktu);
    kecepatan = jarak/waktu;
    printf("%.3f", kecepatan);
    return 0;
}