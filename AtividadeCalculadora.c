#include <stdio.h>

int main()
{
    float num1, num2;
    char oper;

    do
    {
        printf("Operações Disponíveis\n");
        printf("'+' : soma\n");
        printf("'-' : subtração\n");
        printf("'*' : multiplicação\n");
        printf("'/' : divisão\n");
        printf("'%%' : resto da divisão\n");

        printf("\nDigite a expressão na forma: numero1 operador numero2\n");
        printf("Exemplos: 1+1, 2.1 * 3.1\n");
        printf("Para sair digite: 0 0 0\n");

        scanf("%f %c %f", &num1, &oper, &num2);

        if (num1 == 0 && oper == '0' && num2 == 0)
        {
            printf("Fechando calculadora!\n");
            break;
        }

        printf("Calculando: %.2f %c %.2f =", num1, oper, num2);

        switch (oper)
        {
        case '+':
            printf(" %.2f\n\n", num1 + num2);
            break;
        case '-':
            printf(" %.2f\n\n", num1 - num2);
            break;
        case '*':
            printf(" %.2f\n\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf(" %.2f\n\n", num1 / num2);
            else
                printf("Não existe divisão por 0\n\n");
            break;
        case '%':
            if (num2 != 0)
                printf(" %d\n\n", (int)num1 % (int)num2);
            else
                printf("Não existe resto de divisão por 0\n\n");
            break;
        default:
            printf("Operador inválido\n\n");
        }
    } while (1);

    return 0;
}
