#pragma once
#include <string>

#include "Main.h"
#include "User.h"
#include "RoomSchedule.h"
#include "BookingForm.h"

namespace hotelreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserHomeForm
	/// </summary>
	public ref class UserHomeForm : public System::Windows::Forms::Form
	{
	public:
		UserHomeForm(void)
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
		~UserHomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ controlPanel;
	private: System::Windows::Forms::Button^ logoutBtn;
	private: System::Windows::Forms::Button^ homeBtn;




	private: System::Windows::Forms::Panel^ roomsPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ noRoomsLabel;
	private: System::Windows::Forms::Button^ profileBtn;





	private: System::Windows::Forms::Panel^ profilePanel;
	private: System::Windows::Forms::Label^ profileEmailLabel;

	private: System::Windows::Forms::Label^ profileUsernameLabel;
	private: System::Windows::Forms::Label^ profileEmail;
	private: System::Windows::Forms::Label^ profileUsername;
	private: System::Windows::Forms::Label^ profilePhone;

	private: System::Windows::Forms::Label^ profileAge;
	private: System::Windows::Forms::Label^ profilePhoneLabel;


	private: System::Windows::Forms::Label^ profileAgeLabel;
	private: System::Windows::Forms::Label^ profileName;
	private: System::Windows::Forms::Label^ profileNameLabel;
	private: System::Windows::Forms::Button^ browseBtn;
	private: System::Windows::Forms::Panel^ homePanel;
	private: System::Windows::Forms::Label^ noBookingsLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ searchPanel;
	private: System::Windows::Forms::ComboBox^ searchTo;
	private: System::Windows::Forms::Button^ resetSearchBtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ searchFrom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::ComboBox^ searchRoomType;
	private: System::Windows::Forms::Label^ label2;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserHomeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->controlPanel = (gcnew System::Windows::Forms::Panel());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->profileBtn = (gcnew System::Windows::Forms::Button());
			this->logoutBtn = (gcnew System::Windows::Forms::Button());
			this->homeBtn = (gcnew System::Windows::Forms::Button());
			this->roomsPanel = (gcnew System::Windows::Forms::Panel());
			this->noRoomsLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->profilePanel = (gcnew System::Windows::Forms::Panel());
			this->profileName = (gcnew System::Windows::Forms::Label());
			this->profileNameLabel = (gcnew System::Windows::Forms::Label());
			this->profilePhone = (gcnew System::Windows::Forms::Label());
			this->profileAge = (gcnew System::Windows::Forms::Label());
			this->profilePhoneLabel = (gcnew System::Windows::Forms::Label());
			this->profileAgeLabel = (gcnew System::Windows::Forms::Label());
			this->profileEmail = (gcnew System::Windows::Forms::Label());
			this->profileUsername = (gcnew System::Windows::Forms::Label());
			this->profileEmailLabel = (gcnew System::Windows::Forms::Label());
			this->profileUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->homePanel = (gcnew System::Windows::Forms::Panel());
			this->noBookingsLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->searchPanel = (gcnew System::Windows::Forms::Panel());
			this->searchTo = (gcnew System::Windows::Forms::ComboBox());
			this->resetSearchBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->searchFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->searchRoomType = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->controlPanel->SuspendLayout();
			this->roomsPanel->SuspendLayout();
			this->profilePanel->SuspendLayout();
			this->homePanel->SuspendLayout();
			this->searchPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome back, ";
			// 
			// controlPanel
			// 
			this->controlPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->controlPanel->Controls->Add(this->browseBtn);
			this->controlPanel->Controls->Add(this->profileBtn);
			this->controlPanel->Controls->Add(this->logoutBtn);
			this->controlPanel->Controls->Add(this->homeBtn);
			this->controlPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->controlPanel->Location = System::Drawing::Point(8, 55);
			this->controlPanel->Name = L"controlPanel";
			this->controlPanel->Size = System::Drawing::Size(121, 221);
			this->controlPanel->TabIndex = 7;
			// 
			// browseBtn
			// 
			this->browseBtn->BackColor = System::Drawing::SystemColors::Window;
			this->browseBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->browseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browseBtn.Image")));
			this->browseBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->browseBtn->Location = System::Drawing::Point(0, 56);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(121, 55);
			this->browseBtn->TabIndex = 5;
			this->browseBtn->Text = L"    Browse";
			this->browseBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->browseBtn->UseVisualStyleBackColor = false;
			this->browseBtn->Click += gcnew System::EventHandler(this, &UserHomeForm::browseBtn_Click);
			// 
			// profileBtn
			// 
			this->profileBtn->BackColor = System::Drawing::SystemColors::Window;
			this->profileBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->profileBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileBtn.Image")));
			this->profileBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->profileBtn->Location = System::Drawing::Point(0, 111);
			this->profileBtn->Name = L"profileBtn";
			this->profileBtn->Size = System::Drawing::Size(121, 55);
			this->profileBtn->TabIndex = 5;
			this->profileBtn->Text = L"     Profile";
			this->profileBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->profileBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->profileBtn->UseVisualStyleBackColor = false;
			this->profileBtn->Click += gcnew System::EventHandler(this, &UserHomeForm::profileBtn_Click);
			// 
			// logoutBtn
			// 
			this->logoutBtn->AutoSize = true;
			this->logoutBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->logoutBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutBtn.Image")));
			this->logoutBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->logoutBtn->Location = System::Drawing::Point(0, 166);
			this->logoutBtn->Name = L"logoutBtn";
			this->logoutBtn->Size = System::Drawing::Size(121, 55);
			this->logoutBtn->TabIndex = 0;
			this->logoutBtn->Text = L"    Logout";
			this->logoutBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->logoutBtn->UseVisualStyleBackColor = true;
			this->logoutBtn->Click += gcnew System::EventHandler(this, &UserHomeForm::logoutBtn_Click);
			// 
			// homeBtn
			// 
			this->homeBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->homeBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->homeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"homeBtn.Image")));
			this->homeBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->homeBtn->Location = System::Drawing::Point(0, 0);
			this->homeBtn->Name = L"homeBtn";
			this->homeBtn->Size = System::Drawing::Size(121, 55);
			this->homeBtn->TabIndex = 0;
			this->homeBtn->Text = L" Home";
			this->homeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->homeBtn->UseVisualStyleBackColor = false;
			this->homeBtn->Click += gcnew System::EventHandler(this, &UserHomeForm::homeBtn_Click);
			// 
			// roomsPanel
			// 
			this->roomsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->roomsPanel->AutoScroll = true;
			this->roomsPanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->roomsPanel->Controls->Add(this->noRoomsLabel);
			this->roomsPanel->Controls->Add(this->flowLayoutPanel1);
			this->roomsPanel->Location = System::Drawing::Point(134, 55);
			this->roomsPanel->Name = L"roomsPanel";
			this->roomsPanel->Size = System::Drawing::Size(574, 410);
			this->roomsPanel->TabIndex = 8;
			this->roomsPanel->Visible = false;
			// 
			// noRoomsLabel
			// 
			this->noRoomsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->noRoomsLabel->AutoSize = true;
			this->noRoomsLabel->Location = System::Drawing::Point(212, 178);
			this->noRoomsLabel->Name = L"noRoomsLabel";
			this->noRoomsLabel->Size = System::Drawing::Size(127, 17);
			this->noRoomsLabel->TabIndex = 1;
			this->noRoomsLabel->Text = L"No Rooms Available";
			this->noRoomsLabel->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(493, 322);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(175, 100);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// profilePanel
			// 
			this->profilePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->profilePanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->profilePanel->Controls->Add(this->profileName);
			this->profilePanel->Controls->Add(this->profileNameLabel);
			this->profilePanel->Controls->Add(this->profilePhone);
			this->profilePanel->Controls->Add(this->profileAge);
			this->profilePanel->Controls->Add(this->profilePhoneLabel);
			this->profilePanel->Controls->Add(this->profileAgeLabel);
			this->profilePanel->Controls->Add(this->profileEmail);
			this->profilePanel->Controls->Add(this->profileUsername);
			this->profilePanel->Controls->Add(this->profileEmailLabel);
			this->profilePanel->Controls->Add(this->profileUsernameLabel);
			this->profilePanel->Location = System::Drawing::Point(134, 55);
			this->profilePanel->Name = L"profilePanel";
			this->profilePanel->Size = System::Drawing::Size(574, 410);
			this->profilePanel->TabIndex = 2;
			this->profilePanel->Visible = false;
			// 
			// profileName
			// 
			this->profileName->AutoSize = true;
			this->profileName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileName->Location = System::Drawing::Point(82, 125);
			this->profileName->Name = L"profileName";
			this->profileName->Size = System::Drawing::Size(0, 23);
			this->profileName->TabIndex = 9;
			// 
			// profileNameLabel
			// 
			this->profileNameLabel->AutoSize = true;
			this->profileNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileNameLabel->Location = System::Drawing::Point(20, 125);
			this->profileNameLabel->Name = L"profileNameLabel";
			this->profileNameLabel->Size = System::Drawing::Size(65, 23);
			this->profileNameLabel->TabIndex = 8;
			this->profileNameLabel->Text = L"Name: ";
			// 
			// profilePhone
			// 
			this->profilePhone->AutoSize = true;
			this->profilePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profilePhone->Location = System::Drawing::Point(145, 235);
			this->profilePhone->Name = L"profilePhone";
			this->profilePhone->Size = System::Drawing::Size(0, 23);
			this->profilePhone->TabIndex = 7;
			// 
			// profileAge
			// 
			this->profileAge->AutoSize = true;
			this->profileAge->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileAge->Location = System::Drawing::Point(68, 180);
			this->profileAge->Name = L"profileAge";
			this->profileAge->Size = System::Drawing::Size(0, 23);
			this->profileAge->TabIndex = 6;
			// 
			// profilePhoneLabel
			// 
			this->profilePhoneLabel->AutoSize = true;
			this->profilePhoneLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profilePhoneLabel->Location = System::Drawing::Point(20, 235);
			this->profilePhoneLabel->Name = L"profilePhoneLabel";
			this->profilePhoneLabel->Size = System::Drawing::Size(137, 23);
			this->profilePhoneLabel->TabIndex = 5;
			this->profilePhoneLabel->Text = L"Phone Number: ";
			// 
			// profileAgeLabel
			// 
			this->profileAgeLabel->AutoSize = true;
			this->profileAgeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileAgeLabel->Location = System::Drawing::Point(20, 180);
			this->profileAgeLabel->Name = L"profileAgeLabel";
			this->profileAgeLabel->Size = System::Drawing::Size(49, 23);
			this->profileAgeLabel->TabIndex = 4;
			this->profileAgeLabel->Text = L"Age: ";
			// 
			// profileEmail
			// 
			this->profileEmail->AutoSize = true;
			this->profileEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileEmail->Location = System::Drawing::Point(73, 70);
			this->profileEmail->Name = L"profileEmail";
			this->profileEmail->Size = System::Drawing::Size(0, 23);
			this->profileEmail->TabIndex = 3;
			// 
			// profileUsername
			// 
			this->profileUsername->AutoSize = true;
			this->profileUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileUsername->Location = System::Drawing::Point(109, 20);
			this->profileUsername->Name = L"profileUsername";
			this->profileUsername->Size = System::Drawing::Size(0, 23);
			this->profileUsername->TabIndex = 2;
			// 
			// profileEmailLabel
			// 
			this->profileEmailLabel->AutoSize = true;
			this->profileEmailLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileEmailLabel->Location = System::Drawing::Point(20, 70);
			this->profileEmailLabel->Name = L"profileEmailLabel";
			this->profileEmailLabel->Size = System::Drawing::Size(60, 23);
			this->profileEmailLabel->TabIndex = 1;
			this->profileEmailLabel->Text = L"Email: ";
			// 
			// profileUsernameLabel
			// 
			this->profileUsernameLabel->AutoSize = true;
			this->profileUsernameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileUsernameLabel->Location = System::Drawing::Point(20, 20);
			this->profileUsernameLabel->Name = L"profileUsernameLabel";
			this->profileUsernameLabel->Size = System::Drawing::Size(96, 23);
			this->profileUsernameLabel->TabIndex = 0;
			this->profileUsernameLabel->Text = L"Username: ";
			// 
			// homePanel
			// 
			this->homePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->homePanel->AutoScroll = true;
			this->homePanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->homePanel->Controls->Add(this->noBookingsLabel);
			this->homePanel->Controls->Add(this->flowLayoutPanel2);
			this->homePanel->Location = System::Drawing::Point(134, 55);
			this->homePanel->Name = L"homePanel";
			this->homePanel->Size = System::Drawing::Size(574, 410);
			this->homePanel->TabIndex = 9;
			// 
			// noBookingsLabel
			// 
			this->noBookingsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->noBookingsLabel->AutoSize = true;
			this->noBookingsLabel->Location = System::Drawing::Point(214, 178);
			this->noBookingsLabel->Name = L"noBookingsLabel";
			this->noBookingsLabel->Size = System::Drawing::Size(171, 17);
			this->noBookingsLabel->TabIndex = 1;
			this->noBookingsLabel->Text = L"You Have No Bookings Yet";
			this->noBookingsLabel->Visible = false;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(492, 322);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(175, 100);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// searchPanel
			// 
			this->searchPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchPanel->Controls->Add(this->searchTo);
			this->searchPanel->Controls->Add(this->resetSearchBtn);
			this->searchPanel->Controls->Add(this->label4);
			this->searchPanel->Controls->Add(this->searchFrom);
			this->searchPanel->Controls->Add(this->label3);
			this->searchPanel->Controls->Add(this->searchBtn);
			this->searchPanel->Controls->Add(this->searchRoomType);
			this->searchPanel->Controls->Add(this->label2);
			this->searchPanel->Location = System::Drawing::Point(8, 9);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(700, 45);
			this->searchPanel->TabIndex = 28;
			// 
			// searchTo
			// 
			this->searchTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchTo->DropDownWidth = 150;
			this->searchTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTo->FormattingEnabled = true;
			this->searchTo->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon", L"Saturday, Evening",
					L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon", L"Monday, Evening", L"Tuesday, Morning",
					L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon", L"Wednesday, Evening", L"Thursday, Morning",
					L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon", L"Friday, Evening"
			});
			this->searchTo->Location = System::Drawing::Point(367, 10);
			this->searchTo->Name = L"searchTo";
			this->searchTo->Size = System::Drawing::Size(126, 25);
			this->searchTo->TabIndex = 33;
			// 
			// resetSearchBtn
			// 
			this->resetSearchBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->resetSearchBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->resetSearchBtn->Location = System::Drawing::Point(536, 0);
			this->resetSearchBtn->Margin = System::Windows::Forms::Padding(26, 30, 26, 30);
			this->resetSearchBtn->Name = L"resetSearchBtn";
			this->resetSearchBtn->Size = System::Drawing::Size(82, 45);
			this->resetSearchBtn->TabIndex = 32;
			this->resetSearchBtn->Text = L"Reset";
			this->resetSearchBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->resetSearchBtn->UseVisualStyleBackColor = true;
			this->resetSearchBtn->Click += gcnew System::EventHandler(this, &UserHomeForm::resetSearchBtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(338, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"To: ";
			// 
			// searchFrom
			// 
			this->searchFrom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchFrom->DropDownWidth = 150;
			this->searchFrom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchFrom->FormattingEnabled = true;
			this->searchFrom->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon",
					L"Saturday, Evening", L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon",
					L"Monday, Evening", L"Tuesday, Morning", L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon",
					L"Wednesday, Evening", L"Thursday, Morning", L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon",
					L"Friday, Evening"
			});
			this->searchFrom->Location = System::Drawing::Point(199, 10);
			this->searchFrom->Name = L"searchFrom";
			this->searchFrom->Size = System::Drawing::Size(127, 25);
			this->searchFrom->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(154, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"From: ";
			// 
			// searchBtn
			// 
			this->searchBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->searchBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchBtn->Location = System::Drawing::Point(618, 0);
			this->searchBtn->Margin = System::Windows::Forms::Padding(26, 30, 26, 30);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(82, 45);
			this->searchBtn->TabIndex = 25;
			this->searchBtn->Text = L"Search";
			this->searchBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &UserHomeForm::searchBtn_Click);
			// 
			// searchRoomType
			// 
			this->searchRoomType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchRoomType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchRoomType->FormattingEnabled = true;
			this->searchRoomType->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Single", L"Double", L"Triple", L"Quad",
					L"Connecting", L"Deluxe", L"Suite", L"Junior Suite", L"Studio"
			});
			this->searchRoomType->Location = System::Drawing::Point(42, 10);
			this->searchRoomType->Name = L"searchRoomType";
			this->searchRoomType->Size = System::Drawing::Size(97, 25);
			this->searchRoomType->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Type: ";
			// 
			// UserHomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 478);
			this->Controls->Add(this->searchPanel);
			this->Controls->Add(this->controlPanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->homePanel);
			this->Controls->Add(this->roomsPanel);
			this->Controls->Add(this->profilePanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1122, 720);
			this->MinimumSize = System::Drawing::Size(742, 525);
			this->Name = L"UserHomeForm";
			this->Text = L"Hotel Reservation System";
			this->Load += gcnew System::EventHandler(this, &UserHomeForm::UserHomeForm_Load);
			this->controlPanel->ResumeLayout(false);
			this->controlPanel->PerformLayout();
			this->roomsPanel->ResumeLayout(false);
			this->roomsPanel->PerformLayout();
			this->profilePanel->ResumeLayout(false);
			this->profilePanel->PerformLayout();
			this->homePanel->ResumeLayout(false);
			this->homePanel->PerformLayout();
			this->searchPanel->ResumeLayout(false);
			this->searchPanel->PerformLayout();
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

		Void UserHomeForm_Load(Object^ sender, EventArgs^ e) {
			std::string strings[2];
			std::string first = "Welcome back, ";
			std::string second = active_user.name;
			std::string welcomeMsg = first + second;
			this->label1->Text = gcnew String(welcomeMsg.c_str());
			resetView();
			this->homePanel->Visible = true;
			DisplayRoomsData(rooms, numRooms);
			DisplayBookings();
			loadProfile();
		}

		Void resetView()
		{
			this->homePanel->Visible = false;
			this->roomsPanel->Visible = false;
			this->profilePanel->Visible = false;
			this->searchPanel->Visible = false;
		}

		Void logoutBtn_Click(Object^ sender, EventArgs^ e) {
			Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to logout?", "Confirmation", MessageBoxButtons::OKCancel);

			if (result == Windows::Forms::DialogResult::OK) {
				Main::logout();
				this->Close();
				action = 1;
			}
		}

		Void homeBtn_Click(Object^ sender, EventArgs^ e) {
			resetView();
			this->homePanel->Visible = true;
		}

		Void menuBtnClick(Object^ sender, EventArgs^ e) {
			if (this->controlPanel->Visible == true)
			{
				this->controlPanel->Visible = false;
			}
			else
			{
				this->controlPanel->Visible = true;
			}
		}

		Void DisplayBookings()
		{
			std::pair<Booking*, int> userBookingsPair = Main::getBookings(std::stoi(active_user.id), true);
			Booking* userBookings = userBookingsPair.first;
			int numberOfBookings = userBookingsPair.second;

			this->homePanel->Controls->Clear();

			if (numberOfBookings == 0)
			{
				noBookingsLabel->Visible = true;
			}
			else
			{
				// Define the vertical position to place the UI elements
				int yPos = 10;

				// Loop over each room
				for (int i = 0; i < numberOfBookings; i++)
				{
					Room& bookingRoom = Main::findRoom(std::to_string(userBookings[i].room_id));

					// Create a panel to contain room information
					Panel^ bookingPanel = gcnew Panel();
					bookingPanel->BorderStyle = BorderStyle::FixedSingle;
					bookingPanel->Size = System::Drawing::Size(this->homePanel->Width * 0.95, this->homePanel->Height * 0.25);
					bookingPanel->MaximumSize = System::Drawing::Size(1280, 80);
					bookingPanel->Location = Point(10, yPos);
					bookingPanel->Anchor = AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right;

					// Create labels to display room information
					Label^ roomNameLabel = gcnew Label();
					roomNameLabel->Text = "Room Number: " + gcnew String(bookingRoom.info.roomNumber.ToString());
					roomNameLabel->AutoSize = true;
					roomNameLabel->Location = Point(10, 10);

					Label^ roomTypeLabel = gcnew Label();
					String^ roomTypeText = gcnew String(Main::convertRoomType(bookingRoom.info.roomType).c_str());
					roomTypeLabel->Text = "Room Type: " + roomTypeText;
					roomTypeLabel->AutoSize = true;
					roomTypeLabel->Location = Point(10, 35);

					Label^ priceLabel = gcnew Label();
					priceLabel->Text = "Price: $" + gcnew String(to_string(Main::calcBookingPeriods(userBookings[i].id) * bookingRoom.info.price).c_str());
					priceLabel->AutoSize = true;
					priceLabel->Location = Point(10, 60);

					Label^ roomFloorLabel = gcnew Label();
					roomFloorLabel->Text = "Floor: " + gcnew String(bookingRoom.info.floor.ToString());
					roomFloorLabel->AutoSize = true;
					roomFloorLabel->Location = Point(90, 60);

					if (userBookings[i].status.active)
					{
						Button^ showDetailsButton = gcnew Button();
						showDetailsButton->Text = "Modify";
						showDetailsButton->Size = Drawing::Size(100, 25);
						showDetailsButton->Location = Point(bookingPanel->Width - showDetailsButton->Width - 10, 10);
						showDetailsButton->Anchor = AnchorStyles::Top | AnchorStyles::Right;
						showDetailsButton->Tag = gcnew String(userBookings[i].id.c_str());
						showDetailsButton->Click += gcnew EventHandler(this, &UserHomeForm::ModifyBooking);

						// Create a button to reserve
						Button^ cancelBtn = gcnew Button();
						cancelBtn->Text = "Cancel";
						cancelBtn->Anchor = AnchorStyles::Top | AnchorStyles::Right;
						cancelBtn->Size = Drawing::Size(100, 25);
						cancelBtn->Location = Point(bookingPanel->Width - cancelBtn->Width - 10, 40);
						cancelBtn->Tag = gcnew String(userBookings[i].id.c_str());
						cancelBtn->Click += gcnew EventHandler(this, &UserHomeForm::CancelBtn_Click);

						bookingPanel->Controls->Add(showDetailsButton);
						bookingPanel->Controls->Add(cancelBtn);
					} else
					{
						Label^ cancelLabel = gcnew Label();
						cancelLabel->Text = "Canceled at: \n\n" + gcnew String(userBookings[i].status.cancel_at.c_str());
						cancelLabel->AutoSize = true;
						cancelLabel->Location = Point(bookingPanel->Width - cancelLabel->Width - 20, 20);
						bookingPanel->Controls->Add(cancelLabel);
					}

					// Add labels and buttons to the room panel
					bookingPanel->Controls->Add(roomNameLabel);
					bookingPanel->Controls->Add(roomTypeLabel);
					bookingPanel->Controls->Add(priceLabel);
					bookingPanel->Controls->Add(roomFloorLabel);

					// Add the room panel to the roomsPanel
					this->homePanel->Controls->Add(bookingPanel);

					// Update the vertical position for the next UI element
					yPos += 110; // Adjust as needed
				}
			}

			// Dispose of the userBookings array
			delete[] userBookings;
			userBookings = nullptr;
		}

		Void DisplayRoomsData(Room* rooms, int numRooms)
		{
			this->roomsPanel->Controls->Clear();

			if (numRooms == 0)
			{
				noRoomsLabel->Visible = true;
			} else
			{
				// Define the vertical position to place the UI elements
				int yPos = 10;

				// Loop over each room
				for (int i = 0; i < numRooms; i++)
				{
					if (rooms[i].status.available)
					{
						// Create a panel to contain room information
						Panel^ roomPanel = gcnew Panel();
						roomPanel->BorderStyle = BorderStyle::FixedSingle;
						roomPanel->Size = System::Drawing::Size(this->roomsPanel->Width * 0.95, this->roomsPanel->Height * 0.25); // Adjust size as needed
						roomPanel->MaximumSize = System::Drawing::Size(1280, 80);
						roomPanel->Location = Point(10, yPos);
						roomPanel->Anchor = AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right; // Anchor to top, right, and left

						// Create labels to display room information
						Label^ roomNameLabel = gcnew Label();
						roomNameLabel->Text = "Room Number: " + gcnew String(rooms[i].info.roomNumber.ToString());
						roomNameLabel->AutoSize = true;
						roomNameLabel->Location = Point(10, 10);

						Label^ roomTypeLabel = gcnew Label();
						String^ roomTypeText = gcnew String(Main::convertRoomType(rooms[i].info.roomType).c_str());
						roomTypeLabel->Text = "Room Type: " + roomTypeText;
						roomTypeLabel->AutoSize = true;
						roomTypeLabel->Location = Point(10, 35);

						Label^ priceLabel = gcnew Label();
						priceLabel->Text = "Price: $" + gcnew String(rooms[i].info.price.ToString());
						priceLabel->AutoSize = true;
						priceLabel->Location = Point(10, 60);

						Label^ roomFloorLabel = gcnew Label();
						roomFloorLabel->Text = "Floor: " + gcnew String(rooms[i].info.floor.ToString());
						roomFloorLabel->AutoSize = true;
						roomFloorLabel->Location = Point(90, 60);

						Button^ showDetailsButton = gcnew Button();
						showDetailsButton->Text = "Show Details";
						showDetailsButton->Size = Drawing::Size(100, 25);
						showDetailsButton->Location = Point(roomPanel->Width - showDetailsButton->Width - 10, 10);
						showDetailsButton->Anchor = AnchorStyles::Top | AnchorStyles::Right;
						showDetailsButton->Tag = gcnew String(rooms[i].id.c_str());
						showDetailsButton->Click += gcnew EventHandler(this, &UserHomeForm::ShowDetailsButtonClick);

						Button^ reserveButton = gcnew Button();
						reserveButton->Text = "Reserve";
						reserveButton->Anchor = AnchorStyles::Top | AnchorStyles::Right;
						reserveButton->Size = Drawing::Size(100, 25);
						reserveButton->Tag = gcnew String(rooms[i].id.c_str());
						reserveButton->Location = Point(roomPanel->Width - reserveButton->Width - 10, 40);
						reserveButton->Click += gcnew System::EventHandler(this, &UserHomeForm::reserveButton_Click);

						roomPanel->Controls->Add(roomNameLabel);
						roomPanel->Controls->Add(roomTypeLabel);
						roomPanel->Controls->Add(roomFloorLabel);
						roomPanel->Controls->Add(priceLabel);
						roomPanel->Controls->Add(showDetailsButton);
						roomPanel->Controls->Add(reserveButton);

						this->roomsPanel->Controls->Add(roomPanel);

						// Update the vertical position for the next UI element
						yPos += 110;
					}
				}
			}
		}

		Void ShowDetailsButtonClick(Object^ sender, EventArgs^ e)
		{
			Button^ button = dynamic_cast<Button^>(sender);
			if (button != nullptr)
			{
				String^ roomId = button->Tag->ToString();

				Room& room = Main::findRoom(msclr::interop::marshal_as<std::string>(roomId));

				// Convert the C++ 2D array to a managed cli::array
				cli::array<bool, 2>^ availabilityArray = gcnew cli::array<bool, 2>(7, 3);
				for (int i = 0; i < 7; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						availabilityArray[i, j] = room.status.availability[i][j];
					}
				}

				RoomSchedule^ availabilityForm = gcnew RoomSchedule();

				availabilityForm->PopulateListView(availabilityArray);

				availabilityForm->ShowDialog();
			}
		}
		
		Void ModifyBooking(Object^ sender, EventArgs^ e)
		{
			Button^ button = dynamic_cast<Button^>(sender);
			if (button != nullptr && button->Tag != nullptr)
			{
				String^ bookingId = dynamic_cast<String^>(button->Tag);
				if (bookingId != nullptr)
				{
					Booking booking = Main::findBooking(msclr::interop::marshal_as<std::string>(bookingId));
					BookingForm^ bookingDialog = gcnew BookingForm(bookingId, true, booking.period.from, booking.period.to);

					bookingDialog->ShowDialog(); // Show as modal dialog
					if (bookingDialog->WasSubmitted())
					{
						resetView();
						this->homePanel->Visible = true;
						DisplayBookings();
					}
				}
			}
		}

		Void profileBtn_Click(Object^ sender, EventArgs^ e) {
			resetView();
			this->profilePanel->Visible = true;
		}

		Void loadProfile()
		{
			this->profileEmail->Text = gcnew String(active_user.email.c_str());
			this->profilePhone->Text = gcnew String(active_user.phone.c_str());
			 this->profileName->Text = gcnew String(active_user.name.c_str());
			this->profileUsername->Text = gcnew String(active_user.username.c_str());
			this->profileAge->Text = gcnew String(to_string(active_user.age).c_str());
		}

		Void browseBtn_Click(Object^ sender, EventArgs^ e) {
			resetView();
			this->roomsPanel->Visible = true;
			this->searchPanel->Visible = true;
		}

		Void searchBtn_Click(Object^ sender, EventArgs^ e) {
			int roomType = this->searchRoomType->SelectedIndex + 1;
			int from = Main::convertDayTimeToInt(this->searchFrom->SelectedIndex + 1);
			int to = Main::convertDayTimeToInt(this->searchTo->SelectedIndex + 1);

			search(roomType, from, to);
		}

		Void resetSearchBtn_Click(Object^ sender, EventArgs^ e) {
			this->searchRoomType->SelectedIndex = -1;
			this->searchFrom->SelectedIndex = -1;
			this->searchTo->SelectedIndex = -1;
			DisplayRoomsData(rooms, numRooms);
		}

		Void search(int roomType, int from, int to)
		{
			if (from > to)
			{
				swap(from, to);
			}

			if (from != 0 && to == 0 || from == 0 && to != 0)
			{
				MessageBox::Show("Invalid Input, Please Provide Valid From & To", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Exit the function early
			}

			std::pair<Room*, int> result = Main::searchRooms(roomType, from, to);

			DisplayRoomsData(result.first, result.second);

			delete[] result.first;
		}

		Void CancelBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ cancelButton = dynamic_cast<Button^>(sender);
			if (cancelButton != nullptr)
			{
				String^ bookingId = dynamic_cast<String^>(cancelButton->Tag);
				if (bookingId != nullptr)
				{
					std::string bookingIdStr = msclr::interop::marshal_as<std::string>(bookingId);

					// Ask the user for confirmation before canceling the booking
					Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to cancel this booking?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (result == Windows::Forms::DialogResult::Yes)
					{
						if (Main::cancelBooking(bookingIdStr))
						{
							MessageBox::Show("Booking canceled successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						else
						{
							MessageBox::Show("Failed to cancel booking.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						resetView();
						this->homePanel->Visible = true;
						DisplayBookings();
					}
				}
			}
		}

		Void reserveButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ reserveButton = dynamic_cast<Button^>(sender);
			if (reserveButton != nullptr)
			{
				String^ roomId = dynamic_cast<String^>(reserveButton->Tag);
				if (roomId != nullptr)
				{
					BookingForm^ bookingDialog = gcnew BookingForm(roomId, false, 0, 0);
					bookingDialog->ShowDialog(); // Show as modal dialog
					if (bookingDialog->WasSubmitted())
					{
						resetView();
						this->homePanel->Visible = true;
						DisplayBookings();
					}
				}
			}
		}
};
}
