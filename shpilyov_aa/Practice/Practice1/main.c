#include <stdio.h>
#include <locale.h>

void main()
{
	float M, m_zad_stenok, m_bok_stenok, m_krishok, m_dveri, m_polok, h, w, d, p_dcp, p_dvp, p_derevo, tol_1 = 0.005f, tol_2 = 0.015f, tol_3 = 0.01f;
	setlocale(LC_ALL, "Rus");
	printf("������� ������ �����,(c�): ");
	scanf("%f",&h);
	printf("������� ������ �����,(c�): ");
	scanf("%f", &w);
	printf("������� ������� �����,(c�): ");
	scanf("%f", &d);
	printf("������� ��������� ��� (��/�^3): ");
	scanf("%f", &p_dcp);
	printf("������� ��������� ��� (��/�^3): ");
	scanf("%f", &p_dvp);
	printf("������� ��������� ������ (��/�^3): ");
	scanf("%f", &p_derevo);
	h /= 100.0f;
	w /= 100.0f;
	d /= 100.0f;
	if ((h >= 1.8f) && (h <= 2.2f) && (w >= 0.8f) && (w <= 1.2f) && (d >= 0.5f) && (d <= 0.9f))
	{
		m_zad_stenok = 2 * p_dvp * h * w * tol_1;
		m_bok_stenok = 2 * p_dcp * h * d * tol_2;
		m_krishok = 2 * p_dcp * w * d * tol_2;
		m_dveri = 2 * p_derevo * h * w * tol_3;
		m_polok = (h - 2 * tol_2) / (0.4 + tol_2) * (w - 2 * tol_2) * (d - tol_1);
		M = m_zad_stenok + m_bok_stenok + m_krishok + m_dveri + m_polok;
		printf("����� ����� = %.2f ��\n", M);
	}
	else
	{
		printf("�������� ������!");
		return;
	}
}