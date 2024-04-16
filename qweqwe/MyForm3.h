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
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(287, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"РЕШИТЬ";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(92, 86);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(52, 49);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(575, 90);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(51, 49);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(88, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Число  \r\n";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm3::label1_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(407, 90);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(51, 49);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(413, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Умножение степени с одинаковым основанием ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm3::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(481, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Степень";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm3::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(392, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Деление степени с одинаковым основанием ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm3::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(220, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Свойство степеней";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 415);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm3";
			this->Text = L"Свойство степеней";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

  private:
	  int MultiplyExponents(int base, int x, int y)
	  {
		 
		  return base ^ (y + x);
	  }
	  int DivideExponents(int base, int x, int y)
	  {
		  if (x > y)
		  {
			  MessageBox::Show("Ошибка: Показатель делителя не может быть больше показателя делимого");
			 return -1;
		  }

		  return base ^ (y - x);
	  }

  private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
  {
	  int baseValue;
	  int exponent1, exponent2;
	  try
	  {
		  baseValue = Convert::ToInt32(richTextBox1->Text);
		  exponent1 = Convert::ToInt32(richTextBox2->Text);
		  exponent2 = Convert::ToInt32(richTextBox3->Text);
		   }
    catch (FormatException^)
    {
		MessageBox::Show("Ошибка: Пожалуйста, введите допустимые целочисленные значения.");
		return;
    }

    int product = MultiplyExponents( baseValue,  exponent1, exponent2);
    int quotient = DivideExponents(baseValue, exponent1, exponent2);

    richTextBox1->Clear();
    richTextBox2->Clear();
    richTextBox3->Clear();
	richTextBox1->Text = baseValue.ToString();
    richTextBox2->Text = exponent1.ToString();
    richTextBox3->Text = exponent2.ToString();


	label2->Text = baseValue + "^" + exponent2.ToString() +" * "+ baseValue + "^" + exponent1.ToString() + " = "
		+ baseValue + "^" + (exponent2 + exponent1).ToString() + " = " +  pow(baseValue , (exponent2 + exponent1));
    
	label4->Text =  baseValue + "^" + exponent2.ToString() + " / " + baseValue+"^"+ exponent1.ToString() +
                   (exponent2 >= exponent1 ? " = " + baseValue+ "^" + (exponent2 - exponent1).ToString() + " = " + pow(baseValue, (exponent2 - exponent1)) : "");
	 
	

    if (quotient == -1)
    {
      label4->Text = "Ошибка: Показатель делителя не может быть больше показателя делимого.";
    }
  }

  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e)
  {
  }
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
