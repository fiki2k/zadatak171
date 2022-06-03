// Program treba razumjet kako pointer na strukturu je vracen iz funkcije.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {
                char ime[20];
                int broj;
                int ocjena;
               };

void ispis(struct student *);
struct student *funk( );
struct student *ptr;


int main( )
{
        struct student *stuptr;
        stuptr = funk( );
        ispis(stuptr);
        free(stuptr);

        return 0;
}


struct student *funk( )
{
        ptr = (struct student *) malloc(sizeof(struct student) );
        strcpy( ptr->ime, "Ivan");
        ptr->broj = 15;
        ptr->ocjena = 4;
        return ptr;
}

void ispis( struct student *stuptr)
{
        printf("Ime   - %s\n", stuptr->ime);
        printf("Broj  - %d\n", stuptr->broj);
        printf("Ocjena  - %d\n", stuptr->ocjena);
}
