#include "triangulo.h" 

int equilatero(int a, int b, int c) {
    if (a == b && b == c) {
        return 1;
    }
    return 0;
}

int escaleno(int a, int b, int c) {
    if (a != b && a != c && b != c) {
        return 1;
    }
    return 0;
}

int isoceles(int a, int b, int c) {
    if ((a == b || a == c || b == c) && !equilatero(a, b, c)) {
        return 1;
    }
    return 0;
}
