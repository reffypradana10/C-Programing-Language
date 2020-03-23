//* Listing 5.1 Fungsi.C *//

#include <stdio.h>

/* prototipe */
int is_negative(double);

/* untuk menghitung luas segiempat */
double luas_segiempat(double,double);
int main(void)
{
    double P = 100,L = 10, luas;
    if (!is_negative(P) && !is_negative(L))
    {
        luas = luas_segiempat(P,L);
        printf("Luas = %.2lf\n",luas);
    }else
        printf("Nilai masukkan harus positif\n");
    return 0;
}
/* definisi */
int is_negative(double value)
{
    return value < 0;
}
double luas_segiempat(double panjang,double lebar)
{
    return panjang * lebar;
}
