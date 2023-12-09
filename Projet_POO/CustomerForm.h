#pragma once
#include"CLCustomers.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for customer_Management
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}





















































	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::GroupBox^ groupBox_Informations;

	private: System::Windows::Forms::TextBox^ txtBox_Name;



	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_Date_of_Birth;
	private: System::Windows::Forms::GroupBox^ groupBox_Adress;








	private: System::Windows::Forms::TextBox^ textBox_Post_Code;
	private: System::Windows::Forms::Label^ label_Post_Code;


	private: System::Windows::Forms::TextBox^ textBox_Str_Numb;
	private: System::Windows::Forms::TextBox^ textBox_Str_Name;
	private: System::Windows::Forms::TextBox^ textBox_City;
	private: System::Windows::Forms::Label^ label_City;




	private: System::Windows::Forms::Label^ label_Str_Name;

	private: System::Windows::Forms::Label^ label_Str_Numb;

	private: System::Windows::Forms::Label^ label_Date_of_Birth;


	private: System::Windows::Forms::Label^ label_Name;


	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Modify;
	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Btn_Record;

	private: System::Windows::Forms::Button^ Btn_Load;
	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtBox_Surname;
	private: System::Windows::Forms::Label^ label_Surname;





	private: NS_Comp_Cus::CLCustomers^ oCustomers;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label_New_Date_of_Birth;
	private: System::Windows::Forms::Label^ label_New_Name;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_New_Date_of_Birth;
	private: System::Windows::Forms::TextBox^ textBox_New_Name;

























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerForm::typeid));
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->groupBox_Informations = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_Surname = (gcnew System::Windows::Forms::TextBox());
			this->label_Surname = (gcnew System::Windows::Forms::Label());
			this->txtBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker_Date_of_Birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox_Adress = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Post_Code = (gcnew System::Windows::Forms::TextBox());
			this->label_Post_Code = (gcnew System::Windows::Forms::Label());
			this->textBox_Str_Numb = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Str_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_City = (gcnew System::Windows::Forms::TextBox());
			this->label_City = (gcnew System::Windows::Forms::Label());
			this->label_Str_Name = (gcnew System::Windows::Forms::Label());
			this->label_Str_Numb = (gcnew System::Windows::Forms::Label());
			this->label_Date_of_Birth = (gcnew System::Windows::Forms::Label());
			this->label_Name = (gcnew System::Windows::Forms::Label());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Modify = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_Record = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_New_Name = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker_New_Date_of_Birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_New_Name = (gcnew System::Windows::Forms::Label());
			this->label_New_Date_of_Birth = (gcnew System::Windows::Forms::Label());
			this->groupBox_Informations->SuspendLayout();
			this->groupBox_Adress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->SuspendLayout();
			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_order->AutoSize = true;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_order->Location = System::Drawing::Point(105, -4);
			this->Title_order->Name = L"Title_order";
			this->Title_order->Size = System::Drawing::Size(864, 86);
			this->Title_order->TabIndex = 38;
			this->Title_order->Text = L"Customers management";
			this->Title_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox_Informations
			// 
			this->groupBox_Informations->Controls->Add(this->label_New_Date_of_Birth);
			this->groupBox_Informations->Controls->Add(this->label_New_Name);
			this->groupBox_Informations->Controls->Add(this->dateTimePicker_New_Date_of_Birth);
			this->groupBox_Informations->Controls->Add(this->textBox_New_Name);
			this->groupBox_Informations->Controls->Add(this->txtBox_Surname);
			this->groupBox_Informations->Controls->Add(this->label_Surname);
			this->groupBox_Informations->Controls->Add(this->txtBox_Name);
			this->groupBox_Informations->Controls->Add(this->dateTimePicker_Date_of_Birth);
			this->groupBox_Informations->Controls->Add(this->groupBox_Adress);
			this->groupBox_Informations->Controls->Add(this->label_Date_of_Birth);
			this->groupBox_Informations->Controls->Add(this->label_Name);
			this->groupBox_Informations->Location = System::Drawing::Point(553, 107);
			this->groupBox_Informations->Name = L"groupBox_Informations";
			this->groupBox_Informations->Padding = System::Windows::Forms::Padding(2);
			this->groupBox_Informations->Size = System::Drawing::Size(424, 362);
			this->groupBox_Informations->TabIndex = 37;
			this->groupBox_Informations->TabStop = false;
			this->groupBox_Informations->Text = L"Informations";
			// 
			// txtBox_Surname
			// 
			this->txtBox_Surname->Location = System::Drawing::Point(112, 28);
			this->txtBox_Surname->Name = L"txtBox_Surname";
			this->txtBox_Surname->Size = System::Drawing::Size(304, 23);
			this->txtBox_Surname->TabIndex = 20;
			// 
			// label_Surname
			// 
			this->label_Surname->AutoSize = true;
			this->label_Surname->Location = System::Drawing::Point(12, 28);
			this->label_Surname->Name = L"label_Surname";
			this->label_Surname->Size = System::Drawing::Size(77, 17);
			this->label_Surname->TabIndex = 19;
			this->label_Surname->Text = L"Surname : ";
			// 
			// txtBox_Name
			// 
			this->txtBox_Name->Location = System::Drawing::Point(112, 60);
			this->txtBox_Name->Name = L"txtBox_Name";
			this->txtBox_Name->Size = System::Drawing::Size(304, 23);
			this->txtBox_Name->TabIndex = 18;
			// 
			// dateTimePicker_Date_of_Birth
			// 
			this->dateTimePicker_Date_of_Birth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker_Date_of_Birth->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker_Date_of_Birth->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_Date_of_Birth->Location = System::Drawing::Point(112, 92);
			this->dateTimePicker_Date_of_Birth->Name = L"dateTimePicker_Date_of_Birth";
			this->dateTimePicker_Date_of_Birth->Size = System::Drawing::Size(304, 23);
			this->dateTimePicker_Date_of_Birth->TabIndex = 16;
			// 
			// groupBox_Adress
			// 
			this->groupBox_Adress->Controls->Add(this->textBox_Post_Code);
			this->groupBox_Adress->Controls->Add(this->label_Post_Code);
			this->groupBox_Adress->Controls->Add(this->textBox_Str_Numb);
			this->groupBox_Adress->Controls->Add(this->textBox_Str_Name);
			this->groupBox_Adress->Controls->Add(this->textBox_City);
			this->groupBox_Adress->Controls->Add(this->label_City);
			this->groupBox_Adress->Controls->Add(this->label_Str_Name);
			this->groupBox_Adress->Controls->Add(this->label_Str_Numb);
			this->groupBox_Adress->Location = System::Drawing::Point(8, 178);
			this->groupBox_Adress->Name = L"groupBox_Adress";
			this->groupBox_Adress->Padding = System::Windows::Forms::Padding(2);
			this->groupBox_Adress->Size = System::Drawing::Size(412, 177);
			this->groupBox_Adress->TabIndex = 5;
			this->groupBox_Adress->TabStop = false;
			this->groupBox_Adress->Text = L"Adress";
			// 
			// textBox_Post_Code
			// 
			this->textBox_Post_Code->Location = System::Drawing::Point(104, 132);
			this->textBox_Post_Code->Name = L"textBox_Post_Code";
			this->textBox_Post_Code->Size = System::Drawing::Size(304, 23);
			this->textBox_Post_Code->TabIndex = 22;
			// 
			// label_Post_Code
			// 
			this->label_Post_Code->AutoSize = true;
			this->label_Post_Code->Location = System::Drawing::Point(4, 132);
			this->label_Post_Code->Name = L"label_Post_Code";
			this->label_Post_Code->Size = System::Drawing::Size(94, 17);
			this->label_Post_Code->TabIndex = 21;
			this->label_Post_Code->Text = L"Postal code : ";
			// 
			// textBox_Str_Numb
			// 
			this->textBox_Str_Numb->Location = System::Drawing::Point(104, 30);
			this->textBox_Str_Numb->Name = L"textBox_Str_Numb";
			this->textBox_Str_Numb->Size = System::Drawing::Size(304, 23);
			this->textBox_Str_Numb->TabIndex = 20;
			// 
			// textBox_Str_Name
			// 
			this->textBox_Str_Name->Location = System::Drawing::Point(104, 65);
			this->textBox_Str_Name->Name = L"textBox_Str_Name";
			this->textBox_Str_Name->Size = System::Drawing::Size(304, 23);
			this->textBox_Str_Name->TabIndex = 19;
			// 
			// textBox_City
			// 
			this->textBox_City->Location = System::Drawing::Point(104, 99);
			this->textBox_City->Name = L"textBox_City";
			this->textBox_City->Size = System::Drawing::Size(304, 23);
			this->textBox_City->TabIndex = 18;
			// 
			// label_City
			// 
			this->label_City->AutoSize = true;
			this->label_City->Location = System::Drawing::Point(4, 99);
			this->label_City->Name = L"label_City";
			this->label_City->Size = System::Drawing::Size(43, 17);
			this->label_City->TabIndex = 8;
			this->label_City->Text = L"City : ";
			// 
			// label_Str_Name
			// 
			this->label_Str_Name->AutoSize = true;
			this->label_Str_Name->Location = System::Drawing::Point(4, 67);
			this->label_Str_Name->Name = L"label_Str_Name";
			this->label_Str_Name->Size = System::Drawing::Size(99, 17);
			this->label_Str_Name->TabIndex = 7;
			this->label_Str_Name->Text = L"Street Name : ";
			// 
			// label_Str_Numb
			// 
			this->label_Str_Numb->AutoSize = true;
			this->label_Str_Numb->Location = System::Drawing::Point(4, 32);
			this->label_Str_Numb->Name = L"label_Str_Numb";
			this->label_Str_Numb->Size = System::Drawing::Size(110, 17);
			this->label_Str_Numb->TabIndex = 6;
			this->label_Str_Numb->Text = L"Street number : ";
			// 
			// label_Date_of_Birth
			// 
			this->label_Date_of_Birth->AutoSize = true;
			this->label_Date_of_Birth->Location = System::Drawing::Point(12, 92);
			this->label_Date_of_Birth->Name = L"label_Date_of_Birth";
			this->label_Date_of_Birth->Size = System::Drawing::Size(99, 17);
			this->label_Date_of_Birth->TabIndex = 2;
			this->label_Date_of_Birth->Text = L"Date of Birth : ";
			// 
			// label_Name
			// 
			this->label_Name->AutoSize = true;
			this->label_Name->Location = System::Drawing::Point(12, 60);
			this->label_Name->Name = L"label_Name";
			this->label_Name->Size = System::Drawing::Size(57, 17);
			this->label_Name->TabIndex = 1;
			this->label_Name->Text = L"Name : ";
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Delete->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Delete->Location = System::Drawing::Point(277, 418);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(256, 50);
			this->Btn_Delete->TabIndex = 36;
			this->Btn_Delete->Text = L"Delete a customer";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &CustomerForm::Btn_Delete_Click);
			// 
			// Btn_Modify
			// 
			this->Btn_Modify->Location = System::Drawing::Point(12, 418);
			this->Btn_Modify->Name = L"Btn_Modify";
			this->Btn_Modify->Size = System::Drawing::Size(256, 50);
			this->Btn_Modify->TabIndex = 35;
			this->Btn_Modify->Text = L"Modify a customer";
			this->Btn_Modify->UseVisualStyleBackColor = true;
			this->Btn_Modify->Click += gcnew System::EventHandler(this, &CustomerForm::Btn_modify_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Show->Location = System::Drawing::Point(277, 363);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(256, 50);
			this->Btn_Show->TabIndex = 34;
			this->Btn_Show->Text = L"Show a customer";
			this->Btn_Show->UseVisualStyleBackColor = true;
			this->Btn_Show->Click += gcnew System::EventHandler(this, &CustomerForm::Btn_Show_Click);
			// 
			// Btn_Record
			// 
			this->Btn_Record->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Record->Location = System::Drawing::Point(12, 363);
			this->Btn_Record->Name = L"Btn_Record";
			this->Btn_Record->Size = System::Drawing::Size(256, 50);
			this->Btn_Record->TabIndex = 33;
			this->Btn_Record->Text = L"Record a customer";
			this->Btn_Record->UseVisualStyleBackColor = true;
			this->Btn_Record->Click += gcnew System::EventHandler(this, &CustomerForm::Btn_record_Click);
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Load->FlatAppearance->BorderColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->FlatAppearance->BorderSize = 0;
			this->Btn_Load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Load->Location = System::Drawing::Point(11, 308);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(522, 50);
			this->Btn_Load->TabIndex = 32;
			this->Btn_Load->Text = L"Load customers";
			this->Btn_Load->UseVisualStyleBackColor = false;
			this->Btn_Load->Click += gcnew System::EventHandler(this, &CustomerForm::Btn_Load_Click);
			// 
			// View_Database
			// 
			this->View_Database->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->View_Database->Location = System::Drawing::Point(12, 107);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(521, 193);
			this->View_Database->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 481);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerForm::button1_Click);
			// 
			// textBox_New_Name
			// 
			this->textBox_New_Name->Location = System::Drawing::Point(112, 121);
			this->textBox_New_Name->Name = L"textBox_New_Name";
			this->textBox_New_Name->Size = System::Drawing::Size(304, 23);
			this->textBox_New_Name->TabIndex = 21;
			// 
			// dateTimePicker_New_Date_of_Birth
			// 
			this->dateTimePicker_New_Date_of_Birth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker_New_Date_of_Birth->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker_New_Date_of_Birth->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_New_Date_of_Birth->Location = System::Drawing::Point(133, 149);
			this->dateTimePicker_New_Date_of_Birth->Name = L"dateTimePicker_New_Date_of_Birth";
			this->dateTimePicker_New_Date_of_Birth->Size = System::Drawing::Size(283, 23);
			this->dateTimePicker_New_Date_of_Birth->TabIndex = 22;
			// 
			// label_New_Name
			// 
			this->label_New_Name->AutoSize = true;
			this->label_New_Name->Location = System::Drawing::Point(12, 127);
			this->label_New_Name->Name = L"label_New_Name";
			this->label_New_Name->Size = System::Drawing::Size(88, 17);
			this->label_New_Name->TabIndex = 23;
			this->label_New_Name->Text = L"New Name : ";
			// 
			// label_New_Date_of_Birth
			// 
			this->label_New_Date_of_Birth->AutoSize = true;
			this->label_New_Date_of_Birth->Location = System::Drawing::Point(5, 149);
			this->label_New_Date_of_Birth->Name = L"label_New_Date_of_Birth";
			this->label_New_Date_of_Birth->Size = System::Drawing::Size(130, 17);
			this->label_New_Date_of_Birth->TabIndex = 24;
			this->label_New_Date_of_Birth->Text = L"New Date of Birth : ";
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(998, 516);
			this->Controls->Add(this->Title_order);
			this->Controls->Add(this->groupBox_Informations);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Modify);
			this->Controls->Add(this->Btn_Show);
			this->Controls->Add(this->Btn_Record);
			this->Controls->Add(this->Btn_Load);
			this->Controls->Add(this->View_Database);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CustomerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &CustomerForm::Customer_Management_Load);
			this->groupBox_Informations->ResumeLayout(false);
			this->groupBox_Informations->PerformLayout();
			this->groupBox_Adress->ResumeLayout(false);
			this->groupBox_Adress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		this->Close();

	}
	private: System::Void Customer_Management_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCustomers = gcnew NS_Comp_Cus::CLCustomers();
	}
	private: System::Void Btn_Load_Click(System::Object^ sender, System::EventArgs^ e) {
		this->View_Database->Refresh();
		this->oDs = this->oCustomers->loadCustomer("Rsl");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl";
	}

	private: System::Void Btn_Show_Click(System::Object^ sender, System::EventArgs^ e) {
		this->View_Database->Refresh();
		this->oDs = this->oCustomers->selectCustomer(this->txtBox_Surname->Text, "Rsl2");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl2";
	}
	private: System::Void Btn_record_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ dateString = System::String::Format("{0:yyyy/MM/dd}", dateTimePicker_Date_of_Birth->Value);
		this->oCustomers->recordCustomer(this->txtBox_Surname->Text, this->txtBox_Name->Text, dateString, this->textBox_Str_Numb->Text, this->textBox_Str_Name->Text, this->textBox_City->Text, this->textBox_Post_Code->Text);
		this->View_Database->Refresh();
		this->oDs = this->oCustomers->selectCustomer(this->txtBox_Surname->Text, "Rsl3");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl3";
	}
	private: System::Void Btn_modify_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ dateString = System::String::Format("{0:yyyy/MM/dd}", dateTimePicker_Date_of_Birth->Value);
		this->oCustomers->modifyCustomer(this->txtBox_Surname->Text, this->txtBox_Name->Text, dateString, this->textBox_New_Name->Text, dateString);
		this->View_Database->Refresh();
		this->oDs = this->oCustomers->selectCustomer(this->txtBox_Surname->Text, "Rsl4");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl4";
	}
	private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ dateString = System::String::Format("{0:yyyy/MM/dd}", dateTimePicker_Date_of_Birth->Value);
		this->oCustomers->deleteCustomer(this->txtBox_Surname->Text, this->txtBox_Name->Text, dateString);
		this->View_Database->Refresh();
		this->oDs = this->oCustomers->selectCustomer(this->txtBox_Surname->Text, "Rsl5");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl5";
	}

	};
}