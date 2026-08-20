#include <stdio.h>
#include <inttypes.h>

void szyfrowanie();
void deszyfrowanie();

int main(void)
{
    uint8_t wybor;
    
    
    do 
    {
    printf("szyfr cezara - polega na przesunieciu litery o okreslona liczbe miejsc\nW tym przykladzie bedzie to przesuniecie o 2 miesjca i hasla moga miec do 20 znakow\n0. wyjscie\n1. szyfrowanie\n2. deszyfrowanie");
        scanf("%hhu", &wybor);
            switch(wybor)
            {
                case 1: 
                {
                    printf("wpisz slowo, ktore chcesz szyfrowac\n max 10 liter!\n");
                    szyfrowanie();
                    printf("Ustawione slowo");
                    break;
                }
                
                case 2: 
                {
                    deszyfrowanie();
                    printf("koniec tej funkcji!\n");
                    break;
                }
                
                case 0: 
                {
                    printf("Program poprawnie zakonczyl dzialanie\n");
                    break;
                }
                
                default: 
                {
                    printf("Awaryjne wyjscie\n");
                    break;
                }
            }
        
    }while(wybor!=0);
     
    printf("KONIEC\n");
    return 0;
}

// ### FUNKCJA 1 ###

void szyfrowanie()
{
    char slowo[22];    
    
    scanf(" %21s", slowo);
    printf("PRZED: %s\n", slowo);
    for(uint8_t i=0;i<21;i++)
    {
        if(slowo[i]=='\0')
        {
            break;
        }
        slowo[i]=slowo[i]+2;
        
    }
    
    printf("Twoje slowo to teraz %s\n", slowo);
    
}

// ### FUNKCJA 1 ###

// ### FUNKCJA 2 ###

void deszyfrowanie()
{
    char slowo[22];
    printf("Wpisz slowo, ktore chcesz deszyfrowac\n");
    scanf(" %21s", slowo);
    
    for(uint8_t i=0;i<21;i++)
    {
        if(slowo[i]=='\0')
        {
            break;
        }
        slowo[i]=slowo[i]-2;
        
    }
    
    printf("Twoje slowo to %s\n", slowo);
}

// ### FUNKCJA 2 ###

/*
    for(uint8_t i=0;i<21;i++)
    {
        if(slowo[i]=='\0')
        {
            break;
        }
        slowo[i]=slowo[i]+2;
        
    }
    
- int od pierwszej litery do ostatniej
- na poczatku sprawdza czy jest zero: \0
- potem wykonuje podstawienie
- slowo od i jest rowne slowu od i + 2 
- dla A: 1 = 1 + 2 = 3
    A -> C

=> NA POCZATKU MUSI SPRAWDZIC WARUNEK ZERA
   DOPIERO POTEM MOGE WYKONAC PETLE 
*/

