#pragma once
#include"MyForm3.h"
#include <vector>
#include <algorithm>
#include<time.h>
#include <cliext/vector>
namespace LastDance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm6(MyForm3^ parent) {
			InitializeComponent();
			parentForm = parent;
		}
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: MyForm3^ parentForm;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	public: System::Windows::Forms::Label^ label3;
	private:
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private: System::Windows::Forms::Panel^ panel2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 38;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm6::pictureBox2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(291, 5);
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
			this->label1->Location = System::Drawing::Point(119, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 33);
			this->label1->TabIndex = 36;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(577, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm6::pictureBox1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(677, 57);
			this->panel2->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 302);
			this->label2->TabIndex = 39;
			this->label2->Text = L"[C++]Что покажет код ниже\?\r\nchar *s = \"Fine\";\r\n*s = \'N\';    \r\ncout << s << endl;";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm6::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(280, 85);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(390, 38);
			this->textBox1->TabIndex = 40;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Nine";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(281, 129);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(390, 38);
			this->textBox2->TabIndex = 41;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"Fine";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::textBox2_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(281, 173);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(390, 38);
			this->textBox3->TabIndex = 42;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L"s";
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::textBox3_MouseClick);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(281, 217);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(390, 38);
			this->textBox4->TabIndex = 43;
			this->textBox4->TabStop = false;
			this->textBox4->Text = L"N";
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::textBox4_MouseClick);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(281, 261);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(390, 38);
			this->textBox5->TabIndex = 44;
			this->textBox5->TabStop = false;
			this->textBox5->Text = L"Ошибку";
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm6::textBox5_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(572, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L">>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(300, 315);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 46;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(683, 377);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm6";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int* tab = new int[18];
		void RandomArr() {
			srand(time(0));
			for (int i = 0; i < 18; i++) {
				tab[i] = i + 1;
			}
			
			random_shuffle(&tab[0], &tab[18]);
		}
		void panel() {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT Name, Progress,Test FROM [table_name] WHERE Код = " + parentForm->getId1() + " ";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			if (dbReader->HasRows == false) {
				
			}
			else {
				while (dbReader->Read()) {
					label1->Text = "Имя: " + Convert::ToString(dbReader["Name"])+ "   Прогресс: " + Convert::ToString(dbReader["Progress"]) + "%" + "   Тест:" + Convert::ToString(dbReader["Test"]) + "/18";
					
				}
			}
			dbReader->Close();
			dbConnection->Close();
		}
		int k = 5;
		void QuestionChachge(int id) {
			srand(time(0));
			k = 1 + rand() % 5;

			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT Question, Answer1, Answer2, Answer3, Answer4, Answer5 FROM [Test] WHERE Код = " + id + " ";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			if (dbReader->HasRows == false) {
				
			}
			else {
				while (dbReader->Read()) {
					switch (k)
					{
					case 1:
						label2->Text = Convert::ToString(dbReader["Question"]);
						textBox1->Text = (Convert::ToString(dbReader["Answer5"]));
						textBox2->Text = (Convert::ToString(dbReader["Answer2"]));
						textBox3->Text = (Convert::ToString(dbReader["Answer3"]));
						textBox4->Text = (Convert::ToString(dbReader["Answer4"]));
						textBox5->Text = (Convert::ToString(dbReader["Answer1"]));
						break;
					case 2:
						label2->Text = Convert::ToString(dbReader["Question"]);
						textBox1->Text = (Convert::ToString(dbReader["Answer1"]));
						textBox2->Text = (Convert::ToString(dbReader["Answer5"]));
						textBox3->Text = (Convert::ToString(dbReader["Answer3"]));
						textBox4->Text = (Convert::ToString(dbReader["Answer4"]));
						textBox5->Text = (Convert::ToString(dbReader["Answer2"]));
						break;
					case 3:
						label2->Text = Convert::ToString(dbReader["Question"]);
						textBox1->Text = (Convert::ToString(dbReader["Answer1"]));
						textBox2->Text = (Convert::ToString(dbReader["Answer2"]));
						textBox3->Text = (Convert::ToString(dbReader["Answer5"]));
						textBox4->Text = (Convert::ToString(dbReader["Answer4"]));
						textBox5->Text = (Convert::ToString(dbReader["Answer3"]));
						break;
					case 4:
						label2->Text = Convert::ToString(dbReader["Question"]);
						textBox1->Text = (Convert::ToString(dbReader["Answer1"]));
						textBox2->Text = (Convert::ToString(dbReader["Answer2"]));
						textBox3->Text = (Convert::ToString(dbReader["Answer3"]));
						textBox4->Text = (Convert::ToString(dbReader["Answer5"]));
						textBox5->Text = (Convert::ToString(dbReader["Answer4"]));
						break;
					case 5:
						label2->Text = Convert::ToString(dbReader["Question"]);
						textBox1->Text = (Convert::ToString(dbReader["Answer1"]));
						textBox2->Text = (Convert::ToString(dbReader["Answer2"]));
						textBox3->Text = (Convert::ToString(dbReader["Answer3"]));
						textBox4->Text = (Convert::ToString(dbReader["Answer4"]));
						textBox5->Text = (Convert::ToString(dbReader["Answer5"]));
						break;
					default:
						break;
					}

				}
			}
			dbReader->Close();
			dbConnection->Close();
		}
		int id = 0;
		void updatetest(int prog) {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


			dbConnection->Open();
			String^ query =
				"UPDATE [table_name] SET Test =" + prog + " WHERE Код = " + parentForm->getId1();
			OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


			if (dbComand->ExecuteNonQuery() != 1) {
				
			}
			dbConnection->Close();
		}
		int IDt() {
			int idt = 1;
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query1 = "SELECT Test FROM [table_name] WHERE Код = " + parentForm->getId1();
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			OleDbDataReader^ dbReader1 = dbCommand1->ExecuteReader();
			while (dbReader1->Read()) {
				idt = Convert::ToInt16(dbReader1["Test"]);

			}
			dbReader1->Close();
			dbConnection->Close();
			return idt;
		}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	parentForm->Show();
	this->Hide();
}
	   
private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
	updatetest(0);
	panel();
	RandomArr();
}
	   int idt = 0;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (idt<18) {
		QuestionChachge(tab[id]);
		panel();
		id++;
		idt++;
		textBox1->BackColor = Color::White;
		textBox2->BackColor = Color::White;
		textBox3->BackColor = Color::White;
		textBox4->BackColor = Color::White;
		textBox5->BackColor = Color::White;
		pictureBox3->Image = nullptr;
	}
	else {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("Media/aplodismentyi-38722.wav");
		player->Play();
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Вы прошли тест! "+
			"Результат: "+Convert::ToString(IDt())+"/18",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		player->Play();
		if (result == System::Windows::Forms::DialogResult::OK) {
			player->Stop();
		}
	
		System::Windows::Forms::DialogResult result1 = MessageBox::Show(
			"Хотите пройти тест еще раз?!  ",
			"Внимание",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
	
		if (result1 == System::Windows::Forms::DialogResult::Yes) {
			updatetest(1);
			RandomArr();
			id = 0;
			idt = 0;
			QuestionChachge(tab[id]);
			panel();
			id++;
			idt++;
			textBox1->BackColor = Color::White;
			textBox2->BackColor = Color::White;
			textBox3->BackColor = Color::White;
			textBox4->BackColor = Color::White;
			textBox5->BackColor = Color::White;
			pictureBox3->Image = nullptr;
		}
	}
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (k == 1) {
		textBox1->BackColor = Color::Green;
		pictureBox3->Image = Image::FromFile("Media/галочка.png");
		updatetest(IDt() + 1);
	}
	else {
		textBox1->BackColor = Color::DarkSlateBlue;
		pictureBox3->Image = Image::FromFile("Media/крестик.png");
	}
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (k == 2) {
		textBox2->BackColor = Color::Green;
		pictureBox3->Image = Image::FromFile("Media/галочка.png");
		updatetest(IDt() + 1);
	}
	else {
		textBox2->BackColor = Color::DarkSlateBlue;
		pictureBox3->Image = Image::FromFile("Media/крестик.png");
	}
	
}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (k == 3) {
		textBox3->BackColor = Color::Green;
		pictureBox3->Image = Image::FromFile("Media/галочка.png");
		updatetest(IDt() + 1);
	}
	else {
		textBox3->BackColor = Color::DarkSlateBlue;
		pictureBox3->Image = Image::FromFile("Media/крестик.png");
	}
}
private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (k == 4) {
		textBox4->BackColor = Color::Green;
		pictureBox3->Image = Image::FromFile("Media/галочка.png");
		updatetest(IDt() + 1); 	}
	else {
		textBox4->BackColor = Color::DarkSlateBlue;
		pictureBox3->Image = Image::FromFile("Media/крестик.png");
	}
}

private: System::Void textBox5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (k == 5) {
		textBox5->BackColor = Color::Green;
		pictureBox3->Image = Image::FromFile("Media/галочка.png");
		updatetest(IDt()+1);
	}
	else {
		textBox5->BackColor = Color::DarkSlateBlue;
		pictureBox3->Image = Image::FromFile("Media/крестик.png");
	}
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
