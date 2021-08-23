#pragma once

namespace LastDance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Location = System::Drawing::Point(142, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(318, 408);
			this->panel1->TabIndex = 15;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(264, 176);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(34, 34);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox3_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(52, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 46);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Создать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(52, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(208, 34);
			this->textBox2->TabIndex = 21;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"Введите пароль";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::textBox2_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(21, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 40);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Создание кабинета";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(52, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 34);
			this->textBox1->TabIndex = 20;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Введите логин";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm2::textBox1_Click);
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Location = System::Drawing::Point(52, 240);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 34);
			this->textBox3->TabIndex = 25;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L"Введите имя";
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::textBox3_MouseClick);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(34, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 33);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Пароль";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(34, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 33);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Логин";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(34, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 33);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Имя";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(114, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 17);
			this->label5->TabIndex = 26;
			this->label5->Text = L"*";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(123, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 17);
			this->label6->TabIndex = 27;
			this->label6->Text = L"*";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(93, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 17);
			this->label7->TabIndex = 28;
			this->label7->Text = L"*";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(466, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox2_Click_1);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(602, 401);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool chek() {
			String^ login = Convert::ToString(textBox1->Text);
			String^ pass = Convert::ToString(textBox2->Text);
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			dbConnection->Open();
			String^ query1 = "SELECT Код  FROM [table_name] WHERE Login='"+login+"' AND Password='"+pass+"'";
			OleDbCommand^ dbComand1 = gcnew OleDbCommand(query1, dbConnection);
			OleDbDataReader^ dbReader = dbComand1->ExecuteReader();
			if (dbReader->Read()) {
				return true;
			}
			else {
				return false;
			}
			dbReader->Close();
			dbConnection->Close();
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!chek()) {
			if (textBox1->Text == nullptr ||
				textBox2->Text == nullptr ||
				textBox3->Text == nullptr) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"Не все данные введены",
					"Внимание",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information,
					MessageBoxDefaultButton::Button1,
					MessageBoxOptions::RightAlign);
				return;
			}

			String^ login = Convert::ToString(textBox1->Text);
			String^ pass = Convert::ToString(textBox2->Text);
			String^ name = Convert::ToString(textBox3->Text);
			int progress = 0;
			int c = 0;
			int puthon = 0;
			int test = 0;
			int adm = 0;
			Int16 id = 0;
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			dbConnection->Open();
			String^ query1 = "SELECT Код  FROM [table_name]";
			OleDbCommand^ dbComand1 = gcnew OleDbCommand(query1, dbConnection);
			OleDbDataReader^ dbReader = dbComand1->ExecuteReader();
			while (dbReader->Read()) {
				if (Convert::ToInt16(dbReader["Код"]) > id)
					id = Convert::ToInt16(dbReader["Код"]);
			}
			id++;
			dbReader->Close();
			String^ query = "INSERT INTO [table_name]  VALUES (" + id + ",'" + pass + "','" + login + "','" + name + "',"  + adm + "," + progress + "," + c + "," + puthon + "," + test+")";
			OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


			if (dbComand->ExecuteNonQuery() != 1)
				MessageBox::Show("Ошибка", "Внимание!");
			else
				MessageBox::Show("Аккаунт создан", "Внимание!");
			Owner->Show();
			this->Hide();

			dbConnection->Close();
			
			return System::Void();
		}
		else {
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Замените логин или пароль!!!",
				"Внимание",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information,
				MessageBoxDefaultButton::Button1,
				MessageBoxOptions::RightAlign);
		}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Owner->Show();
	this->Close();

}

private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   bool ch1 = false;
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (!ch1) {
			textBox1->Text = "";
			textBox1->ForeColor = Color::Black;
			ch1 = true;
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 16, textBox1->Font->Style, textBox1->Font->Unit);
		}
	}
		   bool ch2 = false;
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (!ch2) {
		textBox2->Text = "";
		textBox2->ForeColor = Color::Black;
		textBox2->UseSystemPasswordChar = true;
		ch1 = true;
		textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 16, textBox2->Font->Style, textBox2->Font->Unit);
	}
}
	   bool ch3 = false;
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (!ch3) {
		textBox3->Text = "";
		textBox3->ForeColor = Color::Black;
		ch3 = true;
		textBox3->Font = gcnew System::Drawing::Font(textBox3->Font->Name, 16, textBox3->Font->Style, textBox3->Font->Unit);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   bool buf = false;
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!buf) {
		textBox2->UseSystemPasswordChar = false;
		pictureBox3->Image = Image::FromFile("D:/VS_2019/LastDance/Media/icons8-показать-24.png");
		buf = true;
	}
	else {
		textBox2->UseSystemPasswordChar = true;
		pictureBox3->Image = Image::FromFile("D:/VS_2019/LastDance/Media/icons8-закрытый-глаз-50.png");
		buf = false;
	}
}
};
}
