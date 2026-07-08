// criador: Pedro Levi
// idade: 14
// nível em C: iniciante avançado
// data: 07/07/2026

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const char frase[] = {"frase usando const char!"};
    const int num_int[] = {10, 20, 30};
    const float num_float[] = {10.25, 20.50, 30.75};
    const bool verdadeiro_falso[] = {true, true, false};

    /*
    frase[0] = 'A'; // ERRO ❌
    num_int[0] = 15; // ERRO ❌
    num_float[0] = 40.22; // ERRO ❌
    verdadeiro_falso[0] = false; // ERRO ❌

    variáveis que contém 'const' não podem ser alteradas!
    */

    printf("nós vamos usar os 4 dados primitivos com const\n");
    printf("const char: %s\n", frase);
    printf("const int: %i, %i, %i\n", num_int[0], num_int[1], num_int[2]);
    printf("const float: %.2f, %.2f, %.2f\n", num_float[0], num_float[1], num_float[2]);
    printf("const bool: %d, %d, %d\n\n", verdadeiro_falso[0], verdadeiro_falso[1], verdadeiro_falso[2]);
    printf("analisando o endereço de memória da posição 0 da array\n");
    printf("const char: %c [0], 0x%p\n", frase[0], (void*)&frase[0]);
    printf("const int: %i [0], 0x%p\n", num_int[0], (void*)&num_int[0]);
    printf("const float: %.2f [0], 0x%p\n", num_float[0], (void*)&num_float[0]);
    printf("const bool: %d [0], 0x%p\n", verdadeiro_falso[0], (void*)&verdadeiro_falso[0]);

    system("pause");

    Beep(400, 500);

    MessageBoxW(NULL,
        L"Muito obrigado por usar meu código!",
        L"Espero que tenha gostado!",
    MB_OK | MB_ICONINFORMATION
    );

    return 0;
}




