#pragma once
#include "MyForm3.h"
#include"MyForm1.h"
#include <windows.h> 
namespace LastDance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm4(MyForm3^ parent) {
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::Panel^ panel2;
	public: System::Windows::Forms::Label^ label1;



	public: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public: System::Windows::Forms::Label^ label2;
	private:
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::Label^ label18;
	public: System::Windows::Forms::Label^ label19;
	public: System::Windows::Forms::Label^ label20;
	public: System::Windows::Forms::Label^ label21;
	public: System::Windows::Forms::Label^ label22;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::Label^ label17;
	public: System::Windows::Forms::Label^ label23;
	public: System::Windows::Forms::Label^ label24;
	public: System::Windows::Forms::Label^ label25;
	public: System::Windows::Forms::Label^ label26;
	public: System::Windows::Forms::Label^ label27;
	public: System::Windows::Forms::Label^ label29;
	public: System::Windows::Forms::Label^ label30;
	public: System::Windows::Forms::Label^ label31;
	public: System::Windows::Forms::Label^ label32;


	private: MyForm3^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm4::pictureBox1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(677, 58);
			this->panel2->TabIndex = 35;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm4::panel2_Paint);
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm4::pictureBox2_Click);
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
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 66);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Язык программирования C++";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm4::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label2_MouseLeave);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(12, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(271, 33);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Первая программа";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm4::label4_Click);
			this->label4->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label4_MouseEnter);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label4_MouseLeave);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(12, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(289, 66);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Локализация и кириллица в консоли";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm4::label5_Click);
			this->label5->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label5_MouseEnter);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label5_MouseLeave);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(12, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(289, 66);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Объявление переменных в C++";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm4::label6_Click);
			this->label6->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label6_MouseEnter);
			this->label6->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label6_MouseLeave);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(12, 296);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(289, 33);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Структура программы";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm4::label7_Click);
			this->label7->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label7_MouseEnter);
			this->label7->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label7_MouseLeave);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(12, 461);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 33);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Циклы";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm4::label8_Click);
			this->label8->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label8_MouseEnter);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label8_MouseLeave);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(12, 428);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(216, 33);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Конструкция switch";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm4::label9_Click);
			this->label9->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label9_MouseEnter);
			this->label9->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label9_MouseLeave);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(12, 395);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(164, 33);
			this->label10->TabIndex = 44;
			this->label10->Text = L"Конструкция if";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm4::label10_Click);
			this->label10->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label10_MouseEnter);
			this->label10->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label10_MouseLeave);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(12, 362);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(156, 33);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Типы данных";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm4::label11_Click);
			this->label11->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label11_MouseEnter);
			this->label11->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label11_MouseLeave);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(12, 329);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(271, 33);
			this->label12->TabIndex = 42;
			this->label12->Text = L"Переменные";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm4::label12_Click);
			this->label12->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label12_MouseEnter);
			this->label12->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label12_MouseLeave);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(13, 626);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(250, 33);
			this->label18->TabIndex = 51;
			this->label18->Text = L"Функции";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm4::label18_Click);
			this->label18->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label18_MouseEnter);
			this->label18->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label18_MouseLeave);
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(13, 593);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(356, 33);
			this->label19->TabIndex = 50;
			this->label19->Text = L"Массив";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm4::label19_Click);
			this->label19->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label19_MouseEnter);
			this->label19->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label19_MouseLeave);
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(13, 560);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(400, 33);
			this->label20->TabIndex = 49;
			this->label20->Text = L"Цикл do";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm4::label20_Click);
			this->label20->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label20_MouseEnter);
			this->label20->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label20_MouseLeave);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(13, 527);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(215, 33);
			this->label21->TabIndex = 48;
			this->label21->Text = L"Цикл for";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm4::label21_Click);
			this->label21->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label21_MouseEnter);
			this->label21->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label21_MouseLeave);
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(12, 494);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(329, 33);
			this->label22->TabIndex = 47;
			this->label22->Text = L"Цикл while";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm4::label22_Click);
			this->label22->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label22_MouseEnter);
			this->label22->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label22_MouseLeave);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(335, 197);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(172, 33);
			this->label13->TabIndex = 61;
			this->label13->Text = L"Размер строки";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm4::label13_Click);
			this->label13->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label13_MouseEnter);
			this->label13->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label13_MouseLeave);
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(335, 164);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(198, 33);
			this->label14->TabIndex = 60;
			this->label14->Text = L"Сравнение строк";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm4::label14_Click);
			this->label14->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label14_MouseEnter);
			this->label14->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label14_MouseLeave);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(335, 131);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(92, 33);
			this->label15->TabIndex = 59;
			this->label15->Text = L"Строки";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm4::label15_Click);
			this->label15->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label15_MouseEnter);
			this->label15->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label15_MouseLeave);
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(335, 98);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(345, 33);
			this->label16->TabIndex = 58;
			this->label16->Text = L"Работа с текстовыми файлами";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm4::label16_Click);
			this->label16->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label16_MouseEnter);
			this->label16->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label16_MouseLeave);
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(335, 65);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(345, 33);
			this->label17->TabIndex = 57;
			this->label17->Text = L"Двумерные массивы";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm4::label17_Click);
			this->label17->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label17_MouseEnter);
			this->label17->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label17_MouseLeave);
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(335, 395);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(336, 66);
			this->label23->TabIndex = 66;
			this->label23->Text = L"Пузырьковая сортировка (Bubble sort)";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm4::label23_Click);
			this->label23->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label23_MouseEnter);
			this->label23->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label23_MouseLeave);
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(335, 329);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(336, 66);
			this->label24->TabIndex = 65;
			this->label24->Text = L"Сортировка выбором (Selection sort)";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm4::label24_Click);
			this->label24->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label24_MouseEnter);
			this->label24->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label24_MouseLeave);
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(335, 296);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(257, 33);
			this->label25->TabIndex = 64;
			this->label25->Text = L"Сортировки";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm4::label25_Click);
			this->label25->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label25_MouseEnter);
			this->label25->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label25_MouseLeave);
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(335, 263);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(345, 33);
			this->label26->TabIndex = 63;
			this->label26->Text = L"Массив символов";
			this->label26->Click += gcnew System::EventHandler(this, &MyForm4::label26_Click);
			this->label26->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label26_MouseEnter);
			this->label26->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label26_MouseLeave);
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(335, 230);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(336, 33);
			this->label27->TabIndex = 62;
			this->label27->Text = L"Чтение строки с консоли";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm4::label27_Click);
			this->label27->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label27_MouseEnter);
			this->label27->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label27_MouseLeave);
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(335, 668);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(403, 33);
			this->label29->TabIndex = 70;
			this->label29->Text = L"Структуры";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm4::label29_Click);
			this->label29->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label29_MouseEnter);
			this->label29->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label29_MouseLeave);
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(335, 593);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(279, 66);
			this->label30->TabIndex = 69;
			this->label30->Text = L"Быстрая сортировка (Quick sort)";
			this->label30->Click += gcnew System::EventHandler(this, &MyForm4::label30_Click);
			this->label30->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label30_MouseEnter);
			this->label30->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label30_MouseLeave);
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(335, 527);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(257, 66);
			this->label31->TabIndex = 68;
			this->label31->Text = L"Сортировка слиянием (Merge sort)";
			this->label31->Click += gcnew System::EventHandler(this, &MyForm4::label31_Click);
			this->label31->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label31_MouseEnter);
			this->label31->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label31_MouseLeave);
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(335, 461);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(279, 66);
			this->label32->TabIndex = 67;
			this->label32->Text = L"Сортировка вставками (Insertion sort)";
			this->label32->Click += gcnew System::EventHandler(this, &MyForm4::label32_Click);
			this->label32->MouseEnter += gcnew System::EventHandler(this, &MyForm4::label32_MouseEnter);
			this->label32->MouseLeave += gcnew System::EventHandler(this, &MyForm4::label32_MouseLeave);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(683, 717);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
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
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Void ToF8();
	public: Int16 getId1() {

		Int16 id = parentForm->getId1();
		return id;
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

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {

		ShowProgress();

	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->update();
		parentForm->Show();
		this->Hide();
	}
	private: System::Void label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label2->ForeColor = Color::Gray;
	}
	private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label2->ForeColor = Color::Black;

	}
	private: System::Void label4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label4->ForeColor = Color::Gray;

	}

	private: System::Void label4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label4->ForeColor = Color::Black;
	}
	private: System::Void label5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label5->ForeColor = Color::Gray;
	}
	private: System::Void label5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label5->ForeColor = Color::Black;
	}
	private: System::Void label6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label6->ForeColor = Color::Gray;
	}
	private: System::Void label6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label6->ForeColor = Color::Black;
	}

	private: System::Void label7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label7->ForeColor = Color::Gray;
	}
private: System::Void label7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label7->ForeColor = Color::Black;
}
	   public:int id;
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 1;
	ToF8();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 2;
	ToF8();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 3;
	ToF8();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 4;
	ToF8();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 5;
	ToF8();
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
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 6;
	ToF8();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 7;
	ToF8();
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 8;
	ToF8();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 9;
	ToF8();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 10;
	ToF8();
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 24;
	ToF8();
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 17;
	ToF8();
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
private: System::Void label13_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label13->ForeColor = Color::Gray;
}
private: System::Void label13_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label13->ForeColor = Color::Black;
}
private: System::Void label27_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label27->ForeColor = Color::Gray;
}
private: System::Void label27_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label27->ForeColor = Color::Black;
}
private: System::Void label26_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label26->ForeColor = Color::Gray;
}
private: System::Void label26_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label26->ForeColor = Color::Black;
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
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 25;
	ToF8();
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
private: System::Void label32_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label32->ForeColor = Color::Gray;
}
private: System::Void label32_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label32->ForeColor = Color::Black;
}
private: System::Void label31_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label31->ForeColor = Color::Gray;
}
private: System::Void label31_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label31->ForeColor = Color::Black;
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
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 11;
	ToF8();
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 12;
	ToF8();
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 13;
	ToF8();
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 14;
	ToF8();
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 15;
	ToF8();
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 16;
	ToF8();
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 18;
	ToF8();
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 19;
	ToF8();
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 20;
	ToF8();
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 21;
	ToF8();
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 22;
	ToF8();
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 23;
	ToF8();
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 26;
	ToF8();
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 27;
	ToF8();
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 28;
	ToF8();
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
	id = 29;
	ToF8();
}
};
}
