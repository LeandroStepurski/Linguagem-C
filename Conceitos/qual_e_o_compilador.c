#include <stdio.h>
int main() {
    #if defined(_MSC_VER)
        printf("Compilador: MSVC (Microsoft)\n");
    #elif defined(__clang__)
        printf("Compilador: Clang\n");
    #elif defined(__GNUC__)
        printf("Compilador: GCC/MinGW\n");
    #else
        printf("Compilador: Desconhecido\n");
    #endif
    return 0;
}