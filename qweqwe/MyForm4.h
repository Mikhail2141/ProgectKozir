#pragma once
#include <cmath>

using namespace System;

namespace qweqwe {

    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm4 : public System::Windows::Forms::Form
    {
    public:
        MyForm4(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            SolveButton->Click += gcnew System::EventHandler(this, &MyForm4::SolveButton_Click);
        }

    protected:
        ~MyForm4()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ SolveButton;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox3;


    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;



    protected:

    private:

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->SolveButton = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // SolveButton
            // 
            this->SolveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->SolveButton->ForeColor = System::Drawing::Color::Black;
            this->SolveButton->Location = System::Drawing::Point(156, 277);
            this->SolveButton->Name = L"SolveButton";
            this->SolveButton->Size = System::Drawing::Size(93, 36);
            this->SolveButton->TabIndex = 0;
            this->SolveButton->Text = L"Решить";
            this->SolveButton->UseVisualStyleBackColor = true;
            this->SolveButton->Click += gcnew System::EventHandler(this, &MyForm4::SolveButton_Click);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(27, 70);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(61, 55);
            this->textBox2->TabIndex = 2;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(261, 70);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(62, 55);
            this->textBox1->TabIndex = 3;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
            this->label1->Location = System::Drawing::Point(12, 43);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(81, 24);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Степень";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
            this->label2->Location = System::Drawing::Point(297, 43);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(67, 24);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Числа";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(343, 70);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(62, 55);
            this->textBox3->TabIndex = 6;
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox6->ForeColor = System::Drawing::Color::Black;
            this->textBox6->Location = System::Drawing::Point(79, 12);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(263, 22);
            this->textBox6->TabIndex = 9;
            this->textBox6->Text = L"Свойство корней в n-ой степени";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(10, 168);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(110, 24);
            this->label3->TabIndex = 11;
            this->label3->Text = L" n^√a*b =  ";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(12, 221);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(108, 24);
            this->label4->TabIndex = 12;
            this->label4->Text = L" n^√a/b =  ";
            // 
            // MyForm4
            // 
            this->AccessibleName = L"";
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->ClientSize = System::Drawing::Size(417, 330);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->SolveButton);
            this->Name = L"MyForm4";
            this->Text = L"Свойство корней в n-ой степени";
            this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void SolveButton_Click(System::Object^ sender, System::EventArgs^ e) {
        double exponent;
        double number1;
        double number2;


        try
        {
            number1 = Convert::ToInt32(textBox1->Text);
            exponent = Convert::ToInt32(textBox2->Text);
            number2 = Convert::ToInt32(textBox3->Text);
        }
        catch (FormatException^)
        {
            MessageBox::Show("Ошибка: Пожалуйста, введите допустимые целочисленные значения для основания и экспоненты.");
            return;
        }

        double result1 = round (Math::Pow(number1 * number2, 1.0 / exponent) * 100) / 100;
        double result2 = round (Math::Pow(number1 / number2, 1.0 / exponent) * 100) / 100;

        label3->Text = " n^√a*b = " + result1.ToString();
        label4->Text = " n^√a/b = " + result2.ToString();
    }
    };
}
