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
	private: System::Windows::Forms::TextBox^ HT_Price;
















	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Reorder_Threshold;

	private: System::Windows::Forms::Label^ label4;


	private: NS_Comp_Stock::CLStock^ oStock;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::GroupBox^ Group_Infos;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ Article_Reference;


	private: System::Windows::Forms::GroupBox^ Group_prix;








	private: System::Windows::Forms::Label^ Lab_mensPayment;
	private: System::Windows::Forms::Label^ Stock_Quantity;

	private: System::Windows::Forms::Label^ Name_text;

	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::Button^ Delete_inventory;

	private: System::Windows::Forms::Button^ Update_inventory;

	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Create_inventory;

	private: System::Windows::Forms::Button^ Load_employee;

	private: System::Windows::Forms::DataGridView^ View_Database;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ TVA;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ Description;

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
			this->HT_Price = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Reorder_Threshold = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->TVA = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Article_Reference = (gcnew System::Windows::Forms::TextBox());
			this->Group_prix = (gcnew System::Windows::Forms::GroupBox());
			this->Description = (gcnew System::Windows::Forms::RichTextBox());
			this->Lab_mensPayment = (gcnew System::Windows::Forms::Label());
			this->Stock_Quantity = (gcnew System::Windows::Forms::Label());
			this->Name_text = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			this->Delete_inventory = (gcnew System::Windows::Forms::Button());
			this->Update_inventory = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Create_inventory = (gcnew System::Windows::Forms::Button());
			this->Load_employee = (gcnew System::Windows::Forms::Button());
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
			// HT_Price
			// 
			this->HT_Price->Location = System::Drawing::Point(112, 139);
			this->HT_Price->Margin = System::Windows::Forms::Padding(2);
			this->HT_Price->Name = L"HT_Price";
			this->HT_Price->Size = System::Drawing::Size(304, 20);
			this->HT_Price->TabIndex = 9;
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
			// Reorder_Threshold
			// 

			this->Reorder_Threshold->Location = System::Drawing::Point(112, 110);
			this->Reorder_Threshold->Margin = System::Windows::Forms::Padding(2);
			this->Reorder_Threshold->Name = L"Reorder_Threshold";
			this->Reorder_Threshold->Size = System::Drawing::Size(304, 20);
			this->Reorder_Threshold->TabIndex = 7;
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
			this->Title_order->Click += gcnew System::EventHandler(this, &InventoryForm::Title_order_Click);
			// 
			// Group_Infos
			// 

			this->Group_Infos->Controls->Add(this->TVA);
			this->Group_Infos->Controls->Add(this->label12);
			this->Group_Infos->Controls->Add(this->textBox9);
			this->Group_Infos->Controls->Add(this->textBox7);
			this->Group_Infos->Controls->Add(this->Article_Reference);
			this->Group_Infos->Controls->Add(this->Group_prix);
			this->Group_Infos->Controls->Add(this->HT_Price);
			this->Group_Infos->Controls->Add(this->label5);
			this->Group_Infos->Controls->Add(this->Lab_mensPayment);
			this->Group_Infos->Controls->Add(this->Reorder_Threshold);
			this->Group_Infos->Controls->Add(this->Stock_Quantity);
			this->Group_Infos->Controls->Add(this->label4);
			this->Group_Infos->Controls->Add(this->Name_text);
			this->Group_Infos->Controls->Add(this->Lab_ref);
			this->Group_Infos->Location = System::Drawing::Point(830, 165);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Size = System::Drawing::Size(636, 557);
			this->Group_Infos->TabIndex = 29;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Informations";
			// 
			// TVA
			// 
			this->TVA->Location = System::Drawing::Point(112, 167);
			this->TVA->Margin = System::Windows::Forms::Padding(2);
			this->TVA->Name = L"TVA";
			this->TVA->Size = System::Drawing::Size(304, 20);
			this->TVA->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(5, 167);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"TVA :";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(112, 83);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(304, 20);
			this->textBox9->TabIndex = 20;
			// 
			// textBox7

			// 
			this->textBox2->Location = System::Drawing::Point(168, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(454, 26);
			this->textBox2->TabIndex = 18;
			// 
			// Article_Reference
			// 
			this->Article_Reference->Location = System::Drawing::Point(112, 25);
			this->Article_Reference->Margin = System::Windows::Forms::Padding(2);
			this->Article_Reference->Name = L"Article_Reference";
			this->Article_Reference->Size = System::Drawing::Size(304, 20);
			this->Article_Reference->TabIndex = 6;
			// 
			// Group_prix
			// 
			this->Group_prix->Controls->Add(this->Description);
			this->Group_prix->Location = System::Drawing::Point(8, 201);
			this->Group_prix->Margin = System::Windows::Forms::Padding(2);
			this->Group_prix->Name = L"Group_prix";
			this->Group_prix->Size = System::Drawing::Size(618, 237);
			this->Group_prix->TabIndex = 5;
			this->Group_prix->TabStop = false;
			this->Group_prix->Text = L"Description";
			// 
			// Description
			// 
			this->Description->Location = System::Drawing::Point(19, 28);
			this->Description->Margin = System::Windows::Forms::Padding(2);
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(371, 104);
			this->Description->TabIndex = 14;
			this->Description->Text = L"";
			// 
			// Lab_mensPayment
			// 
			this->Lab_mensPayment->AutoSize = true;
			this->Lab_mensPayment->Location = System::Drawing::Point(8, 174);
			this->Lab_mensPayment->Name = L"Lab_mensPayment";
			this->Lab_mensPayment->Size = System::Drawing::Size(0, 20);
			this->Lab_mensPayment->TabIndex = 4;
			// 
			// Stock_Quantity
			// 
			this->Stock_Quantity->AutoSize = true;
			this->Stock_Quantity->Location = System::Drawing::Point(5, 83);
			this->Stock_Quantity->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Stock_Quantity->Name = L"Stock_Quantity";
			this->Stock_Quantity->Size = System::Drawing::Size(86, 13);
			this->Stock_Quantity->TabIndex = 2;
			this->Stock_Quantity->Text = L"Stock Quantity : ";
			// 
			// Name_text
			// 
			this->Name_text->AutoSize = true;
			this->Name_text->Location = System::Drawing::Point(5, 54);
			this->Name_text->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Name_text->Name = L"Name_text";
			this->Name_text->Size = System::Drawing::Size(44, 13);
			this->Name_text->TabIndex = 1;
			this->Name_text->Text = L"Name : ";
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
			// Delete_inventory
			// 
			this->Delete_inventory->BackColor = System::Drawing::Color::LightCoral;
			this->Delete_inventory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete_inventory->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Delete_inventory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_inventory->Location = System::Drawing::Point(277, 418);
			this->Delete_inventory->Margin = System::Windows::Forms::Padding(2);
			this->Delete_inventory->Name = L"Delete_inventory";
			this->Delete_inventory->Size = System::Drawing::Size(256, 50);
			this->Delete_inventory->TabIndex = 28;
			this->Delete_inventory->Text = L"Delete an inventory";
			this->Delete_inventory->UseVisualStyleBackColor = false;
			this->Delete_inventory->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Delete_Click);
			// 
			// Update_inventory
			// 
			this->Update_inventory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Update_inventory->Location = System::Drawing::Point(12, 418);
			this->Update_inventory->Margin = System::Windows::Forms::Padding(2);
			this->Update_inventory->Name = L"Update_inventory";
			this->Update_inventory->Size = System::Drawing::Size(256, 50);
			this->Update_inventory->TabIndex = 27;
			this->Update_inventory->Text = L"Update an inventory";
			this->Update_inventory->UseVisualStyleBackColor = true;
			this->Update_inventory->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Update_Click);
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
			// Create_inventory
			// 
			this->Create_inventory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Create_inventory->Location = System::Drawing::Point(12, 363);
			this->Create_inventory->Margin = System::Windows::Forms::Padding(2);
			this->Create_inventory->Name = L"Create_inventory";
			this->Create_inventory->Size = System::Drawing::Size(256, 50);
			this->Create_inventory->TabIndex = 25;
			this->Create_inventory->Text = L"Create an inventory";
			this->Create_inventory->UseVisualStyleBackColor = true;
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
			this->Load_employee->TabIndex = 24;
			this->Load_employee->Text = L"Load inventory";
			this->Load_employee->UseVisualStyleBackColor = false;
			this->Load_employee->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Load_Click);
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
			this->Controls->Add(this->Delete_inventory);
			this->Controls->Add(this->Update_inventory);
			this->Controls->Add(this->Btn_Show);
			this->Controls->Add(this->Create_inventory);
			this->Controls->Add(this->Load_employee);
			this->Controls->Add(this->View_Database);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"InventoryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EngineX";
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
	private: System::Void DELETE_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->oStock->deleteArticle(this->textBox1->Text, this->textBox2->Text);
	}
private: System::Void UPDATE_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->oStock->updateArticle(this->textBox1->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->richTextBox1->Text);
	}
private: System::Void INSERT_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->oStock->insertArticle(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->richTextBox1->Text);
	}
private: System::Void SHOW_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->dataGridView1->Refresh();
	this->oStock->selectArticle(this->textBox1->Text, "Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";*/
	}
private: System::Void LOAD_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->dataGridView1->Refresh();
	this->oDs = this->oStock->loadArticles("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";*/
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
	//this->oStock->updateArticle(this->textBox1->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->richTextBox1->Text);
}
private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->oStock->deleteArticle(this->textBox1->Text, this->textBox2->Text);
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Title_order_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}