#pragma once
#include "MyForm13.h"
#include "MyForm14.h"
#include "MyForm15.h"
namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
		MyForm13^ F13;
		MyForm14^ F14;
		MyForm15^ F15;
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(43, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(403, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ћеханические колебани€ и волны";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(159, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 46);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ƒинамика";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm12::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(159, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 46);
			this->button3->TabIndex = 4;
			this->button3->Text = L" инематика";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm12::button3_Click);
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm12";
			this->Text = L"MyForm12";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		F13 = gcnew MyForm13();
		F13->Show();


	};


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		F14 = gcnew MyForm14();
		F14->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		F15 = gcnew MyForm15();
		F15->Show();
	}
};
}