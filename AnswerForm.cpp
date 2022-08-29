#include "AnswerForm.h"
using namespace System;

Project::AnswerForm::AnswerForm(void) {
	InitializeComponent();
}

Project::AnswerForm::AnswerForm(String^ m, Equation& equation, double left, double right) {
	InitializeComponent();
	this->equation = new Equation(equation);
	method = m;
	leftLim = left;
	rightLim = right;
}

Project::AnswerForm::~AnswerForm() {
	delete equation;
	if (components)
	{
		delete components;
	}
}

Void Project::AnswerForm::buttonClose_Click(Object^ sender, EventArgs^ e) {
	// Закриття AnswerForm
	AnswerForm::Close();
}

Void Project::AnswerForm::AnswerForm_Load(Object^ sender, EventArgs^ e) {
	labelMethod->Text = method;
	labelLimits->Text = "Відрізок :  [" + leftLim + "; " + rightLim + "]";
	double A0 = equation->getKoef()[0],
		A1 = equation->getKoef()[1],
		A2 = equation->getKoef()[2],
		A3 = equation->getKoef()[3],
		A4 = equation->getKoef()[4],
		A5 = equation->getKoef()[5],
		A6 = equation->getKoef()[6],
		A7 = equation->getKoef()[7],
		A8 = equation->getKoef()[8],
		A9 = equation->getKoef()[9],
		A10 = equation->getKoef()[10];
	switch (equation->getPowerNumber())
	{
	case 2:
		textBoxEquation->Text = "(" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 3:
		textBoxEquation->Text = "(" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 4:
		textBoxEquation->Text = "(" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 5:
		textBoxEquation->Text = "(" + A5 + ")x^5 + (" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 6:
		textBoxEquation->Text = "(" + A6 + ")x^6 + (" + A5 + ")x^5 + (" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 7:
		textBoxEquation->Text = "(" + A7 + ")x^7 + (" + A6 + ")x^6 + (" + A5 + ")x^5 + (" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 8:
		textBoxEquation->Text = "(" + A8 + ")x^8 + (" + A7 + ")x^7 + (" + A6 + ")x^6 + (" + A5 + ")x^5 + (" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 9:
		textBoxEquation->Text = "(" + A9 + ")x^9 + (" + A8 + ")x^8 + (" + A7 + ")x^7 + (" + A6 + ")x^6 + (" + A5 + ")x^5 + (" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	case 10:
		textBoxEquation->Text = "(" + A10 + ")x^10 + (" + A9 + ")x^9 + (" + A8 + ")x^8 + (" + A7 + ")x^7 + (" + A6 + ")x^6 + (" + A5 + ")x^5 + (" + A4 + ")x^4 + (" + A3 + ")x^3 + (" + A2 + ")x^2 + (" + A1 + ")x + (" + A0 + ") = 0";
		break;
	}
}

Void Project::AnswerForm::buttonAnswer_Click(Object^ sender, EventArgs^ e) {
	// Валідація точності
	bool flag = Validation::validationE(textBoxAccuracy->Text);
	if (flag) {
		MessageBox::Show("Введіть коректну точність!\nВ діапазоні від 1Е-10 до 1Е-1", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxAccuracy->Text = "0,001";
		textBoxAnswer->Text = "Введіть коректну точність!";
		x = INFINITY;
	}
	else {
		// Знаходження кореня рівняння за допомогою обраного методу
		if (method == "Метод бісекції") {
			x = equation->methodBisekcii(leftLim, rightLim, System::Convert::ToDouble(textBoxAccuracy->Text));
			if (x == INFINITY)
			{
				MessageBox::Show("Умова збіжності не виконана!", "Провал", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBoxAnswer->Text = "Умова збіжності не виконана!";
			}
			else {
				textBoxAnswer->Text = "x = " + x;
			}
		}
		else if (method == "Метод Ньютона") {
			x = equation->methodNewton(leftLim, rightLim, System::Convert::ToDouble(textBoxAccuracy->Text));
			if (x == INFINITY)
			{
				MessageBox::Show("Неможливо застосувати цей метод!", "Провал", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBoxAnswer->Text = "Неможливо застосувати цей метод!";
			}
			else {
				textBoxAnswer->Text = "x = " + x;
			}
		}
		else if (method == "Метод січних") {
			x = equation->methodSichnuh(leftLim, rightLim, System::Convert::ToDouble(textBoxAccuracy->Text));
			if (x == INFINITY)
			{
				MessageBox::Show("Неможливо застосувати цей метод!", "Провал", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBoxAnswer->Text = "Неможливо застосувати цей метод!";
			}
			else {
				textBoxAnswer->Text = "x = " + x;
			}
		}
	}
}

Void Project::AnswerForm::buttonFile_Click(Object^ sender, EventArgs^ e) {
	if (x != INFINITY) {
		std::ofstream file("output.txt");
		file << "x = " << x << std::endl;
		file.close();
		MessageBox::Show("Відповідь успішно збережено у файл output.txt!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	else {
		MessageBox::Show("Спочатку знайдіть корінь!", "Провал", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}