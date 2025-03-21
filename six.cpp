#include <stdio.h>


void binaryToOctal(long long binary) {
    int octal = 0, decimal = 0, base = 1;

   
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }

   
    base = 1;
    while (decimal > 0) {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal number: %d\n", octal);
}

int main() {
    long long binary;

  
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

 
    binaryToOctal(binary);
    printf("\n\n KRISHKUMAR \n 24DCE027");
    return 0;
}
