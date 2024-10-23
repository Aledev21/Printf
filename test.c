#include <stdio.h>
#include "libprintf.h"

void run_test(const char *format, ...) {
    va_list args;

    // Chama printf original
    printf("Original: ");
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    
    // Chama sua função ft_printf
    printf("\nCustom:   ");
    va_start(args, format);
    ft_printf(format, args);
    va_end(args);
    
    printf("\n------------------------------------\n");
}

int main() {
    // Testes simples
    run_test("Hello, %s!", "World");
    run_test("Character: %c", 'A');
    run_test("Integer: %d", 42);
    run_test("Pointer: %p", (void*)&main);
    run_test("String: %s, Char: %c", "Test", 'B');
    run_test("Hexadecimal: %p", (void*)0x12345678);
    run_test("Negative Integer: %d", -12345);
    run_test("Multiple types: %s %d %c", "Sample", 10, 'C');

    return 0;
}
