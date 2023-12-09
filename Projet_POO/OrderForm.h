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
			resources->ApplyResources(this->Title_order, L"Title_order");
			this->Title_order->Name = L"Title_order";
			// 
			// Lab_delivery
			// 
			resources->ApplyResources(this->Lab_delivery, L"Lab_delivery");
			this->Lab_delivery->Name = L"Lab_delivery";
			// 
			// Lab_ref
			// 
			resources->ApplyResources(this->Lab_ref, L"Lab_ref");
			this->Lab_ref->Name = L"Lab_ref";
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
			resources->ApplyResources(this->Group_Infos, L"Group_Infos");
			this->Group_Infos->Name = L"Group_Infos";
			this->Group_Infos->TabStop = false;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// txtBox_Name
			// 
			resources->ApplyResources(this->txtBox_Name, L"txtBox_Name");
			this->txtBox_Name->Name = L"txtBox_Name";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// txtBox_Surname
			// 
			resources->ApplyResources(this->txtBox_Surname, L"txtBox_Surname");
			this->txtBox_Surname->Name = L"txtBox_Surname";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->dateTimePicker2, L"dateTimePicker2");
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Name = L"dateTimePicker2";
			// 
			// listBox1
			// 
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				resources->GetString(L"listBox1.Items"), resources->GetString(L"listBox1.Items1"),
					resources->GetString(L"listBox1.Items2"), resources->GetString(L"listBox1.Items3")
			});
			resources->ApplyResources(this->listBox1, L"listBox1");
			this->listBox1->Name = L"listBox1";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// TxtBox_ref
			// 
			resources->ApplyResources(this->TxtBox_ref, L"TxtBox_ref");
			this->TxtBox_ref->Name = L"TxtBox_ref";
			// 
			// View_Database
			// 
			this->View_Database->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->View_Database->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->View_Database, L"View_Database");
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowTemplate->Height = 24;
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::LightCoral;
			this->Btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Delete->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->Btn_Delete, L"Btn_Delete");
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			this->Btn_Delete->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Delete_Click);
			// 
			// Btn_Update
			// 
			this->Btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->Btn_Update, L"Btn_Update");
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->UseVisualStyleBackColor = true;
			this->Btn_Update->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Update_Click);
			// 
			// Btn_Show
			// 
			this->Btn_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->Btn_Show, L"Btn_Show");
			this->Btn_Show->Name = L"Btn_Show";
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
			resources->ApplyResources(this->Btn_Create, L"Btn_Create");
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &OrderForm::Btn_create_Click);
			// 
			// Btn_Load
			// 
			this->Btn_Load->BackColor = System::Drawing::Color::White;
			this->Btn_Load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Load->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Btn_Load->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->Btn_Load, L"Btn_Load");
			this->Btn_Load->Name = L"Btn_Load";
			this->Btn_Load->UseVisualStyleBackColor = false;
			this->Btn_Load->Click += gcnew System::EventHandler(this, &OrderForm::Btn_Load_Click);
			// 
			// Btn_GoBack
			// 
			resources->ApplyResources(this->Btn_GoBack, L"Btn_GoBack");
			this->Btn_GoBack->Name = L"Btn_GoBack";
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
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// txtBox_Quantity
			// 
			resources->ApplyResources(this->txtBox_Quantity, L"txtBox_Quantity");
			this->txtBox_Quantity->Name = L"txtBox_Quantity";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCoral;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::YellowGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::InactiveBorder;
			this->button3->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &OrderForm::Btn_LoadCatalog_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox10, L"textBox10");
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox9, L"textBox9");
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox8, L"textBox8");
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			// 
			// View_Database1
			// 
			this->View_Database1->AllowUserToOrderColumns = true;
			this->View_Database1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->View_Database1, L"View_Database1");
			this->View_Database1->Name = L"View_Database1";
			this->View_Database1->RowTemplate->Height = 28;
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox7, L"textBox7");
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox14, L"textBox14");
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::RoyalBlue;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox16, L"textBox16");
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox15, L"textBox15");
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox13, L"textBox13");
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox11, L"textBox11");
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox16);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
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
			resources->ApplyResources(this->groupBox3, L"groupBox3");
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->TabStop = false;
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
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// OrderForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
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
			this->MaximizeBox = false;
			this->Name = L"OrderForm";
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