#pragma once
 
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
namespace qweqwe {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm1^ F1;
		MyForm2^ F2;
		MyForm3^ F3;
		MyForm4^ F4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	public:
		String^ p;
		


		


		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

		 

	private: System::Windows::Forms::Button^ button2;
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
		/// ..
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(26, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L" вадраты-кубы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(26, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ƒискриминант";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(26, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(302, 42);
			this->button3->TabIndex = 5;
			this->button3->Text = L"—войство степеней";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(26, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(384, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"—войство корней в n-ой степени";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 331);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//double a = System::Convert::ToDouble(textBox1->Text);
		//double b = System::Convert::ToDouble(textBox2->Text);
		//double c = a + b;
		//p = "Answer:" + c;
		//label1->Text = p;
		
		F1 = gcnew MyForm1();
		F1->Show();



	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		F2 = gcnew MyForm2();
		F2->Show();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		F3 = gcnew MyForm3();
		F3->Show();
	}

	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		F4 = gcnew MyForm4();
		F4->Show();
	}


};
}
