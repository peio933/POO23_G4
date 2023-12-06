#pragma once

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
	private: System::Windows::Forms::Button^ Delete_employee;

	private: System::Windows::Forms::Button^ Modify_employee;
	private: System::Windows::Forms::Button^ Show_employee;


	private: System::Windows::Forms::Button^ Record_employee;

	private: System::Windows::Forms::Button^ Load_employee;

	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::GroupBox^ Group_prix;
	private: System::Windows::Forms::TextBox^ Street_number;
	private: System::Windows::Forms::TextBox^ Street_Name;


	private: System::Windows::Forms::TextBox^ TxtBox_TTC;
	private: System::Windows::Forms::Label^ City;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ Group_Infos;
	private: System::Windows::Forms::DateTimePicker^ Date_of_Hire;



	private: System::Windows::Forms::TextBox^ Name;


	private: System::Windows::Forms::Label^ Lab_mensPayment;

	private: System::Windows::Forms::Label^ Lab_sending;
	private: System::Windows::Forms::Label^ Lab_delivery;
	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::TextBox^ Surname;
	private: System::Windows::Forms::ListBox^ Manager;
	private: System::Windows::Forms::TextBox^ Postal_code;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox1;














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
			this->Delete_employee = (gcnew System::Windows::Forms::Button());
			this->Modify_employee = (gcnew System::Windows::Forms::Button());
			this->Show_employee = (gcnew System::Windows::Forms::Button());
			this->Record_employee = (gcnew System::Windows::Forms::Button());
			this->Load_employee = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Group_prix = (gcnew System::Windows::Forms::GroupBox());
			this->Postal_code = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Street_number = (gcnew System::Windows::Forms::TextBox());
			this->Street_Name = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_TTC = (gcnew System::Windows::Forms::TextBox());
			this->City = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->Manager = (gcnew System::Windows::Forms::ListBox());
			this->Surname = (gcnew System::Windows::Forms::TextBox());
			this->Date_of_Hire = (gcnew System::Windows::Forms::DateTimePicker());
			this->Name = (gcnew System::Windows::Forms::TextBox());
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
			// Delete_employee
			// 
			this->Delete_employee->BackColor = System::Drawing::Color::LightCoral;
			this->Delete_employee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete_employee->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Delete_employee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_employee->Location = System::Drawing::Point(277, 418);
			this->Delete_employee->Margin = System::Windows::Forms::Padding(2);
			this->Delete_employee->Name = L"Delete_employee";
			this->Delete_employee->Size = System::Drawing::Size(256, 50);
			this->Delete_employee->TabIndex = 20;
			this->Delete_employee->Text = L"Delete an employee";
			this->Delete_employee->UseVisualStyleBackColor = false;
			// 
			// Modify_employee
			// 
			this->Modify_employee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Modify_employee->Location = System::Drawing::Point(12, 418);
			this->Modify_employee->Margin = System::Windows::Forms::Padding(2);
			this->Modify_employee->Name = L"Modify_employee";
			this->Modify_employee->Size = System::Drawing::Size(256, 50);
			this->Modify_employee->TabIndex = 19;
			this->Modify_employee->Text = L"Modify an employee";
			this->Modify_employee->UseVisualStyleBackColor = true;
			// 
			// Show_employee
			// 
			this->Show_employee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Show_employee->Location = System::Drawing::Point(277, 363);
			this->Show_employee->Margin = System::Windows::Forms::Padding(2);
			this->Show_employee->Name = L"Show_employee";
			this->Show_employee->Size = System::Drawing::Size(256, 50);
			this->Show_employee->TabIndex = 18;
			this->Show_employee->Text = L"Show an employee";
			this->Show_employee->UseVisualStyleBackColor = true;
			// 
			// Record_employee
			// 
			this->Record_employee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Record_employee->Location = System::Drawing::Point(12, 363);
			this->Record_employee->Margin = System::Windows::Forms::Padding(2);
			this->Record_employee->Name = L"Record_employee";
			this->Record_employee->Size = System::Drawing::Size(256, 50);
			this->Record_employee->TabIndex = 17;
			this->Record_employee->Text = L"Record an employee";
			this->Record_employee->UseVisualStyleBackColor = true;
			// 
			// Load_employee
			// 
			this->Load_employee->BackColor = System::Drawing::Color::YellowGreen;
			this->Load_employee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Load_employee->FlatAppearance->BorderColor = System::Drawing::Color::YellowGreen;
			this->Load_employee->FlatAppearance->BorderSize = 0;
			this->Load_employee->FlatAppearance->MouseDownBackColor = System::Drawing::Color::YellowGreen;
			this->Load_employee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::YellowGreen;
			this->Load_employee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Load_employee->Location = System::Drawing::Point(11, 308);
			this->Load_employee->Margin = System::Windows::Forms::Padding(2);
			this->Load_employee->Name = L"Load_employee";
			this->Load_employee->Size = System::Drawing::Size(522, 50);
			this->Load_employee->TabIndex = 16;
			this->Load_employee->Text = L"Load employee";
			this->Load_employee->UseVisualStyleBackColor = false;
			this->Load_employee->Click += gcnew System::EventHandler(this, &PersonForm::Btn_Load_Click);
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
			this->Group_prix->Controls->Add(this->Postal_code);
			this->Group_prix->Controls->Add(this->label11);
			this->Group_prix->Controls->Add(this->Street_number);
			this->Group_prix->Controls->Add(this->Street_Name);
			this->Group_prix->Controls->Add(this->TxtBox_TTC);
			this->Group_prix->Controls->Add(this->City);
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
			// Postal_code
			// 
			this->Postal_code->Location = System::Drawing::Point(104, 132);
			this->Postal_code->Margin = System::Windows::Forms::Padding(2);
			this->Postal_code->Name = L"Postal_code";
			this->Postal_code->Size = System::Drawing::Size(304, 20);
			this->Postal_code->TabIndex = 22;
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
			// Street_number
			// 
			this->Street_number->Location = System::Drawing::Point(104, 30);
			this->Street_number->Margin = System::Windows::Forms::Padding(2);
			this->Street_number->Name = L"Street_number";
			this->Street_number->Size = System::Drawing::Size(304, 20);
			this->Street_number->TabIndex = 20;
			// 
			// Street_Name
			// 
			this->Street_Name->Location = System::Drawing::Point(104, 65);
			this->Street_Name->Margin = System::Windows::Forms::Padding(2);
			this->Street_Name->Name = L"Street_Name";
			this->Street_Name->Size = System::Drawing::Size(304, 20);
			this->Street_Name->TabIndex = 19;
			// 
			// TxtBox_TTC
			// 
			this->TxtBox_TTC->Location = System::Drawing::Point(104, 99);
			this->TxtBox_TTC->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_TTC->Name = L"TxtBox_TTC";
			this->TxtBox_TTC->Size = System::Drawing::Size(304, 20);
			this->TxtBox_TTC->TabIndex = 18;
			// 
			// City
			// 
			this->City->AutoSize = true;
			this->City->Location = System::Drawing::Point(4, 99);
			this->City->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->City->Name = L"City";
			this->City->Size = System::Drawing::Size(33, 13);
			this->City->TabIndex = 8;
			this->City->Text = L"City : ";
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
			this->Group_Infos->Controls->Add(this->checkBox1);
			this->Group_Infos->Controls->Add(this->Manager);
			this->Group_Infos->Controls->Add(this->Surname);
			this->Group_Infos->Controls->Add(this->Date_of_Hire);
			this->Group_Infos->Controls->Add(this->Name);
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
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Location = System::Drawing::Point(308, 147);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(77, 17);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Manager \?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &PersonForm::checkBox1_CheckedChanged);
			// 
			// Manager
			// 
			this->Manager->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Manager->FormattingEnabled = true;
			this->Manager->Location = System::Drawing::Point(114, 113);
			this->Manager->Name = L"Manager";
			this->Manager->Size = System::Drawing::Size(302, 17);
			this->Manager->TabIndex = 16;
			// 
			// Surname
			// 
			this->Surname->Location = System::Drawing::Point(112, 54);
			this->Surname->Margin = System::Windows::Forms::Padding(2);
			this->Surname->Name = L"Surname";
			this->Surname->Size = System::Drawing::Size(304, 20);
			this->Surname->TabIndex = 18;
			// 
			// Date_of_Hire
			// 
			this->Date_of_Hire->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Date_of_Hire->Location = System::Drawing::Point(112, 83);
			this->Date_of_Hire->Margin = System::Windows::Forms::Padding(2);
			this->Date_of_Hire->Name = L"Date_of_Hire";
			this->Date_of_Hire->Size = System::Drawing::Size(304, 20);
			this->Date_of_Hire->TabIndex = 16;
			// 
			// Name
			// 
			this->Name->Location = System::Drawing::Point(112, 25);
			this->Name->Margin = System::Windows::Forms::Padding(2);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(304, 20);
			this->Name->TabIndex = 6;
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
			this->Lab_delivery->Size = System::Drawing::Size(58, 13);
			this->Lab_delivery->TabIndex = 1;
			this->Lab_delivery->Text = L"Surname : ";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(5, 29);
			this->Lab_ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(44, 13);
			this->Lab_ref->TabIndex = 0;
			this->Lab_ref->Text = L"Name : ";
			this->Lab_ref->Click += gcnew System::EventHandler(this, &PersonForm::Lab_ref_Click);
			// 
			// PersonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(998, 516);
			this->Controls->Add(this->Title_order);
			this->Controls->Add(this->Group_Infos);
			this->Controls->Add(this->Delete_employee);
			this->Controls->Add(this->Modify_employee);
			this->Controls->Add(this->Show_employee);
			this->Controls->Add(this->Record_employee);
			this->Controls->Add(this->Load_employee);
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
	}
	private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	this->Close();

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Lab_ref_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_Load_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
