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
	printf("�������� ����� 1 ��� 2: ");
	scanf("%d", &n);
    if(n == 1)
	{
		chislo = 1 + rand() % 1000;
		printf("��������� ������� ����� �� 1 �� 1000, ���������� ��������: ");
		i = 0;
		a = 0;
		while(1)
		{
			scanf("%d", &a);
			if(a > chislo)
				printf("���������� ����� ������\n");
			else if (a < chislo)
				printf("���������� ����� ������\n");
			else
			{
				printf("�� �������! ���-�� �������: %d", i);
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
		printf("�������� �����!");
		return;
	}
}