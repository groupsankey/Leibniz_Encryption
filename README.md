Leibniz_Encryption
This program converts letters of the Turkish alphabet to numbers and vice versa.

Prerequisites:
This program requires the following libraries to be installed:
stdio.h
math.h
stdlib.h
string.h
locale.h
Installation
Download the source code and compile it using a C compiler.

Usage:
After compiling the program, run it from the terminal or command prompt. The program will prompt you to choose a conversion method, either from letter to number or from number to letter.

If you choose letter to number, enter a letter from the Turkish alphabet, and the program will output the corresponding number.

If you choose number to letter, enter a number between 1 and 29, and the program will output the corresponding letter from the Turkish alphabet.

Functions:


faktoriyel:
int faktoriyel(int sayi);
This function calculates the factorial of an integer.
leibniz:
int leibniz(int uzunluk, int kelime_uzunlugu);
This function calculates the binomial coefficient using the Leibniz formula.
alfabeyeri:
int alfabeyeri(char harf);
This function converts a letter from the Turkish alphabet to a number.
alfabecevirme:
char alfabecevirme(int harf);
This function converts a number to a letter from the Turkish alphabet.

Examples:
printf("%d", alfabeyeri('A'));
// Output: 1

printf("%c", alfabecevirme(4));
// Output: Ç
