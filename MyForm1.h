#pragma once
#include"MyForm2.h"

namespace LastDance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
	public: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(63, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(34, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(34, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(57, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 34);
			this->textBox1->TabIndex = 3;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Введите логин";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm1::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(57, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(208, 34);
			this->textBox2->TabIndex = 4;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"Введите пароль";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm1::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(70, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ввести";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(142, -9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(322, 455);
			this->panel2->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(271, 205);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 34);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Location = System::Drawing::Point(89, 353);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Зарегестрироваться";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			this->label4->MouseEnter += gcnew System::EventHandler(this, &MyForm1::label4_MouseEnter_1);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &MyForm1::label4_MouseLeave_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(494, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox1_MouseMove);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(606, 378);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		public: Int16 getId() {
			String^ login = textBox1->Text;
			String^ pass = textBox2->Text;
			Int16 id = 0;

			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			dbConnection->Open();
			String^ query = "SELECT Код, Login, Password FROM [table_name]";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			bool buf = false;
			if (dbReader->HasRows == false) {
				//MessageBox::Show("Ошибка считывания данных", "Ошибка");
			}
			else {
				while (dbReader->Read()) {
					if (Convert::ToString(dbReader["Login"]) == login && Convert::ToString(dbReader["Password"]) == pass) {
						id = Convert::ToInt16(dbReader["Код"]);
						
						break;
					}
				}
				
			}
			dbReader->Close();
			dbConnection->Close();
			return id;
		};
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
	   void Tof3();

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (getId()) {
		Tof3();
		buf = true;

	}
	else {
		MessageBox::Show("Неверный логин или пароль", "Внимание");

	}
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ frm = gcnew MyForm2;
	frm->Owner = this;
	this->Hide();
	frm->Show(this);
}

	 



private: System::Void label4_MouseEnter_1(System::Object^ sender, System::EventArgs^ e) {
	label4->ForeColor = Color::White;
}
private: System::Void label4_MouseLeave_1(System::Object^ sender, System::EventArgs^ e) {
	label4->ForeColor = Color::Black;
}
	   bool ch1 = false;
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!ch1) {

		textBox1->Text = "";
		textBox1->ForeColor = Color::Black;
		ch1 = true;
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 16, textBox1->Font->Style, textBox1->Font->Unit);
	}
}
	   bool ch2 = false;
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->UseSystemPasswordChar = true;
		if (!ch2) {
			textBox2->Text = "";
			textBox2->ForeColor = Color::Black;
			textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 16, textBox2->Font->Style, textBox2->Font->Unit);
		}
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   bool buf = false;

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!buf) {
		textBox2->UseSystemPasswordChar = false;
		pictureBox2->Image = Image::FromFile("D:/VS_2019/LastDance/Media/icons8-показать-24.png");
		buf = true;
	}
	else {
		textBox2->UseSystemPasswordChar = true;
		pictureBox2->Image = Image::FromFile("D:/VS_2019/LastDance/Media/icons8-закрытый-глаз-50.png");
		buf = false;
	}
	

}
};
}
