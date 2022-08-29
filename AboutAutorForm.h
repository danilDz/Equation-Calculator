#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Клас AboutAutorForm
	public ref class AboutAutorForm : public System::Windows::Forms::Form
	{
	public:
		// Конструктор
		AboutAutorForm(void);

	protected:
		// Деструктор
		~AboutAutorForm();

	// Графічний інтерфейс
	private: 
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Button^ buttonClose;
		System::Windows::Forms::Label^ label2;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Потрібний метод для підтримки конструктора - не змінюйте
		/// зміст цього метода за допомогою редактора коду.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutAutorForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(332, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Про автора";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(545, 122);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 456);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Indigo;
			this->buttonClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClose->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->buttonClose->FlatAppearance->BorderSize = 2;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClose->ForeColor = System::Drawing::Color::White;
			this->buttonClose->Location = System::Drawing::Point(404, 607);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(207, 77);
			this->buttonClose->TabIndex = 3;
			this->buttonClose->Text = L"Закрити";
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &AboutAutorForm::buttonClose_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(99, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(440, 306);
			this->label2->TabIndex = 4;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// AboutAutorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(5, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Indigo;
			this->ClientSize = System::Drawing::Size(1007, 719);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->MaximizeBox = false;
			this->Name = L"AboutAutorForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About Autor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: 
		// Подія натискання кнопки Закрити
		Void buttonClose_Click(Object^ sender, EventArgs^ e);
};
}
