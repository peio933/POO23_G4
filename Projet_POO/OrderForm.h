#pragma once
#include "CLOrders.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Order_Management
	/// </summary>
	public ref class OrderForm : public System::Windows::Forms::Form
	{
	public:
		OrderForm(void)
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
		~OrderForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ Group_prix;
	private: System::Windows::Forms::GroupBox^ Group_Infos;

	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::Label^ Lab_mensPayment;
	private: System::Windows::Forms::Label^ Lab_payment;
	private: System::Windows::Forms::Label^ Lab_delivery;
	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::Label^ Lab_sending;
	private: System::Windows::Forms::Label^ Lab_TTCprice;
	private: System::Windows::Forms::Label^ Lab_TVA;
	private: System::Windows::Forms::Label^ Lab_HTprice;

	private: System::Windows::Forms::Button^ Btn_GoBack;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Btn_create;
	private: System::Windows::Forms::Button^ Btn_Load;
	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::ListBox^ List_mensPayment;
	private: System::Windows::Forms::DateTimePicker^ Date_payment;
	private: System::Windows::Forms::DateTimePicker^ Date_Sending;
	private: System::Windows::Forms::DateTimePicker^ Date_Delivery;

	private: System::Windows::Forms::TextBox^ TxtBox_HTprice;
	private: System::Windows::Forms::TextBox^ TxtBox_TVA;
	private: System::Windows::Forms::TextBox^ TxtBox_TTC;
	private: System::Windows::Forms::TextBox^ TxtBox_ref;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderForm::typeid));
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->Lab_mensPayment = (gcnew System::Windows::Forms::Label());
			this->Lab_payment = (gcnew System::Windows::Forms::Label());
			this->Lab_delivery = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			this->Lab_sending = (gcnew System::Windows::Forms::Label());
			this->Lab_TTCprice = (gcnew System::Windows::Forms::Label());
			this->Lab_TVA = (gcnew System::Windows::Forms::Label());
			this->Lab_HTprice = (gcnew System::Windows::Forms::Label());
			this->Group_prix = (gcnew System::Windows::Forms::GroupBox());
			this->TxtBox_HTprice = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_TVA = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_TTC = (gcnew System::Windows::Forms::TextBox());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->List_mensPayment = (gcnew System::Windows::Forms::ListBox());
			this->Date_payment = (gcnew System::Windows::Forms::DateTimePicker());
			this->Date_Sending = (gcnew System::Windows::Forms::DateTimePicker());
			this->Date_Delivery = (gcnew System::Windows::Forms::DateTimePicker());
			this->TxtBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->Btn_GoBack = (gcnew System::Windows::Forms::Button());
			this->Group_prix->SuspendLayout();
			this->Group_Infos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->SuspendLayout();

//___________________________________________________________________________________
//___________________________________________________________________________________

			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_order->AutoSize = true;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_order->Location = System::Drawing::Point(205, 20);
			this->Title_order->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Title_order->Name = L"Title_order";
			this->Title_order->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Title_order->Size = System::Drawing::Size(589, 70);
			this->Title_order->TabIndex = 14;
			this->Title_order->Text = L"Orders management";
			this->Title_order->Click += gcnew System::EventHandler(this, &OrderForm::label9_Click);
			// 
			// Lab_mensPayment
			// 
			this->Lab_mensPayment->AutoSize = true;
			this->Lab_mensPayment->Location = System::Drawing::Point(5, 138);
			this->Lab_mensPayment->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_mensPayment->Name = L"Lab_mensPayment";
			this->Lab_mensPayment->Size = System::Drawing::Size(103, 13);
			this->Lab_mensPayment->TabIndex = 4;
			this->Lab_mensPayment->Text = L"Means of payment : ";
			// 
			// Lab_payment
			// 
			this->Lab_payment->AutoSize = true;
			this->Lab_payment->Location = System::Drawing::Point(5, 110);
			this->Lab_payment->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_payment->Name = L"Lab_payment";
			this->Lab_payment->Size = System::Drawing::Size(81, 13);
			this->Lab_payment->TabIndex = 3;
			this->Lab_payment->Text = L"Payment date : ";
			// 
			// Lab_delivery
			// 
			this->Lab_delivery->AutoSize = true;
			this->Lab_delivery->Location = System::Drawing::Point(5, 54);
			this->Lab_delivery->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_delivery->Name = L"Lab_delivery";
			this->Lab_delivery->Size = System::Drawing::Size(78, 13);
			this->Lab_delivery->TabIndex = 1;
			this->Lab_delivery->Text = L"Delivery date : ";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(5, 29);
			this->Lab_ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(90, 13);
			this->Lab_ref->TabIndex = 0;
			this->Lab_ref->Text = L"Order reference : ";
			// 
			// Lab_sending
			// 
			this->Lab_sending->AutoSize = true;
			this->Lab_sending->Location = System::Drawing::Point(5, 83);
			this->Lab_sending->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_sending->Name = L"Lab_sending";
			this->Lab_sending->Size = System::Drawing::Size(79, 13);
			this->Lab_sending->TabIndex = 2;
			this->Lab_sending->Text = L"Sending date : ";
			// 
			// Lab_TTCprice
			// 
			this->Lab_TTCprice->AutoSize = true;
			this->Lab_TTCprice->Location = System::Drawing::Point(4, 99);
			this->Lab_TTCprice->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_TTCprice->Name = L"Lab_TTCprice";
			this->Lab_TTCprice->Size = System::Drawing::Size(98, 13);
			this->Lab_TTCprice->TabIndex = 8;
			this->Lab_TTCprice->Text = L"All taxes included : ";
			this->Lab_TTCprice->Click += gcnew System::EventHandler(this, &OrderForm::label8_Click);
			// 
			// Lab_TVA
			// 
			this->Lab_TVA->AutoSize = true;
			this->Lab_TVA->Location = System::Drawing::Point(4, 67);
			this->Lab_TVA->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_TVA->Name = L"Lab_TVA";
			this->Lab_TVA->Size = System::Drawing::Size(37, 13);
			this->Lab_TVA->TabIndex = 7;
			this->Lab_TVA->Text = L"VAT : ";
			// 
			// Lab_HTprice
			// 
			this->Lab_HTprice->AutoSize = true;
			this->Lab_HTprice->Location = System::Drawing::Point(4, 32);
			this->Lab_HTprice->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_HTprice->Name = L"Lab_HTprice";
			this->Lab_HTprice->Size = System::Drawing::Size(94, 13);
			this->Lab_HTprice->TabIndex = 6;
			this->Lab_HTprice->Text = L"Price without tax : ";
			// 
			// Group_prix
			// 
			this->Group_prix->Controls->Add(this->TxtBox_HTprice);
			this->Group_prix->Controls->Add(this->TxtBox_TVA);
			this->Group_prix->Controls->Add(this->TxtBox_TTC);
			this->Group_prix->Controls->Add(this->Lab_TTCprice);
			this->Group_prix->Controls->Add(this->Lab_TVA);
			this->Group_prix->Controls->Add(this->Lab_HTprice);
			this->Group_prix->Location = System::Drawing::Point(8, 201);
			this->Group_prix->Margin = System::Windows::Forms::Padding(2);
			this->Group_prix->Name = L"Group_prix";
			this->Group_prix->Padding = System::Windows::Forms::Padding(2);
			this->Group_prix->Size = System::Drawing::Size(412, 154);
			this->Group_prix->TabIndex = 5;
			this->Group_prix->TabStop = false;
			this->Group_prix->Text = L"Prices";
			// 
			// TxtBox_HTprice
			// 
			this->TxtBox_HTprice->Location = System::Drawing::Point(104, 30);
			this->TxtBox_HTprice->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_HTprice->Name = L"TxtBox_HTprice";
			this->TxtBox_HTprice->Size = System::Drawing::Size(304, 20);
			this->TxtBox_HTprice->TabIndex = 20;
			// 
			// TxtBox_TVA
			// 
			this->TxtBox_TVA->Location = System::Drawing::Point(104, 65);
			this->TxtBox_TVA->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_TVA->Name = L"TxtBox_TVA";
			this->TxtBox_TVA->Size = System::Drawing::Size(304, 20);
			this->TxtBox_TVA->TabIndex = 19;
			// 
			// TxtBox_TTC
			// 
			this->TxtBox_TTC->Location = System::Drawing::Point(106, 99);
			this->TxtBox_TTC->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_TTC->Name = L"TxtBox_TTC";
			this->TxtBox_TTC->Size = System::Drawing::Size(302, 20);
			this->TxtBox_TTC->TabIndex = 18;
			// 
			// Group_Infos
			// 
			this->Group_Infos->Controls->Add(this->List_mensPayment);
			this->Group_Infos->Controls->Add(this->Date_payment);
			this->Group_Infos->Controls->Add(this->Date_Sending);
			this->Group_Infos->Controls->Add(this->Date_Delivery);
			this->Group_Infos->Controls->Add(this->TxtBox_ref);
			this->Group_Infos->Controls->Add(this->Group_prix);
			this->Group_Infos->Controls->Add(this->Lab_mensPayment);
			this->Group_Infos->Controls->Add(this->Lab_payment);
			this->Group_Infos->Controls->Add(this->Lab_sending);
			this->Group_Infos->Controls->Add(this->Lab_delivery);
			this->Group_Infos->Controls->Add(this->Lab_ref);
			this->Group_Infos->Location = System::Drawing::Point(553, 107);
			this->Group_Infos->Margin = System::Windows::Forms::Padding(2);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Padding = System::Windows::Forms::Padding(2);
			this->Group_Infos->Size = System::Drawing::Size(424, 362);
			this->Group_Infos->TabIndex = 13;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Informations";
			// 
			// List_mensPayment
			// 
			this->List_mensPayment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->List_mensPayment->FormattingEnabled = true;
			this->List_mensPayment->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Carte bancaire", L"Chèque", L"Virement" });
			this->List_mensPayment->Location = System::Drawing::Point(112, 137);
			this->List_mensPayment->Margin = System::Windows::Forms::Padding(2);
			this->List_mensPayment->Name = L"List_mensPayment";
			this->List_mensPayment->Size = System::Drawing::Size(304, 43);
			this->List_mensPayment->TabIndex = 15;
			// 
			// Date_payment
			// 
			this->Date_payment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Date_payment->Location = System::Drawing::Point(112, 110);
			this->Date_payment->Margin = System::Windows::Forms::Padding(2);
			this->Date_payment->Name = L"Date_payment";
			this->Date_payment->Size = System::Drawing::Size(304, 20);
			this->Date_payment->TabIndex = 17;
			// 
			// Date_Sending
			// 
			this->Date_Sending->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Date_Sending->Location = System::Drawing::Point(112, 83);
			this->Date_Sending->Margin = System::Windows::Forms::Padding(2);
			this->Date_Sending->Name = L"Date_Sending";
			this->Date_Sending->Size = System::Drawing::Size(304, 20);
			this->Date_Sending->TabIndex = 16;
			// 
			// Date_Delivery
			// 
			this->Date_Delivery->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Date_Delivery->Location = System::Drawing::Point(112, 54);
			this->Date_Delivery->Margin = System::Windows::Forms::Padding(2);
			this->Date_Delivery->Name = L"Date_Delivery";
			this->Date_Delivery->Size = System::Drawing::Size(304, 20);
			this->Date_Delivery->TabIndex = 15;
			// 
			// TxtBox_ref
			// 
			this->TxtBox_ref->Location = System::Drawing::Point(112, 25);
			this->TxtBox_ref->Margin = System::Windows::Forms::Padding(2);
			this->TxtBox_ref->Name = L"TxtBox_ref";
			this->TxtBox_ref->Size = System::Drawing::Size(304, 20);
			this->TxtBox_ref->TabIndex = 6;
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
			this->View_Database->TabIndex = 7;
			this->View_Database->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderForm::View_Database_CellContentClick);
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Delete->FlatAppearance->BorderSize = 0;
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Delete->Location = System::Drawing::Point(277, 418);
			this->Btn_Delete->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(256, 50);
			this->Btn_Delete->TabIndex = 12;
			this->Btn_Delete->Text = L"Delete an article";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Update->Location = System::Drawing::Point(12, 418);
			this->Btn_Update->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(256, 50);
			this->Btn_Update->TabIndex = 11;
			this->Btn_Update->Text = L"Update an article";
			this->Btn_Update->UseVisualStyleBackColor = true;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Update_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Show->Location = System::Drawing::Point(277, 363);
			this->Btn_Show->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(256, 50);
			this->Btn_Show->TabIndex = 10;
			this->Btn_Show->Text = L"Show an article";
			this->Btn_Show->UseVisualStyleBackColor = true;
			this->Btn_Show->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Show_Click);
			// 
			// Btn_Create
			// 
			this->Btn_Create->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Create->Location = System::Drawing::Point(12, 363);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(256, 50);
			this->Btn_Create->TabIndex = 9;
			this->Btn_Create->Text = L"Create an article";
			this->Btn_Create->UseVisualStyleBackColor = true;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &OrderForm::Btn_create_Click);
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Load->FlatAppearance->BorderSize = 0;
			this->Btn_Load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Load->Location = System::Drawing::Point(12, 308);
			this->Btn_Load->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(521, 50);
			this->Btn_Load->TabIndex = 8;
			this->Btn_Load->Text = L"Load articles";
			this->Btn_Load->UseVisualStyleBackColor = false;
			this->Btn_Load->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Load_Click);
			// 
			// Btn_GoBack
			// 
			this->Btn_GoBack->Location = System::Drawing::Point(12, 481);
			this->Btn_GoBack->Name = L"Btn_GoBack";
			this->Btn_GoBack->Size = System::Drawing::Size(75, 23);
			this->Btn_GoBack->TabIndex = 1;
			this->Btn_GoBack->Text = L"<<";
			this->Btn_GoBack->UseVisualStyleBackColor = true;
			this->Btn_GoBack->Click += gcnew System::EventHandler(this, &OrderForm::button1_Click);
			// 
			// OrderForm
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
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Btn_Load);
			this->Controls->Add(this->View_Database);
			this->Controls->Add(this->Btn_GoBack);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"OrderForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &OrderForm::Order_Management_Load);
			this->Group_prix->ResumeLayout(false);
			this->Group_prix->PerformLayout();
			this->Group_Infos->ResumeLayout(false);
			this->Group_Infos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->Close();
	}
	private: System::Void Order_Management_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oOrder = gcnew NS_Comp_Order::CLOrders();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Group_Infos_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Btn_Load_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->View_Database->Refresh();
	this->oDs = this->oOrders->loadOrders("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}

private: System::Void Btn_create_Click(System::Object^ sender, System::EventArgs^ e) 
{

}

private: System::Void Btn_Show_Click(System::Object^ sender, System::EventArgs^ e) 
{
 	this->View_Database->Refresh();
	this->oOrders->selectOrders(this->TxtBox_ref->Text, "Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}

private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e) 
{

}

private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) 
{

}


private: System::Void View_Database_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}