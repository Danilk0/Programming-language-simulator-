#pragma once
#include"MyForm3.h"

namespace LastDance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;


	/// <summary>
	/// Сводка для MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm7(MyForm3^ parent) {
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;









	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Login;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Progress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProgressC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProgressP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Test;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Admin;









	public:
	private: MyForm3^ parentForm;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	protected:











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Login = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Progress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProgressC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProgressP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Test = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Admin = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->ID, this->Password,
					this->Login, this->Name, this->Progress, this->ProgressC, this->ProgressP, this->Test, this->Admin
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(659, 270);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm7::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->ID->Width = 50;
			// 
			// Password
			// 
			this->Password->HeaderText = L"Password";
			this->Password->MinimumWidth = 6;
			this->Password->Name = L"Password";
			this->Password->Width = 125;
			// 
			// Login
			// 
			this->Login->HeaderText = L"Login";
			this->Login->MinimumWidth = 6;
			this->Login->Name = L"Login";
			this->Login->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// Progress
			// 
			this->Progress->HeaderText = L"Progress";
			this->Progress->MinimumWidth = 6;
			this->Progress->Name = L"Progress";
			this->Progress->Width = 55;
			// 
			// ProgressC
			// 
			this->ProgressC->HeaderText = L"ProgressC";
			this->ProgressC->MinimumWidth = 6;
			this->ProgressC->Name = L"ProgressC";
			this->ProgressC->Width = 55;
			// 
			// ProgressP
			// 
			this->ProgressP->HeaderText = L"ProgressP";
			this->ProgressP->MinimumWidth = 6;
			this->ProgressP->Name = L"ProgressP";
			this->ProgressP->Width = 55;
			// 
			// Test
			// 
			this->Test->HeaderText = L"Test";
			this->Test->MinimumWidth = 6;
			this->Test->Name = L"Test";
			this->Test->Width = 50;
			// 
			// Admin
			// 
			this->Admin->HeaderText = L"Admin";
			this->Admin->MinimumWidth = 6;
			this->Admin->Name = L"Admin";
			this->Admin->Width = 50;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(124, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(441, 67);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Работа с БД";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(6, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Загрузить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(109, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Добавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm7::button3_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(316, 21);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 38);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Удаление\r\n";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm7::button5_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(212, 21);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 38);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Обновление";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm7::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(571, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm7::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm7::pictureBox2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel2->Location = System::Drawing::Point(3, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(679, 67);
			this->panel2->TabIndex = 40;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm7::panel2_Paint);
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
			static_cast<System::Int32>(static_cast<System::Byte>(137)));
			this->ClientSize = System::Drawing::Size(683, 377);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm7";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   bool buf;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_name]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
	}
	else {
		if (buf) {
			dataGridView1->Rows->Clear();
		}
		
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Код"], dbReader["Password"], dbReader["Login"], dbReader["Name"], dbReader["Progress"], dbReader["ProgressC"], dbReader["ProgressP"], dbReader["Test"], dbReader["ADM"]);
		}



	}
	dbReader->Close();
	dbConnection->Close();
	buf = true;
	return System::Void();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите указаннную строку!!!  ",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[6]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[7]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[8]->Value == nullptr) {
		 MessageBox::Show(
			"Не все данные введены!!!  ",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		return;
	}

	int id = Convert::ToInt16(dataGridView1->Rows[index]->Cells[0]->Value);
	String^ password = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ login = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	int progress = Convert::ToInt16(dataGridView1->Rows[index]->Cells[4]->Value);
	int progressC = Convert::ToInt16(dataGridView1->Rows[index]->Cells[5]->Value);
	int progressP = Convert::ToInt16(dataGridView1->Rows[index]->Cells[6]->Value);
	int test = Convert::ToInt16(dataGridView1->Rows[index]->Cells[7]->Value);
	bool adm = Convert::ToInt16(dataGridView1->Rows[index]->Cells[8]->Value);



	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_name] VALUES (" + id + ",'" + password+ "','" + login + "','" + name + "'," + progress + "," + progressC + "," + progressP +","+test+ "," + adm + ")";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
	else
		MessageBox::Show("Добавлено",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);

	dbConnection->Close();


	return System::Void();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите указаннную строку!!!  ",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;

	int id = Convert::ToInt16(dataGridView1->Rows[index]->Cells[0]->Value);
	String^ password = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ login = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	int progress = Convert::ToInt16(dataGridView1->Rows[index]->Cells[4]->Value);
	int progressC = Convert::ToInt16(dataGridView1->Rows[index]->Cells[5]->Value);
	int progressP = Convert::ToInt16(dataGridView1->Rows[index]->Cells[6]->Value);
	int test = Convert::ToInt16(dataGridView1->Rows[index]->Cells[7]->Value);
	bool adm = Convert::ToInt16(dataGridView1->Rows[index]->Cells[8]->Value);

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ query =
		"DELETE FROM table_name "
		+ "WHERE Код = " + id;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Удалено",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		dataGridView1->Rows->RemoveAt(index);


	}
	else {
		MessageBox::Show("Ошибка",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
	}
	dbConnection->Close();

	return System::Void();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите указаннную строку!!!  ",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;

	int id = Convert::ToInt16(dataGridView1->Rows[index]->Cells[0]->Value);
	String^ password = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ login = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	int progress = Convert::ToInt16(dataGridView1->Rows[index]->Cells[4]->Value);
	int progressC = Convert::ToInt16(dataGridView1->Rows[index]->Cells[5]->Value);
	int progressP = Convert::ToInt16(dataGridView1->Rows[index]->Cells[6]->Value);
	int test = Convert::ToInt16(dataGridView1->Rows[index]->Cells[7]->Value);
	bool adm = Convert::ToInt16(dataGridView1->Rows[index]->Cells[8]->Value);

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database2.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ query =
		"UPDATE table_name "
		+ "SET [Password]='" + password + "', [Login] = '" + login + "', [Name]='" + name + "', Progress = " + progress + ", ProgressC = " + progressC + ", ProgressP = " + progressP + ", Test = "+test+", [ADM] = " +adm+ ""
		+ " WHERE [Код] = " + id+"";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() == 1) {
		MessageBox::Show("Обновлено",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
	}
	else {
		MessageBox::Show("Ошибка",
			"Внимание",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1,
			MessageBoxOptions::RightAlign);
	}
	dbConnection->Close();

	return System::Void();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	parentForm->Show();
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
