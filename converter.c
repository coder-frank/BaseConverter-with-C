#include <stdio.h>

#include <stdlib.h>

void convert(int num, int base) {

    char result[15];

    int count = 0;

    while (num != 0) {

        int r = num % base;

        num = num / base;

        result[count] = r + '0';  // Convert remainder to character

        count++;

    }

    // Print the result in reverse order

    for (int i = count - 1; i >= 0; i--) {

        printf("%c", result[i]);

    }

}

int main() {

    int num, base;

    printf("Welcome to Base Converter App\n");

    printf("Enter Number: ");

    scanf("%d", &num);

    printf("Enter Base: ");

    scanf("%d", &base);

    printf("\nThe conversion of %d to base %d = ", num, base);

    convert(num, base);

    printf("\n");

    return 0;

}
