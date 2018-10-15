#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int n, chislo, a, i;
	char z = '=';
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	printf("Выберите режим 1 или 2: ");
	scanf("%d", &n);
    if(n == 1)
	{
		chislo = 1 + rand() % 1000;
		printf("Компьютер загадал число от 1 до 1000, попробуйте отгадать: ");
		i = 0;
		a = 0;
		while(1)
		{
			scanf("%d", &a);
			if(a > chislo)
				printf("Загаданное число меньше\n");
			else if (a < chislo)
				printf("Загаданное число больше\n");
			else
			{
				printf("Вы угадали! Кол-во попыток: %d", i);
				break;
			}
			i++;
		} 
	}
	else if (n == 2)
	{
		
	}
	else 
	{
		printf("Неверный режим!");
		return;
	}
}