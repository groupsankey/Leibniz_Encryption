#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int j = 0;

int faktoriyel(int sayi) {
    int faktoriyel = 1;
    if (sayi == 0) {
        return 1;
    }
    while (sayi !=1)
    {
        faktoriyel = faktoriyel * sayi;
        sayi--;
    }

    return faktoriyel;
}

int leibniz(int uzunluk, int kelime_uzunlugu) {


    int leibniz_sayilari=1 ;
    for (int i = 1; i <= uzunluk; i++)
    {
        leibniz_sayilari = leibniz_sayilari * (kelime_uzunlugu + i);
    }

    leibniz_sayilari/= faktoriyel(uzunluk - 1);
    return leibniz_sayilari;
}



int alfabeyeri(char harf) {
    if (harf == 'A' ) {
        return 1;
    }

    else if (harf == 'B') {
        return 2;
    }

    else if (harf == 'C') {
        return 3;
    }

    else if (harf -'0' == (-176) ) {
        return 4;
    }
    
    else if (harf == 'D' ) {
        return 5;
    }

    else if (harf == 'E') {
        return 6;
    }

    else if (harf == 'F') {
        return 7;
    }

    else if (harf == 'G' ) {
        return 8;
    }

    else if (harf-'0' == (-138)) {
        return 9;
    }

    else if (harf == 'H' ) {
        return 10;
    }

    else if (harf  == 'I' ) {
        return 11;
    }

    else if (harf - '0' == (-152) ) {
        return 12;
    }
    else if (harf == 'J' ) {
        return 13;
    }
    else if (harf == 'K') {
        return 14;
    }
    else if (harf == 'L' ) {
        return 15;
    }
    else if (harf == 'M' ) {
        return 16;
    }
    else if (harf == 'N' ) {
        return 17;
    }
    else if (harf == 'O' ) {
        return 18;
    }
    else if (harf -'0' == (-151) ) {
        return 19;
    }
    else if (harf == 'P' ) {
        return 20;
    }
    else if (harf == 'R' ) {
        return 21;
    }
    else if (harf == 'S') {
        return 22;
    }
    else if (harf -'0' == (-146) ) {
        return 23;
    }
    else if (harf == 'T') {
        return 24;
    }
    else if (harf == 'U' ) {
        return 25;
    }
    else if (harf - '0' == (-150) ) {
        return 26;
       
    }
    else if (harf == 'V' ) {
        return 27;
    }
    else if (harf == 'Y' ) {
        return 28;
    }
    else if (harf == 'Z') {
        return 29;
    }
}

char alfabecevirme(int harf) {
    if (harf == 1)
    {
        return 'A';
    }

    else if (harf == 2)
    {
        return 'B';
    }

    else if (harf == 3)
    {
        return 'C';
    }

    else if (harf == 4)
    {
        return 'Ç';
    }

    else if (harf == 5)
    {
        return 'D';
    }

    else if (harf == 6)
    {
        return 'E';
    }

    else if (harf == 7)
    {
        return 'F';
    }

    else if (harf == 8)
    {
        return 'G';
    }

    else if (harf == 9)
    {
        return 'Ğ';
    }

    else if (harf == 10)
    {
        return 'H';
    }

    else if (harf == 11)
    {
        return 'I';
    }

    else if (harf == 12)
    {
        return 'İ';
    }

    else if (harf == 13)
    {
        return 'J';
    }

    else if (harf == 14)
    {
        return 'K';
    }

    else if (harf == 15)
    {
        return 'L';
    }

    else if (harf == 16)
    {
        return 'M';
    }

    else if (harf == 17)
    {
        return 'N';
    }

    else if (harf == 18)
    {
        return 'O';
    }

    else if (harf == 19)
    {
        return 'Ö';
    }

    else if (harf == 20)
    {
        return 'P';
    }

    else if (harf == 21)
    {
        return 'R';
    }

    else if (harf == 22)
    {
        return 'S';
    }

    else if (harf == 23)
    {
        return 'Ş';
    }

    else if (harf == 24)
    {
        return 'T';
    }

    else if (harf == 25)
    {
        return 'U';
    }

    else if (harf == 26)
    {
        return 'Ü';
    }

    else if (harf == 27)
    {
        return 'V';
    }

    else if (harf == 28)
    {
        return 'Y';
    }

    else if (harf == 29)
    {
        return 'Z';
    }

}

int main()
{
    setlocale(LC_ALL, "Turkish");

    char* kelime;

    int leibnizsayilari[30], bolum[30];

    kelime = malloc(1024 * sizeof(char));
    scanf_s("%[^\n]", kelime);
    kelime = realloc(kelime, strlen(kelime) + 1);



    for (int k = 0; k < strlen(kelime); k++)

           {
                
                     leibnizsayilari[k] = leibniz(strlen(kelime), k);
                     leibnizsayilari[k] *= (strlen(kelime)-k)*alfabeyeri(kelime[k]); 
            }

        for (int k = 0; k < strlen(kelime); k++)
        {
            bolum[k] = leibnizsayilari[k] / 29;
            leibnizsayilari[k] = leibnizsayilari[k] % 29;
            printf("%c", alfabecevirme(leibnizsayilari[k]));
        }
    
   
}


