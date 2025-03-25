#include "stack.h"
#include <stdio.h>

int main() {
    int num;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &num);
    
    printf("Hasil konversi ke biner: ");
    DecimalToBinary(num);
    
    return 0;
}