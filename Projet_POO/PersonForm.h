#pragma once
#include "CLEmployees.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Person_Management
	/// </summary>
	public ref class PersonForm : public System::Windows::Forms::Form
	{
	public:
		PersonForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PersonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

























	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Btn_create;
	private: System::Windows::Forms::Button^ Btn_Load;
	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::GroupBox^ Group_prix;
	private: System::Windows::Forms::TextBox^ TxtBox_Streetnumber;
	private: System::Windows::Forms::TextBox^ TxtBox_StreetName;
	private: System::Windows::Forms::TextBox^ TxtBox_City;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ Group_Infos;


	private: System::Windows::Forms::DateTimePicker^ Date_Sending;
	private: System::Windows::Forms::TextBox^ TxtSurname;



	private: System::Windows::Forms::Label^ Lab_mensPayment;

	private: System::Windows::Forms::Label^ Lab_sending;
	private: System::Windows::Forms::Label^ Lab_delivery;
	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::TextBox^ textName;



	private: System::Windows::Forms::TextBox^ textBoxPostal_code;



	private: System::Windows::Forms::Label^ label11;




	private: NS_Comp_Employees::CLEmployees^ oEmployees;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBoxManager;
	private: System::Windows::Forms::ListBox^ listBoxmanager;


















	protected:

	protected:

	protected:

	protected:





	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_create = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Group_prix = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPostal_code = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TxtBox_Streetnumber = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_StreetName = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_City = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->listBoxmanager = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBoxManager = (gcnew System::Windows::Forms::CheckBox());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->Date_Sending = (gcnew System::Windows::Forms::DateTimePicker());
			this->TxtSurname = (gcnew System::Windows::Forms::TextBox());
			this->Lab_mensPayment = (gcnew System::Windows::Forms::Label());
			this->Lab_sending = (gcnew System::Windows::Forms::Label());
			this->Lab_delivery = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->Group_prix->SuspendLayout();
			this->Group_Infos->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 481);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PersonForm::button1_Click);
			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_order->AutoSize = true;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_order->Location = System::Drawing::Point(138, 20);
			this->Title_order->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Title_order->Name = L"Title_order";
			this->Title_order->Size = System::Drawing::Size(707, 70);
			this->Title_order->TabIndex = 22;
			this->Title_order->Text = L"Employees management";
			this->Title_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Delete->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Delete->Location = System::Drawing::Point(277, 418);
			this->Btn_Delete->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(256, 50);
			this->Btn_Delete->TabIndex = 20;
			this->Btn_Delete->Text = L"Delete an employee";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &PersonForm::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Update->Location = System::Drawing::Point(12, 418);
			this->Btn_Update->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(256, 50);
			this->Btn_Update->TabIndex = 19;
			this->Btn_Update->Text = L"Modify an employee";
			this->Btn_Update->UseVisualStyleBackColor = true;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &PersonForm::Btn_Update_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Show->Location = System::Drawing::Point(277, 363);
			this->Btn_Show->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(256, 50);
			this->Btn_Show->TabIndex = 18;
			this->Btn_Show->Text = L"Show an employee";
			this->Btn_Show->UseVisualStyleBackColor = true;
			this->Btn_Show->Click += gcnew System::EventHandler(this, &PersonForm::Btn_Show_Click);
			// 
			// Btn_create
			// 
			this->Btn_create->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_create->Location = System::Drawing::Point(12, 363);
			this->Btn_create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_create->Name = L"Btn_create";
			this->Btn_create->Size = System::Drawing::Size(256, 50);
			this->Btn_create->TabIndex = 17;
			this->Btn_create->Text = L"Record an employee";
			this->Btn_create->UseVisualStyleBackColor = true;
			this->Btn_create->Click += gcnew System::EventHandler(this, &PersonForm::Btn_create_Click);
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Load->FlatAppearance->BorderColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Load->Location = System::Drawing::Point(11, 308);
			this->Btn_Load->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(522, 50);
			this->Btn_Load->TabIndex = 16;
			this->Btn_Load->Text = L"Load employee";
			this->Btn_Load->UseVisualStyleBackColor = false;
			this->Btn_Load->Click += gcnew System::EventHandler(this, &PersonForm::Btn_Load_Click);
			// 
			// View_Database
			// 
			this->View_Database->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->View_Database->Location = System::Drawing::Point(12, 107);
			this->View_Database->Margin = System::Windows::Forms::Padding(2);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(521, 193);
			this->View_Database->TabIndex = 15;
			// 
			// Group_prix
			// 
			this->Group_prix->Controls->Add(this->textBoxPostal_code);
			this->Group_prix->Controls->Add(this->label11);
			this->Group_prix->Controls->Add(this->TxtBox_Streetnumber);
			this->Group_prix->Controls->Add(this->TxtBox_StreetName);
			this->Group_prix->Controls->Add(this->TxtBox_City);
			this->Group_prix->Controls->Add(this->label8);
			this->Group_prix->Controls->Add(this->label9);
			this->Group_prix->Controls->Add(this->label10);
			this->Group_prix->Location = System::Drawing::Point(8, 178);
			this->Group_prix->Margin = System::Windows::Forms::Padding(2);
			this->Group_prix->Name = L"Group_prix";
			this->Group_prix->Padding = System::Windows::Forms::Padding(2);
			this->Group_prix->Size = System::Drawing::Size(412, 177);
			this->Group_prix->TabIndex = 5;
			this->Group_prix->TabStop = false;
			this->Group_prix->Text = L"Adress";
			// 
			// textBoxPostal_code
			// 
			this->textBoxPostal_code->Location = System::Drawing::Point(104, 132);
			this->textBoxPostal_code->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPostal_code->Name = L"textBoxPostal_code";
			this->textBoxPostal_code->Size = System::Drawing::Size(304, 20);
			this->textBoxPostal_code->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 132);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Postal code : ";
			// 
			// TxtBox_Streetnumber
			// 
			this->TxtBox_Streetnumber->Location = System::Drawing::Point(104, 30);
			this->TxtBox_Streetnumber->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_Streetnumber->Name = L"TxtBox_Streetnumber";
			this->TxtBox_Streetnumber->Size = System::Drawing::Size(304, 20);
			this->TxtBox_Streetnumber->TabIndex = 20;
			// 
			// TxtBox_StreetName
			// 
			this->TxtBox_StreetName->Location = System::Drawing::Point(104, 65);
			this->TxtBox_StreetName->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_StreetName->Name = L"TxtBox_StreetName";
			this->TxtBox_StreetName->Size = System::Drawing::Size(304, 20);
			this->TxtBox_StreetName->TabIndex = 19;
			// 
			// TxtBox_City
			// 
			this->TxtBox_City->Location = System::Drawing::Point(104, 99);
			this->TxtBox_City->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_City->Name = L"TxtBox_City";
			this->TxtBox_City->Size = System::Drawing::Size(304, 20);
			this->TxtBox_City->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 99);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"City : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 67);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Street Name : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 32);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Street number : ";
			// 
			// Group_Infos
			// 
			this->Group_Infos->Controls->Add(this->listBoxmanager);
			this->Group_Infos->Controls->Add(this->label1);
			this->Group_Infos->Controls->Add(this->checkBoxManager);
			this->Group_Infos->Controls->Add(this->textName);
			this->Group_Infos->Controls->Add(this->Date_Sending);
			this->Group_Infos->Controls->Add(this->TxtSurname);
			this->Group_Infos->Controls->Add(this->Group_prix);
			this->Group_Infos->Controls->Add(this->Lab_mensPayment);
			this->Group_Infos->Controls->Add(this->Lab_sending);
			this->Group_Infos->Controls->Add(this->Lab_delivery);
			this->Group_Infos->Controls->Add(this->Lab_ref);
			this->Group_Infos->Location = System::Drawing::Point(553, 107);
			this->Group_Infos->Margin = System::Windows::Forms::Padding(2);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Padding = System::Windows::Forms::Padding(2);
			this->Group_Infos->Size = System::Drawing::Size(424, 362);
			this->Group_Infos->TabIndex = 21;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Informations";
			// 
			// listBoxmanager
			// 
			this->listBoxmanager->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBoxmanager->FormattingEnabled = true;
			this->listBoxmanager->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Doe", L"Smith", L"Johnson", L"Williams",
					L"Brown", L"Miller", L"Rigaud"
			});
			this->listBoxmanager->Location = System::Drawing::Point(112, 108);
			this->listBoxmanager->Name = L"listBoxmanager";
			this->listBoxmanager->Size = System::Drawing::Size(304, 30);
			this->listBoxmanager->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(329, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Manager \?";
			// 
			// checkBoxManager
			// 
			this->checkBoxManager->AutoSize = true;
			this->checkBoxManager->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBoxManager->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBoxManager->Location = System::Drawing::Point(308, 147);
			this->checkBoxManager->Name = L"checkBoxManager";
			this->checkBoxManager->Size = System::Drawing::Size(15, 14);
			this->checkBoxManager->TabIndex = 21;
			this->checkBoxManager->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->checkBoxManager->UseVisualStyleBackColor = true;
			this->checkBoxManager->CheckedChanged += gcnew System::EventHandler(this, &PersonForm::checkBoxManager_CheckedChanged);
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(112, 54);
			this->textName->Margin = System::Windows::Forms::Padding(2);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(304, 20);
			this->textName->TabIndex = 18;
			// 
			// Date_Sending
			// 
			this->Date_Sending->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Date_Sending->CustomFormat = L"yyyy-MM-dd";
			this->Date_Sending->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Date_Sending->Location = System::Drawing::Point(112, 83);
			this->Date_Sending->Margin = System::Windows::Forms::Padding(2);
			this->Date_Sending->Name = L"Date_Sending";
			this->Date_Sending->Size = System::Drawing::Size(102, 20);
			this->Date_Sending->TabIndex = 16;
			// 
			// TxtSurname
			// 
			this->TxtSurname->Location = System::Drawing::Point(112, 25);
			this->TxtSurname->Margin = System::Windows::Forms::Padding(2);
			this->TxtSurname->Name = L"TxtSurname";
			this->TxtSurname->Size = System::Drawing::Size(304, 20);
			this->TxtSurname->TabIndex = 6;
			// 
			// Lab_mensPayment
			// 
			this->Lab_mensPayment->AutoSize = true;
			this->Lab_mensPayment->Location = System::Drawing::Point(5, 113);
			this->Lab_mensPayment->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_mensPayment->Name = L"Lab_mensPayment";
			this->Lab_mensPayment->Size = System::Drawing::Size(58, 13);
			this->Lab_mensPayment->TabIndex = 4;
			this->Lab_mensPayment->Text = L"Manager : ";
			// 
			// Lab_sending
			// 
			this->Lab_sending->AutoSize = true;
			this->Lab_sending->Location = System::Drawing::Point(5, 83);
			this->Lab_sending->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_sending->Name = L"Lab_sending";
			this->Lab_sending->Size = System::Drawing::Size(73, 13);
			this->Lab_sending->TabIndex = 2;
			this->Lab_sending->Text = L"Date of Hire : ";
			// 
			// Lab_delivery
			// 
			this->Lab_delivery->AutoSize = true;
			this->Lab_delivery->Location = System::Drawing::Point(5, 54);
			this->Lab_delivery->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_delivery->Name = L"Lab_delivery";
			this->Lab_delivery->Size = System::Drawing::Size(44, 13);
			this->Lab_delivery->TabIndex = 1;
			this->Lab_delivery->Text = L"Name : ";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(5, 29);
			this->Lab_ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(58, 13);
			this->Lab_ref->TabIndex = 0;
			this->Lab_ref->Text = L"Surname : ";
			// 
			// PersonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(998, 516);
			this->Controls->Add(this->Title_order);
			this->Controls->Add(this->Group_Infos);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Update);
			this->Controls->Add(this->Btn_Show);
			this->Controls->Add(this->Btn_create);
			this->Controls->Add(this->Btn_Load);
			this->Controls->Add(this->View_Database);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PersonForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &PersonForm::Person_Management_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->EndInit();
			this->Group_prix->ResumeLayout(false);
			this->Group_prix->PerformLayout();
			this->Group_Infos->ResumeLayout(false);
			this->Group_Infos->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Person_Management_Load(System::Object^ sender, System::EventArgs^ e) {

		this->oEmployees = gcnew NS_Comp_Employees::CLEmployees();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		this->Close();

	}

private: System::Boolean UpdateTextBoxAreFilled() {

	return	!String::IsNullOrWhiteSpace(TxtSurname-> Text) &&
			!String::IsNullOrWhiteSpace(textName->Text) &&
			!String::IsNullOrWhiteSpace(Date_Sending->Text) &&
			!String::IsNullOrWhiteSpace(TxtBox_Streetnumber->Text);
			!String::IsNullOrWhiteSpace(TxtBox_StreetName->Text);
			!String::IsNullOrWhiteSpace(TxtBox_City->Text);
			!String::IsNullOrWhiteSpace(textBoxPostal_code->Text);
}
 private: System::Boolean CreateTextBoxAreFilled() {

	 return	!String::IsNullOrWhiteSpace(TxtSurname->Text) &&
			!String::IsNullOrWhiteSpace(textName->Text) &&
			!String::IsNullOrWhiteSpace(Date_Sending->Text) &&
			!String::IsNullOrWhiteSpace(TxtBox_Streetnumber->Text);
			!String::IsNullOrWhiteSpace(TxtBox_StreetName->Text);
			!String::IsNullOrWhiteSpace(TxtBox_City->Text);
			!String::IsNullOrWhiteSpace(textBoxPostal_code->Text);
 }
private: System::Void Btn_Load_Click(System::Object^ sender, System::EventArgs^ e) {

	this->View_Database->Refresh();
	this->oDs = this->oEmployees->loadEmployees("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";

}
private: System::Void Btn_Show_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!String::IsNullOrWhiteSpace(this->TxtSurname->Text)) {
		this->View_Database->Refresh();
		this->oEmployees->selectEmployee(this->TxtSurname->Text, "Rsl2");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl2";
	}
	else {
		MessageBox::Show("Please enter a surname !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->TxtSurname->Text = "";

}
private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!String::IsNullOrWhiteSpace(this->TxtSurname->Text) && !String::IsNullOrWhiteSpace(this->textName->Text) && !String::IsNullOrWhiteSpace(this->Date_Sending->Text)) {
		this->oEmployees->deleteEmployee(this->TxtSurname->Text, this->textName->Text, this->Date_Sending->Text);
		this->View_Database->Refresh();
		this->oDs = this->oEmployees->selectEmployee(this->TxtSurname->Text, "Rsl5");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl5";
	}
	else {
		MessageBox::Show("Please enter a surname, a name and a date of hire !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->TxtSurname->Text = "";
	this->textName->Text = "";
	this->Date_Sending->Text = "";
}
private: System::Void Btn_create_Click(System::Object^ sender, System::EventArgs^ e) {

	if (CreateTextBoxAreFilled()) {

	this->oEmployees->insertEmployee(this->TxtSurname->Text, this->textName->Text, this->Date_Sending->Text, this->listBoxmanager->Text, this->checkBoxManager->Text, this->TxtBox_Streetnumber->Text, this->TxtBox_StreetName->Text, this->TxtBox_City->Text, this->textBoxPostal_code->Text);
	this->View_Database->Refresh();
	this->oDs = this->oEmployees->selectEmployee(this->TxtSurname->Text, "Rsl3");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl3";
	}

	else {
		MessageBox::Show("Please fill all the fields !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->TxtSurname->Text = "";
	this->textName->Text = "";
	this->Date_Sending->Text = "";
	this->TxtBox_Streetnumber->Text = "";
	this->TxtBox_StreetName->Text = "";
	this->TxtBox_City->Text = "";
	this->textBoxPostal_code->Text = "";
}

private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {

	if (UpdateTextBoxAreFilled()) {

	this->oEmployees->updateEmployee(this->TxtSurname->Text, this->textName->Text, this->Date_Sending->Text, this->TxtBox_Streetnumber->Text, this->TxtBox_StreetName->Text, this->TxtBox_City->Text, this->textBoxPostal_code->Text);
	this->View_Database->Refresh();
	this->oDs = this->oEmployees->selectEmployee(this->TxtSurname->Text, "Rsl4");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl4";
	}

	else {
		MessageBox::Show("Please enter a correct surname, a name and a data senting !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->TxtSurname->Text = "";
	this->textName->Text = "";
	this->Date_Sending->Text = "";
}
private: System::Void checkBoxManager_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBoxManager->Checked == true) {
		checkBoxManager->Text = "1";

	}
	else {
		checkBoxManager->Text = "0";
	}

	if (checkBoxManager->Checked == true) {
		listBoxmanager->Enabled = false;
	}
	else {
		listBoxmanager->Enabled = true;
	}
}
};
}

