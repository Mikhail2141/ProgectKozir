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
    /// ������ ��� MyForm9
    /// </summary>
    public ref class MyForm9 : public System::Windows::Forms::Form
    {
    public:
        MyForm9(void)
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
        ~MyForm9()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;



    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    protected:

    protected:

    private:
        /// <summary>
        /// ������������ ���������� ������������.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// ��������� ����� ��� ��������� ������������ � �� ��������� 
        /// ���������� ����� ������ � ������� ��������� ����.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(185, 9);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(302, 20);
            this->label1->TabIndex = 3;
            this->label1->Text = L"������� � �������� �����������";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(11, 45);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(63, 20);
            this->label2->TabIndex = 6;
            this->label2->Text = L"�����";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(20, 68);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(54, 51);
            this->textBox1->TabIndex = 8;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(131, 68);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(54, 51);
            this->textBox2->TabIndex = 9;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(16, 220);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(388, 20);
            this->label4->TabIndex = 10;
            this->label4->Text = L"������ ������� ����� ��������� � ������: ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(11, 251);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(384, 20);
            this->label5->TabIndex = 11;
            this->label5->Text = L"������ ������� ����� ��� ��������� � sin:";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(277, 363);
            this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(103, 52);
            this->button1->TabIndex = 12;
            this->button1->Text = L"������";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(127, 45);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(72, 20);
            this->label3->TabIndex = 13;
            this->label3->Text = L"������";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(302, 68);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(54, 51);
            this->textBox3->TabIndex = 14;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(380, 68);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(54, 51);
            this->textBox6->TabIndex = 18;
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(460, 68);
            this->textBox7->Multiline = true;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(54, 51);
            this->textBox7->TabIndex = 19;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(319, 45);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(24, 20);
            this->label7->TabIndex = 20;
            this->label7->Text = L"a ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(479, 45);
            this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(18, 20);
            this->label8->TabIndex = 21;
            this->label8->Text = L"c";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(401, 45);
            this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(19, 20);
            this->label9->TabIndex = 22;
            this->label9->Text = L"b";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(11, 189);
            this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(330, 20);
            this->label10->TabIndex = 23;
            this->label10->Text = L"������ ������� �� ������� ������:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(11, 283);
            this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(466, 20);
            this->label11->TabIndex = 24;
            this->label11->Text = L"������ ������� ����� ������ ��������� ����������";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(536, 68);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(54, 51);
            this->textBox5->TabIndex = 25;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(544, 45);
            this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(35, 20);
            this->label12->TabIndex = 26;
            this->label12->Text = L"Sin";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(9, 314);
            this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(104, 20);
            this->label13->TabIndex = 27;
            this->label13->Text = L"��������: ";
            // 
            // MyForm9
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(661, 426);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm9";
            this->Text = L"��� �����9";
            this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
       // ����������� ����� �� ��������� ����� � ����� ��� ����������
        double a;
        double b;
        double c;
        double h;

        try
        {
             a = System::Convert::ToDouble(textBox3->Text);
             b = System::Convert::ToDouble(textBox7->Text);
             c = System::Convert::ToDouble(textBox6->Text);
             h = System::Convert::ToDouble(textBox2->Text);
        }
      
        catch (FormatException^)
        {
            MessageBox::Show("������: ����������, ������� ���������� ������������� ��������.");
            return;
        }
      

       // ��������� ������������
       double p = (a + b + c) / 2;

       // ��������� ������� �� ������� ������
       double s1 = round (System::Math::Sqrt(p * (p - a) * (p - b) * (p - c)) * 100) / 100;
       label10->Text = "������� �� ������� ������: " + s1.ToString();

       // ��������� ������� �� ��������� � ������
       double s2 = 0.5 * a * h ;
       label4->Text = "������� �� ��������� � ������: " + s2.ToString();

       // ��������� ������� ����� ��� ��������� � sin
       double angleC = System::Math::Asin((2 * s1) / (a * b));
       double s3 = round ((0.5 * a * b * System::Math::Sin(angleC)) * 100) / 100;
       label5->Text = "������� ����� ��� ��������� � sin: " + s3.ToString();

       // ��������� ������� ����� ������ ��������� ����������
       double radius = (a * b * c) / (4 * s1);
       double s4 = round ((0.5 * radius * (a + b + c)) * 100) / 100;
       label11->Text = "������� ����� ������ ��������� ����������: " + s4.ToString();
       
       // �������� 
       double perimeter = a + b + c; 
       label13->Text = "�������� ������������" + " = " + perimeter;
   }
private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
