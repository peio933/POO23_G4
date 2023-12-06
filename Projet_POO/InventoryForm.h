#pragma once
#include "CLStock.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Inventory_Management
	/// </summary>
	public ref class InventoryForm : public System::Windows::Forms::Form
	{
	public:
		InventoryForm(void)
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
		~InventoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;















	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;


	private: NS_Comp_Stock::CLStock^ oStock;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::GroupBox^ Group_Infos;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::GroupBox^ Group_prix;








	private: System::Windows::Forms::Label^ Lab_mensPayment;
	private: System::Windows::Forms::Label^ Lab_sending;
	private: System::Windows::Forms::Label^ Lab_delivery;
	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Btn_create;
	private: System::Windows::Forms::Button^ Btn_Load;
	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InventoryForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Group_prix = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Lab_mensPayment = (gcnew System::Windows::Forms::Label());
			this->Lab_sending = (gcnew System::Windows::Forms::Label());
			this->Lab_delivery = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_create = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Group_Infos->SuspendLayout();
			this->Group_prix->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(18, 740);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InventoryForm::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(168, 214);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(454, 26);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"HT Price :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(168, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(454, 26);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Reorder Threshold :";
			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_order->AutoSize = true;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_order->Location = System::Drawing::Point(246, 31);
			this->Title_order->Name = L"Title_order";
			this->Title_order->Size = System::Drawing::Size(985, 104);
			this->Title_order->TabIndex = 30;
			this->Title_order->Text = L"Inventory management";
			this->Title_order->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Group_Infos
			// 
			this->Group_Infos->Controls->Add(this->textBox6);
			this->Group_Infos->Controls->Add(this->label12);
			this->Group_Infos->Controls->Add(this->textBox3);
			this->Group_Infos->Controls->Add(this->textBox2);
			this->Group_Infos->Controls->Add(this->textBox1);
			this->Group_Infos->Controls->Add(this->Group_prix);
			this->Group_Infos->Controls->Add(this->textBox5);
			this->Group_Infos->Controls->Add(this->label5);
			this->Group_Infos->Controls->Add(this->Lab_mensPayment);
			this->Group_Infos->Controls->Add(this->textBox4);
			this->Group_Infos->Controls->Add(this->Lab_sending);
			this->Group_Infos->Controls->Add(this->label4);
			this->Group_Infos->Controls->Add(this->Lab_delivery);
			this->Group_Infos->Controls->Add(this->Lab_ref);
			this->Group_Infos->Location = System::Drawing::Point(830, 165);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Size = System::Drawing::Size(636, 557);
			this->Group_Infos->TabIndex = 29;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Informations";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(168, 257);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(454, 26);
			this->textBox6->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(8, 257);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 20);
			this->label12->TabIndex = 14;
			this->label12->Text = L"TVA :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(454, 26);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(454, 26);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(454, 26);
			this->textBox1->TabIndex = 6;
			// 
			// Group_prix
			// 
			this->Group_prix->Controls->Add(this->richTextBox1);
			this->Group_prix->Location = System::Drawing::Point(12, 309);
			this->Group_prix->Name = L"Group_prix";
			this->Group_prix->Size = System::Drawing::Size(618, 237);
			this->Group_prix->TabIndex = 5;
			this->Group_prix->TabStop = false;
			this->Group_prix->Text = L"Description";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(28, 43);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(554, 158);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// Lab_mensPayment
			// 
			this->Lab_mensPayment->AutoSize = true;
			this->Lab_mensPayment->Location = System::Drawing::Point(8, 174);
			this->Lab_mensPayment->Name = L"Lab_mensPayment";
			this->Lab_mensPayment->Size = System::Drawing::Size(0, 20);
			this->Lab_mensPayment->TabIndex = 4;
			// 
			// Lab_sending
			// 
			this->Lab_sending->AutoSize = true;
			this->Lab_sending->Location = System::Drawing::Point(8, 128);
			this->Lab_sending->Name = L"Lab_sending";
			this->Lab_sending->Size = System::Drawing::Size(125, 20);
			this->Lab_sending->TabIndex = 2;
			this->Lab_sending->Text = L"Stock Quantity : ";
			// 
			// Lab_delivery
			// 
			this->Lab_delivery->AutoSize = true;
			this->Lab_delivery->Location = System::Drawing::Point(8, 83);
			this->Lab_delivery->Name = L"Lab_delivery";
			this->Lab_delivery->Size = System::Drawing::Size(63, 20);
			this->Lab_delivery->TabIndex = 1;
			this->Lab_delivery->Text = L"Name : ";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(8, 45);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(144, 20);
			this->Lab_ref->TabIndex = 0;
			this->Lab_ref->Text = L"Article Reference : ";
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Delete->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Delete->Location = System::Drawing::Point(416, 643);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(384, 77);
			this->Btn_Delete->TabIndex = 28;
			this->Btn_Delete->Text = L"Delete an article";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Update->Location = System::Drawing::Point(18, 643);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(384, 77);
			this->Btn_Update->TabIndex = 27;
			this->Btn_Update->Text = L"Update an article";
			this->Btn_Update->UseVisualStyleBackColor = true;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Update_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Show->Location = System::Drawing::Point(416, 558);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(384, 77);
			this->Btn_Show->TabIndex = 26;
			this->Btn_Show->Text = L"Show an article";
			this->Btn_Show->UseVisualStyleBackColor = true;
			this->Btn_Show->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Show_Click);
			// 
			// Btn_create
			// 
			this->Btn_create->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_create->Location = System::Drawing::Point(18, 558);
			this->Btn_create->Name = L"Btn_create";
			this->Btn_create->Size = System::Drawing::Size(384, 77);
			this->Btn_create->TabIndex = 25;
			this->Btn_create->Text = L"Create an article";
			this->Btn_create->UseVisualStyleBackColor = true;
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Load->FlatAppearance->BorderColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->FlatAppearance->BorderSize = 0;
			this->Btn_Load->FlatAppearance->MouseDownBackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->FlatAppearance->MouseOverBackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Load->Location = System::Drawing::Point(16, 474);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(783, 77);
			this->Btn_Load->TabIndex = 24;
			this->Btn_Load->Text = L"Load articles";
			this->Btn_Load->UseVisualStyleBackColor = false;
			this->Btn_Load->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Load_Click);
			// 
			// View_Database
			// 
			this->View_Database->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->View_Database->Location = System::Drawing::Point(18, 165);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(782, 297);
			this->View_Database->TabIndex = 23;
			// 
			// InventoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1497, 794);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"InventoryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &InventoryForm::Inventory_Management_Load);
			this->Group_Infos->ResumeLayout(false);
			this->Group_Infos->PerformLayout();
			this->Group_prix->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		this->Close();
	}
	private: System::Void Inventory_Management_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStock = gcnew NS_Comp_Stock::CLStock();
	}
private: System::Void Btn_Load_Click(System::Object^ sender, System::EventArgs^ e) {
	this->View_Database->Refresh();
	this->oDs = this->oStock->loadArticles("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->View_Database->Refresh();
	this->oStock->selectArticle(this->textBox1->Text, "Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oStock->updateArticle(this->textBox1->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->richTextBox1->Text);
}
private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oStock->deleteArticle(this->textBox1->Text, this->textBox2->Text);
}
};
}