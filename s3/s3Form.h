#pragma once

namespace s3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для s3Form
	/// </summary>
	public ref class s3Form : public System::Windows::Forms::Form
	{
	public:
		s3Form(void)
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
		~s3Form()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button ^button1;
    protected:
    private: System::Windows::Forms::TextBox ^textBox1;
    private: System::Windows::Forms::Label ^label1;
    private: System::Windows::Forms::Label ^label2;
    private: System::Windows::Forms::TextBox ^textBox2;
    private: System::Windows::Forms::Label ^label3;
	private: System::Windows::Forms::TextBox ^textBox4;


    private: System::Windows::Forms::Label ^label4;
	private: System::Windows::Forms::TextBox ^textBox3;
	private: System::Windows::Forms::TextBox ^textBox17;
	private: System::Windows::Forms::TextBox ^textBox18;





    private: System::Windows::Forms::Label ^label5;
	private: System::Windows::Forms::TextBox ^textBox8;


    private: System::Windows::Forms::Label ^label6;
	private: System::Windows::Forms::TextBox ^textBox7;

    private: System::Windows::Forms::Label ^label7;
	private: System::Windows::Forms::TextBox ^textBox6;

    private: System::Windows::Forms::Label ^label8;
	private: System::Windows::Forms::TextBox ^textBox5;
	private: System::Windows::Forms::TextBox ^textBox20;





    private: System::Windows::Forms::Label ^label9;
	private: System::Windows::Forms::TextBox ^textBox16;


    private: System::Windows::Forms::Label ^label10;
	private: System::Windows::Forms::TextBox ^textBox15;


    private: System::Windows::Forms::Label ^label11;
    private: System::Windows::Forms::TextBox ^textBox14;
    private: System::Windows::Forms::Label ^label12;
	private: System::Windows::Forms::TextBox ^textBox13;
	private: System::Windows::Forms::TextBox ^textBox19;



    private: System::Windows::Forms::Label ^label13;
	private: System::Windows::Forms::TextBox ^textBox12;

    private: System::Windows::Forms::Label ^label14;
	private: System::Windows::Forms::TextBox ^textBox11;

    private: System::Windows::Forms::Label ^label15;
	private: System::Windows::Forms::TextBox ^textBox10;

    private: System::Windows::Forms::Label ^label16;
	private: System::Windows::Forms::TextBox ^textBox9;

    private: System::Windows::Forms::GroupBox ^groupBox1;
	private: System::Windows::Forms::Label ^label17;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &s3Form::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &s3Form::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"x₁ + ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"x₂ + ";
			this->label2->Click += gcnew System::EventHandler(this, &s3Form::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 32);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(642, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"x₄ = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(536, 44);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 32);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(478, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"x₃ + ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(372, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 32);
			this->textBox3->TabIndex = 5;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(700, 44);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 32);
			this->textBox17->TabIndex = 9;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(700, 91);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 32);
			this->textBox18->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(642, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 24);
			this->label5->TabIndex = 17;
			this->label5->Text = L"x₄ = ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(536, 91);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 32);
			this->textBox8->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(478, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"x₃ + ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(372, 91);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 32);
			this->textBox7->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(314, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 24);
			this->label7->TabIndex = 13;
			this->label7->Text = L"x₂ + ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(208, 91);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 32);
			this->textBox6->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(150, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 24);
			this->label8->TabIndex = 11;
			this->label8->Text = L"x₁ + ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(44, 91);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 32);
			this->textBox5->TabIndex = 10;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(700, 186);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 32);
			this->textBox20->TabIndex = 36;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(642, 189);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 24);
			this->label9->TabIndex = 35;
			this->label9->Text = L"x₄ = ";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(536, 186);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 32);
			this->textBox16->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(478, 189);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 24);
			this->label10->TabIndex = 33;
			this->label10->Text = L"x₃ + ";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(372, 186);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 32);
			this->textBox15->TabIndex = 32;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(314, 189);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 24);
			this->label11->TabIndex = 31;
			this->label11->Text = L"x₂ + ";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(208, 186);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 32);
			this->textBox14->TabIndex = 30;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(150, 189);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 24);
			this->label12->TabIndex = 29;
			this->label12->Text = L"x₁ + ";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(44, 186);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 32);
			this->textBox13->TabIndex = 28;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(700, 139);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 32);
			this->textBox19->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(642, 142);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 24);
			this->label13->TabIndex = 26;
			this->label13->Text = L"x₄ = ";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(536, 139);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 32);
			this->textBox12->TabIndex = 25;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(478, 142);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 24);
			this->label14->TabIndex = 24;
			this->label14->Text = L"x₃ + ";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(372, 139);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 32);
			this->textBox11->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(314, 142);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 24);
			this->label15->TabIndex = 22;
			this->label15->Text = L"x₂ + ";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(208, 139);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 32);
			this->textBox10->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(150, 142);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 24);
			this->label16->TabIndex = 20;
			this->label16->Text = L"x₁ + ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(44, 139);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 32);
			this->textBox9->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Location = System::Drawing::Point(318, 236);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(482, 91);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Розв\'язок";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(13, 28);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(172, 48);
			this->label17->TabIndex = 3;
			this->label17->Text = L"x₁ = 00    x₂ = 00 \r\nx₃ = 00    x₄ = 00 ";
			// 
			// s3Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 358);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"s3Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"s3Form";
			this->Load += gcnew System::EventHandler(this, &s3Form::s3Form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void s3Form_Load(System::Object ^sender, System::EventArgs ^e)
    {
    }
    private: System::Void label2_Click(System::Object ^sender, System::EventArgs ^e)
    {
    }
//Повертає детермінант матриці 3х3 методом трикутників.
private: double det3(double a[3][3])
{
	return (a[0][0] * a[1][1] * a[2][2] + 
			a[0][1] * a[1][2] * a[2][0] + 
			a[0][2] * a[1][0] * a[2][1] - 
			a[0][2] * a[1][1] * a[2][0] - 
			a[0][0] * a[1][2] * a[2][1] - 
			a[0][1] * a[1][0] * a[2][2]);
}
//Повертає детермінант матриці 4х4 методом розкладу за останнім рядком з використанням det3().
private: double det4(double a[4][4])
{
	double tmp[3][3], det = 0;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			tmp[i][j] = a[i][j + 1];
	}

	det -= a[3][0] * det3(tmp);

	for (i = 0; i < 3; i++)
		tmp[i][0] = a[i][0];

	for (i = 0; i < 3; i++)
	{
		for (j = 1; j < 3; j++)
			tmp[i][j] = a[i][j + 1];
	}

	det += a[3][1] * det3(tmp);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			tmp[i][j] = a[i][j];
	}

	for (i = 0; i < 3; i++)
		tmp[i][2] = a[i][3];

	det -= a[3][2] * det3(tmp);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			tmp[i][j] = a[i][j];
	}

	det += a[3][3] * det3(tmp);

	return det;
}
private: System::Void button1_Click(System::Object ^sender, System::EventArgs ^e)
{
	array<TextBox ^> ^textBoxArray = gcnew array<TextBox ^>(20);
	textBoxArray[0] = textBox1;
	textBoxArray[1] = textBox2;
	textBoxArray[2] = textBox3;
	textBoxArray[3] = textBox4;
	textBoxArray[4] = textBox5;
	textBoxArray[5] = textBox6;
	textBoxArray[6] = textBox7;
	textBoxArray[7] = textBox8;
	textBoxArray[8] = textBox9;
	textBoxArray[9] = textBox10;
	textBoxArray[10] = textBox11;
	textBoxArray[11] = textBox12;
	textBoxArray[12] = textBox13;
	textBoxArray[13] = textBox14;
	textBoxArray[14] = textBox15;
	textBoxArray[15] = textBox16;
	textBoxArray[16] = textBox17;
	textBoxArray[17] = textBox18;
	textBoxArray[18] = textBox19;
	textBoxArray[19] = textBox20;

	double a[4][4], tmp[4][4], b[4], detA, parsedValue, res[4];
	int i, j, x;

	//Отримання значень з textBoxArray.
	for (i = 0, x = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++, x++)
		{
			if (Double::TryParse(textBoxArray[x]->Text, parsedValue))
			{
				a[i][j] = parsedValue;
			}
			else
			{
				label17->Text = L"Коренів не знайдено!";
				return;
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		if (Double::TryParse(textBoxArray[i + 16]->Text, parsedValue))
		{
			b[i] = parsedValue;
		}
		else
		{
			label17->Text = L"Коренів не знайдено!";
			return;
		}
	}

	//Обчислення детермінанту матриці a
	detA = det4(a);
	if (detA == 0)
	{
		label17->Text = L"Коренів не знайдено!";
	}

	//Розв'язок СЛАР 4.
	for (i = 0; i < 4; i++)
		tmp[i][0] = b[i];

	for (i = 0; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
			tmp[i][j] = a[i][j];
	}

	res[0] = det4(tmp) / detA;

	for (i = 0; i < 4; i++)
		tmp[i][0] = a[i][0];

	for (i = 0; i < 4; i++)
		tmp[i][1] = b[i];

	res[1] = det4(tmp) / detA;

	for (i = 0; i < 4; i++)
		tmp[i][1] = a[i][1];

	for (i = 0; i < 4; i++)
		tmp[i][2] = b[i];

	res[2] = det4(tmp) / detA;

	for (i = 0; i < 4; i++)
		tmp[i][2] = a[i][2];

	for (i = 0; i < 4; i++)
		tmp[i][3] = b[i];

	res[3] = det4(tmp) / detA;

	label17->Text = L"x₁ = " + Convert::ToString(res[0]) + 
		L"  x₂ = " + Convert::ToString(res[1]) + 
		L"\nx₃ = " + Convert::ToString(res[2]) +
		L"  x₄ = " + Convert::ToString(res[3]);
}
private: System::Void textBox1_TextChanged(System::Object ^sender, System::EventArgs ^e)
{
}
};
}
