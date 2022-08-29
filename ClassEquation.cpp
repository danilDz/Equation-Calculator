#include "ClassEquation.h"

Equation::Equation() {
	koef[0] = 0;
	koef[1] = 0;
	koef[2] = 0;
	koef[3] = 0;
	koef[4] = 0;
	koef[5] = 0;
	koef[6] = 0;
	koef[7] = 0;
	koef[8] = 0;
	koef[9] = 0;
	koef[10] = 0;
	powerNumber = 2;
}

Equation::Equation(int powerNumber, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10) {
	koef[0] = a0;
	koef[1] = a1;
	koef[2] = a2;
	koef[3] = a3;
	koef[4] = a4;
	koef[5] = a5;
	koef[6] = a6;
	koef[7] = a7;
	koef[8] = a8;
	koef[9] = a9;
	koef[10] = a10;
	this->powerNumber = powerNumber;
}

void Equation::setPowerNumber(int n) {
	powerNumber = n;
}

void Equation::setKoef(double koef[11]) {
	for (int i = 0; i < 11; i++)
	{
		this->koef[i] = koef[i];
	}
}

int Equation::getPowerNumber() {
	return powerNumber;
}

double* Equation::getKoef() {
	return koef;
}

double Equation::getFunctionValue(double x) {
	return koef[10] * pow(x, 10) + koef[9] * pow(x, 9) + koef[8] * pow(x, 8) + koef[7] * pow(x, 7) + koef[6] * pow(x, 6) + koef[5] * pow(x, 5) + koef[4] * pow(x, 4) + koef[3] * pow(x, 3) + koef[2] * pow(x, 2) + koef[1] * x + koef[0];
}

double Equation::getDif1FunctionValue(double x) {
	return 10 * koef[10] * pow(x, 9) + 9 * koef[9] * pow(x, 8) + 8 * koef[8] * pow(x, 7) + 7 * koef[7] * pow(x, 6) + 6 * koef[6] * pow(x, 5) + 5 * koef[5] * pow(x, 4) + 4 * koef[4] * pow(x, 3) + 3 * koef[3] * pow(x, 2) + 2 * koef[2] * x + koef[1];
}

double Equation::getDif2FunctionValue(double x) {
	return 90 * koef[10] * pow(x, 8) + 72 * koef[9] * pow(x, 7) + 56 * koef[8] * pow(x, 6) + 42 * koef[7] * pow(x, 5) + 30 * koef[6] * pow(x, 4) + 20 * koef[5] * pow(x, 3) + 12 * koef[4] * pow(x, 2) + 6 * koef[3] * x + 2 * koef[2];
}

double Equation::getDif1FunctionMinValue(double left, double right) {
	double min, temp, step = 0.1;
	min = fabs(getDif1FunctionValue(left));
	if (min == 0)
	{
		min = fabs(getDif1FunctionValue(left + step));
	}
	for (int i = 1; left + i * step <= right; i++)
	{
		temp = fabs(getDif1FunctionValue(left + i * step));
		if (min > temp && temp != 0) {
			min = temp;
		}
	}
	return min;
}

double Equation::getDif1FunctionMaxValue(double left, double right) {
	double max, temp, step = 0.1;
	max = fabs(getDif1FunctionValue(left));
	for (int i = 1; left + i * step <= right; i++)
	{
		temp = fabs(getDif1FunctionValue(left + i * step));
		if (max < temp) {
			max = temp;
		}
	}
	return max;
}

double Equation::methodBisekcii(double left, double right, double e) {
	int k;
	double x;
	// Перевірка на умову сходимості
	if (getFunctionValue(left) * getFunctionValue(right) <= 0)
	{
		k = 0;
		// Пошук кореня на заданому відрізку із заданою точністю
		while (true)
		{
			x = (left + right) / 2;
			k++;
			if (fabs(getFunctionValue(x)) < e)
			{
				break;
			}
			if (getFunctionValue(left) * getFunctionValue(x) <= 0)
			{
				right = x;
			}
			else {
				left = x;
			}
		}
		return x;
	}
	else {
		return INFINITY;
	}
}

double Equation::methodNewton(double left, double right, double e) {
	int k;
	double x;
	// Перевірка на умову сходимості
	if (getFunctionValue(left) * getFunctionValue(right) <= 0)
	{
		// Пошук кореня на заданому відрізку із заданою точністю
		if (getFunctionValue(left) * getDif2FunctionValue(left) > 0) {
			x = left;
		}
		else {
			if (getFunctionValue(right) * getDif2FunctionValue(right) > 0) {
				x = right;
			}
			else {
				x = -10E10;
			}
		}
		if (x > -10E10) {
			k = 0;
			while (true) {
				x = x - (getFunctionValue(x) / getDif1FunctionValue(x));
				k++;
				if (fabs(getFunctionValue(x)) < e) {
					break;
				}
			}
			return x;
		}
		else {
			return INFINITY;
		}
	}
	else {
		return INFINITY;
	}
}

double Equation::methodSichnuh(double left, double right, double e) {
	double x2, x1, pinned, max, min;
	int k;
	// Перевірка на умову сходимості
	if (getFunctionValue(left) * getFunctionValue(right) <= 0)
	{
		k = 0;
		// Пошук кореня на заданому відрізку із заданою точністю
		if (getFunctionValue(left) * getDif2FunctionValue(left) > 0)
		{
			x1 = right;
			pinned = left;
		}
		else if (getFunctionValue(right) * getDif2FunctionValue(right) > 0)
		{
			x1 = left;
			pinned = right;
		}
		else if (getFunctionValue(left) * getDif2FunctionValue(left) < 0)
		{
			x1 = left;
			pinned = right;
		}
		else if (getFunctionValue(right) * getDif2FunctionValue(right) < 0)
		{
			x1 = right;
			pinned = left;
		}
		else {
			return INFINITY;
		}
		min = getDif1FunctionMinValue(left, right);
		max = getDif1FunctionMaxValue(left, right);
		while (true)
		{
			x2 = x1 - (pinned - x1) * getFunctionValue(x1) / (getFunctionValue(pinned) - getFunctionValue(x1));
			if (x2 == INFINITY) x2 = 0;
			k++;
			if (fabs(x2 - x1) < e * min / (max - min))
			{
				break;
			}
			x1 = x2;
		}
		return x2;
	}
	else {
		return INFINITY;
	}
}