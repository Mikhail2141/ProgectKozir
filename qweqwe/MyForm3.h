#pragma once

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


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(190, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"РЕШИТЬ";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(64, 90);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(52, 49);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(478, 90);
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
			this->label1->Location = System::Drawing::Point(60, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Число  \r\n";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm3::label1_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(343, 90);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(51, 49);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(403, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Степень";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm3::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(190, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(204, 29);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"Свойство степеней";
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
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 370);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
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
		  return base ^ (x + y);
	  }
	  int DivideExponents(int base, int x, int y)
	  {
		  if (x < y)
		  {
			  MessageBox::Show("Error: Divisor exponent cannot be greater than dividend exponent.");
			  return -1;
		  }

		  return base ^ (x - y);
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
      MessageBox::Show("Error: Please enter valid integer values for base and exponents.");
      return;
    }

    int product = MultiplyExponents(baseValue, exponent1, exponent2);
    int quotient = DivideExponents(baseValue, exponent1, exponent2);

    richTextBox1->Clear();
    richTextBox2->Clear();
    richTextBox3->Clear();
	richTextBox1->Text = baseValue.ToString();
    richTextBox2->Text = exponent1.ToString();
    richTextBox3->Text = exponent2.ToString();


    label2->Text = "a^" + exponent1.ToString() + " * a^" + exponent2.ToString() + " = a^" + product.ToString();
    label4->Text = "a^" + exponent1.ToString() + " / a^" + exponent2.ToString() + 
                   (exponent1 >= exponent2 ? " = a^" + (exponent1 - exponent2).ToString() : "");
    if (quotient == -1)
    {
      label4->Text = "Error: Divisor exponent cannot be greater than dividend exponent.";
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
};
}
