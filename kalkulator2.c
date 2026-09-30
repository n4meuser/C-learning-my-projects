#include <stdio.h>
#include <inttypes.h>

void funkcja (void);

int main(void)

{
	int wynik;
	do 
	{
		printf("Jeśli chcesz wyjść nacisnij 0\nJesli nie wciskij enter\n");
		
		funkcja(); 
		
		scanf("%d", &wynik);
		
	}while(wynik !=0);
	
}

void funkcja (void)
{
	float l1, l2;
	char znak;
	printf("Wpisz wyrażenie jakie chcesz obliczyć np. 3+3, 3/4, 2*3 etc.\n");
	scanf(" %f %c %f", &l1, &znak, &l2);
	
	switch(znak)
	{
		case '+':
		{
			printf("wynik: %f\n", l1+l2);
			break;
		}
		
		case '-': 
		{
			printf("wynik: %f\n", l1-l2);
			break;
		}
		
		case '*':
		{
			printf("wynik: %f\n", l1*l2);
			break;
		}
		
		case '/': 
		{
			if(l2 !=0)
			{
				printf("Wynik: %f\n", l1/l2);
				break;
			}
			else 
			{
				printf("Nie mozesz dzielić przez 0\n");
				break;
			}
		}
		
		default:
		{
			printf("Błąd składni");
		}
		
	}
}
