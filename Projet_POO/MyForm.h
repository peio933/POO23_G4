#pragma once
#include "PersonForm.h"
#include "CustomerForm.h"
#include "OrderForm.h"
#include "InventoryForm.h"
#include "StatisticsForm.h"
#include "MyForm.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Name = L"button1";
			this->toolTip1->SetToolTip(this->button1, resources->GetString(L"button1.ToolTip"));
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Name = L"button2";
			this->toolTip1->SetToolTip(this->button2, resources->GetString(L"button2.ToolTip"));
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Name = L"button3";
			this->toolTip1->SetToolTip(this->button3, resources->GetString(L"button3.ToolTip"));
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Name = L"button4";
			this->toolTip1->SetToolTip(this->button4, resources->GetString(L"button4.ToolTip"));
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Name = L"button5";
			this->toolTip1->SetToolTip(this->button5, resources->GetString(L"button5.ToolTip"));
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		PersonForm^ form = gcnew PersonForm();
		form->ShowDialog();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

		OrderForm^ form = gcnew OrderForm();
		form->ShowDialog();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		InventoryForm^ form = gcnew InventoryForm();
		form->ShowDialog();

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		StatisticsForm^ form = gcnew StatisticsForm();
		form->ShowDialog();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		CustomerForm^ form = gcnew CustomerForm();
		form->ShowDialog();

	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
