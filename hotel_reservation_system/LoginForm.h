#pragma once
#include "User.h"
#include <msclr/marshal_cppstd.h>
#include <regex>
#include <random>
#include <sstream>

namespace hotelreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ loginPanel;
	private: System::Windows::Forms::TextBox^ password_input;
	private: System::Windows::Forms::TextBox^ username_or_email_input;
	private: System::Windows::Forms::Label^ goToRegister;

	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ register_question;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Panel^ registerPanel;


	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ registerEmail;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ registerPassword;

	private: System::Windows::Forms::TextBox^ registerUsername;

	private: System::Windows::Forms::Label^ goToLogin;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ registerBtn;

	private: System::Windows::Forms::NumericUpDown^ registerAge;
	private: System::Windows::Forms::TextBox^ registerPhone;
	private: System::Windows::Forms::TextBox^ registerName;
	private: System::Windows::Forms::Label^ label2;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->password_input = (gcnew System::Windows::Forms::TextBox());
			this->username_or_email_input = (gcnew System::Windows::Forms::TextBox());
			this->goToRegister = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->register_question = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->registerPanel = (gcnew System::Windows::Forms::Panel());
			this->registerName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->registerPhone = (gcnew System::Windows::Forms::TextBox());
			this->registerAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->registerEmail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->registerPassword = (gcnew System::Windows::Forms::TextBox());
			this->registerUsername = (gcnew System::Windows::Forms::TextBox());
			this->goToLogin = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->registerBtn = (gcnew System::Windows::Forms::Button());
			this->loginPanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->registerAge))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(410, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hotel Reservation System";
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->password_input);
			this->loginPanel->Controls->Add(this->username_or_email_input);
			this->loginPanel->Controls->Add(this->goToRegister);
			this->loginPanel->Controls->Add(this->password);
			this->loginPanel->Controls->Add(this->username_label);
			this->loginPanel->Controls->Add(this->register_question);
			this->loginPanel->Controls->Add(this->loginBtn);
			this->loginPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginPanel->Location = System::Drawing::Point(11, 72);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(662, 369);
			this->loginPanel->TabIndex = 2;
			// 
			// password_input
			// 
			this->password_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->password_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_input->Location = System::Drawing::Point(258, 150);
			this->password_input->MaxLength = 100;
			this->password_input->Name = L"password_input";
			this->password_input->PasswordChar = '*';
			this->password_input->Size = System::Drawing::Size(335, 30);
			this->password_input->TabIndex = 8;
			this->password_input->UseSystemPasswordChar = true;
			// 
			// username_or_email_input
			// 
			this->username_or_email_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->username_or_email_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_or_email_input->Location = System::Drawing::Point(258, 78);
			this->username_or_email_input->MaxLength = 100;
			this->username_or_email_input->Name = L"username_or_email_input";
			this->username_or_email_input->Size = System::Drawing::Size(335, 30);
			this->username_or_email_input->TabIndex = 9;
			// 
			// goToRegister
			// 
			this->goToRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->goToRegister->AutoSize = true;
			this->goToRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->goToRegister->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->goToRegister->Location = System::Drawing::Point(524, 304);
			this->goToRegister->Name = L"goToRegister";
			this->goToRegister->Size = System::Drawing::Size(61, 17);
			this->goToRegister->TabIndex = 4;
			this->goToRegister->Text = L"Register!";
			this->goToRegister->Click += gcnew System::EventHandler(this, &LoginForm::goToRegister_Click);
			// 
			// password
			// 
			this->password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(55, 156);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(108, 26);
			this->password->TabIndex = 5;
			this->password->Text = L"Password";
			// 
			// username_label
			// 
			this->username_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->Location = System::Drawing::Point(55, 84);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(200, 26);
			this->username_label->TabIndex = 6;
			this->username_label->Text = L"Username or Email";
			// 
			// register_question
			// 
			this->register_question->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->register_question->AutoSize = true;
			this->register_question->Location = System::Drawing::Point(387, 304);
			this->register_question->Name = L"register_question";
			this->register_question->Size = System::Drawing::Size(160, 17);
			this->register_question->TabIndex = 7;
			this->register_question->Text = L"Don\'t Have An Account \?";
			// 
			// loginBtn
			// 
			this->loginBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->Location = System::Drawing::Point(250, 288);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(125, 46);
			this->loginBtn->TabIndex = 3;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &LoginForm::loginBtn_Click);
			// 
			// registerPanel
			// 
			this->registerPanel->Controls->Add(this->registerName);
			this->registerPanel->Controls->Add(this->label2);
			this->registerPanel->Controls->Add(this->registerPhone);
			this->registerPanel->Controls->Add(this->registerAge);
			this->registerPanel->Controls->Add(this->label8);
			this->registerPanel->Controls->Add(this->label7);
			this->registerPanel->Controls->Add(this->registerEmail);
			this->registerPanel->Controls->Add(this->label6);
			this->registerPanel->Controls->Add(this->registerPassword);
			this->registerPanel->Controls->Add(this->registerUsername);
			this->registerPanel->Controls->Add(this->goToLogin);
			this->registerPanel->Controls->Add(this->label3);
			this->registerPanel->Controls->Add(this->label4);
			this->registerPanel->Controls->Add(this->label5);
			this->registerPanel->Controls->Add(this->registerBtn);
			this->registerPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerPanel->Location = System::Drawing::Point(11, 72);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(662, 369);
			this->registerPanel->TabIndex = 3;
			// 
			// registerName
			// 
			this->registerName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerName->Location = System::Drawing::Point(428, 38);
			this->registerName->MaxLength = 100;
			this->registerName->Name = L"registerName";
			this->registerName->Size = System::Drawing::Size(222, 30);
			this->registerName->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 26);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Name";
			// 
			// registerPhone
			// 
			this->registerPhone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerPhone->Location = System::Drawing::Point(136, 150);
			this->registerPhone->MaxLength = 100;
			this->registerPhone->Name = L"registerPhone";
			this->registerPhone->Size = System::Drawing::Size(186, 30);
			this->registerPhone->TabIndex = 17;
			// 
			// registerAge
			// 
			this->registerAge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAge->Location = System::Drawing::Point(428, 92);
			this->registerAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->registerAge->Name = L"registerAge";
			this->registerAge->Size = System::Drawing::Size(221, 30);
			this->registerAge->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(14, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 26);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Phone";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(342, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 26);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Age";
			// 
			// registerEmail
			// 
			this->registerEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerEmail->Location = System::Drawing::Point(136, 207);
			this->registerEmail->MaxLength = 100;
			this->registerEmail->Name = L"registerEmail";
			this->registerEmail->Size = System::Drawing::Size(514, 30);
			this->registerEmail->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Email";
			// 
			// registerPassword
			// 
			this->registerPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerPassword->Location = System::Drawing::Point(136, 95);
			this->registerPassword->MaxLength = 100;
			this->registerPassword->Name = L"registerPassword";
			this->registerPassword->PasswordChar = '*';
			this->registerPassword->Size = System::Drawing::Size(186, 30);
			this->registerPassword->TabIndex = 8;
			this->registerPassword->UseSystemPasswordChar = true;
			// 
			// registerUsername
			// 
			this->registerUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerUsername->Location = System::Drawing::Point(136, 36);
			this->registerUsername->MaxLength = 100;
			this->registerUsername->Name = L"registerUsername";
			this->registerUsername->Size = System::Drawing::Size(186, 30);
			this->registerUsername->TabIndex = 9;
			// 
			// goToLogin
			// 
			this->goToLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->goToLogin->AutoSize = true;
			this->goToLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->goToLogin->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->goToLogin->Location = System::Drawing::Point(540, 304);
			this->goToLogin->Name = L"goToLogin";
			this->goToLogin->Size = System::Drawing::Size(45, 17);
			this->goToLogin->TabIndex = 4;
			this->goToLogin->Text = L"Login!";
			this->goToLogin->Click += gcnew System::EventHandler(this, &LoginForm::goToLogin_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 26);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(387, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Already Have An Account \?";
			// 
			// registerBtn
			// 
			this->registerBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->registerBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerBtn->Location = System::Drawing::Point(250, 288);
			this->registerBtn->Name = L"registerBtn";
			this->registerBtn->Size = System::Drawing::Size(125, 46);
			this->registerBtn->TabIndex = 3;
			this->registerBtn->Text = L"Register";
			this->registerBtn->UseVisualStyleBackColor = true;
			this->registerBtn->Click += gcnew System::EventHandler(this, &LoginForm::registerBtn_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 453);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->registerPanel);
			this->Controls->Add(this->loginPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1122, 720);
			this->MinimumSize = System::Drawing::Size(702, 350);
			this->Name = L"LoginForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->registerAge))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int ShowAndReturnAction() {
			action = -1;
			this->ShowDialog();
			return action; // Return the action taken by the user
		}
	private:
		int action = -1;

		Void resetView() {
			this->registerPanel->Visible = false;
			this->loginPanel->Visible = true;
		}

		Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
			resetView();
		}

		System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ username_or_email = this->username_or_email_input->Text;
			String^ password = this->password_input->Text;

			if (username_or_email->Length == 0 || password->Length == 0) {  // if user didn't enter credentials
				MessageBox::Show("Please check your credentials", "Error", MessageBoxButtons::OK);
				return;
			}

			if (password->Length < 6) {
				MessageBox::Show("Password must be at least 6", "Error", MessageBoxButtons::OK);
				return;
			}

			if (AuthenticateUser(username_or_email, password)) {
				this->Close();
			}
			else {
				// Failed login
				MessageBox::Show("Invalid username/email or password. Try Again.", "Error", MessageBoxButtons::OK);
			}
		}

		bool AuthenticateUser(String^ username_or_email, String^ password) {
			// Convert System::String to std::string for comparison
			std::string usernameOrEmail = msclr::interop::marshal_as<std::string>(username_or_email);
			std::string userPassword = msclr::interop::marshal_as<std::string>(password);

			for (const auto& user : users) {
				// Check if username or email matches
				if ((user.username == usernameOrEmail || user.email == usernameOrEmail) && user.password == userPassword) {
					// Authentication successful
					active_user.id = user.id;
					active_user.username = user.username;
					active_user.password = user.password;
					active_user.name = user.name;
					active_user.email = user.email;
					active_user.phone = user.phone;
					active_user.age = user.age;
					active_user.user_type = user.user_type;
					action = 1;
					break;
				}
			}

			if (active_user.id == "")
			{
				return false;
			}

			return true;
		}
		Void goToRegister_Click(System::Object^ sender, System::EventArgs^ e) {
			this->loginPanel->Visible = false;
			this->registerPanel->Visible = true;
		}
		Void goToLogin_Click(System::Object^ sender, System::EventArgs^ e) {
			this->loginPanel->Visible = true;
			this->registerPanel->Visible = false;
		}

		std::string generateUniqueUserID() {
			std::string newID;

			// Seed the random number generator using srand
			srand(time(nullptr));

			do {
				int randomNumber = rand() % 100000 + 1; // Generate random number between 1 and 100000

				// Convert randomNumber to string
				newID = std::to_string(randomNumber);

				bool uniqueIdFound = true;

				// Check if the new ID already exists
				for (const User& user : users) {
					if (user.id == newID) {
						uniqueIdFound = false;
						break;
					}
				}

				if (uniqueIdFound) {
					break; // Exit the loop since a unique ID is found
				}
			} while (true); // Keep generating until a unique ID is found

			return newID;
		}
		
		Void registerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			// Get user inputs from the registration form
			String^ username = registerUsername->Text;
			String^ email = registerEmail->Text;
			String^ password = registerPassword->Text;
			String^ name = registerName->Text;
			String^ phone = registerPhone->Text;
			int age = (int)registerAge->Value;

			// Validate inputs
			if (username->Length == 0 || email->Length == 0 || password->Length == 0) {
				MessageBox::Show("Please fill in all the fields.", "Error", MessageBoxButtons::OK);
				return;
			}

			if (password->Length < 6) {
				MessageBox::Show("Password must be at least 6 characters long.", "Error", MessageBoxButtons::OK);
				return;
			}

			for (char c : msclr::interop::marshal_as<std::string>(phone)) {
				if (!isdigit(c)) {
					MessageBox::Show("Phone number must contain only numeric characters.", "Error", MessageBoxButtons::OK);
					return;
				}
			}

			for (char c : msclr::interop::marshal_as<std::string>(username)) {
				if (!isalnum(c)) { // Check if the character is alphanumeric
					MessageBox::Show("Username cannot contain special characters or spaces.", "Error", MessageBoxButtons::OK);
					return;
				}
			}

			std::string emailRegexPattern = "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+";
			std::regex emailRegex(emailRegexPattern);

			if (!std::regex_match(msclr::interop::marshal_as<std::string>(email), emailRegex)) {
				MessageBox::Show("Invalid email format. Please enter a valid email address.", "Error", MessageBoxButtons::OK);
				return;
			}

			// Check if the user already exists with the same username, email, or phone
			for (const auto& user : users) {
				if (user.username == msclr::interop::marshal_as<std::string>(username)) {
					MessageBox::Show("Username already exists. Please choose a different one.", "Error", MessageBoxButtons::OK);
					return;
				}

				if (user.email == msclr::interop::marshal_as<std::string>(email)) {
					MessageBox::Show("Email already exists. Please choose a different one.", "Error", MessageBoxButtons::OK);
					return;
				}

				if (gcnew String(user.phone.c_str()) == phone) {
					MessageBox::Show("Phone number already exists. Please choose a different one.", "Error", MessageBoxButtons::OK);
					return;
				}
			}

			// Create a new User instance
			User newUser;
			newUser.id = generateUniqueUserID();
			newUser.username = msclr::interop::marshal_as<std::string>(username);
			newUser.email = msclr::interop::marshal_as<std::string>(email);
			newUser.name = msclr::interop::marshal_as<std::string>(name);
			newUser.password = msclr::interop::marshal_as<std::string>(password);
			newUser.phone = msclr::interop::marshal_as<std::string>(phone);
			newUser.user_type = 1;
			newUser.age = age;

			// Add the new user to the vector of users
			users.push_back(newUser);

			// Show success message
			MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK);

			// Clear the registration form fields
			registerUsername->Text = "";
			registerEmail->Text = "";
			registerPassword->Text = "";
			registerPhone->Text = "";
			registerName->Text = "";
			registerAge->Value = 0;

			resetView();
		}
};
}
