#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,kalan,max,b1,b2,b3,b4;

    sayi=10000;
    max=sayi;

    for(;max>0;max--){

        sayi=max;

        b1=max/1000;
        kalan=max%1000;

        b2=kalan/100;
        kalan=kalan%100;

        b3=kalan/10;
        kalan=kalan%10;

        b4=kalan;

        if(b1!=b2 && b1!=b3 && b1!=b4 &&
           b2!=b3 && b2!=b4 &&
           b3!=b4){
            printf("sonuc: %d",sayi);
            break;
           }

    }


    return 0;
}
