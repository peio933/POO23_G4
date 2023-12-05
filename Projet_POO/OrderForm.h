#pragma once

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ TxtBox_ref;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::GroupBox^ Group_prix;
	private: System::Windows::Forms::Label^ Lab_mensPayment;


	private: System::Windows::Forms::Label^ Lab_payment;

	private: System::Windows::Forms::Label^ Lab_delivery;

	private: System::Windows::Forms::Label^ Lab_ref;

	private: System::Windows::Forms::GroupBox^ Group_Infos;
	private: System::Windows::Forms::Label^ Lab_sending;


	private: System::Windows::Forms::Button^ Btn_Delete;

	private: System::Windows::Forms::Button^ Btn_Update;

	private: System::Windows::Forms::Button^ Btn_Show;

	private: System::Windows::Forms::Button^ Btn_create;

	private: System::Windows::Forms::Button^ Btn_Load;

	private: System::Windows::Forms::DataGridView^ View_Database;

	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::ListBox^ List_mensPayment;

	private: System::Windows::Forms::DateTimePicker^ Date_payment;

	private: System::Windows::Forms::DateTimePicker^ Date_Sending;

	private: System::Windows::Forms::DateTimePicker^ Date_Delivery;
	private: System::Windows::Forms::TextBox^ TxtBox_HTprice;
	private: System::Windows::Forms::TextBox^ TxtBox_TVA;
	private: System::Windows::Forms::TextBox^ TxtBox_TTC;
































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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TxtBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Group_prix = (gcnew System::Windows::Forms::GroupBox());
			this->Lab_mensPayment = (gcnew System::Windows::Forms::Label());
			this->Lab_payment = (gcnew System::Windows::Forms::Label());
			this->Lab_delivery = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->Lab_sending = (gcnew System::Windows::Forms::Label());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_create = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->Date_Delivery = (gcnew System::Windows::Forms::DateTimePicker());
			this->Date_Sending = (gcnew System::Windows::Forms::DateTimePicker());
			this->Date_payment = (gcnew System::Windows::Forms::DateTimePicker());
			this->List_mensPayment = (gcnew System::Windows::Forms::ListBox());
			this->TxtBox_TTC = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_TVA = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_HTprice = (gcnew System::Windows::Forms::TextBox());
			this->Group_prix->SuspendLayout();
			this->Group_Infos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 592);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OrderForm::button1_Click);
			// 
			// TxtBox_ref
			// 
			this->TxtBox_ref->Location = System::Drawing::Point(149, 31);
			this->TxtBox_ref->Name = L"TxtBox_ref";
			this->TxtBox_ref->Size = System::Drawing::Size(404, 22);
			this->TxtBox_ref->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"All taxes included : ";
			this->label8->Click += gcnew System::EventHandler(this, &OrderForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"VAT : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Price without tax : ";
			// 
			// Group_prix
			// 
			this->Group_prix->Controls->Add(this->TxtBox_HTprice);
			this->Group_prix->Controls->Add(this->TxtBox_TVA);
			this->Group_prix->Controls->Add(this->TxtBox_TTC);
			this->Group_prix->Controls->Add(this->label8);
			this->Group_prix->Controls->Add(this->label7);
			this->Group_prix->Controls->Add(this->label6);
			this->Group_prix->Location = System::Drawing::Point(10, 247);
			this->Group_prix->Name = L"Group_prix";
			this->Group_prix->Size = System::Drawing::Size(549, 189);
			this->Group_prix->TabIndex = 5;
			this->Group_prix->TabStop = false;
			this->Group_prix->Text = L"Prices";
			// 
			// Lab_mensPayment
			// 
			this->Lab_mensPayment->AutoSize = true;
			this->Lab_mensPayment->Location = System::Drawing::Point(7, 170);
			this->Lab_mensPayment->Name = L"Lab_mensPayment";
			this->Lab_mensPayment->Size = System::Drawing::Size(136, 17);
			this->Lab_mensPayment->TabIndex = 4;
			this->Lab_mensPayment->Text = L"Means of payment : ";
			// 
			// Lab_payment
			// 
			this->Lab_payment->AutoSize = true;
			this->Lab_payment->Location = System::Drawing::Point(7, 135);
			this->Lab_payment->Name = L"Lab_payment";
			this->Lab_payment->Size = System::Drawing::Size(107, 17);
			this->Lab_payment->TabIndex = 3;
			this->Lab_payment->Text = L"Payment date : ";
			// 
			// Lab_delivery
			// 
			this->Lab_delivery->AutoSize = true;
			this->Lab_delivery->Location = System::Drawing::Point(7, 67);
			this->Lab_delivery->Name = L"Lab_delivery";
			this->Lab_delivery->Size = System::Drawing::Size(103, 17);
			this->Lab_delivery->TabIndex = 1;
			this->Lab_delivery->Text = L"Delivery date : ";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(7, 36);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(122, 17);
			this->Lab_ref->TabIndex = 0;
			this->Lab_ref->Text = L"Order reference : ";
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
			this->Group_Infos->Location = System::Drawing::Point(737, 132);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Size = System::Drawing::Size(565, 445);
			this->Group_Infos->TabIndex = 13;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Informations";
			// 
			// Lab_sending
			// 
			this->Lab_sending->AutoSize = true;
			this->Lab_sending->Location = System::Drawing::Point(7, 102);
			this->Lab_sending->Name = L"Lab_sending";
			this->Lab_sending->Size = System::Drawing::Size(104, 17);
			this->Lab_sending->TabIndex = 2;
			this->Lab_sending->Text = L"Sending date : ";
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Location = System::Drawing::Point(369, 515);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(342, 62);
			this->Btn_Delete->TabIndex = 12;
			this->Btn_Delete->Text = L"Delete an article";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			// 
			// Btn_Update
			// 
			this->Btn_Update->Location = System::Drawing::Point(16, 515);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(342, 62);
			this->Btn_Update->TabIndex = 11;
			this->Btn_Update->Text = L"Update an article";
			this->Btn_Update->UseVisualStyleBackColor = true;
			// 
			// Btn_Show
			// 
			this->Btn_Show->Location = System::Drawing::Point(369, 447);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(342, 62);
			this->Btn_Show->TabIndex = 10;
			this->Btn_Show->Text = L"Show an article";
			this->Btn_Show->UseVisualStyleBackColor = true;
			// 
			// Btn_create
			// 
			this->Btn_create->Location = System::Drawing::Point(16, 447);
			this->Btn_create->Name = L"Btn_create";
			this->Btn_create->Size = System::Drawing::Size(342, 62);
			this->Btn_create->TabIndex = 9;
			this->Btn_create->Text = L"Create an article";
			this->Btn_create->UseVisualStyleBackColor = true;
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->Location = System::Drawing::Point(16, 379);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(695, 62);
			this->Btn_Load->TabIndex = 8;
			this->Btn_Load->Text = L"Load articles";
			this->Btn_Load->UseVisualStyleBackColor = false;
			// 
			// View_Database
			// 
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Location = System::Drawing::Point(16, 132);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(695, 238);
			this->View_Database->TabIndex = 7;
			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_order->AutoSize = true;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Kanit Medium", 45.6F));
			this->Title_order->Location = System::Drawing::Point(286, 9);
			this->Title_order->Name = L"Title_order";
			this->Title_order->Size = System::Drawing::Size(758, 114);
			this->Title_order->TabIndex = 14;
			this->Title_order->Text = L"Orders management";
			this->Title_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Title_order->Click += gcnew System::EventHandler(this, &OrderForm::label9_Click);
			// 
			// Date_Delivery
			// 
			this->Date_Delivery->Location = System::Drawing::Point(149, 67);
			this->Date_Delivery->Name = L"Date_Delivery";
			this->Date_Delivery->Size = System::Drawing::Size(404, 22);
			this->Date_Delivery->TabIndex = 15;
			// 
			// Date_Sending
			// 
			this->Date_Sending->Location = System::Drawing::Point(149, 102);
			this->Date_Sending->Name = L"Date_Sending";
			this->Date_Sending->Size = System::Drawing::Size(404, 22);
			this->Date_Sending->TabIndex = 16;
			// 
			// Date_payment
			// 
			this->Date_payment->Location = System::Drawing::Point(149, 135);
			this->Date_payment->Name = L"Date_payment";
			this->Date_payment->Size = System::Drawing::Size(404, 22);
			this->Date_payment->TabIndex = 17;
			// 
			// List_mensPayment
			// 
			this->List_mensPayment->FormattingEnabled = true;
			this->List_mensPayment->ItemHeight = 16;
			this->List_mensPayment->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Carte bancaire", L"Ch�que", L"Virement" });
			this->List_mensPayment->Location = System::Drawing::Point(149, 169);
			this->List_mensPayment->Name = L"List_mensPayment";
			this->List_mensPayment->Size = System::Drawing::Size(404, 52);
			this->List_mensPayment->TabIndex = 15;
			// 
			// TxtBox_TTC
			// 
			this->TxtBox_TTC->Location = System::Drawing::Point(141, 122);
			this->TxtBox_TTC->Name = L"TxtBox_TTC";
			this->TxtBox_TTC->Size = System::Drawing::Size(402, 22);
			this->TxtBox_TTC->TabIndex = 18;
			// 
			// TxtBox_TVA
			// 
			this->TxtBox_TVA->Location = System::Drawing::Point(139, 80);
			this->TxtBox_TVA->Name = L"TxtBox_TVA";
			this->TxtBox_TVA->Size = System::Drawing::Size(404, 22);
			this->TxtBox_TVA->TabIndex = 19;
			// 
			// TxtBox_HTprice
			// 
			this->TxtBox_HTprice->Location = System::Drawing::Point(139, 37);
			this->TxtBox_HTprice->Name = L"TxtBox_HTprice";
			this->TxtBox_HTprice->Size = System::Drawing::Size(404, 22);
			this->TxtBox_HTprice->TabIndex = 20;
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1331, 635);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"OrderForm";
			this->Text = L"Order Management ";
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
};
}