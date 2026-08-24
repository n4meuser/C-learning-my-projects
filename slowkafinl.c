#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int main(void)
{
    uint8_t check=1;
    char slowo[10]="kotek";
    uint8_t licznik=4;
    char litera, slowo2[10];
    
    slowo2[strlen(slowo)]='\0'; 
    for(uint8_t i=0;i<strlen(slowo);i++) 
        {
            slowo2[i]='_';
        }
        // PRZYPISANE DO KAZDEGO INDEKSU SLOWO2 '_'
        // ------------------
        // strlen(slowo) to 3 
        // slowo kot zajmuje 2 bo 
        // 0 - k
        // 1 - o
        // 2 - t
        // ----
        // lacznie 3
        // ----
        // 3 - \0
        
        while(licznik>0)
        {
            uint8_t wybor;
            licznik--;
            printf("To twoja [%u] proba\nWpisz litere\n", licznik);
            scanf(" %c", &litera);
            for(uint8_t i=0; i<strlen(slowo);i++)
            {
                if(litera==slowo[i])
                {
                    slowo2[i]=litera;
                }
            }
            // jesli litera odpowiada literze znajdujace sie w tablicy
            // to tablica '_' w tym samym indeksie co tablica z odpowiedzia
            // ma litere wpisana przez uzytkownika
            // -----
            // ZAMIENIAMY _ NA LITERY!
            // -----
            printf("%s\n", slowo2);
            printf("Znasz cale haslo?\n1. tak\n2. nie\n"); // zaqwsze ktos moze zgadnac za n-tym razem i przed przerwaniem programu
            scanf(" %hhu", &wybor);
            switch(wybor)
            {
                case 1: 
                {
                    char cale[strlen(slowo)+1]; // +1 zeby doszlo ZERO
                    scanf( "%s", cale);
                    for(uint8_t i=0;i<strlen(slowo)+1;i++)
                    {
                        if(cale[i]!=slowo[i])
                        {
                            check=0;
                            printf("Probuj dalej");
                        }
                        
                    }
                    break;
                }
                
                case 2: 
                {
                    check=0;
                    printf("Powrot\n");
                    break;
                }
                
                default: 
                {
                    check=0;
                    printf("Zla wartosc!\nPOWROT\n");
                    break;
                }
            }
            if(check==1)
            {
                printf("Zgadales haslo!");
                break;
            }
            // jesli nie zostanie zgadniete haslo check zmienia wartosc na 1
            // w przypakdu, gdy zadnej z bezpiecznikow NIE ZADZIALA
            // stringi NIE BEDA rozne od siebie
            // wartosci w switchu bedzie POPRAWNA
            // => slowa sa takie same i check NIE ZMIENIA SIE
        }
        printf("Koniec pogramu");
}
// zwykle w samych petlach nie potrzeba wykonywac (i nie jest to chciane), zeby cokolwiek pisac
// petle maja spelnic swoje zadanie a potem (poza nimi) dac wynik
