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
	private: System::Windows::Forms::TextBox^ txtBox_HTPrice;
	private: System::Windows::Forms::Label^ Label_HTPrice;

















	private: System::Windows::Forms::TextBox^ txtBox_Threshold;
	private: System::Windows::Forms::Label^ Label_Threshold;




	private: NS_Comp_Stock::CLStock^ oStock;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ Title_inventory;

	private: System::Windows::Forms::GroupBox^ Group_Infos;
	private: System::Windows::Forms::TextBox^ txtBox_Name;

	private: System::Windows::Forms::TextBox^ txtBox_Ref;
	private: System::Windows::Forms::GroupBox^ Group_Description;
















	private: System::Windows::Forms::Label^ Lab_mensPayment;
	private: System::Windows::Forms::Label^ Lab_StockQuantity;

	private: System::Windows::Forms::Label^ Lab_Name;

	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Btn_create;
	private: System::Windows::Forms::Button^ Btn_Load;
	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::TextBox^ txtBox_StockQuantity;
	private: System::Windows::Forms::TextBox^ txtBox_TVA;
	private: System::Windows::Forms::Label^ Label_TVA;





	private: System::Windows::Forms::RichTextBox^ txtBox_Description;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InventoryForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtBox_HTPrice = (gcnew System::Windows::Forms::TextBox());
			this->Label_HTPrice = (gcnew System::Windows::Forms::Label());
			this->txtBox_Threshold = (gcnew System::Windows::Forms::TextBox());
			this->Label_Threshold = (gcnew System::Windows::Forms::Label());
			this->Title_inventory = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_TVA = (gcnew System::Windows::Forms::TextBox());
			this->Label_TVA = (gcnew System::Windows::Forms::Label());
			this->txtBox_StockQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Ref = (gcnew System::Windows::Forms::TextBox());
			this->Group_Description = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_Description = (gcnew System::Windows::Forms::RichTextBox());
			this->Lab_mensPayment = (gcnew System::Windows::Forms::Label());
			this->Lab_StockQuantity = (gcnew System::Windows::Forms::Label());
			this->Lab_Name = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_create = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Group_Infos->SuspendLayout();
			this->Group_Description->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(12, 481);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InventoryForm::button1_Click);
			// 
			// txtBox_HTPrice
			// 
			this->txtBox_HTPrice->Location = System::Drawing::Point(112, 143);
			this->txtBox_HTPrice->Name = L"txtBox_HTPrice";
			this->txtBox_HTPrice->Size = System::Drawing::Size(304, 20);
			this->txtBox_HTPrice->TabIndex = 9;
			this->txtBox_HTPrice->MaxLength = 14;
			// 
			// Label_HTPrice
			// 
			this->Label_HTPrice->AutoSize = true;
			this->Label_HTPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_HTPrice->Location = System::Drawing::Point(5, 146);
			this->Label_HTPrice->Name = L"Label_HTPrice";
			this->Label_HTPrice->Size = System::Drawing::Size(55, 13);
			this->Label_HTPrice->TabIndex = 8;
			this->Label_HTPrice->Text = L"HT Price :";
			// 
			// txtBox_Threshold
			// 
			this->txtBox_Threshold->Location = System::Drawing::Point(112, 113);
			this->txtBox_Threshold->Name = L"txtBox_Threshold";
			this->txtBox_Threshold->Size = System::Drawing::Size(304, 20);
			this->txtBox_Threshold->TabIndex = 7;
			this->txtBox_Threshold->MaxLength = 9;
			// 
			// Label_Threshold
			// 
			this->Label_Threshold->AutoSize = true;
			this->Label_Threshold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Threshold->Location = System::Drawing::Point(5, 116);
			this->Label_Threshold->Name = L"Label_Threshold";
			this->Label_Threshold->Size = System::Drawing::Size(101, 13);
			this->Label_Threshold->TabIndex = 6;
			this->Label_Threshold->Text = L"Reorder Threshold :";
			// 
			// Title_inventory
			// 
			this->Title_inventory->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_inventory->AutoSize = true;
			this->Title_inventory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_inventory->Location = System::Drawing::Point(171, 20);
			this->Title_inventory->Name = L"Title_inventory";
			this->Title_inventory->Size = System::Drawing::Size(655, 70);
			this->Title_inventory->TabIndex = 30;
			this->Title_inventory->Text = L"Inventory management";
			this->Title_inventory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Group_Infos
			// 
			this->Group_Infos->Controls->Add(this->txtBox_TVA);
			this->Group_Infos->Controls->Add(this->Label_TVA);
			this->Group_Infos->Controls->Add(this->txtBox_StockQuantity);
			this->Group_Infos->Controls->Add(this->txtBox_Name);
			this->Group_Infos->Controls->Add(this->txtBox_Ref);
			this->Group_Infos->Controls->Add(this->Group_Description);
			this->Group_Infos->Controls->Add(this->txtBox_HTPrice);
			this->Group_Infos->Controls->Add(this->Label_HTPrice);
			this->Group_Infos->Controls->Add(this->Lab_mensPayment);
			this->Group_Infos->Controls->Add(this->txtBox_Threshold);
			this->Group_Infos->Controls->Add(this->Lab_StockQuantity);
			this->Group_Infos->Controls->Add(this->Label_Threshold);
			this->Group_Infos->Controls->Add(this->Lab_Name);
			this->Group_Infos->Controls->Add(this->Lab_ref);
			this->Group_Infos->Location = System::Drawing::Point(553, 107);
			this->Group_Infos->Margin = System::Windows::Forms::Padding(2);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Padding = System::Windows::Forms::Padding(2);
			this->Group_Infos->Size = System::Drawing::Size(424, 362);
			this->Group_Infos->TabIndex = 29;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Informations";
			// 
			// txtBox_TVA
			// 
			this->txtBox_TVA->Location = System::Drawing::Point(112, 173);
			this->txtBox_TVA->Name = L"txtBox_TVA";
			this->txtBox_TVA->Size = System::Drawing::Size(304, 20);
			this->txtBox_TVA->TabIndex = 15;
			this->txtBox_TVA->MaxLength = 4;
			// 
			// Label_TVA
			// 
			this->Label_TVA->AutoSize = true;
			this->Label_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_TVA->Location = System::Drawing::Point(5, 176);
			this->Label_TVA->Name = L"Label_TVA";
			this->Label_TVA->Size = System::Drawing::Size(34, 13);
			this->Label_TVA->TabIndex = 14;
			this->Label_TVA->Text = L"TVA :";
			// 
			// txtBox_StockQuantity
			// 
			this->txtBox_StockQuantity->Location = System::Drawing::Point(112, 83);
			this->txtBox_StockQuantity->Name = L"txtBox_StockQuantity";
			this->txtBox_StockQuantity->Size = System::Drawing::Size(304, 20);
			this->txtBox_StockQuantity->TabIndex = 20;
			this->txtBox_StockQuantity->MaxLength = 9;
			// 
			// txtBox_Name
			// 
			this->txtBox_Name->Location = System::Drawing::Point(112, 54);
			this->txtBox_Name->Name = L"txtBox_Name";
			this->txtBox_Name->Size = System::Drawing::Size(304, 20);
			this->txtBox_Name->TabIndex = 18;
			this->txtBox_Name->MaxLength = 50;
			// 
			// txtBox_Ref
			// 
			this->txtBox_Ref->Location = System::Drawing::Point(112, 25);
			this->txtBox_Ref->Name = L"txtBox_Ref";
			this->txtBox_Ref->Size = System::Drawing::Size(304, 20);
			this->txtBox_Ref->TabIndex = 6;
			this->txtBox_Ref->MaxLength = 60;
			// 
			// Group_Description
			// 
			this->Group_Description->Controls->Add(this->txtBox_Description);
			this->Group_Description->Location = System::Drawing::Point(8, 201);
			this->Group_Description->Name = L"Group_Description";
			this->Group_Description->Size = System::Drawing::Size(412, 154);
			this->Group_Description->TabIndex = 5;
			this->Group_Description->TabStop = false;
			this->Group_Description->Text = L"Description";
			// 
			// txtBox_Description
			// 
			this->txtBox_Description->Location = System::Drawing::Point(17, 27);
			this->txtBox_Description->Name = L"txtBox_Description";
			this->txtBox_Description->Size = System::Drawing::Size(378, 108);
			this->txtBox_Description->TabIndex = 14;
			this->txtBox_Description->Text = L"";
			this->txtBox_Description->MaxLength = 100;
			// 
			// Lab_mensPayment
			// 
			this->Lab_mensPayment->AutoSize = true;
			this->Lab_mensPayment->Location = System::Drawing::Point(5, 113);
			this->Lab_mensPayment->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_mensPayment->Name = L"Lab_mensPayment";
			this->Lab_mensPayment->Size = System::Drawing::Size(0, 13);
			this->Lab_mensPayment->TabIndex = 4;
			// 
			// Lab_StockQuantity
			// 
			this->Lab_StockQuantity->AutoSize = true;
			this->Lab_StockQuantity->Location = System::Drawing::Point(5, 86);
			this->Lab_StockQuantity->Name = L"Lab_StockQuantity";
			this->Lab_StockQuantity->Size = System::Drawing::Size(86, 13);
			this->Lab_StockQuantity->TabIndex = 2;
			this->Lab_StockQuantity->Text = L"Stock Quantity : ";
			// 
			// Lab_Name
			// 
			this->Lab_Name->AutoSize = true;
			this->Lab_Name->Location = System::Drawing::Point(5, 57);
			this->Lab_Name->Name = L"Lab_Name";
			this->Lab_Name->Size = System::Drawing::Size(44, 13);
			this->Lab_Name->TabIndex = 1;
			this->Lab_Name->Text = L"Name : ";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(5, 28);
			this->Lab_ref->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(98, 13);
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
			this->Btn_Delete->Location = System::Drawing::Point(277, 418);
			this->Btn_Delete->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(256, 50);
			this->Btn_Delete->TabIndex = 28;
			this->Btn_Delete->Text = L"Delete an article";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Update->Location = System::Drawing::Point(12, 418);
			this->Btn_Update->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(256, 50);
			this->Btn_Update->TabIndex = 27;
			this->Btn_Update->Text = L"Update an article";
			this->Btn_Update->UseVisualStyleBackColor = true;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Update_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Show->Location = System::Drawing::Point(277, 363);
			this->Btn_Show->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(256, 50);
			this->Btn_Show->TabIndex = 26;
			this->Btn_Show->Text = L"Show an article";
			this->Btn_Show->UseVisualStyleBackColor = true;
			this->Btn_Show->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_Show_Click);
			// 
			// Btn_create
			// 
			this->Btn_create->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_create->Location = System::Drawing::Point(12, 363);
			this->Btn_create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_create->Name = L"Btn_create";
			this->Btn_create->Size = System::Drawing::Size(256, 50);
			this->Btn_create->TabIndex = 25;
			this->Btn_create->Text = L"Create an article";
			this->Btn_create->UseVisualStyleBackColor = true;
			this->Btn_create->Click += gcnew System::EventHandler(this, &InventoryForm::Btn_create_Click);
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
			this->Btn_Load->Location = System::Drawing::Point(11, 308);
			this->Btn_Load->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(522, 50);
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
			this->View_Database->Location = System::Drawing::Point(12, 107);
			this->View_Database->Margin = System::Windows::Forms::Padding(2);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(521, 193);
			this->View_Database->TabIndex = 23;
			// 
			// InventoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(998, 516);
			this->Controls->Add(this->Title_inventory);
			this->Controls->Add(this->Group_Infos);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Update);
			this->Controls->Add(this->Btn_Show);
			this->Controls->Add(this->Btn_create);
			this->Controls->Add(this->Btn_Load);
			this->Controls->Add(this->View_Database);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InventoryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &InventoryForm::Inventory_Management_Load);
			this->Group_Infos->ResumeLayout(false);
			this->Group_Infos->PerformLayout();
			this->Group_Description->ResumeLayout(false);
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
		if (!String::IsNullOrWhiteSpace(this->txtBox_Ref->Text)) {
			this->View_Database->Refresh();
			this->oDs = this->oStock->selectArticle(this->txtBox_Ref->Text, "Rsl");
			this->View_Database->DataSource = this->oDs;
			this->View_Database->DataMember = "Rsl";
		}
		else {
			MessageBox::Show("Please enter the reference of the article you want to display!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Boolean UpdateTextBoxAreFilled() {
		return !String::IsNullOrWhiteSpace(txtBox_Ref->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_StockQuantity->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_Threshold->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_HTPrice->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_TVA->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_Description->Text);
	}
    private: System::Boolean CreateTextBoxAreFilled() {
		return !String::IsNullOrWhiteSpace(txtBox_Ref->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_Name->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_StockQuantity->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_Threshold->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_HTPrice->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_TVA->Text) &&
			!String::IsNullOrWhiteSpace(txtBox_Description->Text);
	}
	private: System::Boolean TextBoxAreCorrectNumbers(){
		int intStockQuantity, intThreshold;
		float floatHTPrice, floatTVA;
		return Int32::TryParse(this->txtBox_StockQuantity->Text, intStockQuantity) &&
			intStockQuantity>0 &&
			Int32::TryParse(this->txtBox_Threshold->Text, intThreshold) &&
			intThreshold>0 &&
			Single::TryParse(this->txtBox_HTPrice->Text->Replace(".", ","), floatHTPrice) &&
			floatHTPrice>0 &&
			Single::TryParse(this->txtBox_TVA->Text->Replace(".", ","), floatTVA) &&
			10>floatTVA>0;
	}
	private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		if (UpdateTextBoxAreFilled()) {
			if (TextBoxAreCorrectNumbers()) {
				this->oStock->updateArticle(this->txtBox_Ref->Text, this->txtBox_StockQuantity->Text, this->txtBox_Threshold->Text, this->txtBox_HTPrice->Text->Replace(",", "."), this->txtBox_TVA->Text->Replace(",", "."), this->txtBox_Description->Text);
				this->View_Database->Refresh();
				this->oDs = this->oStock->selectArticle(this->txtBox_Ref->Text, "Rsl");
				this->View_Database->DataSource = this->oDs;
				this->View_Database->DataMember = "Rsl";
			}
			else {
				MessageBox::Show("Please enter correct numbers in these fields: \n \n - Stock Quantity \n - Reorder Threshold \n - HT Price \n - TVA", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Please enter all the informations of the article you want to update! \n \n - Article Reference \n - Stock Quantity \n - Reorder Threshold \n - HT Price \n - TVA \n - Description", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrWhiteSpace(this->txtBox_Ref->Text) && !String::IsNullOrWhiteSpace(this->txtBox_Ref->Name)) {
			this->View_Database->Refresh();
			this->oDs = this->oStock->deleteArticle(this->txtBox_Ref->Text, this->txtBox_Name->Text, "Rsl1");
			this->View_Database->DataSource = this->oDs;
			this->View_Database->DataMember = "Rsl1";
		}
		else {
			MessageBox::Show("Please enter all the informations of the article you want to delete! \n \n - Article Reference \n - Name", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Btn_create_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CreateTextBoxAreFilled()) {
			if (TextBoxAreCorrectNumbers()) {
				this->oStock->insertArticle(this->txtBox_Ref->Text, this->txtBox_Name->Text, this->txtBox_StockQuantity->Text, this->txtBox_Threshold->Text, this->txtBox_HTPrice->Text->Replace(",", "."), this->txtBox_TVA->Text->Replace(",", "."), this->txtBox_Description->Text);
				this->View_Database->Refresh();
				this->oDs = this->oStock->selectArticle(this->txtBox_Ref->Text, "Rsl");
				this->View_Database->DataSource = this->oDs;
				this->View_Database->DataMember = "Rsl";
			}
			else {
				MessageBox::Show("Please enter correct numbers in these fields: \n \n - Stock Quantity \n - Reorder Threshold \n - HT Price \n - TVA", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Please enter all the informations of the article you want to create! \n \n - Article Reference \n - Name \n - Stock Quantity \n - Reorder Threshold \n - HT Price \n - TVA \n - Description", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
};
}