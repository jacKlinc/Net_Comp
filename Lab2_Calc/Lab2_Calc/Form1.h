#pragma once
#include <cmath>

namespace Lab2_Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		bool firstFlag;
		String^ prevOp;
		String^ curOp;
		float runningTotal;
		float currentVal;
	private: System::Windows::Forms::Button^  button2;
	public: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::TextBox^  textBox1;
	public:		 
		Form1(void)
		{

			InitializeComponent();
			firstFlag = true;
			prevOp = "+";
			runningTotal = 0;
			currentVal = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(93, 62);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(174, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"3";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(93, 91);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(174, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 120);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(93, 120);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 13;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(174, 120);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 14;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(12, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 15;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(93, 178);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 17;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(93, 149);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 18;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(174, 149);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 19;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(174, 178);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 20;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(12, 207);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 21;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(93, 207);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 22;
			this->button17->Text = L"^2";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(174, 207);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 23;
			this->button18->Text = L"sqrt";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(firstFlag){
					 this->textBox1->Text = "1";
					 firstFlag = false;
				 }
				 else {
					 this->textBox1->Text += "1";
				 }
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			if(firstFlag){
					this->textBox1->Text = "2";
					firstFlag = false;
				}
				else {
					this->textBox1->Text += "2";
				}
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			if(firstFlag){
				this->textBox1->Text = "3";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "3";
			}
		}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "4";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "4";
			}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "5";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "5";
			}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "6";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "6";
			}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "7";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "7";
			}
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "8";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "8";
			}
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "9";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "9";
			}
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(firstFlag){
				this->textBox1->Text = "0";
				firstFlag = false;
			}
			else {
				this->textBox1->Text += "0";
			}
		 }
		 // Operators
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			currentVal = Convert::ToSingle(this->textBox1->Text);
			if(prevOp == "+"){
				runningTotal += currentVal;
			}
			else if(prevOp == "-"){
				runningTotal -= currentVal;
			}
			else if(prevOp == "*"){
				runningTotal *= currentVal;
			}
			else if(prevOp == "/"){
				runningTotal /= currentVal;
			}
			this->textBox1->Text = Convert::ToString(runningTotal);
			prevOp = "+";
			firstFlag = true; 
		}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			currentVal = Convert::ToSingle(this->textBox1->Text);
			if(prevOp == "+"){
				runningTotal += currentVal;
			}
			else if(prevOp == "-"){
				runningTotal -= currentVal;
			}
			else if(prevOp == "*"){
				runningTotal *= currentVal;
			}
			else if(prevOp == "/"){
				runningTotal /= currentVal;
			}			
			this->textBox1->Text = Convert::ToString(runningTotal);
			prevOp = "-";
			firstFlag = true; 
		}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			currentVal = Convert::ToSingle(this->textBox1->Text);
			if(prevOp == "+"){
				runningTotal += currentVal;
			}
			else if(prevOp == "-"){
				runningTotal -= currentVal;
			}
			else if(prevOp == "*"){
				runningTotal *= currentVal;
			}
			else if(prevOp == "/"){
				runningTotal /= currentVal;
			}			this->textBox1->Text = Convert::ToString(runningTotal);
			prevOp = "*";
			firstFlag = true;
		 }

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			currentVal = Convert::ToSingle(this->textBox1->Text);
			if(prevOp == "+"){
				runningTotal += currentVal;
			}
			else if(prevOp == "-"){
				runningTotal -= currentVal;
			}
			else if(prevOp == "*"){
				runningTotal *= currentVal;
			}
			else if(prevOp == "/"){
				runningTotal /= currentVal;
			}			this->textBox1->Text = Convert::ToString(runningTotal);
			prevOp = "/";
			firstFlag = true;
		 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) { // CLR
			firstFlag = true;
			prevOp = "+";
			runningTotal = 0;
			currentVal = 0;
			this->textBox1->Text = "0";
		 }

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) { // =
			currentVal = Convert::ToSingle(this->textBox1->Text);
			if(prevOp == "+"){
				runningTotal += currentVal;
			}
			else if(prevOp == "-"){
				runningTotal -= currentVal;
			}
			else if(prevOp == "*"){
				runningTotal *= currentVal;
			}
			else if(prevOp == "/"){
				runningTotal /= currentVal;
			}			this->textBox1->Text = Convert::ToString(runningTotal);
			prevOp = "+";
			firstFlag = true;
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			currentVal = Convert::ToSingle(this->textBox1->Text);
			if(prevOp == "+"){
				runningTotal += currentVal;
			}
			else if(prevOp == "-"){
				runningTotal -= currentVal;
			}
			else if(prevOp == "*"){
				runningTotal *= currentVal;
			}
			else if(prevOp == "/"){
				runningTotal /= currentVal;
			}		
			else if(prevOp == "^2"){
				runningTotal =	pow(currentVal, 2);
			}	
			this->textBox1->Text = Convert::ToString(runningTotal);
			prevOp = "/";
			firstFlag = true;
		 }
};
}

