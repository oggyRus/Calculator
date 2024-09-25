#pragma once
#include <cmath>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn_divide;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ btn_mult;


	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ btn_plus;




	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_percent;





	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ btn_dot;



	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;








	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->Location = System::Drawing::Point(517, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(45, 35);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->result_label->Location = System::Drawing::Point(111, 63);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(334, 66);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 81);
			this->button1->TabIndex = 2;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(162, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 81);
			this->button2->TabIndex = 3;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(296, 385);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 81);
			this->button3->TabIndex = 4;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->Location = System::Drawing::Point(434, 280);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(106, 81);
			this->btn_divide->TabIndex = 5;
			this->btn_divide->Text = L"÷";
			this->btn_divide->UseVisualStyleBackColor = true;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(29, 491);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 81);
			this->button5->TabIndex = 6;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(162, 491);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 81);
			this->button6->TabIndex = 7;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(296, 491);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 81);
			this->button7->TabIndex = 8;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->Location = System::Drawing::Point(434, 385);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(106, 81);
			this->btn_mult->TabIndex = 9;
			this->btn_mult->Text = L"×";
			this->btn_mult->UseVisualStyleBackColor = true;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(29, 598);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(106, 81);
			this->button9->TabIndex = 10;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(162, 598);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(106, 81);
			this->button10->TabIndex = 11;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(296, 598);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 81);
			this->button11->TabIndex = 12;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->Location = System::Drawing::Point(434, 491);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(106, 81);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = true;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->Location = System::Drawing::Point(434, 598);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(106, 81);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = true;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(29, 704);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(106, 81);
			this->button17->TabIndex = 18;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->Location = System::Drawing::Point(29, 810);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(511, 81);
			this->btn_equal->TabIndex = 21;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = true;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_ac
			// 
			this->btn_ac->Location = System::Drawing::Point(29, 280);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(106, 81);
			this->btn_ac->TabIndex = 22;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = true;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->Location = System::Drawing::Point(287, 280);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(106, 81);
			this->btn_percent->TabIndex = 23;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = true;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->Location = System::Drawing::Point(162, 280);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(106, 81);
			this->btn_minus_plus->TabIndex = 24;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = true;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->Location = System::Drawing::Point(162, 705);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(106, 81);
			this->btn_dot->TabIndex = 25;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = true;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(434, 705);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 81);
			this->button4->TabIndex = 26;
			this->button4->Text = L"<-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::btn_stirashka_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(296, 704);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 81);
			this->button8->TabIndex = 27;
			this->button8->Text = L"x^2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btn_square_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(511, 334);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(574, 903);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0" || is_equal) {
			this->result_label->Text = button->Text;
			is_equal = false;
		}
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}

	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('+');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('-');
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('*');
	}
	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('/');
	}
	private: System::Void math_action(char action)
	{
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (user_action == ' ')
			return;

		float second = System::Convert::ToDouble(this->result_label->Text);
		float res;
		switch (this->user_action)
		{
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/': 
			if (second == 0)
			{
				res = 0;
				this->result_label->ForeColor = Color::Red;
				MessageBox::Show(this, "Действие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second; break;
		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private:System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		float num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e)
	{
		math_action('%');
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = this->result_label->Text;
		if(!text -> Contains(","))
		this->result_label->Text = text + ",";
	}

	private: System::Void btn_square_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double num = System::Convert::ToDouble(this->result_label->Text);
		num = pow(num, 2);
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_stirashka_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ text = this->result_label->Text;
		if (text->Length > 0)
		{
			this->result_label->Text = text->Substring(0, text->Length - 1);
		}
		if (this->result_label->Text == "")
		{
			this->result_label->Text = "0";
		}
	}
};
}
	