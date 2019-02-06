#pragma once

namespace Lab2Calculator {

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
	private: System::Windows::Forms::Button^  ADD;
	private: System::Windows::Forms::TextBox^  Input;
	protected:


	private: System::Windows::Forms::Button^  DIV;

	private: System::Windows::Forms::Button^  MUL;

	private: System::Windows::Forms::Button^  SUB;
	private: System::Windows::Forms::Button^  One;
	private: System::Windows::Forms::Button^  Two;
	private: System::Windows::Forms::Button^  Three;
	private: System::Windows::Forms::Button^  Four;
	private: System::Windows::Forms::Button^  Five;
	private: System::Windows::Forms::Button^  Six;
	private: System::Windows::Forms::Button^  Seven;
	private: System::Windows::Forms::Button^  Eight;
	private: System::Windows::Forms::Button^  Nine;
	private: System::Windows::Forms::Button^  Zero;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  Clear;


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
			this->ADD = (gcnew System::Windows::Forms::Button());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->DIV = (gcnew System::Windows::Forms::Button());
			this->MUL = (gcnew System::Windows::Forms::Button());
			this->SUB = (gcnew System::Windows::Forms::Button());
			this->One = (gcnew System::Windows::Forms::Button());
			this->Two = (gcnew System::Windows::Forms::Button());
			this->Three = (gcnew System::Windows::Forms::Button());
			this->Four = (gcnew System::Windows::Forms::Button());
			this->Five = (gcnew System::Windows::Forms::Button());
			this->Six = (gcnew System::Windows::Forms::Button());
			this->Seven = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->Nine = (gcnew System::Windows::Forms::Button());
			this->Zero = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ADD
			// 
			this->ADD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADD->Location = System::Drawing::Point(12, 55);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(53, 23);
			this->ADD->TabIndex = 0;
			this->ADD->Text = L"+";
			this->ADD->UseVisualStyleBackColor = true;
			this->ADD->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(12, 29);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(230, 20);
			this->Input->TabIndex = 4;
			// 
			// DIV
			// 
			this->DIV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DIV->Location = System::Drawing::Point(189, 55);
			this->DIV->Name = L"DIV";
			this->DIV->Size = System::Drawing::Size(53, 23);
			this->DIV->TabIndex = 5;
			this->DIV->Text = L"/";
			this->DIV->UseVisualStyleBackColor = true;
			// 
			// MUL
			// 
			this->MUL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MUL->Location = System::Drawing::Point(130, 55);
			this->MUL->Name = L"MUL";
			this->MUL->Size = System::Drawing::Size(53, 23);
			this->MUL->TabIndex = 6;
			this->MUL->Text = L"x";
			this->MUL->UseVisualStyleBackColor = true;
			// 
			// SUB
			// 
			this->SUB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SUB->Location = System::Drawing::Point(71, 55);
			this->SUB->Name = L"SUB";
			this->SUB->Size = System::Drawing::Size(53, 23);
			this->SUB->TabIndex = 7;
			this->SUB->Text = L"-";
			this->SUB->UseVisualStyleBackColor = true;
			// 
			// One
			// 
			this->One->Location = System::Drawing::Point(12, 84);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(53, 44);
			this->One->TabIndex = 8;
			this->One->Text = L"1";
			this->One->UseVisualStyleBackColor = true;
			this->One->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// Two
			// 
			this->Two->Location = System::Drawing::Point(71, 84);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(53, 44);
			this->Two->TabIndex = 9;
			this->Two->Text = L"2";
			this->Two->UseVisualStyleBackColor = true;
			// 
			// Three
			// 
			this->Three->Location = System::Drawing::Point(130, 84);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(53, 44);
			this->Three->TabIndex = 10;
			this->Three->Text = L"3";
			this->Three->UseVisualStyleBackColor = true;
			// 
			// Four
			// 
			this->Four->Location = System::Drawing::Point(12, 134);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(53, 44);
			this->Four->TabIndex = 11;
			this->Four->Text = L"4";
			this->Four->UseVisualStyleBackColor = true;
			// 
			// Five
			// 
			this->Five->Location = System::Drawing::Point(71, 134);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(53, 44);
			this->Five->TabIndex = 12;
			this->Five->Text = L"5";
			this->Five->UseVisualStyleBackColor = true;
			// 
			// Six
			// 
			this->Six->Location = System::Drawing::Point(130, 134);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(53, 44);
			this->Six->TabIndex = 13;
			this->Six->Text = L"6";
			this->Six->UseVisualStyleBackColor = true;
			// 
			// Seven
			// 
			this->Seven->Location = System::Drawing::Point(12, 184);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(53, 44);
			this->Seven->TabIndex = 14;
			this->Seven->Text = L"7";
			this->Seven->UseVisualStyleBackColor = true;
			// 
			// Eight
			// 
			this->Eight->Location = System::Drawing::Point(71, 184);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(53, 44);
			this->Eight->TabIndex = 15;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = true;
			// 
			// Nine
			// 
			this->Nine->Location = System::Drawing::Point(130, 184);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(53, 44);
			this->Nine->TabIndex = 16;
			this->Nine->Text = L"9";
			this->Nine->UseVisualStyleBackColor = true;
			// 
			// Zero
			// 
			this->Zero->Location = System::Drawing::Point(189, 184);
			this->Zero->Name = L"Zero";
			this->Zero->Size = System::Drawing::Size(53, 44);
			this->Zero->TabIndex = 17;
			this->Zero->Text = L"0";
			this->Zero->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(189, 84);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 44);
			this->button10->TabIndex = 18;
			this->button10->Text = L"sqrt";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->Location = System::Drawing::Point(189, 134);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(53, 44);
			this->Clear->TabIndex = 19;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(273, 266);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->Zero);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Four);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->One);
			this->Controls->Add(this->SUB);
			this->Controls->Add(this->MUL);
			this->Controls->Add(this->DIV);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->ADD);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
