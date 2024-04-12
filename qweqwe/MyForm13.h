#pragma once
#include"MyForm16.h"
#include "MyForm17.h"
#include "MyForm18.h"
namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
	public:
		MyForm16^ F16;
		MyForm17^ F17;
	private: System::Windows::Forms::Button^ button2;
	public:
		MyForm18^ F18;
		MyForm13(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(159, 115);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"„астота";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(159, 184);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 52);
			this->button4->TabIndex = 5;
			this->button4->Text = L"ƒлина волны";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm13::button4_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(159, 39);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(228, 52);
			this->button2->TabIndex = 6;
			this->button2->Text = L"ѕериод";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::button2_Click_1);
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 292);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm13";
			this->Text = L"MyForm13";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		F16 = gcnew MyForm16();
		F16->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}

	 
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		F18 = gcnew MyForm18();
		F18->Show();
	
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	F17 = gcnew MyForm17();
	F17->Show();


}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
