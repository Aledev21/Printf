#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

void minha_printf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);  // Usando vprintf para simplificar a implementação
    va_end(args);
}

int main() {
    int num = 42;
    char c = 'A';
    char* str = "Hello, World!";
    void* ptr = (void*)&num;
    unsigned int uNum = 3000000000;

    // Teste de impressão de caracteres
    printf("Testando %%c:\n");
    printf("Printf padrão: Character: %c\n", c);
    minha_printf("Minha printf: %c\n\n", c);

    // Teste de impressão de strings
    printf("Testando %%s:\n");
    printf("Printf padrão: String: %s\n", str);
    minha_printf("Minha printf: %s\n\n", str);

    // Teste de impressão de ponteiros
    printf("Testando %%p:\n");
    printf("Printf padrão: Pointer: %p\n", ptr);
    minha_printf("Minha printf: %p\n\n", ptr);

    // Teste de impressão de inteiros
    printf("Testando %%d:\n");
    printf("Printf padrão: Number: %d\n", num);
    minha_printf("Minha printf: %d\n\n", num);

    // Teste de impressão de inteiros (base 10)
    printf("Testando %%i:\n");
    printf("Printf padrão: Integer: %i\n", num);
    minha_printf("Minha printf: %i\n\n", num);

    // Teste de impressão de unsigned
    printf("Testando %%u:\n");
    printf("Printf padrão: Unsigned: %u\n", uNum);
    minha_printf("Minha printf: %u\n\n", uNum);

    // Teste de impressão em hexadecimal (minúsculo)
    printf("Testando %%x:\n");
    printf("Printf padrão: Hex: %x\n", num);
    minha_printf("Minha printf: %x\n\n", num);

    // Teste de impressão em hexadecimal (maiúsculo)
    printf("Testando %%X:\n");
    printf("Printf padrão: Upper Hex: %X\n", num);
    minha_printf("Minha printf: %X\n\n", num);

    // Teste de impressão de símbolo de porcentagem
    printf("Testando %%%%:\n");
    printf("Printf padrão: Percent: %%\n");
    minha_printf("Minha printf: %%\n");

    return 0;
}
