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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ SHOW;
	private: System::Windows::Forms::Button^ INSERT;
	private: System::Windows::Forms::Button^ UPDATE;



	private: System::Windows::Forms::Button^ DELETE;

	private: System::Windows::Forms::Button^ LOAD;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label7;
	private: NS_Comp_Stock::CLStock^ oStock;
	private: System::Data::DataSet^ oDs;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SHOW = (gcnew System::Windows::Forms::Button());
			this->INSERT = (gcnew System::Windows::Forms::Button());
			this->UPDATE = (gcnew System::Windows::Forms::Button());
			this->DELETE = (gcnew System::Windows::Forms::Button());
			this->LOAD = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(18, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(710, 401);
			this->dataGridView1->TabIndex = 2;
			// 
			// SHOW
			// 
			this->SHOW->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SHOW->Location = System::Drawing::Point(18, 524);
			this->SHOW->Name = L"SHOW";
			this->SHOW->Size = System::Drawing::Size(347, 84);
			this->SHOW->TabIndex = 3;
			this->SHOW->Text = L"SHOW";
			this->SHOW->UseVisualStyleBackColor = true;
			this->SHOW->Click += gcnew System::EventHandler(this, &InventoryForm::SHOW_Click);
			// 
			// INSERT
			// 
			this->INSERT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->INSERT->Location = System::Drawing::Point(371, 524);
			this->INSERT->Name = L"INSERT";
			this->INSERT->Size = System::Drawing::Size(357, 84);
			this->INSERT->TabIndex = 4;
			this->INSERT->Text = L"INSERT";
			this->INSERT->UseVisualStyleBackColor = true;
			this->INSERT->Click += gcnew System::EventHandler(this, &InventoryForm::INSERT_Click);
			// 
			// UPDATE
			// 
			this->UPDATE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UPDATE->Location = System::Drawing::Point(18, 626);
			this->UPDATE->Name = L"UPDATE";
			this->UPDATE->Size = System::Drawing::Size(347, 84);
			this->UPDATE->TabIndex = 5;
			this->UPDATE->Text = L"UPDATE";
			this->UPDATE->UseVisualStyleBackColor = true;
			this->UPDATE->Click += gcnew System::EventHandler(this, &InventoryForm::UPDATE_Click);
			// 
			// DELETE
			// 
			this->DELETE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DELETE->Location = System::Drawing::Point(371, 626);
			this->DELETE->Name = L"DELETE";
			this->DELETE->Size = System::Drawing::Size(357, 84);
			this->DELETE->TabIndex = 6;
			this->DELETE->Text = L"DELETE";
			this->DELETE->UseVisualStyleBackColor = true;
			this->DELETE->Click += gcnew System::EventHandler(this, &InventoryForm::DELETE_Click);
			// 
			// LOAD
			// 
			this->LOAD->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOAD->Location = System::Drawing::Point(18, 419);
			this->LOAD->Name = L"LOAD";
			this->LOAD->Size = System::Drawing::Size(710, 84);
			this->LOAD->TabIndex = 7;
			this->LOAD->Text = L"LOAD";
			this->LOAD->UseVisualStyleBackColor = true;
			this->LOAD->Click += gcnew System::EventHandler(this, &InventoryForm::LOAD_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(775, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(710, 401);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Informations";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(183, 259);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(494, 90);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &InventoryForm::richTextBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(31, 262);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Description :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(183, 223);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(494, 26);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"TVA :";
			this->label6->Click += gcnew System::EventHandler(this, &InventoryForm::label6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(183, 187);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(494, 26);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"HT Price :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(183, 150);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(494, 26);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Reorder Threshold :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Stock Quantity :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(183, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(494, 26);
			this->textBox3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(494, 26);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name :";
			this->label2->Click += gcnew System::EventHandler(this, &InventoryForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Article Reference :";
			this->label1->Click += gcnew System::EventHandler(this, &InventoryForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(494, 26);
			this->textBox1->TabIndex = 0;
			// 
			// InventoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1497, 794);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->LOAD);
			this->Controls->Add(this->DELETE);
			this->Controls->Add(this->UPDATE);
			this->Controls->Add(this->INSERT);
			this->Controls->Add(this->SHOW);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"InventoryForm";
			this->Text = L"Inventory Management";
			this->Load += gcnew System::EventHandler(this, &InventoryForm::Inventory_Management_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

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
		this->oStock->deleteArticle(this->textBox1->Text, this->textBox2->Text);
	}
private: System::Void UPDATE_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oStock->updateArticle(this->textBox1->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->richTextBox1->Text);
	}
private: System::Void INSERT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oStock->insertArticle(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->richTextBox1->Text);
	}
private: System::Void SHOW_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oStock->selectArticle(this->textBox1->Text, "Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
	}
private: System::Void LOAD_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oStock->loadArticles("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}