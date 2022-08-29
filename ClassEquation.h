#pragma once
#include <iostream>
#include <fstream>

class Equation {
	public:

		// ������������
		Equation ();
		Equation(int powerNumber, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10);

		// �������
		void setPowerNumber(int n);
		void setKoef(double koef[11]);

		// �������
		int getPowerNumber();
		double* getKoef();

		// �������, ��� ������� �������� ������� ������� � ������ �����
		double getFunctionValue(double x);
		// �������, ��� ������� �������� ����� ������� ������� ������� � ������ �����
		double getDif1FunctionValue(double x);
		// �������, ��� ������� �������� ����� ������� ������� ������� � ������ �����
		double getDif2FunctionValue(double x);
		// �������, ��� ������� �������� �������� ����� ������� ������� ������� �� �������� ������
		double getDif1FunctionMinValue(double left, double right);
		// �������, ��� ������� ������� �������� ����� ������� ������� ������� �� �������� ������
		double getDif1FunctionMaxValue(double left, double right);

		// �������, ��� ������ ����� �������
		double methodBisekcii(double left, double right, double e);
		// �������, ��� ������ ����� �������
		double methodNewton(double left, double right, double e);
		// �������, ��� ������ ����� �����
		double methodSichnuh(double left, double right, double e);

	private:
		// ����������� �������
		double koef[11];
		// ������ �������
		int powerNumber;
};

