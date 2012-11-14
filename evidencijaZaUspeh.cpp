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
     void prebaraj(struct student* niza, int vel)
     {
          int tip,i,indbr,pronajden=0;
          float pros;
          char prebaraj[20];
          printf("1. za prebaruvanje po ime ili prezime\n");
          printf("2. za prebaruvanje po indeks\n");
          printf("3. za prebaruvanje po prosek\n");
          printf("4. prebaruvanje po predmet\n");
          scanf("%d", &tip);
          if(tip==1)
          {
                    printf("Vnesi barano ime ili prezime: ");
                    scanf("%s",prebaraj);
                    for(i=0;i<vel;i++)
                    {
                    if((strcmp(prebaraj,niza[i].ime)==0) ||
                    (strcmp(prebaraj,niza[i].prezime)==0))
                    {
                    printf("%d. %s %s, Indeks: %d Prosek: %2.2f\n Ocenki:\n VoP: %d\n Elektrotehnika: %d\n Matematika: %d\n Stranski Jazik: %d\n Aplikativen Softver: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].vop,niza[i].elektro,niza[i].mat,niza[i].jazik,niza[i].aplikativen);
                    pronajden=1;
                    }
                    }
                    if(pronajden==0)
                    printf("Ne e pronajden nieden rezultat.\n");
          }
          else
          if(tip==2)
          {
                    printf("Vnesi broj na indeks od studentot koj go barash: ");
                    scanf("%d",&indbr);
                    for(i=0;i<vel;i++)
                    {
                    if(indbr==niza[i].indeks)
                    {
                    printf("%d. %s %s, Indeks: %d Prosek: %2.2f\n Ocenki:\n VoP: %d\n Elektrotehnika: %d\n Matematika: %d\n Stranski Jazik: %d\n Aplikativen Softver: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].vop,niza[i].elektro,niza[i].mat,niza[i].jazik,niza[i].aplikativen);
                    pronajden=1;
                    }
                    }
                    if(pronajden==0)
                    printf("Ne e pronajden nieden rezultat.\n");
          }
          else
          if(tip==3)
          {
                    printf("Vnesi prosek na studen koj go barash: ");
                    scanf("%f",&pros);
                    for(i=0;i<vel;i++)
                    {
                    if(pros==niza[i].prosek)
                    {
                    printf("%d. %s %s, Indeks: %d Prosek: %2.2f\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek);
                    pronajden=1;
                    }
                    }
                    if(pronajden==0)
                    printf("Ne e pronajden nieden rezultat.\n");
          }
          
          if(tip==4)
          {
          int izbor;
          int ocenka;
          cout<<"Izberi predmet:"<<endl;
          cout<<"1. Voved vo programiranje"<<endl;
          cout<<"2. Elektrotehnika"<<endl;
          cout<<"3. Matematika"<<endl;
          cout<<"4. Stranski Jazik"<<endl;
          cout<<"5. Aplikativen"<<endl;         
          cin>>izbor;
          if(izbor==1)
          {
          cout<<"Vnesi ja ocenkata po Voved vo Programiranje: ";
          cin>>ocenka;
          for(int i=0; i<vel; i++)
          {
          if(ocenka==niza[i].vop)
          {
          printf("%d. %s %s, Indeks: %d Prosek: %2.2f Ocenka VoP: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].vop);
          pronajden=1;
          } 
          }
          if(pronajden==0)                       
          printf("Ne e pronajden nieden rezultat.\n");
          }
          
             if(izbor==2)
          {
          cout<<"Vnesi ja ocenkata po Elektrotehnika: ";
          cin>>ocenka;
          for(int i=0; i<vel; i++)
          {
          if(ocenka==niza[i].elektro)
          {
          printf("%d. %s %s, Indeks: %d Prosek: %2.2f Ocenka Elektrotehnika: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].elektro);
          pronajden=1;
          } 
          }
          if(pronajden==0)                       
          printf("Ne e pronajden nieden rezultat.\n");
          }
          
             if(izbor==3)
          {
          cout<<"Vnesi ja ocenkata po Matematika: ";
          cin>>ocenka;
          for(int i=0; i<vel; i++)
          {
          if(ocenka==niza[i].mat)
          {
          printf("%d. %s %s, Indeks: %d Prosek: %2.2f Ocenka Matematika: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].mat);
          pronajden=1;
          } 
          }
          if(pronajden==0)                       
          printf("Ne e pronajden nieden rezultat.\n");
          }
          
             if(izbor==4)
          {
          cout<<"Vnesi ja ocenkata po Stranski Jazik: ";
          cin>>ocenka;
          for(int i=0; i<vel; i++)
          {
          if(ocenka==niza[i].jazik)
          {
          printf("%d. %s %s, Indeks: %d Prosek: %2.2f Ocenka Stranski Jazik: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].jazik);
          pronajden=1;
          } 
          }
          if(pronajden==0)                       
          printf("Ne e pronajden nieden rezultat.\n");
          }
          
             if(izbor==5)
          {
          cout<<"Vnesi ja ocenkata po Aplikativen Softver: ";
          cin>>ocenka;
          for(int i=0; i<vel; i++)
          {
          if(ocenka==niza[i].aplikativen)
          {
          printf("%d. %s %s, Indeks: %d Prosek: %2.2f Ocenka Aplikativen: %d\n", i+1,niza[i].ime,niza[i].prezime,niza[i].indeks,niza[i].prosek,niza[i].aplikativen);
          pronajden=1;
          } 
          }
          if(pronajden==0)                       
          printf("Ne e pronajden nieden rezultat.\n");
          }
          
     }
          printf("\n");
}
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
