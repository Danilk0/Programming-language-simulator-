#pragma once
#include"MyForm9.h"
namespace LastDance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm5(MyForm9^ parent) {
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::Button^ button2;
	public:
	private: MyForm9^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	public: System::Windows::Forms::Label^ label3;
	private:
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm5::pictureBox2_Click);
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
			this->panel2->Size = System::Drawing::Size(677, 58);
			this->panel2->TabIndex = 36;
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm5::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(12, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 33);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Введение в Python";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 100);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(668, 239);
			this->textBox1->TabIndex = 39;
			this->textBox1->TabStop = false;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(610, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 26);
			this->button1->TabIndex = 40;
			this->button1->Text = L">>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 26);
			this->button2->TabIndex = 41;
			this->button2->Text = L"<<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(683, 377);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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

		int IDp() {
			int idc = 1;
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query1 = "SELECT ProgressP FROM [table_name] WHERE Код = " + parentForm->getId1();
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			OleDbDataReader^ dbReader1 = dbCommand1->ExecuteReader();
			while (dbReader1->Read()) {
				idc = Convert::ToInt16(dbReader1["ProgressP"]);

			}
			dbReader1->Close();
			dbConnection->Close();
			return idc;
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
				"UPDATE [table_name] SET ProgressP = " + id + " WHERE Код =" + parentForm->getId1();
			OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


			if (dbComand->ExecuteNonQuery() != 1) {
				MessageBox::Show("ошибка!", "Ахтунг!");
			}
			dbConnection->Close();
		}
		void DataChange(int id) {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query1 = "SELECT Label, TextBox FROM [Python] WHERE Код = " + id;
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			OleDbDataReader^ dbReader = dbCommand1->ExecuteReader();
			while (dbReader->Read()) {
				label2->Text = Convert::ToString(dbReader["Label"]);
				textBox1->Text = Convert::ToString(dbReader["TextBox"]);

			}
			dbReader->Close();
			dbConnection->Close();
		}
		void ShowProgress() {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query2 = "SELECT Name,Progress FROM [table_name] WHERE Код = " + parentForm->getId1();
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
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	parentForm->ShowProgress();
	parentForm->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IDp() < 67) {
		UPDATEProgress(IDC() + IDp());
		updateid(IDp() + 1);
		DataChange(IDp());
		ShowProgress();
		button2->Visible = true;
	}
	else {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("Media/aplodismentyi-38722.wav");
		player->Play();
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Вы изучили теоретический материал  ",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		player->Play();
		if (result == System::Windows::Forms::DialogResult::OK) {
			player->Stop();
		}
		button1->Visible = false;
	}
}
private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
	DataChange(parentForm->id);
	ShowProgress();
	updateid(parentForm->id);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IDp() > 2) {
		button1->Visible = true;
		UPDATEProgress(IDC()+ IDp());
		updateid(IDp() - 1);
		DataChange(IDp());
	}
	else {
		button2->Visible = false;
	}
}
};
}
