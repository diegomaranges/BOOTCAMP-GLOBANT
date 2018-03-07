#include <stdio.h>
//#include <math.h>

#define MAX(a, b) a > b ? a : b
#define ERROR(code, msg) logError(__FILE__, __LINE__, code, msg);

void logError(const char* file, int line, int code, const char*msg) {
printf("Error en el archivo %s, línea %u. Código %u: %s\n",
file, line, code, msg);
}




int fibonacci(int n) {
    if (n < 0)
    {
        ERROR(20, "Parámetro inválido");
        return 0;
    }
    else
    {
        switch (n) {
            case 0:
                return 0;
            case 1:
                return 1;
            case 2:
                return 1;
            default:
                return fibonacci(n-1) + fibonacci(n-2);
        }
    }
}

int f ()
{
    return 3;
}

int main()
{
    int x = 3;
    int m = MAX(x, f() + 1) * 2;
    m = fibonacci(m);
    printf("Hello World!\n %d \n", m);
    m = fibonacci(-1);
    return 0;
}
