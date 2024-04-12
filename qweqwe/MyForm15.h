#pragma once
#include"MyForm23.h"
#include"MyForm24.h"
#include"MyForm25.h"
namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		MyForm23^ F23;
		MyForm24^ F24;
		MyForm25^ F25;

		MyForm15(void)
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
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(156, 45);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(228, 52);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ускорение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm15::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(45, 117);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(460, 52);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Расстояние, скорость, время ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm15::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(13, 188);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(516, 52);
			this->button4->TabIndex = 7;
			this->button4->Text = L" Скорость свободно падающего тела";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm15::button4_Click);
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 299);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm15";
			this->Text = L"MyForm15";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		 
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		F23 = gcnew MyForm23();
		F23->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		F24 = gcnew MyForm24();
		F24->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	F25 = gcnew MyForm25();
	F25->Show();
}
};
}
