#pragma once
#include "CLStats.h"
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Statistics_Management
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
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
		~StatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Stats::CLStats^ oStats;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ Tab;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ Title_order;
	private: System::Windows::Forms::Button^ Btn_AverageCart;
	private: System::Windows::Forms::Label^ Titre_Simulate;








	private: System::Windows::Forms::Button^ Btn_CommercialValue;
	private: System::Windows::Forms::GroupBox^ Group_Turnover;


	private: System::Windows::Forms::Label^ Lab_Mounth;
	private: System::Windows::Forms::Label^ Lab_Years;




	private: System::Windows::Forms::Button^ Btn_MonthlyTurnover;

	private: System::Windows::Forms::Button^ Btn_PurchasingValue;


	private: System::Windows::Forms::Button^ Btn_LeastItems;

	private: System::Windows::Forms::Button^ Btn_BestItems;
	private: System::Windows::Forms::Button^ Btn_TotCustomer;


	private: System::Windows::Forms::Button^ Btn_Seuil;

	private: System::Windows::Forms::DataGridView^ View_Database;
	private: System::Windows::Forms::DataGridView^ Dataview;

	private: System::Windows::Forms::GroupBox^ Group_discount;
	private: System::Windows::Forms::RadioButton^ RB_TD2;


	private: System::Windows::Forms::RadioButton^ RB_TD1;

	private: System::Windows::Forms::GroupBox^ Group_Unknown;
	private: System::Windows::Forms::RadioButton^ RB_UM3;


	private: System::Windows::Forms::RadioButton^ RB_UM2;

	private: System::Windows::Forms::RadioButton^ RB_UM1;

	private: System::Windows::Forms::GroupBox^ Group_VAT;
	private: System::Windows::Forms::RadioButton^ RB_VAT3;


	private: System::Windows::Forms::RadioButton^ RB_VAT2;

	private: System::Windows::Forms::RadioButton^ RB_VAT1;

	private: System::Windows::Forms::Button^ Btn_simulate;
	private: System::Windows::Forms::GroupBox^ Group_margin;
	private: System::Windows::Forms::RadioButton^ RB_CM3;



	private: System::Windows::Forms::RadioButton^ RB_CM2;

	private: System::Windows::Forms::RadioButton^ RB_CM1;

	private: System::Windows::Forms::ListBox^ ListBox_Mounth;
	private: System::Windows::Forms::TextBox^ TxtBox_Years;

































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StatisticsForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Tab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Btn_CommercialValue = (gcnew System::Windows::Forms::Button());
			this->Group_Turnover = (gcnew System::Windows::Forms::GroupBox());
			this->ListBox_Mounth = (gcnew System::Windows::Forms::ListBox());
			this->TxtBox_Years = (gcnew System::Windows::Forms::TextBox());
			this->Lab_Mounth = (gcnew System::Windows::Forms::Label());
			this->Lab_Years = (gcnew System::Windows::Forms::Label());
			this->Btn_MonthlyTurnover = (gcnew System::Windows::Forms::Button());
			this->Btn_PurchasingValue = (gcnew System::Windows::Forms::Button());
			this->Btn_LeastItems = (gcnew System::Windows::Forms::Button());
			this->Btn_BestItems = (gcnew System::Windows::Forms::Button());
			this->Btn_TotCustomer = (gcnew System::Windows::Forms::Button());
			this->Btn_Seuil = (gcnew System::Windows::Forms::Button());
			this->View_Database = (gcnew System::Windows::Forms::DataGridView());
			this->Btn_AverageCart = (gcnew System::Windows::Forms::Button());
			this->Title_order = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Dataview = (gcnew System::Windows::Forms::DataGridView());
			this->Group_discount = (gcnew System::Windows::Forms::GroupBox());
			this->RB_TD2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_TD1 = (gcnew System::Windows::Forms::RadioButton());
			this->Group_Unknown = (gcnew System::Windows::Forms::GroupBox());
			this->RB_UM3 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_UM2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_UM1 = (gcnew System::Windows::Forms::RadioButton());
			this->Group_VAT = (gcnew System::Windows::Forms::GroupBox());
			this->RB_VAT3 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_VAT2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_VAT1 = (gcnew System::Windows::Forms::RadioButton());
			this->Btn_simulate = (gcnew System::Windows::Forms::Button());
			this->Group_margin = (gcnew System::Windows::Forms::GroupBox());
			this->RB_CM3 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_CM2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB_CM1 = (gcnew System::Windows::Forms::RadioButton());
			this->Titre_Simulate = (gcnew System::Windows::Forms::Label());
			this->Tab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Group_Turnover->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dataview))->BeginInit();
			this->Group_discount->SuspendLayout();
			this->Group_Unknown->SuspendLayout();
			this->Group_VAT->SuspendLayout();
			this->Group_margin->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 592);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StatisticsForm::button1_Click);
			// 
			// Tab
			// 
			this->Tab->Controls->Add(this->tabPage1);
			this->Tab->Controls->Add(this->tabPage2);
			this->Tab->Location = System::Drawing::Point(12, 12);
			this->Tab->Name = L"Tab";
			this->Tab->SelectedIndex = 0;
			this->Tab->Size = System::Drawing::Size(1307, 573);
			this->Tab->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Btn_CommercialValue);
			this->tabPage1->Controls->Add(this->Group_Turnover);
			this->tabPage1->Controls->Add(this->Btn_PurchasingValue);
			this->tabPage1->Controls->Add(this->Btn_LeastItems);
			this->tabPage1->Controls->Add(this->Btn_BestItems);
			this->tabPage1->Controls->Add(this->Btn_TotCustomer);
			this->tabPage1->Controls->Add(this->Btn_Seuil);
			this->tabPage1->Controls->Add(this->View_Database);
			this->tabPage1->Controls->Add(this->Btn_AverageCart);
			this->tabPage1->Controls->Add(this->Title_order);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1299, 544);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Statistics";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &StatisticsForm::tabPage1_Click);
			// 
			// Btn_CommercialValue
			// 
			this->Btn_CommercialValue->Location = System::Drawing::Point(862, 402);
			this->Btn_CommercialValue->Name = L"Btn_CommercialValue";
			this->Btn_CommercialValue->Size = System::Drawing::Size(422, 65);
			this->Btn_CommercialValue->TabIndex = 33;
			this->Btn_CommercialValue->Text = L"Calculation of commercial value of stock";
			this->Btn_CommercialValue->UseVisualStyleBackColor = true;
			this->Btn_CommercialValue->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_CommercialValue_Click);
			// 
			// Group_Turnover
			// 
			this->Group_Turnover->Controls->Add(this->ListBox_Mounth);
			this->Group_Turnover->Controls->Add(this->TxtBox_Years);
			this->Group_Turnover->Controls->Add(this->Lab_Mounth);
			this->Group_Turnover->Controls->Add(this->Lab_Years);
			this->Group_Turnover->Controls->Add(this->Btn_MonthlyTurnover);
			this->Group_Turnover->Location = System::Drawing::Point(862, 128);
			this->Group_Turnover->Name = L"Group_Turnover";
			this->Group_Turnover->Size = System::Drawing::Size(422, 199);
			this->Group_Turnover->TabIndex = 36;
			this->Group_Turnover->TabStop = false;
			this->Group_Turnover->Text = L"Turnover";
			// 
			// ListBox_Mounth
			// 
			this->ListBox_Mounth->FormattingEnabled = true;
			this->ListBox_Mounth->ItemHeight = 16;
			this->ListBox_Mounth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->ListBox_Mounth->Location = System::Drawing::Point(6, 127);
			this->ListBox_Mounth->Name = L"ListBox_Mounth";
			this->ListBox_Mounth->Size = System::Drawing::Size(410, 20);
			this->ListBox_Mounth->TabIndex = 39;
			// 
			// TxtBox_Years
			// 
			this->TxtBox_Years->Location = System::Drawing::Point(6, 62);
			this->TxtBox_Years->Name = L"TxtBox_Years";
			this->TxtBox_Years->Size = System::Drawing::Size(410, 22);
			this->TxtBox_Years->TabIndex = 38;
			// 
			// Lab_Mounth
			// 
			this->Lab_Mounth->AutoSize = true;
			this->Lab_Mounth->Location = System::Drawing::Point(6, 103);
			this->Lab_Mounth->Name = L"Lab_Mounth";
			this->Lab_Mounth->Size = System::Drawing::Size(55, 17);
			this->Lab_Mounth->TabIndex = 37;
			this->Lab_Mounth->Text = L"Month :";
			// 
			// Lab_Years
			// 
			this->Lab_Years->AutoSize = true;
			this->Lab_Years->Location = System::Drawing::Point(6, 42);
			this->Lab_Years->Name = L"Lab_Years";
			this->Lab_Years->Size = System::Drawing::Size(53, 17);
			this->Lab_Years->TabIndex = 36;
			this->Lab_Years->Text = L"Years :";
			// 
			// Btn_MonthlyTurnover
			// 
			this->Btn_MonthlyTurnover->Location = System::Drawing::Point(6, 153);
			this->Btn_MonthlyTurnover->Name = L"Btn_MonthlyTurnover";
			this->Btn_MonthlyTurnover->Size = System::Drawing::Size(410, 40);
			this->Btn_MonthlyTurnover->TabIndex = 35;
			this->Btn_MonthlyTurnover->Text = L"Calculation of monthly turnover";
			this->Btn_MonthlyTurnover->UseVisualStyleBackColor = true;
			this->Btn_MonthlyTurnover->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_MonthlyTurnover_Click);
			// 
			// Btn_PurchasingValue
			// 
			this->Btn_PurchasingValue->Location = System::Drawing::Point(862, 333);
			this->Btn_PurchasingValue->Name = L"Btn_PurchasingValue";
			this->Btn_PurchasingValue->Size = System::Drawing::Size(422, 65);
			this->Btn_PurchasingValue->TabIndex = 34;
			this->Btn_PurchasingValue->Text = L"Calculation of purchasing value of stock";
			this->Btn_PurchasingValue->UseVisualStyleBackColor = true;
			this->Btn_PurchasingValue->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_PurchasingValue_Click);
			// 
			// Btn_LeastItems
			// 
			this->Btn_LeastItems->Location = System::Drawing::Point(434, 473);
			this->Btn_LeastItems->Name = L"Btn_LeastItems";
			this->Btn_LeastItems->Size = System::Drawing::Size(422, 65);
			this->Btn_LeastItems->TabIndex = 32;
			this->Btn_LeastItems->Text = L"List of the 10 least sold items";
			this->Btn_LeastItems->UseVisualStyleBackColor = true;
			this->Btn_LeastItems->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_LeastItems_Click);
			// 
			// Btn_BestItems
			// 
			this->Btn_BestItems->Location = System::Drawing::Point(434, 402);
			this->Btn_BestItems->Name = L"Btn_BestItems";
			this->Btn_BestItems->Size = System::Drawing::Size(422, 65);
			this->Btn_BestItems->TabIndex = 31;
			this->Btn_BestItems->Text = L"List of the 10 best-selling items";
			this->Btn_BestItems->UseVisualStyleBackColor = true;
			this->Btn_BestItems->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_BestItems_Click);
			// 
			// Btn_TotCustomer
			// 
			this->Btn_TotCustomer->Location = System::Drawing::Point(6, 473);
			this->Btn_TotCustomer->Name = L"Btn_TotCustomer";
			this->Btn_TotCustomer->Size = System::Drawing::Size(422, 65);
			this->Btn_TotCustomer->TabIndex = 30;
			this->Btn_TotCustomer->Text = L"Total amount of purchases per customer";
			this->Btn_TotCustomer->UseVisualStyleBackColor = true;
			this->Btn_TotCustomer->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_TotCustomer_Click);
			// 
			// Btn_Seuil
			// 
			this->Btn_Seuil->BackColor = System::Drawing::Color::NavajoWhite;
			this->Btn_Seuil->Location = System::Drawing::Point(862, 473);
			this->Btn_Seuil->Name = L"Btn_Seuil";
			this->Btn_Seuil->Size = System::Drawing::Size(422, 65);
			this->Btn_Seuil->TabIndex = 29;
			this->Btn_Seuil->Text = L"Products below restocking threshold";
			this->Btn_Seuil->UseVisualStyleBackColor = false;
			this->Btn_Seuil->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_Seuil_Click);
			// 
			// View_Database
			// 
			this->View_Database->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->View_Database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->View_Database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->View_Database->Location = System::Drawing::Point(6, 128);
			this->View_Database->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->View_Database->Name = L"View_Database";
			this->View_Database->RowHeadersWidth = 51;
			this->View_Database->RowTemplate->Height = 24;
			this->View_Database->Size = System::Drawing::Size(850, 269);
			this->View_Database->TabIndex = 28;
			// 
			// Btn_AverageCart
			// 
			this->Btn_AverageCart->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->Btn_AverageCart->Location = System::Drawing::Point(6, 402);
			this->Btn_AverageCart->Name = L"Btn_AverageCart";
			this->Btn_AverageCart->Size = System::Drawing::Size(422, 65);
			this->Btn_AverageCart->TabIndex = 17;
			this->Btn_AverageCart->Text = L"Calculation of the average cart";
			this->Btn_AverageCart->UseVisualStyleBackColor = false;
			this->Btn_AverageCart->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_AverageCart_Click);
			// 
			// Title_order
			// 
			this->Title_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Title_order->AutoSize = true;
			this->Title_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Title_order->Location = System::Drawing::Point(468, 14);
			this->Title_order->Name = L"Title_order";
			this->Title_order->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Title_order->Size = System::Drawing::Size(341, 86);
			this->Title_order->TabIndex = 15;
			this->Title_order->Text = L"Statistics";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Dataview);
			this->tabPage2->Controls->Add(this->Group_discount);
			this->tabPage2->Controls->Add(this->Group_Unknown);
			this->tabPage2->Controls->Add(this->Group_VAT);
			this->tabPage2->Controls->Add(this->Btn_simulate);
			this->tabPage2->Controls->Add(this->Group_margin);
			this->tabPage2->Controls->Add(this->Titre_Simulate);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1299, 544);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Simulate";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Dataview
			// 
			this->Dataview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dataview->Location = System::Drawing::Point(7, 122);
			this->Dataview->Name = L"Dataview";
			this->Dataview->RowHeadersWidth = 51;
			this->Dataview->RowTemplate->Height = 24;
			this->Dataview->Size = System::Drawing::Size(1286, 175);
			this->Dataview->TabIndex = 20;
			// 
			// Group_discount
			// 
			this->Group_discount->Controls->Add(this->RB_TD2);
			this->Group_discount->Controls->Add(this->RB_TD1);
			this->Group_discount->Location = System::Drawing::Point(663, 313);
			this->Group_discount->Name = L"Group_discount";
			this->Group_discount->Size = System::Drawing::Size(630, 82);
			this->Group_discount->TabIndex = 19;
			this->Group_discount->TabStop = false;
			this->Group_discount->Text = L"Trade discount";
			// 
			// RB_TD2
			// 
			this->RB_TD2->AutoSize = true;
			this->RB_TD2->Location = System::Drawing::Point(364, 36);
			this->RB_TD2->Name = L"RB_TD2";
			this->RB_TD2->Size = System::Drawing::Size(49, 21);
			this->RB_TD2->TabIndex = 10;
			this->RB_TD2->TabStop = true;
			this->RB_TD2->Text = L"6%";
			this->RB_TD2->UseVisualStyleBackColor = true;
			// 
			// RB_TD1
			// 
			this->RB_TD1->AutoSize = true;
			this->RB_TD1->Location = System::Drawing::Point(150, 36);
			this->RB_TD1->Name = L"RB_TD1";
			this->RB_TD1->Size = System::Drawing::Size(49, 21);
			this->RB_TD1->TabIndex = 9;
			this->RB_TD1->TabStop = true;
			this->RB_TD1->Text = L"5%";
			this->RB_TD1->UseVisualStyleBackColor = true;
			// 
			// Group_Unknown
			// 
			this->Group_Unknown->Controls->Add(this->RB_UM3);
			this->Group_Unknown->Controls->Add(this->RB_UM2);
			this->Group_Unknown->Controls->Add(this->RB_UM1);
			this->Group_Unknown->Location = System::Drawing::Point(662, 401);
			this->Group_Unknown->Name = L"Group_Unknown";
			this->Group_Unknown->Size = System::Drawing::Size(631, 82);
			this->Group_Unknown->TabIndex = 18;
			this->Group_Unknown->TabStop = false;
			this->Group_Unknown->Text = L"Unknown Markdown";
			// 
			// RB_UM3
			// 
			this->RB_UM3->AutoSize = true;
			this->RB_UM3->Location = System::Drawing::Point(475, 39);
			this->RB_UM3->Name = L"RB_UM3";
			this->RB_UM3->Size = System::Drawing::Size(49, 21);
			this->RB_UM3->TabIndex = 8;
			this->RB_UM3->TabStop = true;
			this->RB_UM3->Text = L"5%";
			this->RB_UM3->UseVisualStyleBackColor = true;
			// 
			// RB_UM2
			// 
			this->RB_UM2->AutoSize = true;
			this->RB_UM2->Location = System::Drawing::Point(265, 39);
			this->RB_UM2->Name = L"RB_UM2";
			this->RB_UM2->Size = System::Drawing::Size(49, 21);
			this->RB_UM2->TabIndex = 7;
			this->RB_UM2->TabStop = true;
			this->RB_UM2->Text = L"3%";
			this->RB_UM2->UseVisualStyleBackColor = true;
			// 
			// RB_UM1
			// 
			this->RB_UM1->AutoSize = true;
			this->RB_UM1->Location = System::Drawing::Point(51, 39);
			this->RB_UM1->Name = L"RB_UM1";
			this->RB_UM1->Size = System::Drawing::Size(49, 21);
			this->RB_UM1->TabIndex = 6;
			this->RB_UM1->TabStop = true;
			this->RB_UM1->Text = L"2%";
			this->RB_UM1->UseVisualStyleBackColor = true;
			// 
			// Group_VAT
			// 
			this->Group_VAT->Controls->Add(this->RB_VAT3);
			this->Group_VAT->Controls->Add(this->RB_VAT2);
			this->Group_VAT->Controls->Add(this->RB_VAT1);
			this->Group_VAT->Location = System::Drawing::Point(7, 313);
			this->Group_VAT->Name = L"Group_VAT";
			this->Group_VAT->Size = System::Drawing::Size(630, 82);
			this->Group_VAT->TabIndex = 17;
			this->Group_VAT->TabStop = false;
			this->Group_VAT->Text = L"VAT";
			// 
			// RB_VAT3
			// 
			this->RB_VAT3->AutoSize = true;
			this->RB_VAT3->Location = System::Drawing::Point(466, 36);
			this->RB_VAT3->Name = L"RB_VAT3";
			this->RB_VAT3->Size = System::Drawing::Size(68, 21);
			this->RB_VAT3->TabIndex = 2;
			this->RB_VAT3->TabStop = true;
			this->RB_VAT3->Text = L"TVA 3";
			this->RB_VAT3->UseVisualStyleBackColor = true;
			// 
			// RB_VAT2
			// 
			this->RB_VAT2->AutoSize = true;
			this->RB_VAT2->Location = System::Drawing::Point(256, 36);
			this->RB_VAT2->Name = L"RB_VAT2";
			this->RB_VAT2->Size = System::Drawing::Size(68, 21);
			this->RB_VAT2->TabIndex = 1;
			this->RB_VAT2->TabStop = true;
			this->RB_VAT2->Text = L"TVA 2";
			this->RB_VAT2->UseVisualStyleBackColor = true;
			// 
			// RB_VAT1
			// 
			this->RB_VAT1->AutoSize = true;
			this->RB_VAT1->Location = System::Drawing::Point(42, 36);
			this->RB_VAT1->Name = L"RB_VAT1";
			this->RB_VAT1->Size = System::Drawing::Size(68, 21);
			this->RB_VAT1->TabIndex = 0;
			this->RB_VAT1->TabStop = true;
			this->RB_VAT1->Text = L"TVA 1";
			this->RB_VAT1->UseVisualStyleBackColor = true;
			// 
			// Btn_simulate
			// 
			this->Btn_simulate->BackColor = System::Drawing::Color::NavajoWhite;
			this->Btn_simulate->Location = System::Drawing::Point(7, 489);
			this->Btn_simulate->Name = L"Btn_simulate";
			this->Btn_simulate->Size = System::Drawing::Size(1286, 49);
			this->Btn_simulate->TabIndex = 17;
			this->Btn_simulate->Text = L"Simulate";
			this->Btn_simulate->UseVisualStyleBackColor = false;
			// 
			// Group_margin
			// 
			this->Group_margin->Controls->Add(this->RB_CM3);
			this->Group_margin->Controls->Add(this->RB_CM2);
			this->Group_margin->Controls->Add(this->RB_CM1);
			this->Group_margin->Location = System::Drawing::Point(6, 401);
			this->Group_margin->Name = L"Group_margin";
			this->Group_margin->Size = System::Drawing::Size(631, 82);
			this->Group_margin->TabIndex = 16;
			this->Group_margin->TabStop = false;
			this->Group_margin->Text = L"Commercial margin";
			// 
			// RB_CM3
			// 
			this->RB_CM3->AutoSize = true;
			this->RB_CM3->Location = System::Drawing::Point(467, 39);
			this->RB_CM3->Name = L"RB_CM3";
			this->RB_CM3->Size = System::Drawing::Size(57, 21);
			this->RB_CM3->TabIndex = 5;
			this->RB_CM3->TabStop = true;
			this->RB_CM3->Text = L"15%";
			this->RB_CM3->UseVisualStyleBackColor = true;
			// 
			// RB_CM2
			// 
			this->RB_CM2->AutoSize = true;
			this->RB_CM2->Location = System::Drawing::Point(257, 39);
			this->RB_CM2->Name = L"RB_CM2";
			this->RB_CM2->Size = System::Drawing::Size(57, 21);
			this->RB_CM2->TabIndex = 4;
			this->RB_CM2->TabStop = true;
			this->RB_CM2->Text = L"10%";
			this->RB_CM2->UseVisualStyleBackColor = true;
			// 
			// RB_CM1
			// 
			this->RB_CM1->AutoSize = true;
			this->RB_CM1->Location = System::Drawing::Point(43, 39);
			this->RB_CM1->Name = L"RB_CM1";
			this->RB_CM1->Size = System::Drawing::Size(49, 21);
			this->RB_CM1->TabIndex = 3;
			this->RB_CM1->TabStop = true;
			this->RB_CM1->Text = L"5%";
			this->RB_CM1->UseVisualStyleBackColor = true;
			// 
			// Titre_Simulate
			// 
			this->Titre_Simulate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Titre_Simulate->AutoSize = true;
			this->Titre_Simulate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Titre_Simulate->Location = System::Drawing::Point(486, 0);
			this->Titre_Simulate->Name = L"Titre_Simulate";
			this->Titre_Simulate->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Titre_Simulate->Size = System::Drawing::Size(332, 86);
			this->Titre_Simulate->TabIndex = 15;
			this->Titre_Simulate->Text = L"Simulate";
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1331, 635);
			this->Controls->Add(this->Tab);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::Statistics_Management_Load);
			this->Tab->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->Group_Turnover->ResumeLayout(false);
			this->Group_Turnover->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dataview))->EndInit();
			this->Group_discount->ResumeLayout(false);
			this->Group_discount->PerformLayout();
			this->Group_Unknown->ResumeLayout(false);
			this->Group_Unknown->PerformLayout();
			this->Group_VAT->ResumeLayout(false);
			this->Group_VAT->PerformLayout();
			this->Group_margin->ResumeLayout(false);
			this->Group_margin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		this->Close();
	}
	private: System::Void Statistics_Management_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oStats = gcnew NS_Comp_Stats::CLStats();
	}

	private: System::Void splitContainer1_SplitterMoved(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e){}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e){}

private: System::Void Btn_AverageCart_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->averageCart("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_TotCustomer_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->customerTotalAmount("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_BestItems_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->bestSellers("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_LeastItems_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->lessSold("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_MonthlyTurnover_Click(System::Object^ sender, System::EventArgs^ e)
{
	//this->View_Database->Refresh();
	//this->oDs = this->oStats->monthSalesRevenue(this->TxtBox_Years->Year, this->ListBox_Mounth->Mounth);
	//this->View_Database->DataSource = this->oDs;
	//this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_PurchasingValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->stockPurchaseValue("Rsl");
	this->View_Database->Refresh();
	this->View_Database->Refresh();
	this->oDs = this->oStats->stockPurchaseValue("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_CommercialValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->stockCommercialValue("Rsl");
	this->View_Database->Refresh();
	this->View_Database->Refresh();
	this->oDs = this->oStats->stockCommercialValue("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}
private: System::Void Btn_Seuil_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->belowThreshold("Rsl");
	this->View_Database->Refresh();
	this->View_Database->Refresh();
	this->oDs = this->oStats->belowThreshold("Rsl");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl";
}

};
}