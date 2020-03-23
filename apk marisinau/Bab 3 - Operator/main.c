//* Listing 3.1 Oprs.C *//
/*
#include <stdio.h>
int main(void)
{
    int i = 5, j = 4, k, p;
    double f = 5.0, g = 4.0, h;

    k = i / j;
    h = f / g;
    p = i / g;

    printf("hasil dari 'k' = %d\n",k); // Menggunakan %d untuk menampilkan bilangan bulat ( int )
    printf("hasil dari 'h' = %f\n",h); // Menggunakan %f untuk menampilkan bilangan pecahan ( float dan double )
    printf("Hasil dari 'p' = %f\n",p);

    return 0;
}
*/

//* Listing  3.2 Casr.C *//

#include <stdio.h>
int main(void)
{
    int i = 5, j = 4;
    double f,g,h,k;

    f = (double)i / j;
    g = i / (double)j;
    h = (double)i / (double)j;
    k = (double) (i / j);

    printf("Hasil dari 'f' adalah = %f\n",f);
    printf("Hasil dari 'g' adalah = %f\n",g);
    printf("Hasil dari 'h' adalah = %f\n",h);
    printf("Hasil dari 'k' adalah = %f\n",k);

    return 0;
}
