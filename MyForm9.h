#pragma once
#include "MyForm3.h"
namespace LastDance {

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
		MyForm9(MyForm3^ parent) {
			InitializeComponent();
			parentForm = parent;
		}
	public: System::Windows::Forms::Label^ label18;
	public: System::Windows::Forms::Label^ label19;

	public: System::Windows::Forms::Label^ label21;
	public: System::Windows::Forms::Label^ label22;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label20;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::Label^ label17;
	public: System::Windows::Forms::Label^ label23;
	public: System::Windows::Forms::Label^ label24;
	public: System::Windows::Forms::Label^ label25;
	public: System::Windows::Forms::Label^ label27;
	public: System::Windows::Forms::Label^ label28;
	public: System::Windows::Forms::Label^ label29;
	public: System::Windows::Forms::Label^ label30;





	private: MyForm3^ parentForm;
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
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public: System::Windows::Forms::Label^ label3;
	private:
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(677, 58);
			this->panel2->TabIndex = 36;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 38;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm9::pictureBox2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(362, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 33);
			this->label3->TabIndex = 37;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(138, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 33);
			this->label1->TabIndex = 36;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(568, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm9::pictureBox1_Click);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(12, 598);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(250, 33);
			this->label18->TabIndex = 66;
			this->label18->Text = L"Цикл for";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm9::label18_Click);
			this->label18->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label18_MouseEnter);
			this->label18->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label18_MouseLeave);
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(12, 565);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(356, 33);
			this->label19->TabIndex = 65;
			this->label19->Text = L"Цикл while";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm9::label19_Click);
			this->label19->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label19_MouseEnter);
			this->label19->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label19_MouseLeave);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(13, 499);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(356, 33);
			this->label21->TabIndex = 63;
			this->label21->Text = L"Вложенные конструкции if";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm9::label21_Click);
			this->label21->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label21_MouseEnter);
			this->label21->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label21_MouseLeave);
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(12, 466);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(329, 33);
			this->label22->TabIndex = 62;
			this->label22->Text = L"Условная конструкция if";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm9::label22_Click);
			this->label22->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label22_MouseEnter);
			this->label22->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label22_MouseLeave);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(12, 433);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(317, 33);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Логические операции";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm9::label8_Click);
			this->label8->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label8_MouseEnter);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label8_MouseLeave);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(12, 402);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(328, 40);
			this->label9->TabIndex = 60;
			this->label9->Text = L"Операции сравнения";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm9::label9_Click);
			this->label9->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label9_MouseEnter);
			this->label9->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label9_MouseLeave);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(12, 369);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(328, 33);
			this->label10->TabIndex = 59;
			this->label10->Text = L"Условные выражения";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm9::label10_Click);
			this->label10->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label10_MouseEnter);
			this->label10->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label10_MouseLeave);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(13, 337);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(327, 32);
			this->label11->TabIndex = 58;
			this->label11->Text = L"Представление числа";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm9::label11_Click);
			this->label11->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label11_MouseEnter);
			this->label11->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label11_MouseLeave);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(13, 268);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(343, 89);
			this->label12->TabIndex = 57;
			this->label12->Text = L"Функции преобразования чисел";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm9::label12_Click);
			this->label12->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label12_MouseEnter);
			this->label12->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label12_MouseLeave);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(330, 74);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Введение в Python. Основные функции";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm9::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label2_MouseLeave);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(12, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(353, 33);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Переменные и типы данных";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm9::label5_Click);
			this->label5->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label5_MouseEnter);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label5_MouseLeave);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(13, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(352, 117);
			this->label7->TabIndex = 56;
			this->label7->Text = L"Арифметические операции. Арифметические операции с присвоением";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm9::label7_Click);
			this->label7->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label7_MouseEnter);
			this->label7->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label7_MouseLeave);
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(12, 532);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(400, 33);
			this->label20->TabIndex = 64;
			this->label20->Text = L"Циклы";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm9::label20_Click);
			this->label20->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label20_MouseEnter);
			this->label20->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label20_MouseLeave);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(365, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(321, 41);
			this->label4->TabIndex = 69;
			this->label4->Text = L"Операции со строками";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm9::label4_Click_1);
			this->label4->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label4_MouseEnter);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label4_MouseLeave);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(365, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(315, 74);
			this->label6->TabIndex = 68;
			this->label6->Text = L"Выход из цикла. break и continue";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm9::label6_Click);
			this->label6->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label6_MouseEnter);
			this->label6->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label6_MouseLeave);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(365, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(315, 33);
			this->label13->TabIndex = 67;
			this->label13->Text = L"Вложенные циклы";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm9::label13_Click);
			this->label13->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label13_MouseEnter);
			this->label13->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label13_MouseLeave);
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(365, 225);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(309, 33);
			this->label14->TabIndex = 71;
			this->label14->Text = L"Сравнение строк";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm9::label14_Click);
			this->label14->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label14_MouseEnter);
			this->label14->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label14_MouseLeave);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(365, 191);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(321, 47);
			this->label15->TabIndex = 70;
			this->label15->Text = L"Эскейп-последовательности";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm9::label15_Click);
			this->label15->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label15_MouseEnter);
			this->label15->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label15_MouseLeave);
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(367, 390);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(233, 33);
			this->label16->TabIndex = 76;
			this->label16->Text = L"Функции";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm9::label16_Click);
			this->label16->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label16_MouseEnter);
			this->label16->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label16_MouseLeave);
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(366, 357);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(282, 33);
			this->label17->TabIndex = 75;
			this->label17->Text = L"Словари";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm9::label17_Click);
			this->label17->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label17_MouseEnter);
			this->label17->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label17_MouseLeave);
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(366, 324);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(233, 33);
			this->label23->TabIndex = 74;
			this->label23->Text = L"Множества";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm9::label23_Click);
			this->label23->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label23_MouseEnter);
			this->label23->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label23_MouseLeave);
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(365, 291);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(188, 33);
			this->label24->TabIndex = 73;
			this->label24->Text = L"Кортежи";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm9::label24_Click);
			this->label24->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label24_MouseEnter);
			this->label24->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label24_MouseLeave);
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(366, 258);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(169, 33);
			this->label25->TabIndex = 72;
			this->label25->Text = L"Списки";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm9::label25_Click);
			this->label25->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label25_MouseEnter);
			this->label25->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label25_MouseLeave);
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(367, 563);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(513, 33);
			this->label27->TabIndex = 80;
			this->label27->Text = L"Бинарные файлы";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm9::label27_Click);
			this->label27->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label27_MouseEnter);
			this->label27->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label27_MouseLeave);
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(367, 530);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(464, 33);
			this->label28->TabIndex = 79;
			this->label28->Text = L"Файлы CSV";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm9::label28_Click);
			this->label28->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label28_MouseEnter);
			this->label28->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label28_MouseLeave);
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(366, 497);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(513, 33);
			this->label29->TabIndex = 78;
			this->label29->Text = L"Текстовые файлы";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm9::label29_Click);
			this->label29->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label29_MouseEnter);
			this->label29->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label29_MouseLeave);
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(366, 423);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(308, 66);
			this->label30->TabIndex = 77;
			this->label30->Text = L"Открытие и закрытие файлов";
			this->label30->Click += gcnew System::EventHandler(this, &MyForm9::label30_Click);
			this->label30->MouseEnter += gcnew System::EventHandler(this, &MyForm9::label30_MouseEnter);
			this->label30->MouseLeave += gcnew System::EventHandler(this, &MyForm9::label30_MouseLeave);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(683, 683);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void ToF5();
		public: Int16 getId1() {

			Int16 id = parentForm->getId1();
			return id;
		}
			  int PROG() {
				  int proggg;
				  String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
				  OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
				  dbConnection->Open();
				  String^ query1 = "SELECT Progress FROM [table_name] WHERE Код = " + parentForm->getId1();
				  OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
				  OleDbDataReader^ dbReader1 = dbCommand1->ExecuteReader();
				  while (dbReader1->Read()) {
					  proggg = Convert::ToInt16(dbReader1["Progress"]);

				  }
				  dbReader1->Close();
				  dbConnection->Close();
				  return proggg;
			  }

			  int IDC() {
				  int idc = 1;
				  String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
				  OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
				  dbConnection->Open();
				  String^ query1 = "SELECT ProgressC FROM [table_name] WHERE Код = " + parentForm->getId1();
				  OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
				  OleDbDataReader^ dbReader1 = dbCommand1->ExecuteReader();
				  while (dbReader1->Read()) {
					  idc = Convert::ToInt16(dbReader1["ProgressC"]);

				  }
				  dbReader1->Close();
				  dbConnection->Close();
				  return idc;
			  }
			  void UPDATEProgress(int prog) {
				  String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
				  OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


				  dbConnection->Open();
				  String^ query =
					  "UPDATE [table_name] SET Progress =" + prog + " WHERE Код = " + parentForm->getId1();
				  OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


				  if (dbComand->ExecuteNonQuery() != 1) {
					  MessageBox::Show("ошибка!", "Ахтунг!");
				  }
				  dbConnection->Close();
			  }
			  void updateid(int id) {
				  String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
				  OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


				  dbConnection->Open();
				  String^ query =
					  "UPDATE [table_name] SET ProgressC = " + id + " WHERE Код =" + parentForm->getId1();
				  OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


				  if (dbComand->ExecuteNonQuery() != 1) {
					  MessageBox::Show("ошибка!", "Ахтунг!");
				  }
				  dbConnection->Close();
			  }
	public:void ShowProgress() {
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query2 = "SELECT Name, Progress FROM [table_name] WHERE Код = " + parentForm->getId1();
		OleDbCommand^ dbCommand2 = gcnew OleDbCommand(query2, dbConnection);
		OleDbDataReader^ dbReader2 = dbCommand2->ExecuteReader();
		while (dbReader2->Read()) {
			label1->Text = "Имя: " + Convert::ToString(dbReader2["Name"]);
			label3->Text = "Прогресс: " + Convert::ToString(dbReader2["Progress"]) + "%";
		}
		dbConnection->Close();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->Show();
		this->Hide();

	}
	public:int id;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 6;
	ToF5();
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 13;
	ToF5();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 4;
	ToF5();
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 6;
	ToF5();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 3;
	ToF5();
}
private: System::Void label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Gray;
}
private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Black;
}
private: System::Void label5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label5->ForeColor = Color::Gray;
}
private: System::Void label5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label5->ForeColor = Color::Black;
}
private: System::Void label7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label7->ForeColor = Color::Gray;
}
private: System::Void label7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label7->ForeColor = Color::Black;
}
private: System::Void label12_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label12->ForeColor = Color::Gray;
}
private: System::Void label12_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label12->ForeColor = Color::Black;
}
private: System::Void label11_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label11->ForeColor = Color::Gray;
}
private: System::Void label11_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label11->ForeColor = Color::Black;
}
private: System::Void label10_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label10->ForeColor = Color::Gray;
}
private: System::Void label10_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label10->ForeColor = Color::Black;
}
private: System::Void label9_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label9->ForeColor = Color::Gray;
}
private: System::Void label9_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label9->ForeColor = Color::Black;
}
private: System::Void label8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label8->ForeColor = Color::Gray;
}
private: System::Void label8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label8->ForeColor = Color::Black;
}
private: System::Void label22_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label22->ForeColor = Color::Gray;
}

private: System::Void label22_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label22->ForeColor = Color::Black;
}
private: System::Void label21_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label21->ForeColor = Color::Gray;
}
private: System::Void label21_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label21->ForeColor = Color::Black;
}
private: System::Void label20_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label20->ForeColor = Color::Gray;
}
private: System::Void label20_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label20->ForeColor = Color::Black;
}
private: System::Void label19_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label19->ForeColor = Color::Gray;
}
private: System::Void label19_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label19->ForeColor = Color::Black;
}
private: System::Void label18_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label18->ForeColor = Color::Gray;
}
private: System::Void label18_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label18->ForeColor = Color::Black;
}
private: System::Void label13_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label13->ForeColor = Color::Gray;
}
private: System::Void label13_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label13->ForeColor = Color::Black;
}
private: System::Void label6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label6->ForeColor = Color::Gray;
}
private: System::Void label4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label4->ForeColor = Color::Gray;
}
private: System::Void label4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label4->ForeColor = Color::Black;
}
private: System::Void label15_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label15->ForeColor = Color::Gray;
}
private: System::Void label15_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label15->ForeColor = Color::Black;
}
private: System::Void label14_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label14->ForeColor = Color::Gray;
}
private: System::Void label14_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label14->ForeColor = Color::Black;
}
private: System::Void label25_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label25->ForeColor = Color::Gray;
}
private: System::Void label25_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label25->ForeColor = Color::Black;
}
private: System::Void label24_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label24->ForeColor = Color::Gray;
}
private: System::Void label24_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label24->ForeColor = Color::Black;
}
private: System::Void label23_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label23->ForeColor = Color::Gray;
}
private: System::Void label23_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label23->ForeColor = Color::Black;
}
private: System::Void label17_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label17->ForeColor = Color::Gray;
}
private: System::Void label17_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label17->ForeColor = Color::Black;
}
private: System::Void label16_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label16->ForeColor = Color::Gray;
}
private: System::Void label16_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label16->ForeColor = Color::Black;
}
private: System::Void label30_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label30->ForeColor = Color::Gray;
}
private: System::Void label30_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label30->ForeColor = Color::Black;
}
private: System::Void label29_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label29->ForeColor = Color::Gray;
}
private: System::Void label29_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label29->ForeColor = Color::Black;
}
private: System::Void label28_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label28->ForeColor = Color::Gray;
}
private: System::Void label28_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label28->ForeColor = Color::Black;
}
private: System::Void label27_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label27->ForeColor = Color::Gray;
}
private: System::Void label27_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label27->ForeColor = Color::Black;
}
private: System::Void label6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label6->ForeColor = Color::Black;
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 65;
	ToF5();
}
private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowProgress();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 1;
	ToF5();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 7;
	ToF5();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 9;
	ToF5();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 10;
	ToF5();
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 11;
	ToF5();
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 12;
	ToF5();
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 14;
	ToF5();
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 15;
	ToF5();
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 17;
	ToF5();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 18;
	ToF5();
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	id = 19;
	ToF5();
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 20;
	ToF5();
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 21;
	ToF5();
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 22;
	ToF5();
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 38;
	ToF5();
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 41;
	ToF5();
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 48;
	ToF5();
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 55;
	ToF5();
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 61;
	ToF5();
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 62;
	ToF5();
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 67;
	ToF5();
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 8;
	ToF5();
}
};
}
