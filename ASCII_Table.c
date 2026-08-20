#include <stdio.h>
#include <inttypes.h>

int funkcja(uint8_t x);

int main(void)
{

    uint8_t wybor;
    
    do 
    {
    printf("Program wypisuje liczbę ASCII Po tym jak wpiszesz liczbę z odpowiedniego zakresu\nTwoja liczba musi byc z przedzialu od 1 do 26!\nJesli chcesz rozpoczac wpisz 1\nJesli chcesz zakonczyc program wpisz 0\n");
        scanf("%hhu", &wybor);
        if(wybor==1)
        {
            funkcja(wybor);
        }
        else
        {
            printf("Program konczy dzialanie wybrano 0 albo inna wartosc niz 1\n");
            break;
        }
    }while(wybor==1);
            
}

int funkcja(uint8_t x)

{    
    
    printf("UWAGA slowo na max 5 znakow\n");
    printf("Wpisz liczbe\nUWAGA musi byc w przedziale od 1 do 26!\nJesli chcesz wyjsc wpisz 0\n");        
    
    
    int liczba;
    char tablica[6];
    do
    {
        tablica[5]='\0';
        for(int i=0;i<5;i++)
        {
            
        scanf("%d", &liczba);
        if(liczba >=1 && liczba <=26)
        {
            tablica[i]=liczba+64;
            printf("[%d] petla, wpisales liczbe %d liczba po dodaniu 64 jest %c\n", i+1, liczba, liczba+64);
        }
        else
        {
            printf("Wpisales nieprawidlowa wartosc - %d\n", liczba);
            return 0;
        }
        }
        
        printf("Twoje slowo wyglada nastepujaca %s\nNaciskajac 0 przechodzisz do menu glownego\n", tablica);
        
        
    }while(liczba!=0);
    
    return 0;
}

// menu wybor opcji ZAWSZE W PETLI
// deklaracja zmiennej przed petla
// w petli wpisywanie wartos

// TABLICE
// tworze tablice majaca 6 znakow tablica[6]
// od 0 do 4 łącznie 5 cyfr na to co sobie wpisuje
// 5 indeks na znak konca tablicy \0 wymagane

// PETLA
// petla for w ograniczonym zakresie dla cyfr, z ktorych korzystam
// tablica przymuje indeksy po wyknaniu się petli czyli 0 wykonanie przy wpisaniu  1 daje 64+1 czyli 5 itd.
// następnie po przejsciu calosci wychodzi z petli do printa, gdzie
// * %d ma za zadanie zapisac ciag znakow (tablice)
// * zmienna tablica bedaca wczesniej pusta (tablica[6];) przyjela jako swoje indeksy to co wpisano do petli
// co umozliwa wyswietlenie jej zawartosci