#include <cstdlib>
#include <iostream>
#define MAXVEL 100
using namespace std;
struct student
{
       char ime[15];
       char prezime[10];
       int indeks;
       int vop,aplikativen,elektro,mat,jazik;
       float prosek;
};

int main(int argc, char *argv[])
{
     struct student spisok[MAXVEL];
    int velicina=0,izbor=-1;
    while(izbor!=0)
    {
    printf("Pritisni 1 za vnes, 2 za ispis, 3 za prebaruvanje, 0 za izlez: ");
    scanf("%d", &izbor);
    switch(izbor)
    {
    case 1:
    vnes(spisok,&velicina);
    break;
    case 2:
    ispis(spisok,velicina);
    break;
    case 3:
    prebaraj(spisok,velicina);
    break;
    case 0:
    break;
    default:
    printf("Pogreshen vnes!\n");
    }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
