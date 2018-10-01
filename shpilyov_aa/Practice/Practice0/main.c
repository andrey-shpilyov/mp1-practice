#include<stdio.h>
#include<math.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	float x1, x2, y1, y2, r1, r2, l;

	scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &r1, &r2);

	l = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

    if (r1 <= 0 || r2 <= 0)
	{
		printf("������ �� ����� ���� <=0");
		return;
	}
	if (l == 0 && r1 == r2)
	{
		printf("���������� ���������");
		return;
	}
	if ((l == 0) && (r1 != r2)) 
	{
		printf("��������������� ����������");
		return;
	}
	if (l > r1 + r2)
	{
		printf("���� ���������� ��������� ��� ������, �� ����� ����� �����");
		return;
	}
	if (l == r1 + r2)
	{
		printf("���������� �������� ������, ����� 1 ����� ����� (����� �������)");
		return;
	}
	if (l > r1 + r2)
	{
		printf("���� ���������� ��������� ��� ������, �� ����� ����� �����");
		return;
	}
	if ((r1 - r2 < l) && (r1 + r2 > l) || (r2 - r1 < l) && (r1 + r2 > l))
	{
		printf("���������� ������������, ����� 2 ����� �����");
		return;
	}
	if ((l == r1 - r2) || (l == r2 - r1))
	{
		printf("���������� ����� ���������� �������");
		return;
	}
	if ((l < r1 - r2) || (l < r2 - r1))
	{
		printf("���� ���������� ��������� ������ ������");
		return;
	}
}
