#include <stdio.h>
#include <inttypes.h>

void funkcja();
void funkcja2();

char haslogl[40];
uint8_t check=1;


int main(void) 
{
    uint8_t wybor;
    do 
    {
        
        printf("0. Wyjscie\n1. Wpisanie hasla, potwierdzenie go i wyswietlenie potem\n2. wpisanie hasla (wczesniej ustawionego) i wejscie do \"Panelu Admina\"\n");
        scanf("%hhu", &wybor);
        if(wybor==1)
        {
            funkcja();
        }
        
        if(wybor==2)
        {
            funkcja2();
        }
        
        if(wybor!=0 && wybor!=1 && wybor!=2)
        {
            printf("Nieprawidlowa wartosc\n");
        }
    }while(wybor!=0);
    return 0;
}
// ################## funkcja tworzaca haslo ##################
void funkcja()
{
    char haslotest[40];
    check=1;
    
    printf("Wpisz haslo\nMAKS 38 znakow\n");
    scanf(" %39s", haslotest);
    
    printf("Potwierdz haslo\n");
    scanf(" %39s", haslogl);
    // wczytuje oba hasla, spacja przed bo czysci buffor z spacji
    
    for(uint8_t i=0;i<39;i++)
    {
        if(haslogl[i]=='\0' && haslotest[i]=='\0')
        {
            break;
        }
        if(haslogl[i]!=haslotest[i])
        {
            printf("Wpisane hasla sa ROZNE\n");
            check=0;
            break;
        }
        
    }
    // jesli jakikolwiek z znakow w obu tablicach nie bedzie sobie rowny
    // program wylacza sie 
    // i od razu ustawia check'a na 0, zeby nie wyswietlil komunikatu
    // jesli dojdzie do konca (znak zero) w obu petlach to wychodzi z niej 
    
    if(check==1)
    {
        printf("Haslo pomyslnie ustawione\n#####\n%s\n#####\n", haslogl);
        check=2;
    }
    
    else 
    {
        printf("Nie udalo sie ustawic hasla\n");
    }
    
    // jesli check jest poprawny to wyswietla informacje i jako potwierdznie wpisane haslo
    // w innym przypadku informacja
}

// ################## funkcja tworzaca haslo ##################



// ################## funkcja sprawdzajaca haslo i pane ##################

void funkcja2()
{
    char wpisane[40];
    
    if(check==0 || check ==1)
    {
        printf("Ustaw haslo!\n");
    }
    
    if(check==2)
    {
        
        uint8_t dostep=2; 
        printf("Wpisz haslo:\n");
        scanf(" %39s", wpisane);
        
        for(uint8_t i=0;i<39;i++)
        {
            if(haslogl[i]=='\0'&&wpisane[i]=='\0')
            {
                break;
            }
            if(wpisane[i]!=haslogl[i])
            {
                dostep=0;
                break;
            }
        }
        
        if(dostep==2)
        {
            printf("PRZYZNANO DOSTEP\n");
        }
        
        else 
        {
            printf("brak dostepu\n");
        }
    }
    
}

