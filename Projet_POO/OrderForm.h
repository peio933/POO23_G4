#pragma once
#include "CLOrders.h"
#include "CLStock.h"
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
	private: NS_Comp_Orders::CLOrders^ oOrders;
	private: NS_Comp_Stock::CLStock^ oStock;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::GroupBox^ Group_Infos;
	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::Label^ Lab_delivery;
	private: System::Windows::Forms::Label^ Lab_ref;
	private: System::Windows::Forms::Button^ Btn_GoBack;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Show;
	private: System::Windows::Forms::Button^ Btn_Create;
	private: System::Windows::Forms::Button^ Btn_Load;
	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::TextBox^ TxtBox_ref;
	private: System::Windows::Forms::TextBox^ txtBox_Surname;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TextBox^ txtBox_Name;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtBox_Quantity;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DataGridView^ View_Database1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Panel^ panel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderForm::typeid));
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->Lab_delivery = (gcnew System::Windows::Forms::Label());
			this->Lab_ref = (gcnew System::Windows::Forms::Label());
			this->Group_Infos = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBox_Surname = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TxtBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Show = (gcnew System::Windows::Forms::Button());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->Btn_Load = (gcnew System::Windows::Forms::Button());
			this->Btn_GoBack = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_Quantity = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->View_Database1 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Group_Infos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_order->Location = System::Drawing::Point(521, 31);
			this->Title_order->Name = L"Title_order";
			this->Title_order->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Title_order->Size = System::Drawing::Size(888, 104);
			this->Title_order->TabIndex = 14;
			this->Title_order->Text = L"Orders management";
			// 
			// Lab_delivery
			// 
			this->Lab_delivery->AutoSize = true;
			this->Lab_delivery->Location = System::Drawing::Point(8, 117);
			this->Lab_delivery->Name = L"Lab_delivery";
			this->Lab_delivery->Size = System::Drawing::Size(155, 20);
			this->Lab_delivery->TabIndex = 1;
			this->Lab_delivery->Text = L"Surname Customer :";
			// 
			// Lab_ref
			// 
			this->Lab_ref->AutoSize = true;
			this->Lab_ref->Location = System::Drawing::Point(8, 80);
			this->Lab_ref->Name = L"Lab_ref";
			this->Lab_ref->Size = System::Drawing::Size(132, 20);
			this->Lab_ref->TabIndex = 0;
			this->Lab_ref->Text = L"Name Customer :";
			// 
			// Group_Infos
			// 
			this->Group_Infos->BackColor = System::Drawing::Color::LightSkyBlue;
			this->Group_Infos->Controls->Add(this->label3);
			this->Group_Infos->Controls->Add(this->txtBox_Name);
			this->Group_Infos->Controls->Add(this->label5);
			this->Group_Infos->Controls->Add(this->label2);
			this->Group_Infos->Controls->Add(this->label1);
			this->Group_Infos->Controls->Add(this->txtBox_Surname);
			this->Group_Infos->Controls->Add(this->dateTimePicker2);
			this->Group_Infos->Controls->Add(this->listBox1);
			this->Group_Infos->Controls->Add(this->dateTimePicker1);
			this->Group_Infos->Controls->Add(this->TxtBox_ref);
			this->Group_Infos->Controls->Add(this->Lab_delivery);
			this->Group_Infos->Controls->Add(this->Lab_ref);
			this->Group_Infos->Location = System::Drawing::Point(805, 165);
			this->Group_Infos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Group_Infos->Size = System::Drawing::Size(425, 278);
			this->Group_Infos->TabIndex = 13;
			this->Group_Infos->TabStop = false;
			this->Group_Infos->Text = L"Orders Informations";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Delivery Date :";
			// 
			// txtBox_Name
			// 
			this->txtBox_Name->Location = System::Drawing::Point(168, 77);
			this->txtBox_Name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBox_Name->Name = L"txtBox_Name";
			this->txtBox_Name->Size = System::Drawing::Size(244, 26);
			this->txtBox_Name->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Order reference : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Send Date :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Means of Payment :";
			// 
			// txtBox_Surname
			// 
			this->txtBox_Surname->Location = System::Drawing::Point(168, 114);
			this->txtBox_Surname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBox_Surname->Name = L"txtBox_Surname";
			this->txtBox_Surname->Size = System::Drawing::Size(244, 26);
			this->txtBox_Surname->TabIndex = 18;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(168, 236);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(244, 26);
			this->dateTimePicker2->TabIndex = 16;
			// 
			// listBox1
			// 
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Carte bancaire", L"Chèque", L"Virement" });
			this->listBox1->Location = System::Drawing::Point(168, 155);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(244, 24);
			this->listBox1->TabIndex = 15;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(168, 196);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(244, 26);
			this->dateTimePicker1->TabIndex = 17;
			// 
			// TxtBox_ref
			// 
			this->TxtBox_ref->Location = System::Drawing::Point(168, 42);
			this->TxtBox_ref->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TxtBox_ref->Name = L"TxtBox_ref";
			this->TxtBox_ref->Size = System::Drawing::Size(244, 26);
			this->TxtBox_ref->TabIndex = 6;
			// 
			// View_Database
			// 
			this->View_Database->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->View_Database->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->View_Database->Location = System::Drawing::Point(18, 165);
			this->View_Database->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(782, 416);
			this->View_Database->TabIndex = 7;
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Delete->FlatAppearance->BorderSize = 0;
			this->Btn_Delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Delete->Location = System::Drawing::Point(415, 749);
			this->Btn_Delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(384, 78);
			this->Btn_Delete->TabIndex = 12;
			this->Btn_Delete->Text = L"Delete an order";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Update->Location = System::Drawing::Point(415, 667);
			this->Btn_Update->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(384, 78);
			this->Btn_Update->TabIndex = 11;
			this->Btn_Update->Text = L"Update an order";
			this->Btn_Update->UseVisualStyleBackColor = true;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Update_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Show->Location = System::Drawing::Point(17, 749);
			this->Btn_Show->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Show->Name = L"Btn_Show";
			this->Btn_Show->Size = System::Drawing::Size(385, 78);
			this->Btn_Show->TabIndex = 10;
			this->Btn_Show->Text = L"Show an order";
			this->Btn_Show->UseVisualStyleBackColor = true;
			this->Btn_Show->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Show_Click);
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Create->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Create->FlatAppearance->BorderColor = System::Drawing::Color::YellowGreen;
			this->Btn_Create->FlatAppearance->BorderSize = 0;
			this->Btn_Create->FlatAppearance->MouseDownBackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Create->FlatAppearance->MouseOverBackColor = System::Drawing::Color::YellowGreen;
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Btn_Create->Location = System::Drawing::Point(415, 585);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(384, 78);
			this->Btn_Create->TabIndex = 9;
			this->Btn_Create->Text = L"Create an order";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &OrderForm::Btn_create_Click);
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::White;
			this->Btn_Load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Load->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Btn_Load->FlatAppearance->BorderSize = 0;
			this->Btn_Load->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Btn_Load->Location = System::Drawing::Point(18, 585);
			this->Btn_Load->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->Size = System::Drawing::Size(384, 78);
			this->Btn_Load->TabIndex = 8;
			this->Btn_Load->Text = L"Load orders";
			this->Btn_Load->UseVisualStyleBackColor = false;
			this->Btn_Load->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Load_Click);
			// 
			// Btn_GoBack
			// 
			this->Btn_GoBack->Location = System::Drawing::Point(18, 890);
			this->Btn_GoBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Btn_GoBack->Name = L"Btn_GoBack";
			this->Btn_GoBack->Size = System::Drawing::Size(112, 35);
			this->Btn_GoBack->TabIndex = 1;
			this->Btn_GoBack->Text = L"<<";
			this->Btn_GoBack->UseVisualStyleBackColor = true;
			this->Btn_GoBack->Click += gcnew System::EventHandler(this, &OrderForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->groupBox1->Controls->Add(this->txtBox_Quantity);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(806, 449);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(425, 123);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Article";
			// 
			// txtBox_Quantity
			// 
			this->txtBox_Quantity->Location = System::Drawing::Point(168, 70);
			this->txtBox_Quantity->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBox_Quantity->Name = L"txtBox_Quantity";
			this->txtBox_Quantity->Size = System::Drawing::Size(244, 26);
			this->txtBox_Quantity->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Quantity";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 33);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 26);
			this->textBox3->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Article reference :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(805, 585);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(425, 78);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Add article in this order";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCoral;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(805, 667);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(425, 78);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Delete article in this order";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::YellowGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::InactiveBorder;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(18, 667);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(384, 78);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Load catalog";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &OrderForm::Btn_LoadCatalog_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(467, 706);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Prix TTC :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(467, 674);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 20);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Total TVA :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(467, 642);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 20);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Total HT :";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(561, 700);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(106, 26);
			this->textBox10->TabIndex = 30;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(561, 668);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(106, 26);
			this->textBox9->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(561, 636);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(106, 26);
			this->textBox8->TabIndex = 28;
			// 
			// View_Database1
			// 
			this->View_Database1->AllowUserToOrderColumns = true;
			this->View_Database1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database1->Location = System::Drawing::Point(14, 379);
			this->View_Database1->Name = L"View_Database1";
			this->View_Database1->RowHeadersWidth = 62;
			this->View_Database1->RowTemplate->Height = 28;
			this->View_Database1->Size = System::Drawing::Size(653, 251);
			this->View_Database1->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(417, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(175, 20);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Référence commande :";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(6, 104);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(236, 19);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"Numéro TVA FRXXXXXXXXXX";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(6, 154);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(190, 19);
			this->textBox7->TabIndex = 7;
			this->textBox7->Text = L"Téléphone : 0619491694";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(6, 29);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(72, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"EngineX";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(6, 129);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(149, 26);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"info@enginex.fr";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(6, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(149, 19);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"1 Rue du Transistor";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(6, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(149, 19);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"75000 Paris, France";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Location = System::Drawing::Point(421, 148);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(246, 26);
			this->textBox14->TabIndex = 23;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::RoyalBlue;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Location = System::Drawing::Point(6, 79);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(236, 26);
			this->textBox16->TabIndex = 4;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Location = System::Drawing::Point(6, 54);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(234, 26);
			this->textBox15->TabIndex = 3;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Location = System::Drawing::Point(6, 29);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(236, 26);
			this->textBox13->TabIndex = 2;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Location = System::Drawing::Point(6, 104);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(236, 26);
			this->textBox11->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Location = System::Drawing::Point(421, 180);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(246, 182);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Acheteur";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Location = System::Drawing::Point(14, 180);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(246, 182);
			this->groupBox3->TabIndex = 24;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vendeur";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->View_Database1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Location = System::Drawing::Point(1236, 165);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(686, 760);
			this->panel1->TabIndex = 34;
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->Btn_Update);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Title_order);
			this->Controls->Add(this->Group_Infos);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Show);
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Btn_Load);
			this->Controls->Add(this->View_Database);
			this->Controls->Add(this->Btn_GoBack);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"OrderForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &OrderForm::Order_Management_Load);
			this->Group_Infos->ResumeLayout(false);
			this->Group_Infos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->Close();
	}
	private: System::Void Order_Management_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oOrders = gcnew NS_Comp_Orders::CLOrders();
		this->oStock = gcnew NS_Comp_Stock::CLStock();
	}
	private: System::Void Btn_Load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->View_Database->Refresh();
		this->oDs = this->oOrders->loadOrders("Rsl0");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl0";
	}

	private: System::Void Btn_create_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!String::IsNullOrWhiteSpace(this->txtBox_Name->Text) && !String::IsNullOrWhiteSpace(this->txtBox_Surname->Text) && !String::IsNullOrWhiteSpace(this->listBox1->Text)) {
			this->oOrders->insertOrders(this->txtBox_Name->Text, this->txtBox_Surname->Text, this->listBox1->Text);
		}
		else {
			MessageBox::Show("Please enter the following information ! \n - Name Customer \n - Surname Customer \n - Means of Payment", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}

	private: System::Void Btn_Show_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!String::IsNullOrWhiteSpace(this->TxtBox_ref->Text)) {
			this->textBox14->Text = this->TxtBox_ref->Text;
			this->textBox13->Text = this->oOrders->selectSurname(this->TxtBox_ref->Text);
			this->textBox15->Text = this->oOrders->selectName(this->TxtBox_ref->Text);
			this->textBox16->Text = this->oOrders->selectAdress(this->TxtBox_ref->Text);
			this->textBox11->Text = this->oOrders->selectCity(this->TxtBox_ref->Text);
			this->View_Database1->Refresh();
			this->oDs = this->oOrders->selectArticles(this->TxtBox_ref->Text, "Rsl1");
			this->View_Database1->DataSource = this->oDs;
			this->View_Database1->DataMember = "Rsl1";
			this->textBox8->Text = this->oOrders->selectHT(this->TxtBox_ref->Text);
			this->textBox9->Text = this->oOrders->selectTVA(this->TxtBox_ref->Text);
			this->textBox10->Text = this->oOrders->selectTTC(this->TxtBox_ref->Text);
		}
		else {
			MessageBox::Show("Please enter the order reference!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Btn_Update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!String::IsNullOrWhiteSpace(this->TxtBox_ref->Text)) {
			System::String^ SendDate = System::String::Format("{0:yyyy/MM/dd}", dateTimePicker1->Value);
			System::String^ DeliveryDate = System::String::Format("{0:yyyy/MM/dd}", dateTimePicker2->Value);
			this->oOrders->updateOrders(this->TxtBox_ref->Text, SendDate, DeliveryDate);
		}
		else {
			MessageBox::Show("Please enter the order reference!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		
	}
	private: System::Void Btn_Delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!String::IsNullOrWhiteSpace(this->TxtBox_ref->Text)) {
			this->oOrders->deleteOrders(this->TxtBox_ref->Text);
		}
		else {
			MessageBox::Show("Please enter the order reference!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Btn_LoadCatalog_Click(System::Object^ sender, System::EventArgs^ e) {
		this->View_Database->Refresh();
		this->oDs = this->oStock->loadArticles("Rsl");
		this->View_Database->DataSource = this->oDs;
		this->View_Database->DataMember = "Rsl";
	}
};
}