#pragma once
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include "Circle.h"
namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm7^ F7;
		MyForm8^ F8;
		MyForm9^ F9;
		Circle^ F10;

		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(162, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(162, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(162, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 58);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�������������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(162, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm6::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(162, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 39);
			this->button5->TabIndex = 4;
			this->button5->Text = L"����";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(162, 290);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(180, 46);
			this->button6->TabIndex = 5;
			this->button6->Text = L"�������������";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 404);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		F8 = gcnew MyForm8();
		F8->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		F9 = gcnew MyForm9();
		F9->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		F7 = gcnew MyForm7(); 
		F7-> Show(); 
	}


private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	F10 = gcnew Circle();
	F10->Show();
}
};
}
