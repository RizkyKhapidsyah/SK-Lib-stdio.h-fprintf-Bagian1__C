#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* pFile;
    int n;
    char name[100];

    pFile = fopen("myfile.txt", "w");

    for (n = 0; n < 3; n++) {
        puts("Masukkan sebuah nama : ");
        gets(name);
        fprintf(pFile, "Name %d [%-10.10s]\n", n + 1, name);
    }

    fclose(pFile);

    _getch();
    return 0;
}