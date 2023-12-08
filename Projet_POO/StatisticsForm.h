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
	private: System::Windows::Forms::DataGridView^ Dataview_simulate;
























	private: System::Windows::Forms::Button^ Btn_simulate;









	private: System::Windows::Forms::ListBox^ ListBox_Mounth;
	private: System::Windows::Forms::TextBox^ TxtBox_Years;
private: System::Windows::Forms::GroupBox^ Group_Reminder;

private: System::Windows::Forms::Label^ Lab1_reminder;

private: System::Windows::Forms::ListBox^ List_UDiscount;

private: System::Windows::Forms::ListBox^ List_Discount;

private: System::Windows::Forms::Label^ UnknownDiscount;

private: System::Windows::Forms::Label^ Lab_Discount;
private: System::Windows::Forms::ListBox^ List_Margin;


private: System::Windows::Forms::ListBox^ List_TVA;

private: System::Windows::Forms::Label^ Lab_CMargin;

private: System::Windows::Forms::Label^ Lab_TVA;
private: System::Windows::Forms::Label^ Lab2_Reminder;

private: System::Windows::Forms::Label^ label1;



































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
			this->Group_Reminder = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Lab2_Reminder = (gcnew System::Windows::Forms::Label());
			this->Lab1_reminder = (gcnew System::Windows::Forms::Label());
			this->List_UDiscount = (gcnew System::Windows::Forms::ListBox());
			this->List_Discount = (gcnew System::Windows::Forms::ListBox());
			this->UnknownDiscount = (gcnew System::Windows::Forms::Label());
			this->Lab_Discount = (gcnew System::Windows::Forms::Label());
			this->List_Margin = (gcnew System::Windows::Forms::ListBox());
			this->List_TVA = (gcnew System::Windows::Forms::ListBox());
			this->Lab_CMargin = (gcnew System::Windows::Forms::Label());
			this->Lab_TVA = (gcnew System::Windows::Forms::Label());
			this->Dataview_simulate = (gcnew System::Windows::Forms::DataGridView());
			this->Btn_simulate = (gcnew System::Windows::Forms::Button());
			this->Titre_Simulate = (gcnew System::Windows::Forms::Label());
			this->Tab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Group_Turnover->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View_Database))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->Group_Reminder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dataview_simulate))->BeginInit();
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
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
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
			this->Title_order->Location = System::Drawing::Point(468, 30);
			this->Title_order->Name = L"Title_order";
			this->Title_order->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Title_order->Size = System::Drawing::Size(341, 86);
			this->Title_order->TabIndex = 15;
			this->Title_order->Text = L"Statistics";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Group_Reminder);
			this->tabPage2->Controls->Add(this->List_UDiscount);
			this->tabPage2->Controls->Add(this->List_Discount);
			this->tabPage2->Controls->Add(this->UnknownDiscount);
			this->tabPage2->Controls->Add(this->Lab_Discount);
			this->tabPage2->Controls->Add(this->List_Margin);
			this->tabPage2->Controls->Add(this->List_TVA);
			this->tabPage2->Controls->Add(this->Lab_CMargin);
			this->tabPage2->Controls->Add(this->Lab_TVA);
			this->tabPage2->Controls->Add(this->Dataview_simulate);
			this->tabPage2->Controls->Add(this->Btn_simulate);
			this->tabPage2->Controls->Add(this->Titre_Simulate);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1299, 544);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Simulate";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Group_Reminder
			// 
			this->Group_Reminder->Controls->Add(this->label1);
			this->Group_Reminder->Controls->Add(this->Lab2_Reminder);
			this->Group_Reminder->Controls->Add(this->Lab1_reminder);
			this->Group_Reminder->Location = System::Drawing::Point(821, 337);
			this->Group_Reminder->Name = L"Group_Reminder";
			this->Group_Reminder->Size = System::Drawing::Size(457, 100);
			this->Group_Reminder->TabIndex = 29;
			this->Group_Reminder->TabStop = false;
			this->Group_Reminder->Text = L"Reminder";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(415, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"dress-up, but it\'s all in good fun. Keep calm, math is on our side! ";
			// 
			// Lab2_Reminder
			// 
			this->Lab2_Reminder->AutoSize = true;
			this->Lab2_Reminder->Location = System::Drawing::Point(16, 101);
			this->Lab2_Reminder->Name = L"Lab2_Reminder";
			this->Lab2_Reminder->Size = System::Drawing::Size(415, 17);
			this->Lab2_Reminder->TabIndex = 1;
			this->Lab2_Reminder->Text = L"dress-up, but it\'s all in good fun. Keep calm, math is on our side! ";
			// 
			// Lab1_reminder
			// 
			this->Lab1_reminder->AutoSize = true;
			this->Lab1_reminder->Location = System::Drawing::Point(15, 38);
			this->Lab1_reminder->Name = L"Lab1_reminder";
			this->Lab1_reminder->Size = System::Drawing::Size(416, 17);
			this->Lab1_reminder->TabIndex = 0;
			this->Lab1_reminder->Text = L"Don\'t panic: Entering 0.20 is basically saying 20%. Numbers play";
			// 
			// List_UDiscount
			// 
			this->List_UDiscount->FormattingEnabled = true;
			this->List_UDiscount->ItemHeight = 16;
			this->List_UDiscount->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.05", L"0.03", L"0.02" });
			this->List_UDiscount->Location = System::Drawing::Point(419, 414);
			this->List_UDiscount->Name = L"List_UDiscount";
			this->List_UDiscount->Size = System::Drawing::Size(374, 20);
			this->List_UDiscount->TabIndex = 28;
			// 
			// List_Discount
			// 
			this->List_Discount->FormattingEnabled = true;
			this->List_Discount->ItemHeight = 16;
			this->List_Discount->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0.06", L"0.05" });
			this->List_Discount->Location = System::Drawing::Point(417, 358);
			this->List_Discount->Name = L"List_Discount";
			this->List_Discount->Size = System::Drawing::Size(374, 20);
			this->List_Discount->TabIndex = 27;
			// 
			// UnknownDiscount
			// 
			this->UnknownDiscount->AutoSize = true;
			this->UnknownDiscount->Location = System::Drawing::Point(416, 394);
			this->UnknownDiscount->Name = L"UnknownDiscount";
			this->UnknownDiscount->Size = System::Drawing::Size(169, 17);
			this->UnknownDiscount->TabIndex = 26;
			this->UnknownDiscount->Text = L"Unknown discount value :";
			// 
			// Lab_Discount
			// 
			this->Lab_Discount->AutoSize = true;
			this->Lab_Discount->Location = System::Drawing::Point(416, 337);
			this->Lab_Discount->Name = L"Lab_Discount";
			this->Lab_Discount->Size = System::Drawing::Size(109, 17);
			this->Lab_Discount->TabIndex = 25;
			this->Lab_Discount->Text = L"Discount value :";
			// 
			// List_Margin
			// 
			this->List_Margin->FormattingEnabled = true;
			this->List_Margin->ItemHeight = 16;
			this->List_Margin->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.15", L"0.10", L"0.05" });
			this->List_Margin->Location = System::Drawing::Point(19, 414);
			this->List_Margin->Name = L"List_Margin";
			this->List_Margin->Size = System::Drawing::Size(374, 20);
			this->List_Margin->TabIndex = 24;
			// 
			// List_TVA
			// 
			this->List_TVA->FormattingEnabled = true;
			this->List_TVA->ItemHeight = 16;
			this->List_TVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.20", L"0.08", L"0.07" });
			this->List_TVA->Location = System::Drawing::Point(17, 358);
			this->List_TVA->Name = L"List_TVA";
			this->List_TVA->Size = System::Drawing::Size(374, 20);
			this->List_TVA->TabIndex = 23;
			// 
			// Lab_CMargin
			// 
			this->Lab_CMargin->AutoSize = true;
			this->Lab_CMargin->Location = System::Drawing::Point(16, 394);
			this->Lab_CMargin->Name = L"Lab_CMargin";
			this->Lab_CMargin->Size = System::Drawing::Size(174, 17);
			this->Lab_CMargin->TabIndex = 22;
			this->Lab_CMargin->Text = L"Commercial margin value :";
			// 
			// Lab_TVA
			// 
			this->Lab_TVA->AutoSize = true;
			this->Lab_TVA->Location = System::Drawing::Point(16, 337);
			this->Lab_TVA->Name = L"Lab_TVA";
			this->Lab_TVA->Size = System::Drawing::Size(81, 17);
			this->Lab_TVA->TabIndex = 21;
			this->Lab_TVA->Text = L"VAT value :";
			// 
			// Dataview_simulate
			// 
			this->Dataview_simulate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dataview_simulate->Location = System::Drawing::Point(7, 122);
			this->Dataview_simulate->Name = L"Dataview_simulate";
			this->Dataview_simulate->RowHeadersWidth = 51;
			this->Dataview_simulate->RowTemplate->Height = 24;
			this->Dataview_simulate->Size = System::Drawing::Size(1286, 175);
			this->Dataview_simulate->TabIndex = 20;
			// 
			// Btn_simulate
			// 
			this->Btn_simulate->BackColor = System::Drawing::Color::NavajoWhite;
			this->Btn_simulate->Location = System::Drawing::Point(7, 472);
			this->Btn_simulate->Name = L"Btn_simulate";
			this->Btn_simulate->Size = System::Drawing::Size(1286, 66);
			this->Btn_simulate->TabIndex = 17;
			this->Btn_simulate->Text = L"Simulate";
			this->Btn_simulate->UseVisualStyleBackColor = false;
			this->Btn_simulate->Click += gcnew System::EventHandler(this, &StatisticsForm::Btn_simulate_Click);
			// 
			// Titre_Simulate
			// 
			this->Titre_Simulate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Titre_Simulate->AutoSize = true;
			this->Titre_Simulate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45.6F, System::Drawing::FontStyle::Underline));
			this->Titre_Simulate->Location = System::Drawing::Point(488, 31);
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
			this->Group_Reminder->ResumeLayout(false);
			this->Group_Reminder->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dataview_simulate))->EndInit();
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
	this->oDs = this->oStats->customerTotalAmount("Rsl1");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl1";
}
private: System::Void Btn_BestItems_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->bestSellers("Rsl2");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl2";
}
private: System::Void Btn_LeastItems_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->lessSold("Rsl3");
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl3";
}
private: System::Void Btn_MonthlyTurnover_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->View_Database->Refresh();
	this->oDs = this->oStats->monthSalesRevenue("Rsl4", this->ListBox_Mounth->Text, this->TxtBox_Years->Text);
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl4";
}
private: System::Void Btn_PurchasingValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->stockPurchaseValue("Rsl5");
	this->View_Database->Refresh();
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl5";
}
private: System::Void Btn_CommercialValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->stockCommercialValue("Rsl6");
	this->View_Database->Refresh();
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl6";
}
private: System::Void Btn_Seuil_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->belowThreshold("Rsl7");
	this->View_Database->Refresh();
	this->View_Database->DataSource = this->oDs;
	this->View_Database->DataMember = "Rsl7";
}


private: System::Void Btn_simulate_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->oDs = this->oStats->simulateStockValue(this->List_TVA->Text, this->List_Margin->Text, this->List_UDiscount->Text, "Rsl26");
	//this->oDs = this->oStats->simulateStockValue("Rsl26");
	this->Dataview_simulate->Refresh();
	this->Dataview_simulate->DataSource = this->oDs;
	this->Dataview_simulate->DataMember = "Rsl26";
}


};
}