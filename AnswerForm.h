#pragma once
#include "ClassEquation.h"
#include "ClassValidation.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Клас AnswerForm
	public ref class AnswerForm : public System::Windows::Forms::Form
	{
	private:
		// Змінна назви методу
		String^ method;
		// Змінні права та ліва границі і корінь
		double leftLim, rightLim, x = INFINITY;
		   // Змінна класу Рівняння
		Equation* equation;

	public:

		// Конструктор за замовчуванням
		AnswerForm(void);

		// Конструктор з параметрами
		AnswerForm(String^ m, Equation& equation, double left, double right);

	protected:
		// Деструктор
		~AnswerForm();


	// Графічний інтерфейс
	private: System::Windows::Forms::Label^ labelMethod;
	private: System::Windows::Forms::Label^ labelEquation;
	private: System::Windows::Forms::TextBox^ textBoxEquation;
	private: System::Windows::Forms::Label^ labelLimits;
	private: System::Windows::Forms::Label^ labelAccuracy;
	private: System::Windows::Forms::TextBox^ textBoxAccuracy;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Label^ labelAnswer;
	private: System::Windows::Forms::TextBox^ textBoxAnswer;
	private: System::Windows::Forms::Button^ buttonAnswer;
	private: System::Windows::Forms::Button^ buttonFile;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Потрібний метод для підтримки конструктора - не змінюйте
		/// зміст цього метода за допомогою редактора коду.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelMethod = (gcnew System::Windows::Forms::Label());
			this->labelEquation = (gcnew System::Windows::Forms::Label());
			this->textBoxEquation = (gcnew System::Windows::Forms::TextBox());
			this->labelLimits = (gcnew System::Windows::Forms::Label());
			this->labelAccuracy = (gcnew System::Windows::Forms::Label());
			this->textBoxAccuracy = (gcnew System::Windows::Forms::TextBox());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonAnswer = (gcnew System::Windows::Forms::Button());
			this->labelAnswer = (gcnew System::Windows::Forms::Label());
			this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			this->buttonFile = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelMethod
			// 
			this->labelMethod->AutoSize = true;
			this->labelMethod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelMethod->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMethod->ForeColor = System::Drawing::Color::White;
			this->labelMethod->Location = System::Drawing::Point(248, 29);
			this->labelMethod->Name = L"labelMethod";
			this->labelMethod->Size = System::Drawing::Size(256, 45);
			this->labelMethod->TabIndex = 0;
			this->labelMethod->Text = L"Метод бісекції";
			this->labelMethod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelEquation
			// 
			this->labelEquation->AutoSize = true;
			this->labelEquation->ForeColor = System::Drawing::Color::White;
			this->labelEquation->Location = System::Drawing::Point(66, 103);
			this->labelEquation->Name = L"labelEquation";
			this->labelEquation->Size = System::Drawing::Size(130, 34);
			this->labelEquation->TabIndex = 1;
			this->labelEquation->Text = L"Рівняння :";
			this->labelEquation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxEquation
			// 
			this->textBoxEquation->BackColor = System::Drawing::Color::White;
			this->textBoxEquation->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxEquation->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxEquation->Location = System::Drawing::Point(202, 100);
			this->textBoxEquation->Multiline = true;
			this->textBoxEquation->Name = L"textBoxEquation";
			this->textBoxEquation->ReadOnly = true;
			this->textBoxEquation->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxEquation->Size = System::Drawing::Size(469, 72);
			this->textBoxEquation->TabIndex = 2;
			this->textBoxEquation->Text = L"...";
			this->textBoxEquation->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelLimits
			// 
			this->labelLimits->AutoSize = true;
			this->labelLimits->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelLimits->ForeColor = System::Drawing::Color::White;
			this->labelLimits->Location = System::Drawing::Point(66, 206);
			this->labelLimits->Name = L"labelLimits";
			this->labelLimits->Size = System::Drawing::Size(219, 34);
			this->labelLimits->TabIndex = 3;
			this->labelLimits->Text = L"Відрізок :  [-10; 10]";
			this->labelLimits->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelAccuracy
			// 
			this->labelAccuracy->AutoSize = true;
			this->labelAccuracy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelAccuracy->ForeColor = System::Drawing::Color::White;
			this->labelAccuracy->Location = System::Drawing::Point(354, 206);
			this->labelAccuracy->Name = L"labelAccuracy";
			this->labelAccuracy->Size = System::Drawing::Size(125, 34);
			this->labelAccuracy->TabIndex = 4;
			this->labelAccuracy->Text = L"Точність :";
			this->labelAccuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxAccuracy
			// 
			this->textBoxAccuracy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxAccuracy->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxAccuracy->Location = System::Drawing::Point(485, 206);
			this->textBoxAccuracy->Name = L"textBoxAccuracy";
			this->textBoxAccuracy->Size = System::Drawing::Size(186, 33);
			this->textBoxAccuracy->TabIndex = 5;
			this->textBoxAccuracy->Text = L"0,001";
			this->textBoxAccuracy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxAccuracy->WordWrap = false;
			// 
			// buttonClose
			// 
			this->buttonClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClose->ForeColor = System::Drawing::Color::White;
			this->buttonClose->Location = System::Drawing::Point(72, 333);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(281, 73);
			this->buttonClose->TabIndex = 6;
			this->buttonClose->Text = L"Закрити";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &AnswerForm::buttonClose_Click);
			// 
			// buttonAnswer
			// 
			this->buttonAnswer->BackColor = System::Drawing::Color::White;
			this->buttonAnswer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAnswer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAnswer->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAnswer->ForeColor = System::Drawing::Color::Indigo;
			this->buttonAnswer->Location = System::Drawing::Point(390, 333);
			this->buttonAnswer->Name = L"buttonAnswer";
			this->buttonAnswer->Size = System::Drawing::Size(281, 73);
			this->buttonAnswer->TabIndex = 7;
			this->buttonAnswer->Text = L"Знайти корінь";
			this->buttonAnswer->UseVisualStyleBackColor = false;
			this->buttonAnswer->Click += gcnew System::EventHandler(this, &AnswerForm::buttonAnswer_Click);
			// 
			// labelAnswer
			// 
			this->labelAnswer->AutoSize = true;
			this->labelAnswer->ForeColor = System::Drawing::Color::White;
			this->labelAnswer->Location = System::Drawing::Point(66, 272);
			this->labelAnswer->Name = L"labelAnswer";
			this->labelAnswer->Size = System::Drawing::Size(144, 34);
			this->labelAnswer->TabIndex = 8;
			this->labelAnswer->Text = L"Відповідь :";
			this->labelAnswer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxAnswer
			// 
			this->textBoxAnswer->BackColor = System::Drawing::Color::White;
			this->textBoxAnswer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxAnswer->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxAnswer->Location = System::Drawing::Point(216, 273);
			this->textBoxAnswer->Name = L"textBoxAnswer";
			this->textBoxAnswer->ReadOnly = true;
			this->textBoxAnswer->Size = System::Drawing::Size(455, 33);
			this->textBoxAnswer->TabIndex = 9;
			this->textBoxAnswer->Text = L"...";
			this->textBoxAnswer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonFile
			// 
			this->buttonFile->BackColor = System::Drawing::Color::White;
			this->buttonFile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFile->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFile->ForeColor = System::Drawing::Color::Indigo;
			this->buttonFile->Location = System::Drawing::Point(72, 433);
			this->buttonFile->Name = L"buttonFile";
			this->buttonFile->Size = System::Drawing::Size(599, 71);
			this->buttonFile->TabIndex = 10;
			this->buttonFile->Text = L"Записати результат в файл";
			this->buttonFile->UseVisualStyleBackColor = false;
			this->buttonFile->Click += gcnew System::EventHandler(this, &AnswerForm::buttonFile_Click);
			// 
			// AnswerForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Indigo;
			this->ClientSize = System::Drawing::Size(741, 534);
			this->ControlBox = false;
			this->Controls->Add(this->buttonFile);
			this->Controls->Add(this->textBoxAnswer);
			this->Controls->Add(this->labelAnswer);
			this->Controls->Add(this->buttonAnswer);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->textBoxAccuracy);
			this->Controls->Add(this->labelAccuracy);
			this->Controls->Add(this->labelLimits);
			this->Controls->Add(this->textBoxEquation);
			this->Controls->Add(this->labelEquation);
			this->Controls->Add(this->labelMethod);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Indigo;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AnswerForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Answer";
			this->Load += gcnew System::EventHandler(this, &AnswerForm::AnswerForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: 

		// Подія натискання кнопки Закрити
		Void buttonClose_Click(Object^ sender, EventArgs^ e);
	
		// Подія завантаження AnswerForm
		Void AnswerForm_Load(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки Знайти корінь
		Void buttonAnswer_Click(Object^ sender, EventArgs^ e);
	
		// Подія натискання кнопки Записати результат в файл
		Void buttonFile_Click(Object^ sender, EventArgs^ e);

	};
}
