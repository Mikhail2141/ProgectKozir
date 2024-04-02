#pragma once
#include "MyForm.h"
#include "MyForm6.h"
namespace qweqwe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm^ F;
	private: System::Windows::Forms::Button^ button2;
	public:
		MyForm6^ F6;
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Label^ label7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(142, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Алгебра";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(100, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(273, 24);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Решебник задач \"Козырь\" ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(142, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 42);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Геометрия";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 327);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm5";
			this->Text = L"Munu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		F = gcnew MyForm();
		F->Show();

	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 
		F6 = gcnew MyForm6();
		F6->Show();
	}
	
	
};
}
