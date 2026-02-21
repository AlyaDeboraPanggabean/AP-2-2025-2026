#include <stdio.h> // header standar untuk C
#include <conio.h>

int main () {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World !!\n"); // printf -> untuk fungsi output pada C

    printf("Masukkan nama : ");
    gets(nama); // gets -> get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); 

    getchar();

    printf("Masukkan kom : ");
    gets(kom);

    printf("Masukkan ip : ");
    scanf("%f", &ip);

    /* Ini untuk output */
    printf("Nama : ");
    puts(nama); // put string; untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch();
}