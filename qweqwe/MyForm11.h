#pragma once
#include <cmath>

namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 54);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 47);
			this->textBox1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(374, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Площадь и периметр ромба";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(36, 105);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(175, 25);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Сторона ромба ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(513, 25);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Рассчёт площади ромба через сторону и высоту\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 25);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Периметр ромба";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(482, 50);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Рассчёт площади ромба через две диагонали\r\n\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(537, 50);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Рассчёт площади ромба через сторону и угол sin a\r\n\r\n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(750, 50);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Рассчёт площади ромба через радиус вписанной окружности и сторону\r\n\r\n";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(424, 455);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 64);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(462, 105);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(215, 25);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Радиус Окружности";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(516, 54);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 44);
			this->textBox2->TabIndex = 32;
			 
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(276, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 25);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Высота ромба ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(313, 54);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 44);
			this->textBox3->TabIndex = 34;
		 
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(854, 49);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 44);
			this->textBox4->TabIndex = 35;
	 
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(782, 49);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 44);
			this->textBox5->TabIndex = 36;
 
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(792, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 25);
			this->label9->TabIndex = 37;
			this->label9->Text = L"d1 ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(867, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 25);
			this->label11->TabIndex = 38;
			this->label11->Text = L"d2";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(985, 49);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 44);
			this->textBox6->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(996, 105);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 25);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Sin";
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 565);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		const double Pi = 3.14; 
		double rhombHeight; // высота ромба
		double rhombSide; // сторона ромба 
		double circleRadius; // Радиус окружности
		double d1; 
		double d2; 
		double Sin; 

		try
		{
			rhombHeight = Convert::ToDouble(textBox1->Text); 
			rhombSide = Convert::ToDouble(textBox3->Text);
			circleRadius = Convert::ToDouble(textBox2->Text); 
			d1 = Convert::ToDouble(textBox5->Text);
			d2 = Convert::ToDouble(textBox4->Text); 
			Sin = Convert::ToDouble(textBox6->Text);
		}

		catch (FormatException^)
		{
			MessageBox::Show("Ошибка: Пожалуйста, введите допустимые целочисленные значения");
			return;
		}

		// Расчёт площади ромба через высоту и сторону ромба
		double Square1 = rhombHeight * rhombSide; 
		label4->Text = "Площадь ромба через высоту и сторону" + " = " + Square1;

		// Рассчёт площади ромба через две диагонали
		double Square2 = (d1*d2)/2;
		label2->Text = "Площадь ромба через две диагонали" + " = " + Square2;

		// Рассчёт площади ромба через сторону и угол sin a
		double Square3 = pow(rhombSide, 2) *  round (sin(rhombSide) * 100) / 100; 
		label3->Text = "Площадь ромба через сторону и угол sin a" + " = " + Square3;

		// Рассчёт площади ромба через радиус вписанной окружности и сторону
		double Square4 = (2 * rhombSide) * Pi;
		label6->Text = "площадь ромба через радиус вписанной окружности и сторону"  + " = " + Square4;

		// Периметр
		double perimeter = 4 * rhombSide; 
		label5->Text = "Периметр ромба" + " = " + perimeter;

	}
 
};
}
