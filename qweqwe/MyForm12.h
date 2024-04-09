#pragma once

namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm8
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;



	private: System::ComponentModel::IContainer^ components;

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 143);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(54, 51);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(389, 143);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(54, 51);
			this->textBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(42, 103);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Сторона";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(385, 103);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Высота";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(42, 276);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(249, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Площадь паралеллограмма";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm12::label4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(188, 386);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 52);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(42, 319);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Площадь паралеллограмма №2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm12::label2_Click_1);
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 494);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double rectangleLength;
	double rectangleWidth;
	double sin = 0.6;

	try
	{
		rectangleLength = Convert::ToDouble(textBox2->Text);
		rectangleWidth = Convert::ToDouble(textBox1->Text);
	}
	catch (FormatException^)
	{
		MessageBox::Show("Ошибка: Пожалуйста, введите допустимые целочисленные значения для длины и ширины прямоугольника");
		return;
	}


	double Square = rectangleLength * rectangleWidth;
	double parallelogram = rectangleLength * rectangleWidth * sin;

	label4->Text = "Площадь паралеллограмма " + " = " + Square.ToString();
	label2->Text = "Площадь паралеллограмма №2 " + " = " + parallelogram.ToString();
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
