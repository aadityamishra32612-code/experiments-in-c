#include <stdio.h>


struct complex {
    float real;
    float imag;
};


struct complex readComplex() {
    struct complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}


void writeComplex(struct complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}


struct complex addComplex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}


struct complex subComplex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("\nEnter second complex number:\n");
    c2 = readComplex();

    sum  = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\n--- Results ---\n");
    printf("First number : ");
    writeComplex(c1);

    printf("Second number: ");
    writeComplex(c2);

    printf("\nAddition      : ");
    writeComplex(sum);

    printf("Subtraction   : ");
    writeComplex(diff);

    return 0;
}
