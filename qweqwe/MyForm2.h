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
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		String^ l1;
		String^ l2;
	private: System::Windows::Forms::Label^ label7;
		   String^ l3;
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 90);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 46);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 90);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(60, 46);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(116, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(88, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"A";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 90);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 46);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(171, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(253, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"C";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(48, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"D =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(48, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"x1 =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(48, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"x2 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(98, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 24);
			this->label7->TabIndex = 10;
			this->label7->Text = L"y = ax^2 + bx + c";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm2::label7_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 324);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"Discriminant";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double a;
	double b;
	double c;

	try
	{
		b = Convert::ToDouble(textBox2->Text);
		a = Convert::ToDouble(textBox1->Text);
		c = Convert::ToDouble(textBox3->Text);
	}
	catch (FormatException^)
	{
		MessageBox::Show("������: ����������, ������� ���������� ������������� ��������.");
		return;
	}


	double D = (b * b) - (4 * (a * c));
	double x1 = round ((((b * (-1)) + (Math::Sqrt(D))) / (2 * a)) * 100) / 100;
	double x2 = round ((((b * (-1)) - (Math::Sqrt(D))) / (2 * a)) * 100) / 100;
	if (D > 0)
	{
		l1 = "D = b*b - 4*a*c = " + D;
		label4->Text = l1;
		l2 = "x1 = " + x1;
		label5->Text = l2;
		l3 = "x2 = " + x2;
		label6->Text = l3;
	}
	else if (D == 0)
	{
		l1 = "D = b*b - 4*a*c = " + D;
		label4->Text = l1;
		l2 = "x = " + x1;
		label5->Text = l2;
		l3 = "";
		label6->Text = l3;
	}
	else
	{
		l1 = "D = b*b - 4*a*c = " + D;
		label4->Text = l1;
		l2 = "������ ���";
		label5->Text = l2;
		l3 = "";
		label6->Text = l3;
	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
