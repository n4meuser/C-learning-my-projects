#include <stdio.h>

void funkcja (void);

int main(void)

{
	int wynik;
	do 
	{
		printf("Jeśli chcesz wyjść nacisnij 0\nJesli nie wpisz dowolna liczbe a potem to co chcesz obliczyc\nUWAGA w przypadku potegowania liczby musza byc dodatnie a wykładnik musi być całkowity!\n");
		
		funkcja(); 
		
		scanf("%d", &wynik);
		
	}while(wynik);
	
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
		
		case '^': 
		{
			l2 = (int) l2;
			float n=1;
			for(int i=1;i<=l2;i++)
			{
				n=n*l1;
			}
			
			printf("Wynik: %f\n", n);
			break;
		}
		
		default:
		{
			printf("Błąd składni");
		}
		
	}
}

