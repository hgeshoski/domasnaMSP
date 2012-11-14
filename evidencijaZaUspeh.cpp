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

void sortiranje(struct student* niza,int vel)
{
     int i,j;
     for(i=0;i<(vel-1);i++)
     for(j=i+1;j<vel;j++)
     {
     int prez=strcmp(niza[i].prezime,niza[j].prezime);
     int ime=strcmp(niza[i].ime,niza[j].ime);
     if(prez>0 ||(prez==0 && ime>0))
     {
     struct student priv=niza[i];
     niza[i]=niza[j];
     niza[j]=priv;
     }
     }
}

void vnes(struct student* niza, int* vel)
{
     struct student a;
     if(*vel>=MAXVEL)
     {
     printf("Nema mesto!\n");
     return;
     }
     printf("\n Vnesi ime: ");
     scanf("%s", a.ime);
     printf(" Vnesi prezime: ");
     scanf("%s", a.prezime);
     printf(" Vnesi broj na indeks: ");
     scanf("%d", &a.indeks);
     printf("Vnesi ocenki:\n");
     
{
     do
     {
     printf(" Voved vo Programiranje: ");
     scanf("%d", &a.vop);
     if(a.vop<5 || a.vop>10)
     printf("Ocenkata ne e vo opseg 5-10\n");
     else
     break;
     }
     while(1);
     do
     {
     printf(" Elektrotehnika: ");
     scanf("%d", &a.elektro);
     if(a.elektro<5 || a.elektro>10)
     printf("Ocenkata ne e vo opseg 5-10\n");
     else
     break;
     }
     while(1);
     do
     {
     printf(" Matematika: ");
     scanf("%d", &a.mat);
     if(a.mat<5 || a.mat>10)
     printf("Ocenkata ne e vo opseg 5-10\n");
     else
     break;
     }
     while(1);
     do
     {        
     printf(" Stranski Jazik: ");
     scanf("%d", &a.jazik);
     if(a.jazik<5 || a.jazik>10)
     printf("Ocenkata ne e vo opseg 5-10\n");
     else
     break;
     }
     while(1);
     do
     {
     printf(" Aplikativen Softver: ");
     scanf("%d", &a.aplikativen);     
     if(a.aplikativen<5 || a.aplikativen>10)
     printf("Ocenkata ne e vo opseg 5-10\n");
     else
     break;
     }
     while(1);
}
     int temp=0;
     if(a.aplikativen>5)
          temp = temp + a.aplikativen;
     if(a.vop>5)
          temp = temp + a.vop;
     if(a.mat>5)
          temp = temp + a.mat;
     if(a.elektro>5)
          temp = temp + a.elektro;
     if(a.jazik>5)
          temp = temp + a.jazik;
     a.prosek = (float) temp/5;
     printf("Studentot ima prosek: %2.2f", a.prosek);
     niza[(*vel)++]=a;
     sortiranje(niza,*vel);
     printf("\n");
     }
    void ispis(struct student* niza,int vel)
     {
          int i;
          for(i=0;i<vel;i++)
          printf("\nSpisok na studenti od I godina!\n %d. %s %s, Indeks: %d Prosek: %2.2f\n Ocenki:\n VoP: %d\n Elektrotehnika: %d\n Matematika: %d\n Stranski Jazik: %d\n Aplikativen Softver: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].vop,niza[i].elektro,niza[i].mat,niza[i].jazik,niza[i].aplikativen);
     
     }
int main(int argc, char *argv[])
{
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
