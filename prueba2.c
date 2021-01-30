#include <stdio.h>
int main()
{
    char s;
    int y, w;
    do
    {
        printf( "\n   Introduzca un n%cmero entero: " );
        scanf( "%d", &w);
        printf( "\n   La tabla de multiplicar del %d es:\n", w );
        for ( y = 1 ; y <= 10 ; y++ )
            printf( "\n   %d * %d = %d", y, w, y * w );
        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ");
        fflush( stdin );
        scanf( "%c", &s );
    } while ( s !='n');
    return 0;
}
