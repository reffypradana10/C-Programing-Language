//* Listing 4.1 Switch.C *//
/*
#include <stdio.h>

int main(void)
{
    char n = "E";
    printf("Masukkan sebuah nilai : ");
    scanf("%c",&n);
    printf("%c",n);
    switch(n)
    {
        case 'A':case 'a':
            printf(" : Nilai antara 80-100\n");
            break;
        case 'B':case 'b':
            printf(" : Nilai antara 70-80\n");
            break;
        case 'C':case 'c':
            printf(" : Nilai antara 60-70\n");
            break;
        case 'D':case 'd':
            printf(" : Nilai kurang dari 60\n");
            break;
        default : printf(" : Kriteria nilai tidak ada\n");
    }

    return 0;
}
*/

//* Listing 4.2 Loop.C *//

#include <stdio.h>
#include <math.h> // header file math.h digunakan untuk menghitung nilai sinus dari sebuah sudut dalam radian
#define PI 3.14

int main(void)
{
    double sudut;
    for (sudut = 0.0; sudut < PI;sudut += 0.5)
        printf("Sudut %.2lf = %2lf\n",sudut,sin(sudut));
    return 0;
}
