#pragma once
#include "algebraic_equations.h"
#include "trigonometric_equations.h"
#include "transcendental_equations.h"
#include "func.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Клас для відображення форми, що містить засоби для розв'язання систем нелінійних рівнянь.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		/// <summary>
		/// Створює форму Form1 та ініціалізує її компоненти.
		/// </summary>
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Очищує використані формою Form1 компоненти.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ table;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;

	private:
		/// <summary>
		/// Обов’язкова змінна конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Необхідний метод для підтримки дизайнера.
		/// Вміст методу не можна змінювати за допомогою редактора коду.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(301, 270);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Види систем:";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(2, 225);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(21, 20);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(2, 128);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(21, 20);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(2, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(21, 20);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Click += gcnew System::EventHandler(this, &Form1::radioButton1_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Control;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(29, 237);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(247, 19);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"e^(a21 * x) + e^(a22 * y) + a23 = 0";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(29, 212);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(247, 19);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"e^(a11 * x) + e^(a12 * y) + a13 = 0";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(29, 139);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(229, 19);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"a21 * x + cos(y + a22) + a23 = 0";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(29, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(229, 19);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"sin(x + a11) + a12 * y + a13 = 0";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(29, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(229, 19);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"a21 * x^2 + a22 * y^2 + a23 = 0";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(29, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(229, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"a11 * x^2 + a12 * y^2 + a13 = 0";
			// 
			// table
			// 
			this->table->AllowUserToAddRows = false;
			this->table->AllowUserToDeleteRows = false;
			this->table->AllowUserToResizeColumns = false;
			this->table->AllowUserToResizeRows = false;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->ColumnHeadersVisible = false;
			this->table->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
			this->table->Location = System::Drawing::Point(12, 336);
			this->table->MultiSelect = false;
			this->table->Name = L"table";
			this->table->RowHeadersVisible = false;
			this->table->RowHeadersWidth = 62;
			this->table->RowTemplate->Height = 28;
			this->table->Size = System::Drawing::Size(559, 139);
			this->table->TabIndex = 1;
			this->table->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->table->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::table_CellValueChanged);
			this->table->ColumnAdded += gcnew System::Windows::Forms::DataGridViewColumnEventHandler(this, &Form1::table_ColumnAdded);
			this->table->Click += gcnew System::EventHandler(this, &Form1::table_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 630);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 63);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Знайти корені";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(272, 616);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(542, 136);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Control;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(272, 593);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(158, 19);
			this->textBox7->TabIndex = 4;
			this->textBox7->Text = L"Розв\'язання:";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(998, 58);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::DarkGreen;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::DarkGreen;
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Blue;
			series3->Name = L"Series3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Blue;
			series4->Name = L"Series4";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(672, 493);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			title1->Name = L"title";
			title1->Text = L"Графіки:";
			this->chart1->Titles->Add(title1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(998, 557);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(295, 69);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Побудувати графіки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(697, 84);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 8;
			this->textBox9->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(697, 116);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 26);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(697, 196);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(133, 26);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"0,0001";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Control;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Location = System::Drawing::Point(673, 84);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(18, 19);
			this->textBox12->TabIndex = 11;
			this->textBox12->Text = L"x";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Control;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Location = System::Drawing::Point(673, 116);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(14, 19);
			this->textBox13->TabIndex = 12;
			this->textBox13->Text = L"y";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Control;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Location = System::Drawing::Point(697, 171);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(100, 19);
			this->textBox14->TabIndex = 13;
			this->textBox14->Text = L"Точність e:";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::Control;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Location = System::Drawing::Point(621, 58);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(318, 19);
			this->textBox15->TabIndex = 14;
			this->textBox15->Text = L"Наближені початкові значення x та y:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(584, 362);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(130, 24);
			this->radioButton4->TabIndex = 15;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Метод Якобі";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(584, 392);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(204, 24);
			this->radioButton5->TabIndex = 16;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Метод Гауса-Зейделя";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(697, 272);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(133, 26);
			this->textBox16->TabIndex = 17;
			this->textBox16->Text = L"100";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::Control;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Location = System::Drawing::Point(697, 249);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(259, 19);
			this->textBox17->TabIndex = 18;
			this->textBox17->Text = L"Максимальна кількість ітерацій:";
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &Form1::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::Control;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Location = System::Drawing::Point(14, 311);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(246, 19);
			this->textBox18->TabIndex = 19;
			this->textBox18->Text = L"Коефіцієнти системи рівнянь:";
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::SystemColors::Control;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Location = System::Drawing::Point(584, 337);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(246, 19);
			this->textBox19->TabIndex = 20;
			this->textBox19->Text = L"Методи розв\'язання:";
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &Form1::textBox19_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1678, 764);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->table);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Калькулятор систем нелінійних рівнянь";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/// <summary>
	/// Перевіряє дані таблиці на коректність.
	/// Записує дані у двовимірний масив.
	/// </summary>
	private: vector<vector<double>> scantable(vector<vector<double>> table1)
	{
		string res;
		double value;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (!Double::TryParse(Convert::ToString(table->Rows[i]->Cells[j]->Value), value))
				{
					res = "Некоректно введені дані";
					richTextBox1->Text = gcnew String(res.c_str());
					return table1;
				}
				table1[i][j] = Convert::ToDouble(table->Rows[i]->Cells[j]->Value);
			}
		}
		return table1;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
/// <summary>
/// Перевіряє введені дані на коректність.
/// Розв'язує обрану систему нелінійних рівнянь обраним методом.
/// Виводить результат.
/// Зберігає результат.
/// </summary>
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string text = "";
	richTextBox1->Text = gcnew String(text.c_str());
	vector<vector<double>> table1(2, vector<double>(3));
	text = "Некоректно введені дані";
	table1 = scantable(table1);
	double value;
	int value2;
	string str_eq = "";
	if (!Double::TryParse(textBox11->Text, value) || !Double::TryParse(textBox9->Text, value) || !Double::TryParse(textBox10->Text, value) || !Int32::TryParse(textBox16->Text, value2) || 
		Convert::ToDouble(textBox11->Text) <= 0 || Convert::ToInt32(textBox16->Text) <= 0)
	{
		richTextBox1->Text = gcnew String(text.c_str());
	}
	if (richTextBox1->Text != gcnew String(text.c_str()))
	{
		double e = Convert::ToDouble(textBox11->Text);
		double x1 = Convert::ToDouble(textBox9->Text);
		double y1 = Convert::ToDouble(textBox10->Text);
		int num = Convert::ToInt32(textBox16->Text);
		if (radioButton1->Checked)
		{
			str_eq = to_string(table1[0][0])+ "x^2 + " + to_string(table1[0][1]) + "y^2 + " + to_string(table1[0][2]) + " = 0 \n" +
				to_string(table1[1][0]) + "x^2 + " + to_string(table1[1][1]) + "y^2 + " + to_string(table1[1][2]) + " = 0 \n";
			Alg_eq obj = Alg_eq(table1, x1, y1, e, num);
			if (radioButton4->Checked)
			{
				text = obj.solution_Yacobi();
				richTextBox1->Text = gcnew String(text.c_str());
				str_eq += text;
				writeTextFile(str_eq);

			}
			else if (radioButton5->Checked)
			{
				text = obj.solution_Gaus_Zeydel();
				richTextBox1->Text = gcnew String(text.c_str());
				str_eq += text;
				writeTextFile(str_eq);
			}
			
		}
		else if (radioButton2->Checked)
		{
			str_eq = "sin(x + " + to_string(table1[0][0]) + ") + " + to_string(table1[0][1]) + "y + " + to_string(table1[0][2]) + " = 0 \n" + 
				to_string(table1[1][0]) + "x + cos(y + " + to_string(table1[1][1]) + ") + "+ to_string(table1[1][2]) + " = 0\n";
			Trig_eq obj = Trig_eq(table1, x1, y1, e, num);
			if (radioButton4->Checked)
			{
				text = obj.solution_Yacobi();
				richTextBox1->Text = gcnew String(text.c_str());
				str_eq += text;
				writeTextFile(str_eq);
			}
			else if (radioButton5->Checked)
			{
				text = obj.solution_Gaus_Zeydel();
				richTextBox1->Text = gcnew String(text.c_str());
				str_eq += text;
				writeTextFile(str_eq);
			}

		}
		else if (radioButton3->Checked)
		{
			str_eq = "e^(" + to_string(table1[0][0])+ "x) + e^(" + to_string(table1[0][1]) + "y) + " + to_string(table1[0][2]) + " = 0 \ne^(" +
				to_string(table1[1][0]) + "x) + e^(" + to_string(table1[1][1]) + "y) + " + to_string(table1[1][2]) + " = 0\n";
			Tran_eq obj = Tran_eq(table1, x1, y1, e, num);
			if (radioButton4->Checked)
			{
				text = obj.solution_Yacobi();
				richTextBox1->Text = gcnew String(text.c_str());
				str_eq += text;
				writeTextFile(str_eq);
			}
			else if (radioButton5->Checked)
			{
				text = obj.solution_Gaus_Zeydel();
				richTextBox1->Text = gcnew String(text.c_str());
				str_eq += text;
				writeTextFile(str_eq);
			}
		}
	}
	
}
private: System::Void table_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	table->AutoResizeColumns();
}
private: System::Void table_ColumnAdded(System::Object^ sender, System::Windows::Forms::DataGridViewColumnEventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	table->ColumnCount = 3;
	table->RowCount = 2;
	table->AutoResizeColumns();
	chart1->ChartAreas[0]->AxisX->ScaleView->Zoom(-100,100); 
	chart1->ChartAreas[0]->CursorX->IsUserEnabled = true; 
	chart1->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true;
	chart1->ChartAreas[0]->AxisX->ScaleView->Zoomable = true;
	chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;
	chart1->ChartAreas[0]->AxisY->ScaleView->Zoom(-100, 100);
	chart1->ChartAreas[0]->CursorY->IsUserEnabled = true;
	chart1->ChartAreas[0]->CursorY->IsUserSelectionEnabled = true;
	chart1->ChartAreas[0]->AxisY->ScaleView->Zoomable = true;
	chart1->ChartAreas[0]->AxisY->ScrollBar->IsPositionedInside = true;
}
private: System::Void table_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
/// <summary>
/// Перевіряє дані таблиці на коректність.
/// Будує графік обраної системи нелінійних рівнянь.
/// </summary>
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();
	chart1->Series[3]->Points->Clear();
	
	string text1 = "Некоректно введені дані";
	string text = "";
	richTextBox1->Text = gcnew String(text.c_str());
	vector<vector<double>> table1(2, vector<double>(3));
	table1 = scantable(table1);
	if (richTextBox1->Text != gcnew String(text1.c_str()))
	{
		
		if (radioButton1->Checked)
		{
			if (!((table1[0][0] > 0 && table1[0][1] > 0 && table1[0][2] > 0) || (table1[1][0] > 0 && table1[1][1] > 0 && table1[1][2] > 0) ||
				(table1[0][0] < 0 && table1[0][1] < 0 && table1[0][2] < 0) || (table1[1][0] < 0 && table1[1][1] < 0 && table1[1][2] < 0) || table1[0][1] == 0 || table1[1][1] == 0))
			{
				for (double x = -100; x < 100; x += 0.1)
				{
					chart1->Series[0]->Points->AddXY(x, pow(((-table1[0][0] * pow(x, 2) - table1[0][2]) / table1[0][1]), 0.5));
					chart1->Series[1]->Points->AddXY(x, -pow(((-table1[0][0] * pow(x, 2) - table1[0][2]) / table1[0][1]), 0.5));
					chart1->Series[2]->Points->AddXY(x, pow(((-table1[1][0] * pow(x, 2) - table1[1][2]) / table1[1][1]), 0.5));
					chart1->Series[3]->Points->AddXY(x, -pow(((-table1[1][0] * pow(x, 2) - table1[1][2]) / table1[1][1]), 0.5));
				}
			}
		}
		else if (radioButton2->Checked)
		{
			if (!(table1[0][1] == 0 || table1[1][0] == 0))
			{
				for (double x = -100; x < 100; x += 0.1)
				{
					chart1->Series[2]->Points->AddXY(x, (-sin(x + table1[0][0]) - table1[0][2]) / table1[0][1]);
				}
				for (double y = -100; y < 100; y += 0.1)
				{
					chart1->Series[0]->Points->AddXY((-cos(y + table1[1][1]) - table1[1][2]) / table1[1][0], y);
				}
			}
		}
		else if (radioButton3->Checked)
		{
			if (!(table1[0][2] >= 0 || table1[1][2] >= 0 || table1[0][1] == 0 || table1[1][1] == 0))
			{
				for (double x = -100; x < 100; x += 0.1)
				{
					chart1->Series[0]->Points->AddXY(x, log(-exp(table1[0][0] * x) - table1[0][2]) / table1[0][1]);
					chart1->Series[2]->Points->AddXY(x, log(-exp(table1[1][0] * x) - table1[1][2]) / table1[1][1]);
				}
			}
		}
	}
	
	
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
