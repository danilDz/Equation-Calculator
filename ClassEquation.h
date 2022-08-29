#pragma once
#include <iostream>
#include <fstream>

class Equation {
	public:

		// Конструктори
		Equation ();
		Equation(int powerNumber, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10);

		// Сеттери
		void setPowerNumber(int n);
		void setKoef(double koef[11]);

		// Геттери
		int getPowerNumber();
		double* getKoef();

		// Функція, яка повертає значення введеної функції в заданій точці
		double getFunctionValue(double x);
		// Функція, яка повертає значення першої похідної введеної функції в заданій точці
		double getDif1FunctionValue(double x);
		// Функція, яка повертає значення другої похідної введеної функції в заданій точці
		double getDif2FunctionValue(double x);
		// Функція, яка повертає найменше значення першої похідної введеної функції на заданому відрізку
		double getDif1FunctionMinValue(double left, double right);
		// Функція, яка повертає нійбільше значення першої похідної введеної функції на заданому відрізку
		double getDif1FunctionMaxValue(double left, double right);

		// Функція, яка реалізує метод бісекції
		double methodBisekcii(double left, double right, double e);
		// Функція, яка реалізує метод Ньютона
		double methodNewton(double left, double right, double e);
		// Функція, яка реалізує метод січних
		double methodSichnuh(double left, double right, double e);

	private:
		// Коефіцієнти рівняння
		double koef[11];
		// Степінь рівняння
		int powerNumber;
};

