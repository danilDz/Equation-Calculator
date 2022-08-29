#pragma once
#include "AboutAutorForm.h"
#include "AnswerForm.h"
#include "ClassEquation.h"
#include "ClassValidation.h"
#include <string>

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Клас MainForm
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		// Змінні ліва та права границі
		double left, right;
	
		   // Змінна класу Рівняння
		Equation* equation = new Equation(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

	public:
		// Конструктор
		MainForm(void);

	protected:
		// Деструктор
		~MainForm();

	// Графічний інтерфейс
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ buttonBegin;
	private: System::Windows::Forms::Button^ buttonAutor;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ buttonExit2;
	private: System::Windows::Forms::NumericUpDown^ powerNum;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ labelA0;
	private: System::Windows::Forms::TextBox^ textBoxA0;
	private: System::Windows::Forms::Label^ labelA1;
	private: System::Windows::Forms::Label^ labelA2;
	private: System::Windows::Forms::TextBox^ textBoxA1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ confirmButton;
	private: System::Windows::Forms::Label^ labelA10;
	private: System::Windows::Forms::TextBox^ textBoxA2;
	private: System::Windows::Forms::Label^ labelA3;
	private: System::Windows::Forms::TextBox^ textBoxA3;
	private: System::Windows::Forms::Label^ labelA4;
	private: System::Windows::Forms::TextBox^ textBoxA4;
	private: System::Windows::Forms::Label^ labelA5;
	private: System::Windows::Forms::TextBox^ textBoxA5;
	private: System::Windows::Forms::Label^ labelA6;
	private: System::Windows::Forms::Label^ labelA7;
	private: System::Windows::Forms::Label^ labelA8;
	private: System::Windows::Forms::Label^ labelA9;
	private: System::Windows::Forms::TextBox^ textBoxA10;
	private: System::Windows::Forms::TextBox^ textBoxA6;
	private: System::Windows::Forms::TextBox^ textBoxA7;
	private: System::Windows::Forms::TextBox^ textBoxA8;
	private: System::Windows::Forms::TextBox^ textBoxA9;
	private: System::Windows::Forms::TextBox^ textBoxResult;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttonMethodSichnuh;
	private: System::Windows::Forms::Button^ buttonMethodNewton;
	private: System::Windows::Forms::Button^ buttonMethodBisekcii;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ graphFunc;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ confirmButton2;
	private: System::Windows::Forms::TextBox^ textBoxRightLim;
	private: System::Windows::Forms::TextBox^ textBoxLeftLim;
	private: System::Windows::Forms::Label^ label5;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Потрібний метод для підтримки конструктора - не змінюйте
		/// зміст цього метода за допомогою редактора коду.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->buttonBegin = (gcnew System::Windows::Forms::Button());
			this->buttonAutor = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->confirmButton2 = (gcnew System::Windows::Forms::Button());
			this->textBoxRightLim = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLeftLim = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->graphFunc = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonMethodSichnuh = (gcnew System::Windows::Forms::Button());
			this->buttonMethodNewton = (gcnew System::Windows::Forms::Button());
			this->buttonMethodBisekcii = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->confirmButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelA2 = (gcnew System::Windows::Forms::Label());
			this->labelA0 = (gcnew System::Windows::Forms::Label());
			this->textBoxA0 = (gcnew System::Windows::Forms::TextBox());
			this->labelA1 = (gcnew System::Windows::Forms::Label());
			this->textBoxA1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA2 = (gcnew System::Windows::Forms::TextBox());
			this->labelA3 = (gcnew System::Windows::Forms::Label());
			this->textBoxA3 = (gcnew System::Windows::Forms::TextBox());
			this->labelA4 = (gcnew System::Windows::Forms::Label());
			this->textBoxA4 = (gcnew System::Windows::Forms::TextBox());
			this->labelA5 = (gcnew System::Windows::Forms::Label());
			this->textBoxA5 = (gcnew System::Windows::Forms::TextBox());
			this->labelA6 = (gcnew System::Windows::Forms::Label());
			this->labelA7 = (gcnew System::Windows::Forms::Label());
			this->labelA8 = (gcnew System::Windows::Forms::Label());
			this->labelA9 = (gcnew System::Windows::Forms::Label());
			this->textBoxA10 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA9 = (gcnew System::Windows::Forms::TextBox());
			this->labelA10 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->powerNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonExit2 = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->panelMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphFunc))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->powerNum))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Name = L"label1";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->buttonBegin);
			this->flowLayoutPanel1->Controls->Add(this->buttonAutor);
			this->flowLayoutPanel1->Controls->Add(this->buttonExit);
			resources->ApplyResources(this->flowLayoutPanel1, L"flowLayoutPanel1");
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			// 
			// buttonBegin
			// 
			this->buttonBegin->BackColor = System::Drawing::Color::White;
			this->buttonBegin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBegin->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->buttonBegin, L"buttonBegin");
			this->buttonBegin->ForeColor = System::Drawing::Color::Indigo;
			this->buttonBegin->Name = L"buttonBegin";
			this->buttonBegin->UseVisualStyleBackColor = false;
			this->buttonBegin->Click += gcnew System::EventHandler(this, &MainForm::buttonBegin_Click);
			// 
			// buttonAutor
			// 
			this->buttonAutor->BackColor = System::Drawing::Color::White;
			this->buttonAutor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAutor->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->buttonAutor, L"buttonAutor");
			this->buttonAutor->ForeColor = System::Drawing::Color::Indigo;
			this->buttonAutor->Name = L"buttonAutor";
			this->buttonAutor->UseVisualStyleBackColor = false;
			this->buttonAutor->Click += gcnew System::EventHandler(this, &MainForm::buttonAutor_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Indigo;
			this->buttonExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonExit->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->buttonExit->FlatAppearance->BorderSize = 2;
			resources->ApplyResources(this->buttonExit, L"buttonExit");
			this->buttonExit->ForeColor = System::Drawing::Color::White;
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonExit_Click);
			// 
			// panelMain
			// 
			this->panelMain->Controls->Add(this->confirmButton2);
			this->panelMain->Controls->Add(this->textBoxRightLim);
			this->panelMain->Controls->Add(this->textBoxLeftLim);
			this->panelMain->Controls->Add(this->label5);
			this->panelMain->Controls->Add(this->graphFunc);
			this->panelMain->Controls->Add(this->panel2);
			this->panelMain->Controls->Add(this->label4);
			this->panelMain->Controls->Add(this->buttonMethodSichnuh);
			this->panelMain->Controls->Add(this->buttonMethodNewton);
			this->panelMain->Controls->Add(this->buttonMethodBisekcii);
			this->panelMain->Controls->Add(this->panel1);
			this->panelMain->Controls->Add(this->textBoxResult);
			this->panelMain->Controls->Add(this->label3);
			this->panelMain->Controls->Add(this->confirmButton);
			this->panelMain->Controls->Add(this->tableLayoutPanel2);
			this->panelMain->Controls->Add(this->tableLayoutPanel1);
			this->panelMain->Controls->Add(this->groupBox1);
			this->panelMain->Controls->Add(this->powerNum);
			this->panelMain->Controls->Add(this->buttonExit2);
			this->panelMain->Controls->Add(this->buttonBack);
			this->panelMain->Controls->Add(this->label2);
			resources->ApplyResources(this->panelMain, L"panelMain");
			this->panelMain->Name = L"panelMain";
			// 
			// confirmButton2
			// 
			this->confirmButton2->BackColor = System::Drawing::Color::White;
			this->confirmButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->confirmButton2, L"confirmButton2");
			this->confirmButton2->ForeColor = System::Drawing::Color::Indigo;
			this->confirmButton2->Name = L"confirmButton2";
			this->confirmButton2->UseVisualStyleBackColor = false;
			this->confirmButton2->Click += gcnew System::EventHandler(this, &MainForm::confirmButton2_Click);
			// 
			// textBoxRightLim
			// 
			this->textBoxRightLim->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBoxRightLim, L"textBoxRightLim");
			this->textBoxRightLim->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxRightLim->Name = L"textBoxRightLim";
			this->textBoxRightLim->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxRightLim_TextChanged);
			// 
			// textBoxLeftLim
			// 
			this->textBoxLeftLim->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBoxLeftLim, L"textBoxLeftLim");
			this->textBoxLeftLim->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxLeftLim->Name = L"textBoxLeftLim";
			this->textBoxLeftLim->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxLeftLim_TextChanged);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Name = L"label5";
			// 
			// graphFunc
			// 
			this->graphFunc->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->graphFunc->BorderlineWidth = 0;
			this->graphFunc->BorderSkin->BackColor = System::Drawing::Color::DimGray;
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisX->LineColor = System::Drawing::Color::Orange;
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisY->LineColor = System::Drawing::Color::Orange;
			chartArea1->Name = L"ChartArea1";
			chartArea1->ShadowColor = System::Drawing::Color::Gray;
			this->graphFunc->ChartAreas->Add(chartArea1);
			resources->ApplyResources(this->graphFunc, L"graphFunc");
			this->graphFunc->Name = L"graphFunc";
			this->graphFunc->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->graphFunc->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Red };
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Font = (gcnew System::Drawing::Font(L"Impact", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Name = L"Series1";
			this->graphFunc->Series->Add(series1);
			title1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			this->graphFunc->Titles->Add(title1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Name = L"label4";
			// 
			// buttonMethodSichnuh
			// 
			this->buttonMethodSichnuh->BackColor = System::Drawing::Color::White;
			this->buttonMethodSichnuh->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->buttonMethodSichnuh, L"buttonMethodSichnuh");
			this->buttonMethodSichnuh->ForeColor = System::Drawing::Color::Indigo;
			this->buttonMethodSichnuh->Name = L"buttonMethodSichnuh";
			this->buttonMethodSichnuh->UseVisualStyleBackColor = false;
			this->buttonMethodSichnuh->Click += gcnew System::EventHandler(this, &MainForm::buttonMethodSichnuh_Click);
			// 
			// buttonMethodNewton
			// 
			this->buttonMethodNewton->BackColor = System::Drawing::Color::White;
			this->buttonMethodNewton->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->buttonMethodNewton, L"buttonMethodNewton");
			this->buttonMethodNewton->ForeColor = System::Drawing::Color::Indigo;
			this->buttonMethodNewton->Name = L"buttonMethodNewton";
			this->buttonMethodNewton->UseVisualStyleBackColor = false;
			this->buttonMethodNewton->Click += gcnew System::EventHandler(this, &MainForm::buttonMethodNewton_Click);
			// 
			// buttonMethodBisekcii
			// 
			this->buttonMethodBisekcii->BackColor = System::Drawing::Color::White;
			this->buttonMethodBisekcii->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->buttonMethodBisekcii, L"buttonMethodBisekcii");
			this->buttonMethodBisekcii->ForeColor = System::Drawing::Color::Indigo;
			this->buttonMethodBisekcii->Name = L"buttonMethodBisekcii";
			this->buttonMethodBisekcii->UseVisualStyleBackColor = false;
			this->buttonMethodBisekcii->Click += gcnew System::EventHandler(this, &MainForm::buttonMethodBisekcii_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// textBoxResult
			// 
			this->textBoxResult->BackColor = System::Drawing::Color::White;
			this->textBoxResult->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBoxResult, L"textBoxResult");
			this->textBoxResult->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxResult->Name = L"textBoxResult";
			this->textBoxResult->ReadOnly = true;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Name = L"label3";
			// 
			// confirmButton
			// 
			this->confirmButton->BackColor = System::Drawing::Color::White;
			this->confirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->confirmButton, L"confirmButton");
			this->confirmButton->ForeColor = System::Drawing::Color::Indigo;
			this->confirmButton->Name = L"confirmButton";
			this->confirmButton->UseVisualStyleBackColor = false;
			this->confirmButton->Click += gcnew System::EventHandler(this, &MainForm::confirmButton_Click);
			// 
			// tableLayoutPanel2
			// 
			resources->ApplyResources(this->tableLayoutPanel2, L"tableLayoutPanel2");
			this->tableLayoutPanel2->Controls->Add(this->labelA2, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelA0, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA0, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelA1, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA1, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA2, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelA3, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA3, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelA4, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA4, 9, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelA5, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA5, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->labelA6, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->labelA7, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->labelA8, 6, 1);
			this->tableLayoutPanel2->Controls->Add(this->labelA9, 8, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA10, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA6, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA7, 5, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA8, 7, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxA9, 9, 1);
			this->tableLayoutPanel2->Controls->Add(this->labelA10, 0, 2);
			this->tableLayoutPanel2->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel2->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			// 
			// labelA2
			// 
			resources->ApplyResources(this->labelA2, L"labelA2");
			this->labelA2->BackColor = System::Drawing::Color::Transparent;
			this->labelA2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA2->ForeColor = System::Drawing::Color::White;
			this->labelA2->Name = L"labelA2";
			// 
			// labelA0
			// 
			resources->ApplyResources(this->labelA0, L"labelA0");
			this->labelA0->BackColor = System::Drawing::Color::Transparent;
			this->labelA0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA0->ForeColor = System::Drawing::Color::White;
			this->labelA0->Name = L"labelA0";
			// 
			// textBoxA0
			// 
			resources->ApplyResources(this->textBoxA0, L"textBoxA0");
			this->textBoxA0->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA0->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA0->Name = L"textBoxA0";
			// 
			// labelA1
			// 
			resources->ApplyResources(this->labelA1, L"labelA1");
			this->labelA1->BackColor = System::Drawing::Color::Transparent;
			this->labelA1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA1->ForeColor = System::Drawing::Color::White;
			this->labelA1->Name = L"labelA1";
			// 
			// textBoxA1
			// 
			resources->ApplyResources(this->textBoxA1, L"textBoxA1");
			this->textBoxA1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA1->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA1->Name = L"textBoxA1";
			// 
			// textBoxA2
			// 
			resources->ApplyResources(this->textBoxA2, L"textBoxA2");
			this->textBoxA2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA2->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA2->Name = L"textBoxA2";
			// 
			// labelA3
			// 
			resources->ApplyResources(this->labelA3, L"labelA3");
			this->labelA3->BackColor = System::Drawing::Color::Transparent;
			this->labelA3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA3->ForeColor = System::Drawing::Color::White;
			this->labelA3->Name = L"labelA3";
			// 
			// textBoxA3
			// 
			resources->ApplyResources(this->textBoxA3, L"textBoxA3");
			this->textBoxA3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA3->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA3->Name = L"textBoxA3";
			// 
			// labelA4
			// 
			resources->ApplyResources(this->labelA4, L"labelA4");
			this->labelA4->BackColor = System::Drawing::Color::Transparent;
			this->labelA4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA4->ForeColor = System::Drawing::Color::White;
			this->labelA4->Name = L"labelA4";
			// 
			// textBoxA4
			// 
			resources->ApplyResources(this->textBoxA4, L"textBoxA4");
			this->textBoxA4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA4->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA4->Name = L"textBoxA4";
			// 
			// labelA5
			// 
			resources->ApplyResources(this->labelA5, L"labelA5");
			this->labelA5->BackColor = System::Drawing::Color::Transparent;
			this->labelA5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA5->ForeColor = System::Drawing::Color::White;
			this->labelA5->Name = L"labelA5";
			// 
			// textBoxA5
			// 
			resources->ApplyResources(this->textBoxA5, L"textBoxA5");
			this->textBoxA5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA5->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA5->Name = L"textBoxA5";
			// 
			// labelA6
			// 
			resources->ApplyResources(this->labelA6, L"labelA6");
			this->labelA6->BackColor = System::Drawing::Color::Transparent;
			this->labelA6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA6->ForeColor = System::Drawing::Color::White;
			this->labelA6->Name = L"labelA6";
			// 
			// labelA7
			// 
			resources->ApplyResources(this->labelA7, L"labelA7");
			this->labelA7->BackColor = System::Drawing::Color::Transparent;
			this->labelA7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA7->ForeColor = System::Drawing::Color::White;
			this->labelA7->Name = L"labelA7";
			// 
			// labelA8
			// 
			resources->ApplyResources(this->labelA8, L"labelA8");
			this->labelA8->BackColor = System::Drawing::Color::Transparent;
			this->labelA8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA8->ForeColor = System::Drawing::Color::White;
			this->labelA8->Name = L"labelA8";
			// 
			// labelA9
			// 
			resources->ApplyResources(this->labelA9, L"labelA9");
			this->labelA9->BackColor = System::Drawing::Color::Transparent;
			this->labelA9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA9->ForeColor = System::Drawing::Color::White;
			this->labelA9->Name = L"labelA9";
			// 
			// textBoxA10
			// 
			resources->ApplyResources(this->textBoxA10, L"textBoxA10");
			this->textBoxA10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA10->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA10->Name = L"textBoxA10";
			// 
			// textBoxA6
			// 
			resources->ApplyResources(this->textBoxA6, L"textBoxA6");
			this->textBoxA6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA6->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA6->Name = L"textBoxA6";
			// 
			// textBoxA7
			// 
			resources->ApplyResources(this->textBoxA7, L"textBoxA7");
			this->textBoxA7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA7->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA7->Name = L"textBoxA7";
			// 
			// textBoxA8
			// 
			resources->ApplyResources(this->textBoxA8, L"textBoxA8");
			this->textBoxA8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA8->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA8->Name = L"textBoxA8";
			// 
			// textBoxA9
			// 
			resources->ApplyResources(this->textBoxA9, L"textBoxA9");
			this->textBoxA9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA9->ForeColor = System::Drawing::Color::Indigo;
			this->textBoxA9->Name = L"textBoxA9";
			// 
			// labelA10
			// 
			resources->ApplyResources(this->labelA10, L"labelA10");
			this->labelA10->BackColor = System::Drawing::Color::Transparent;
			this->labelA10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelA10->ForeColor = System::Drawing::Color::White;
			this->labelA10->Name = L"labelA10";
			// 
			// tableLayoutPanel1
			// 
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// powerNum
			// 
			this->powerNum->BackColor = System::Drawing::Color::White;
			this->powerNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->powerNum, L"powerNum");
			this->powerNum->ForeColor = System::Drawing::Color::Indigo;
			this->powerNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->powerNum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->powerNum->Name = L"powerNum";
			this->powerNum->ReadOnly = true;
			this->powerNum->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->powerNum->ValueChanged += gcnew System::EventHandler(this, &MainForm::powerNum_ValueChanged);
			// 
			// buttonExit2
			// 
			this->buttonExit2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonExit2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->buttonExit2->FlatAppearance->BorderSize = 2;
			resources->ApplyResources(this->buttonExit2, L"buttonExit2");
			this->buttonExit2->ForeColor = System::Drawing::Color::White;
			this->buttonExit2->Name = L"buttonExit2";
			this->buttonExit2->UseVisualStyleBackColor = true;
			this->buttonExit2->Click += gcnew System::EventHandler(this, &MainForm::buttonExit2_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBack->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->buttonBack->FlatAppearance->BorderSize = 2;
			resources->ApplyResources(this->buttonBack, L"buttonBack");
			this->buttonBack->ForeColor = System::Drawing::Color::White;
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MainForm::buttonBack_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Name = L"label2";
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Indigo;
			this->ControlBox = false;
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphFunc))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->powerNum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: 

		// Подія завантаження головної форми
		Void MainForm_Load(Object^ sender, EventArgs^ e);
	
		// Подія натискання першої кнопки Вихід
		Void buttonExit_Click(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки Про автора
		Void buttonAutor_Click(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки На головну
		Void buttonBack_Click(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки Почати
		Void buttonBegin_Click(Object^ sender, EventArgs^ e);

		// Подія натискання другої кнопки Вихід
		Void buttonExit2_Click(Object^ sender, EventArgs^ e);

		// Подія зміни значення степеня рівняння
		Void powerNum_ValueChanged(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки Ввести
		Void confirmButton_Click(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки Задати
		Void confirmButton2_Click(Object^ sender, EventArgs^ e);

		// Подія зміни значення лівої границі відрізка
		Void textBoxLeftLim_TextChanged(Object^ sender, EventArgs^ e);

		// Подія зміни значення правої границі відрізка
		Void textBoxRightLim_TextChanged(Object^ sender, EventArgs^ e);

		// Подія натискання кнопки Метод бісекції
		Void buttonMethodBisekcii_Click(Object^ sender, EventArgs^ e);
	
		// Подія натискання кнопки Метод Ньютона
		Void buttonMethodNewton_Click(Object^ sender, EventArgs^ e);
	
		// Подія натискання кнопки Метод січних
		Void buttonMethodSichnuh_Click(Object^ sender, EventArgs^ e);
	
	
};
}
