#pragma once

namespace qweqwe {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для MyForm9
    /// </summary>
    public ref class MyForm9 : public System::Windows::Forms::Form
    {
    public:
        MyForm9(void)
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
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
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
            this->label1->Location = System::Drawing::Point(247, 11);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(365, 25);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Площадь и периметр треуголника";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(15, 55);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(78, 25);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Длина";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(27, 84);
            this->textBox1->Margin = System::Windows::Forms::Padding(4);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(71, 62);
            this->textBox1->TabIndex = 8;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(175, 84);
            this->textBox2->Margin = System::Windows::Forms::Padding(4);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(71, 62);
            this->textBox2->TabIndex = 9;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(21, 271);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(467, 25);
            this->label4->TabIndex = 10;
            this->label4->Text = L"Расчёт площади через основание и высоту: ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(15, 309);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(458, 25);
            this->label5->TabIndex = 11;
            this->label5->Text = L"Расчёт площади через два основания и sin:";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(369, 447);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(137, 64);
            this->button1->TabIndex = 12;
            this->button1->Text = L"Решить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(169, 55);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(87, 25);
            this->label3->TabIndex = 13;
            this->label3->Text = L"Высота";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(402, 84);
            this->textBox3->Margin = System::Windows::Forms::Padding(4);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(71, 62);
            this->textBox3->TabIndex = 14;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(506, 84);
            this->textBox6->Margin = System::Windows::Forms::Padding(4);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(71, 62);
            this->textBox6->TabIndex = 18;
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(613, 84);
            this->textBox7->Margin = System::Windows::Forms::Padding(4);
            this->textBox7->Multiline = true;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(71, 62);
            this->textBox7->TabIndex = 19;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(425, 55);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(30, 25);
            this->label7->TabIndex = 20;
            this->label7->Text = L"a ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(639, 55);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(23, 25);
            this->label8->TabIndex = 21;
            this->label8->Text = L"c";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(535, 55);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(24, 25);
            this->label9->TabIndex = 22;
            this->label9->Text = L"b";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(15, 233);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(401, 25);
            this->label10->TabIndex = 23;
            this->label10->Text = L"Расчёт площади по форрмле Герона:";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(15, 348);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(562, 25);
            this->label11->TabIndex = 24;
            this->label11->Text = L"Расчёт площади через радиус вписанной окуржности";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(714, 84);
            this->textBox5->Margin = System::Windows::Forms::Padding(4);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(71, 62);
            this->textBox5->TabIndex = 25;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(726, 55);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(44, 25);
            this->label12->TabIndex = 26;
            this->label12->Text = L"Sin";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(12, 386);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(131, 25);
            this->label13->TabIndex = 27;
            this->label13->Text = L"Периметр: ";
            // 
            // MyForm9
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(881, 524);
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
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm9";
            this->Text = L"Мой форма9";
            this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
       // Преобразуем текст из текстовых полей в числа для вычислений
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
            MessageBox::Show("Ошибка: Пожалуйста, введите допустимые целочисленные значения");
            return;
        }
      

       // Вычисляем полупериметр
       double p = (a + b + c) / 2;

       // Вычисляем площадь по формуле Герона
       double s1 = System::Math::Sqrt(p * (p - a) * (p - b) * (p - c));
       label10->Text = "Площадь по формуле Герона: " + s1.ToString();

       // Вычисляем площадь по основанию и высоте
       double s2 = 0.5 * a * h ;
       label4->Text = "Площадь по основанию и высоте: " + s2.ToString();

       // Вычисляем площадь через два основания и sin
       double angleC = System::Math::Asin((2 * s1) / (a * b));
       double s3 = 0.5 * a * b * System::Math::Sin(angleC);
       label5->Text = "Площадь через два основания и sin: " + s3.ToString();

       // Вычисляем площадь через радиус вписанной окружности
       double radius = (a * b * c) / (4 * s1);
       double s4 = 0.5 * radius * (a + b + c);
       label11->Text = "Площадь через радиус вписанной окружности: " + s4.ToString();
       
       // Периметр 
       double perimeter = a + b + c; 
       label13->Text = "Периметр треугольника" + " = " + perimeter;
   }
private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
