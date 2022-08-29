#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

// Стандартний код для коректної роботи інтерфейсу
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project::MainForm form;
	Application::Run(% form);

	return 0;
}

Project::MainForm::MainForm(void) {
	InitializeComponent();
	panelMain->Hide();
	MainForm::Size = System::Drawing::Size(755, 580);
	labelA3->Hide();
	labelA4->Hide();
	labelA5->Hide();
	labelA6->Hide();
	labelA7->Hide();
	labelA8->Hide();
	labelA9->Hide();
	labelA10->Hide();
	textBoxA3->Hide();
	textBoxA4->Hide();
	textBoxA5->Hide();
	textBoxA6->Hide();
	textBoxA7->Hide();
	textBoxA8->Hide();
	textBoxA9->Hide();
	textBoxA10->Hide();
	confirmButton->Location = System::Drawing::Point(239, 400);
	//textBoxA0->Text = "0";
	//textBoxA1->Text = "0";
	//textBoxA2->Text = "0";
	//textBoxA3->Text = "0";
	//textBoxA4->Text = "0";
	//textBoxA5->Text = "0";
	//textBoxA6->Text = "0";
	//textBoxA7->Text = "0";
	//textBoxA8->Text = "0";
	//textBoxA9->Text = "0";
	//textBoxA10->Text = "0";
}

Project::MainForm::~MainForm() {
	if (components) {
		delete components;
	}
}

Void Project::MainForm::MainForm_Load(Object^ sender, EventArgs^ e) {
	MainForm::UseWaitCursor;

	// Додаємо можливість масштабувати графік
	graphFunc->ChartAreas[0]->AxisX->ScaleView->Zoom(-5, 5);
	graphFunc->ChartAreas[0]->CursorX->IsUserEnabled = true;
	graphFunc->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true;
	graphFunc->ChartAreas[0]->AxisX->ScaleView->Zoomable = true;
	graphFunc->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;

	graphFunc->ChartAreas[0]->AxisY->ScaleView->Zoom(-50, 50);
	graphFunc->ChartAreas[0]->CursorY->IsUserEnabled = true;
	graphFunc->ChartAreas[0]->CursorY->IsUserSelectionEnabled = true;
	graphFunc->ChartAreas[0]->AxisY->ScaleView->Zoomable = true;
	graphFunc->ChartAreas[0]->AxisY->ScrollBar->IsPositionedInside = true;
}

Void Project::MainForm::buttonExit_Click(Object^ sender, EventArgs^ e) {
	// Завершення програми
	Application::Exit();
}

Void Project::MainForm::buttonAutor_Click(Object^ sender, EventArgs^ e) {
	// Створення та запуск AboutAutorForm
	AboutAutorForm^ about = gcnew AboutAutorForm;
	about->ShowDialog();
}

Void Project::MainForm::buttonBack_Click(Object^ sender, EventArgs^ e) {
	// Повернення на головний екран додатку
	panelMain->Hide();
	MainForm::Size = System::Drawing::Size(755, 580);
}

Void Project::MainForm::buttonBegin_Click(Object^ sender, EventArgs^ e) {
	// Перехід на екран з розрахунками
	panelMain->Show();
	MainForm::Size = System::Drawing::Size(System::Convert::ToInt16(MainForm::Size.Width), 800);
}

Void Project::MainForm::buttonExit2_Click(Object^ sender, EventArgs^ e) {
	// Перевірка на те, чи впевнений користувач
	if (MessageBox::Show("Ви впевнені?", "Попередження!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		// Завершення програми
		Application::Exit();
	}
}

Void Project::MainForm::powerNum_ValueChanged(Object^ sender, EventArgs^ e) {
	// Повернення до начального розміру вікна
	MainForm::Size = System::Drawing::Size(755, System::Convert::ToInt16(MainForm::Size.Height));

	// Скидання усіх значень
	/*textBoxA0->Text = "0";
	textBoxA1->Text = "0";
	textBoxA2->Text = "0";
	textBoxA3->Text = "0";
	textBoxA4->Text = "0";
	textBoxA5->Text = "0";
	textBoxA6->Text = "0";
	textBoxA7->Text = "0";
	textBoxA8->Text = "0";
	textBoxA9->Text = "0";
	textBoxA10->Text = "0";*/
	textBoxResult->Text = "...";
	labelA3->Hide();
	labelA4->Hide();
	labelA5->Hide();
	labelA6->Hide();
	labelA7->Hide();
	labelA8->Hide();
	labelA9->Hide();
	labelA10->Hide();
	textBoxA3->Hide();
	textBoxA4->Hide();
	textBoxA5->Hide();
	textBoxA6->Hide();
	textBoxA7->Hide();
	textBoxA8->Hide();
	textBoxA9->Hide();
	textBoxA10->Hide();

	int n = System::Convert::ToInt16(powerNum->Value);
	delete equation;
	equation = new Equation(n, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

	// Зміна розташування кнопки Ввести в залежності від степеня рівняння
	if (n >= 2 && n <= 4) {
		confirmButton->Location = System::Drawing::Point(239, 400);
	}
	else if (n >= 5 && n <= 9) {
		confirmButton->Location = System::Drawing::Point(239, 465);
	}
	else {
		confirmButton->Location = System::Drawing::Point(239, 520);
	}

	// Зміна інтерфейсу в залежності від значення степеня рівняння
	switch (n) {
	case 3:
		textBoxA3->Show();
		labelA3->Show();
		break;
	case 4:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		break;
	case 5:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		textBoxA5->Show();
		labelA5->Show();
		break;
	case 6:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		textBoxA5->Show();
		labelA5->Show();
		textBoxA6->Show();
		labelA6->Show();
		break;
	case 7:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		textBoxA5->Show();
		labelA5->Show();
		textBoxA6->Show();
		labelA6->Show();
		textBoxA7->Show();
		labelA7->Show();
		break;
	case 8:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		textBoxA5->Show();
		labelA5->Show();
		textBoxA6->Show();
		labelA6->Show();
		textBoxA7->Show();
		labelA7->Show();
		textBoxA8->Show();
		labelA8->Show();
		break;
	case 9:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		textBoxA5->Show();
		labelA5->Show();
		textBoxA6->Show();
		labelA6->Show();
		textBoxA7->Show();
		labelA7->Show();
		textBoxA8->Show();
		labelA8->Show();
		textBoxA9->Show();
		labelA9->Show();
		break;
	case 10:
		textBoxA3->Show();
		labelA3->Show();
		textBoxA4->Show();
		labelA4->Show();
		textBoxA5->Show();
		labelA5->Show();
		textBoxA6->Show();
		labelA6->Show();
		textBoxA7->Show();
		labelA7->Show();
		textBoxA8->Show();
		labelA8->Show();
		textBoxA9->Show();
		labelA9->Show();
		textBoxA10->Show();
		labelA10->Show();
		break;
	}
}

Void Project::MainForm::confirmButton_Click(Object^ sender, EventArgs^ e) {
	MainForm::Size = System::Drawing::Size(755, System::Convert::ToInt16(MainForm::Size.Height));

	// Скидання графіку та значень відрізку
	graphFunc->Series[0]->Points->Clear();
	textBoxLeftLim->Text = "";
	textBoxRightLim->Text = "";

	bool flag0, flag1, flag2,
		flag3 = false,
		flag4 = false,
		flag5 = false,
		flag6 = false,
		flag7 = false,
		flag8 = false,
		flag9 = false,
		flag10 = false;

	String^ a0 = textBoxA0->Text;
	String^ a1 = textBoxA1->Text;
	String^ a2 = textBoxA2->Text;
	String^ a3 = "0";
	String^ a4 = "0";
	String^ a5 = "0";
	String^ a6 = "0";
	String^ a7 = "0";
	String^ a8 = "0";
	String^ a9 = "0";
	String^ a10 = "0";

	// Валідація перших трьох обов'язкових коефіцієнтів
	flag0 = Validation::validationInput(a0);
	flag1 = Validation::validationInput(a1);
	flag2 = Validation::validationInput(a2);

	int n = equation->getPowerNumber();

	// В залежності від степеня рівняння валідуємо коефіцієнти
	switch (n) {
	case 2:
		// Перевірка результатів валідації
		if (flag0 || flag1 || flag2) {
			// Демонстрація MessageBox, якщо введено некоректні коефіцієнти
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			// Запис повідомлення в текстове поле
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			// Запис коректного рівняння в текстове поле та у назву графіку
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 3:
		a3 = textBoxA3->Text;
		flag3 = Validation::validationInput(a3);
		if (flag0 || flag1 || flag2 || flag3) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 4:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		if (flag0 || flag1 || flag2 || flag3 || flag4) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 5:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		a5 = textBoxA5->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		flag5 = Validation::validationInput(a5);
		if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a5 + ")x^5 + (" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 6:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		a5 = textBoxA5->Text;
		a6 = textBoxA6->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		flag5 = Validation::validationInput(a5);
		flag6 = Validation::validationInput(a6);
		if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5 || flag6) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a6 + ")x^6 + (" + a5 + ")x^5 + (" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 7:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		a5 = textBoxA5->Text;
		a6 = textBoxA6->Text;
		a7 = textBoxA7->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		flag5 = Validation::validationInput(a5);
		flag6 = Validation::validationInput(a6);
		flag7 = Validation::validationInput(a7);
		if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5 || flag6 || flag7) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a7 + ")x^7 + (" + a6 + ")x^6 + (" + a5 + ")x^5 + (" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 8:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		a5 = textBoxA5->Text;
		a6 = textBoxA6->Text;
		a7 = textBoxA7->Text;
		a8 = textBoxA8->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		flag5 = Validation::validationInput(a5);
		flag6 = Validation::validationInput(a6);
		flag7 = Validation::validationInput(a7);
		flag8 = Validation::validationInput(a8);
		if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5 || flag6 || flag7 || flag8) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a8 + ")x^8 + (" + a7 + ")x^7 + (" + a6 + ")x^6 + (" + a5 + ")x^5 + (" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 9:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		a5 = textBoxA5->Text;
		a6 = textBoxA6->Text;
		a7 = textBoxA7->Text;
		a8 = textBoxA8->Text;
		a9 = textBoxA9->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		flag5 = Validation::validationInput(a5);
		flag6 = Validation::validationInput(a6);
		flag7 = Validation::validationInput(a7);
		flag8 = Validation::validationInput(a8);
		flag9 = Validation::validationInput(a9);
		if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5 || flag6 || flag7 || flag8 || flag9) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a9 + ")x^9 + (" + a8 + ")x^8 + (" + a7 + ")x^7 + (" + a6 + ")x^6 + (" + a5 + ")x^5 + (" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	case 10:
		a3 = textBoxA3->Text;
		a4 = textBoxA4->Text;
		a5 = textBoxA5->Text;
		a6 = textBoxA6->Text;
		a7 = textBoxA7->Text;
		a8 = textBoxA8->Text;
		a9 = textBoxA9->Text;
		a10 = textBoxA10->Text;
		flag3 = Validation::validationInput(a3);
		flag4 = Validation::validationInput(a4);
		flag5 = Validation::validationInput(a5);
		flag6 = Validation::validationInput(a6);
		flag7 = Validation::validationInput(a7);
		flag8 = Validation::validationInput(a8);
		flag9 = Validation::validationInput(a9);
		flag10 = Validation::validationInput(a10);
		if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5 || flag6 || flag7 || flag8 || flag9 || flag10) {
			MessageBox::Show("Введіть коректні коефіцієнти!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBoxResult->Text = "Введіть коректні коефіцієнти!";
			break;
		}
		else {
			String^ res = "(" + a10 + ")x^10 + (" + a9 + ")x^9 + (" + a8 + ")x^8 + (" + a7 + ")x^7 + (" + a6 + ")x^6 + (" + a5 + ")x^5 + (" + a4 + ")x^4 + (" + a3 + ")x^3 + (" + a2 + ")x^2 + (" + a1 + ")x + (" + a0 + ")";
			textBoxResult->Text = res + " = 0";
			graphFunc->Titles[0]->Text = "Графік функції y = " + res;
			break;
		}
	}

	MainForm::Size = System::Drawing::Size(755, System::Convert::ToInt16(MainForm::Size.Height));

	// Перевірка результатів валідації усіх коефіцієнтів
	if (flag0 || flag1 || flag2 || flag3 || flag4 || flag5 || flag6 || flag7 || flag8 || flag9 || flag10) {
		// Скидання усіх коефіцієнтів, якщо хоча б одна валідація не пройдена
		delete equation;
		equation = new Equation(n, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else {
		// Запис нових значень коефіцієнтів
		double A0 = System::Convert::ToDouble(a0),
			A1 = System::Convert::ToDouble(a1),
			A2 = System::Convert::ToDouble(a2),
			A3 = System::Convert::ToDouble(a3),
			A4 = System::Convert::ToDouble(a4),
			A5 = System::Convert::ToDouble(a5),
			A6 = System::Convert::ToDouble(a6),
			A7 = System::Convert::ToDouble(a7),
			A8 = System::Convert::ToDouble(a8),
			A9 = System::Convert::ToDouble(a9),
			A10 = System::Convert::ToDouble(a10);

		delete equation;
		equation = new Equation(n, A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);

		// Перевірка на виняткові ситуації
		if (A0 == 0 && A1 == 0 && A2 == 0 && A3 == 0 && A4 == 0 && A5 == 0 && A6 == 0 && A7 == 0 && A8 == 0 && A9 == 0 && A10 == 0)
		{
			MessageBox::Show("Коренями данного рівняння є числа від -inf до +inf!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::None);
			textBoxResult->Text = "Коренями заданного рівняння є числа від -inf до +inf!";
		}
		else if (A0 != 0 && A1 == 0 && A2 == 0 && A3 == 0 && A4 == 0 && A5 == 0 && A6 == 0 && A7 == 0 && A8 == 0 && A9 == 0 && A10 == 0) {
			MessageBox::Show("Задане рівняння не має коренів!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::None);
			textBoxResult->Text = "Задане рівняння не має коренів!";
		}
		else {
			// Зміна графічного інтерфейсу
			MainForm::Size = System::Drawing::Size(1310, System::Convert::ToInt16(MainForm::Size.Height));

			// Побудова графіку в діапазоні [-5;5]
			for (double i = -5; i < 5.1; i += 0.1)
			{
				graphFunc->Series[0]->Points->AddXY(i, (A10 * pow(i, 10) + A9 * pow(i, 9) + A8 * pow(i, 8) + A7 * pow(i, 7) + A6 * pow(i, 6) + A5 * pow(i, 5) + A4 * pow(i, 4) + A3 * pow(i, 3) + A2 * pow(i, 2) + A1 * i + A0));
			}
		}
	}
}

Void Project::MainForm::confirmButton2_Click(Object^ sender, EventArgs^ e) {
	// Встановлення розміру вікна
	MainForm::Size = System::Drawing::Size(1310, System::Convert::ToInt16(MainForm::Size.Height));

	// Зчитування значень відрізка
	String^ leftLim = textBoxLeftLim->Text;
	String^ rightLim = textBoxRightLim->Text;

	// Перша валідація введеного відрізка
	bool flag1 = Validation::validationInput(leftLim);
	bool flag2 = Validation::validationInput(rightLim);

	// Друга валідація введеного відрізка
	if (flag1 || flag2 || leftLim == rightLim) {

		MessageBox::Show("Введіть коректний відрізок!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxLeftLim->Text = "";
		textBoxRightLim->Text = "";
	}
	// Третя валідація введеного відрізка
	else if (System::Convert::ToDouble(leftLim) > System::Convert::ToDouble(rightLim)) {
		MessageBox::Show("Введіть коректний відрізок!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBoxLeftLim->Text = "";
		textBoxRightLim->Text = "";
	}
	else {
		// Встановлення розміру вікна
		MainForm::Size = System::Drawing::Size(1700, System::Convert::ToInt16(MainForm::Size.Height));
		left = System::Convert::ToDouble(leftLim);
		right = System::Convert::ToDouble(rightLim);
	}
}

Void Project::MainForm::textBoxLeftLim_TextChanged(Object^ sender, EventArgs^ e) {
	// Встановлення розміру вікна
	MainForm::Size = System::Drawing::Size(1310, System::Convert::ToInt16(MainForm::Size.Height));
}

Void Project::MainForm::textBoxRightLim_TextChanged(Object^ sender, EventArgs^ e) {
	// Встановлення розміру вікна
	MainForm::Size = System::Drawing::Size(1310, System::Convert::ToInt16(MainForm::Size.Height));
}

Void Project::MainForm::buttonMethodBisekcii_Click(Object^ sender, EventArgs^ e) {
	// Створення та запуск AnswerForm
	AnswerForm^ answer = gcnew AnswerForm("Метод бісекції", *equation, left, right);
	answer->ShowDialog();
}

Void Project::MainForm::buttonMethodNewton_Click(Object^ sender, EventArgs^ e) {
	// Створення та запуск AnswerForm
	AnswerForm^ answer = gcnew AnswerForm("Метод Ньютона", *equation, left, right);
	answer->ShowDialog();
}

Void Project::MainForm::buttonMethodSichnuh_Click(Object^ sender, EventArgs^ e) {
	// Створення та запуск AnswerForm
	AnswerForm^ answer = gcnew AnswerForm("Метод січних", *equation, left, right);
	answer->ShowDialog();
}