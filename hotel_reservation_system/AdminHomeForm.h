#pragma once
#include "LoginForm.h"
#include "Main.h"
#include "BookingForm.h"
#include "ModifyRoom.h"
#include "RoomSchedule.h"

namespace hotelreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminHomeForm
	/// </summary>
	public ref class AdminHomeForm : public System::Windows::Forms::Form
	{
	public:
		AdminHomeForm(void)
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
		~AdminHomeForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^ controlPanel;
	private: System::Windows::Forms::Button^ dashboardBtn;

	private: System::Windows::Forms::Button^ logoutBtn;

	private: System::Windows::Forms::Button^ browseBtn;
	private: System::Windows::Forms::Button^ addRoomPanelBtn;
	private: System::Windows::Forms::Button^ profileBtn;

	private: System::Windows::Forms::Panel^ addRoomPanel;
	private: System::Windows::Forms::Label^ roomTypeLabel;

	private: System::Windows::Forms::Label^ roomNumberLabel;

	private: System::Windows::Forms::ComboBox^ addRoomType;

	private: System::Windows::Forms::Button^ addRoomSubmit;

	private: System::Windows::Forms::Label^ floorLabel;
	private: System::Windows::Forms::NumericUpDown^ addRoomNumber;

	private: System::Windows::Forms::NumericUpDown^ addRoomPrice;


	private: System::Windows::Forms::Label^ priceLabel;
	private: System::Windows::Forms::NumericUpDown^ addRoomFloor;
	private: System::Windows::Forms::Label^ priceTagLabel;
	private: System::Windows::Forms::Label^ addRoomDescriptionLabel;
	private: System::Windows::Forms::TextBox^ addRoomDescription;

	private: System::Windows::Forms::Label^ welcomeMsg;
	private: System::Windows::Forms::Panel^ searchPanel;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ searchFrom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::ComboBox^ searchRoomType;

	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ resetSearchBtn;
private: System::Windows::Forms::ComboBox^ searchTo;
private: System::Windows::Forms::Panel^ browsePanel;

private: System::Windows::Forms::Label^ noRoomsLabel;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ dashboardPanel;
	private: System::Windows::Forms::Label^ dashboardCancels;


	private: System::Windows::Forms::Label^ dashboardUsers;
	private: System::Windows::Forms::Label^ dashboardBookings;


	private: System::Windows::Forms::Label^ dashboardRooms;
	private: System::Windows::Forms::Label^ cancelsLabel;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ profilePanel;
	private: System::Windows::Forms::Label^ profileName;
	private: System::Windows::Forms::Label^ profileNameLabel;
	private: System::Windows::Forms::Label^ profilePhone;
	private: System::Windows::Forms::Label^ profileAge;
	private: System::Windows::Forms::Label^ profilePhoneLabel;
	private: System::Windows::Forms::Label^ profileAgeLabel;
	private: System::Windows::Forms::Label^ profileEmail;
	private: System::Windows::Forms::Label^ profileUsername;
	private: System::Windows::Forms::Label^ profileEmailLabel;
	private: System::Windows::Forms::Label^ profileUsernameLabel;
	private: System::Windows::Forms::Panel^ searchBookingsPanel;
	private: System::Windows::Forms::ComboBox^ searchBookingTo;
	private: System::Windows::Forms::Button^ resetBookingSearch;



	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::ComboBox^ searchBookingFrom;

	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ searchBookingBtn;



	private: System::Windows::Forms::Label^ noBookingsLabel;
private: System::Windows::Forms::Panel^ bookingsPanel;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::NumericUpDown^ searchRoomNo;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ bookingsBtn;
private: System::Windows::Forms::Button^ addAdminBtn;
private: System::Windows::Forms::Panel^ registerAdminPanel;

private: System::Windows::Forms::TextBox^ registerAdminName;

private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ registerAdminPhone;
private: System::Windows::Forms::NumericUpDown^ registerAdminAge;


private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ registerAdminEmail;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ registerAdminPassword;

private: System::Windows::Forms::TextBox^ registerAdminUsername;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ registerAdminBtn;























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminHomeForm::typeid));
			this->controlPanel = (gcnew System::Windows::Forms::Panel());
			this->addAdminBtn = (gcnew System::Windows::Forms::Button());
			this->bookingsBtn = (gcnew System::Windows::Forms::Button());
			this->profileBtn = (gcnew System::Windows::Forms::Button());
			this->addRoomPanelBtn = (gcnew System::Windows::Forms::Button());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->logoutBtn = (gcnew System::Windows::Forms::Button());
			this->dashboardBtn = (gcnew System::Windows::Forms::Button());
			this->addRoomPanel = (gcnew System::Windows::Forms::Panel());
			this->addRoomSubmit = (gcnew System::Windows::Forms::Button());
			this->addRoomDescriptionLabel = (gcnew System::Windows::Forms::Label());
			this->addRoomDescription = (gcnew System::Windows::Forms::TextBox());
			this->priceTagLabel = (gcnew System::Windows::Forms::Label());
			this->addRoomPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->priceLabel = (gcnew System::Windows::Forms::Label());
			this->addRoomFloor = (gcnew System::Windows::Forms::NumericUpDown());
			this->addRoomNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->floorLabel = (gcnew System::Windows::Forms::Label());
			this->addRoomType = (gcnew System::Windows::Forms::ComboBox());
			this->roomTypeLabel = (gcnew System::Windows::Forms::Label());
			this->roomNumberLabel = (gcnew System::Windows::Forms::Label());
			this->welcomeMsg = (gcnew System::Windows::Forms::Label());
			this->searchPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchTo = (gcnew System::Windows::Forms::ComboBox());
			this->resetSearchBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->searchFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->searchRoomType = (gcnew System::Windows::Forms::ComboBox());
			this->browsePanel = (gcnew System::Windows::Forms::Panel());
			this->noRoomsLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->dashboardCancels = (gcnew System::Windows::Forms::Label());
			this->dashboardUsers = (gcnew System::Windows::Forms::Label());
			this->dashboardBookings = (gcnew System::Windows::Forms::Label());
			this->dashboardRooms = (gcnew System::Windows::Forms::Label());
			this->cancelsLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->searchBookingsPanel = (gcnew System::Windows::Forms::Panel());
			this->searchRoomNo = (gcnew System::Windows::Forms::NumericUpDown());
			this->searchBookingTo = (gcnew System::Windows::Forms::ComboBox());
			this->resetBookingSearch = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->searchBookingFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->searchBookingBtn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->noBookingsLabel = (gcnew System::Windows::Forms::Label());
			this->bookingsPanel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->registerAdminPanel = (gcnew System::Windows::Forms::Panel());
			this->registerAdminName = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->registerAdminPhone = (gcnew System::Windows::Forms::TextBox());
			this->registerAdminAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->registerAdminEmail = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->registerAdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->registerAdminUsername = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->registerAdminBtn = (gcnew System::Windows::Forms::Button());
			this->controlPanel->SuspendLayout();
			this->addRoomPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addRoomPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addRoomFloor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addRoomNumber))->BeginInit();
			this->searchPanel->SuspendLayout();
			this->browsePanel->SuspendLayout();
			this->dashboardPanel->SuspendLayout();
			this->profilePanel->SuspendLayout();
			this->searchBookingsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchRoomNo))->BeginInit();
			this->bookingsPanel->SuspendLayout();
			this->registerAdminPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->registerAdminAge))->BeginInit();
			this->SuspendLayout();
			// 
			// controlPanel
			// 
			this->controlPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->controlPanel->Controls->Add(this->addAdminBtn);
			this->controlPanel->Controls->Add(this->bookingsBtn);
			this->controlPanel->Controls->Add(this->profileBtn);
			this->controlPanel->Controls->Add(this->addRoomPanelBtn);
			this->controlPanel->Controls->Add(this->browseBtn);
			this->controlPanel->Controls->Add(this->logoutBtn);
			this->controlPanel->Controls->Add(this->dashboardBtn);
			this->controlPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->controlPanel->Location = System::Drawing::Point(8, 55);
			this->controlPanel->Name = L"controlPanel";
			this->controlPanel->Size = System::Drawing::Size(121, 387);
			this->controlPanel->TabIndex = 3;
			// 
			// addAdminBtn
			// 
			this->addAdminBtn->BackColor = System::Drawing::SystemColors::Window;
			this->addAdminBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->addAdminBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addAdminBtn.Image")));
			this->addAdminBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addAdminBtn->Location = System::Drawing::Point(0, 275);
			this->addAdminBtn->Name = L"addAdminBtn";
			this->addAdminBtn->Size = System::Drawing::Size(121, 55);
			this->addAdminBtn->TabIndex = 8;
			this->addAdminBtn->Text = L" Add Admin";
			this->addAdminBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addAdminBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->addAdminBtn->UseVisualStyleBackColor = false;
			this->addAdminBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::addAdminBtn_Click);
			// 
			// bookingsBtn
			// 
			this->bookingsBtn->BackColor = System::Drawing::SystemColors::Window;
			this->bookingsBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->bookingsBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bookingsBtn.Image")));
			this->bookingsBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bookingsBtn->Location = System::Drawing::Point(0, 220);
			this->bookingsBtn->Name = L"bookingsBtn";
			this->bookingsBtn->Size = System::Drawing::Size(121, 55);
			this->bookingsBtn->TabIndex = 7;
			this->bookingsBtn->Text = L" Bookings";
			this->bookingsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bookingsBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->bookingsBtn->UseVisualStyleBackColor = false;
			this->bookingsBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::bookingsBtn_click);
			// 
			// profileBtn
			// 
			this->profileBtn->BackColor = System::Drawing::SystemColors::Window;
			this->profileBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->profileBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileBtn.Image")));
			this->profileBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->profileBtn->Location = System::Drawing::Point(0, 165);
			this->profileBtn->Name = L"profileBtn";
			this->profileBtn->Size = System::Drawing::Size(121, 55);
			this->profileBtn->TabIndex = 6;
			this->profileBtn->Text = L"     Profile";
			this->profileBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->profileBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->profileBtn->UseVisualStyleBackColor = false;
			this->profileBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::profileBtn_Click);
			// 
			// addRoomPanelBtn
			// 
			this->addRoomPanelBtn->BackColor = System::Drawing::SystemColors::Window;
			this->addRoomPanelBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->addRoomPanelBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addRoomPanelBtn.Image")));
			this->addRoomPanelBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addRoomPanelBtn->Location = System::Drawing::Point(0, 110);
			this->addRoomPanelBtn->Name = L"addRoomPanelBtn";
			this->addRoomPanelBtn->Size = System::Drawing::Size(121, 55);
			this->addRoomPanelBtn->TabIndex = 5;
			this->addRoomPanelBtn->Text = L" Add Room";
			this->addRoomPanelBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addRoomPanelBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->addRoomPanelBtn->UseVisualStyleBackColor = false;
			this->addRoomPanelBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::addRoomPanelBtn_Click);
			// 
			// browseBtn
			// 
			this->browseBtn->BackColor = System::Drawing::SystemColors::Window;
			this->browseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->browseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browseBtn.Image")));
			this->browseBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->browseBtn->Location = System::Drawing::Point(0, 55);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(121, 55);
			this->browseBtn->TabIndex = 5;
			this->browseBtn->Text = L"    Browse";
			this->browseBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->browseBtn->UseVisualStyleBackColor = false;
			this->browseBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::browseBtn_Click);
			// 
			// logoutBtn
			// 
			this->logoutBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->logoutBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutBtn.Image")));
			this->logoutBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->logoutBtn->Location = System::Drawing::Point(0, 333);
			this->logoutBtn->Name = L"logoutBtn";
			this->logoutBtn->Size = System::Drawing::Size(121, 54);
			this->logoutBtn->TabIndex = 0;
			this->logoutBtn->Text = L"    Logout";
			this->logoutBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->logoutBtn->UseVisualStyleBackColor = true;
			this->logoutBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::logoutBtn_Click);
			// 
			// dashboardBtn
			// 
			this->dashboardBtn->BackColor = System::Drawing::SystemColors::HighlightText;
			this->dashboardBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->dashboardBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dashboardBtn.Image")));
			this->dashboardBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->dashboardBtn->Location = System::Drawing::Point(0, 0);
			this->dashboardBtn->Name = L"dashboardBtn";
			this->dashboardBtn->Size = System::Drawing::Size(121, 55);
			this->dashboardBtn->TabIndex = 0;
			this->dashboardBtn->Text = L" Dashboard";
			this->dashboardBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->dashboardBtn->UseVisualStyleBackColor = false;
			this->dashboardBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::dashboardBtnClick);
			// 
			// addRoomPanel
			// 
			this->addRoomPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addRoomPanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->addRoomPanel->Controls->Add(this->addRoomSubmit);
			this->addRoomPanel->Controls->Add(this->addRoomDescriptionLabel);
			this->addRoomPanel->Controls->Add(this->addRoomDescription);
			this->addRoomPanel->Controls->Add(this->priceTagLabel);
			this->addRoomPanel->Controls->Add(this->addRoomPrice);
			this->addRoomPanel->Controls->Add(this->priceLabel);
			this->addRoomPanel->Controls->Add(this->addRoomFloor);
			this->addRoomPanel->Controls->Add(this->addRoomNumber);
			this->addRoomPanel->Controls->Add(this->floorLabel);
			this->addRoomPanel->Controls->Add(this->addRoomType);
			this->addRoomPanel->Controls->Add(this->roomTypeLabel);
			this->addRoomPanel->Controls->Add(this->roomNumberLabel);
			this->addRoomPanel->Location = System::Drawing::Point(135, 55);
			this->addRoomPanel->Name = L"addRoomPanel";
			this->addRoomPanel->Size = System::Drawing::Size(626, 415);
			this->addRoomPanel->TabIndex = 4;
			this->addRoomPanel->Visible = false;
			// 
			// addRoomSubmit
			// 
			this->addRoomSubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addRoomSubmit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addRoomSubmit->Location = System::Drawing::Point(521, 372);
			this->addRoomSubmit->Name = L"addRoomSubmit";
			this->addRoomSubmit->Size = System::Drawing::Size(96, 39);
			this->addRoomSubmit->TabIndex = 15;
			this->addRoomSubmit->Text = L"Submit";
			this->addRoomSubmit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->addRoomSubmit->UseVisualStyleBackColor = true;
			this->addRoomSubmit->Click += gcnew System::EventHandler(this, &AdminHomeForm::addRoomSubmit_Click);
			// 
			// addRoomDescriptionLabel
			// 
			this->addRoomDescriptionLabel->AutoSize = true;
			this->addRoomDescriptionLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addRoomDescriptionLabel->Location = System::Drawing::Point(12, 156);
			this->addRoomDescriptionLabel->Name = L"addRoomDescriptionLabel";
			this->addRoomDescriptionLabel->Size = System::Drawing::Size(100, 23);
			this->addRoomDescriptionLabel->TabIndex = 24;
			this->addRoomDescriptionLabel->Text = L"Description:";
			// 
			// addRoomDescription
			// 
			this->addRoomDescription->Location = System::Drawing::Point(16, 198);
			this->addRoomDescription->Multiline = true;
			this->addRoomDescription->Name = L"addRoomDescription";
			this->addRoomDescription->Size = System::Drawing::Size(365, 181);
			this->addRoomDescription->TabIndex = 23;
			// 
			// priceTagLabel
			// 
			this->priceTagLabel->AutoSize = true;
			this->priceTagLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceTagLabel->Location = System::Drawing::Point(374, 110);
			this->priceTagLabel->Name = L"priceTagLabel";
			this->priceTagLabel->Size = System::Drawing::Size(74, 17);
			this->priceTagLabel->TabIndex = 22;
			this->priceTagLabel->Text = L"*per period ";
			// 
			// addRoomPrice
			// 
			this->addRoomPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRoomPrice->Location = System::Drawing::Point(223, 110);
			this->addRoomPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->addRoomPrice->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->addRoomPrice->Name = L"addRoomPrice";
			this->addRoomPrice->Size = System::Drawing::Size(145, 30);
			this->addRoomPrice->TabIndex = 21;
			this->addRoomPrice->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// priceLabel
			// 
			this->priceLabel->AutoSize = true;
			this->priceLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->priceLabel->Location = System::Drawing::Point(208, 86);
			this->priceLabel->Name = L"priceLabel";
			this->priceLabel->Size = System::Drawing::Size(56, 23);
			this->priceLabel->TabIndex = 20;
			this->priceLabel->Text = L"Price: ";
			// 
			// addRoomFloor
			// 
			this->addRoomFloor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRoomFloor->Location = System::Drawing::Point(27, 110);
			this->addRoomFloor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->addRoomFloor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->addRoomFloor->Name = L"addRoomFloor";
			this->addRoomFloor->Size = System::Drawing::Size(145, 30);
			this->addRoomFloor->TabIndex = 19;
			this->addRoomFloor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// addRoomNumber
			// 
			this->addRoomNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRoomNumber->Location = System::Drawing::Point(27, 41);
			this->addRoomNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->addRoomNumber->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->addRoomNumber->Name = L"addRoomNumber";
			this->addRoomNumber->Size = System::Drawing::Size(145, 30);
			this->addRoomNumber->TabIndex = 18;
			this->addRoomNumber->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// floorLabel
			// 
			this->floorLabel->AutoSize = true;
			this->floorLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->floorLabel->Location = System::Drawing::Point(12, 84);
			this->floorLabel->Name = L"floorLabel";
			this->floorLabel->Size = System::Drawing::Size(59, 23);
			this->floorLabel->TabIndex = 16;
			this->floorLabel->Text = L"Floor: ";
			// 
			// addRoomType
			// 
			this->addRoomType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->addRoomType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRoomType->FormattingEnabled = true;
			this->addRoomType->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Single", L"Double", L"Triple", L"Quad", L"Connecting",
					L"Deluxe", L"Suite", L"Junior Suite", L"Studio"
			});
			this->addRoomType->Location = System::Drawing::Point(223, 40);
			this->addRoomType->Name = L"addRoomType";
			this->addRoomType->Size = System::Drawing::Size(146, 31);
			this->addRoomType->TabIndex = 14;
			// 
			// roomTypeLabel
			// 
			this->roomTypeLabel->AutoSize = true;
			this->roomTypeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeLabel->Location = System::Drawing::Point(204, 14);
			this->roomTypeLabel->Name = L"roomTypeLabel";
			this->roomTypeLabel->Size = System::Drawing::Size(55, 23);
			this->roomTypeLabel->TabIndex = 8;
			this->roomTypeLabel->Text = L"Type: ";
			// 
			// roomNumberLabel
			// 
			this->roomNumberLabel->AutoSize = true;
			this->roomNumberLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNumberLabel->Location = System::Drawing::Point(12, 15);
			this->roomNumberLabel->Name = L"roomNumberLabel";
			this->roomNumberLabel->Size = System::Drawing::Size(134, 23);
			this->roomNumberLabel->TabIndex = 0;
			this->roomNumberLabel->Text = L"Room Number: ";
			// 
			// welcomeMsg
			// 
			this->welcomeMsg->AutoSize = true;
			this->welcomeMsg->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->welcomeMsg->Location = System::Drawing::Point(10, 14);
			this->welcomeMsg->Name = L"welcomeMsg";
			this->welcomeMsg->Size = System::Drawing::Size(0, 28);
			this->welcomeMsg->TabIndex = 1;
			// 
			// searchPanel
			// 
			this->searchPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchPanel->Controls->Add(this->label1);
			this->searchPanel->Controls->Add(this->searchTo);
			this->searchPanel->Controls->Add(this->resetSearchBtn);
			this->searchPanel->Controls->Add(this->label4);
			this->searchPanel->Controls->Add(this->searchFrom);
			this->searchPanel->Controls->Add(this->label3);
			this->searchPanel->Controls->Add(this->searchBtn);
			this->searchPanel->Controls->Add(this->searchRoomType);
			this->searchPanel->Location = System::Drawing::Point(0, 0);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(772, 45);
			this->searchPanel->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Type: ";
			// 
			// searchTo
			// 
			this->searchTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchTo->DropDownWidth = 150;
			this->searchTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTo->FormattingEnabled = true;
			this->searchTo->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon", L"Saturday, Evening",
					L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon", L"Monday, Evening", L"Tuesday, Morning",
					L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon", L"Wednesday, Evening", L"Thursday, Morning",
					L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon", L"Friday, Evening"
			});
			this->searchTo->Location = System::Drawing::Point(424, 9);
			this->searchTo->Name = L"searchTo";
			this->searchTo->Size = System::Drawing::Size(144, 28);
			this->searchTo->TabIndex = 33;
			// 
			// resetSearchBtn
			// 
			this->resetSearchBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->resetSearchBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->resetSearchBtn->Location = System::Drawing::Point(608, 0);
			this->resetSearchBtn->Margin = System::Windows::Forms::Padding(26, 30, 26, 30);
			this->resetSearchBtn->Name = L"resetSearchBtn";
			this->resetSearchBtn->Size = System::Drawing::Size(82, 45);
			this->resetSearchBtn->TabIndex = 32;
			this->resetSearchBtn->Text = L"Reset";
			this->resetSearchBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->resetSearchBtn->UseVisualStyleBackColor = true;
			this->resetSearchBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::resetSearchBtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(390, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"To: ";
			// 
			// searchFrom
			// 
			this->searchFrom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchFrom->DropDownWidth = 150;
			this->searchFrom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchFrom->FormattingEnabled = true;
			this->searchFrom->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon",
					L"Saturday, Evening", L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon",
					L"Monday, Evening", L"Tuesday, Morning", L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon",
					L"Wednesday, Evening", L"Thursday, Morning", L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon",
					L"Friday, Evening"
			});
			this->searchFrom->Location = System::Drawing::Point(240, 9);
			this->searchFrom->Name = L"searchFrom";
			this->searchFrom->Size = System::Drawing::Size(145, 28);
			this->searchFrom->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(191, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"From: ";
			// 
			// searchBtn
			// 
			this->searchBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->searchBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchBtn->Location = System::Drawing::Point(690, 0);
			this->searchBtn->Margin = System::Windows::Forms::Padding(26, 30, 26, 30);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(82, 45);
			this->searchBtn->TabIndex = 25;
			this->searchBtn->Text = L"Search";
			this->searchBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::searchBtn_Click);
			// 
			// searchRoomType
			// 
			this->searchRoomType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchRoomType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchRoomType->FormattingEnabled = true;
			this->searchRoomType->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Single", L"Double", L"Triple", L"Quad",
					L"Connecting", L"Deluxe", L"Suite", L"Junior Suite", L"Studio"
			});
			this->searchRoomType->Location = System::Drawing::Point(54, 10);
			this->searchRoomType->Name = L"searchRoomType";
			this->searchRoomType->Size = System::Drawing::Size(130, 28);
			this->searchRoomType->TabIndex = 23;
			// 
			// browsePanel
			// 
			this->browsePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->browsePanel->AutoScroll = true;
			this->browsePanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->browsePanel->Controls->Add(this->noRoomsLabel);
			this->browsePanel->Controls->Add(this->flowLayoutPanel2);
			this->browsePanel->Location = System::Drawing::Point(134, 55);
			this->browsePanel->Name = L"browsePanel";
			this->browsePanel->Size = System::Drawing::Size(627, 415);
			this->browsePanel->TabIndex = 28;
			// 
			// noRoomsLabel
			// 
			this->noRoomsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->noRoomsLabel->AutoSize = true;
			this->noRoomsLabel->Location = System::Drawing::Point(238, 156);
			this->noRoomsLabel->Name = L"noRoomsLabel";
			this->noRoomsLabel->Size = System::Drawing::Size(127, 17);
			this->noRoomsLabel->TabIndex = 1;
			this->noRoomsLabel->Text = L"No Rooms Available";
			this->noRoomsLabel->Visible = false;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(492, 322);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(175, 100);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// dashboardPanel
			// 
			this->dashboardPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dashboardPanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->dashboardPanel->Controls->Add(this->dashboardCancels);
			this->dashboardPanel->Controls->Add(this->dashboardUsers);
			this->dashboardPanel->Controls->Add(this->dashboardBookings);
			this->dashboardPanel->Controls->Add(this->dashboardRooms);
			this->dashboardPanel->Controls->Add(this->cancelsLabel);
			this->dashboardPanel->Controls->Add(this->label6);
			this->dashboardPanel->Controls->Add(this->label5);
			this->dashboardPanel->Controls->Add(this->label2);
			this->dashboardPanel->Location = System::Drawing::Point(134, 55);
			this->dashboardPanel->Name = L"dashboardPanel";
			this->dashboardPanel->Size = System::Drawing::Size(626, 415);
			this->dashboardPanel->TabIndex = 25;
			this->dashboardPanel->Visible = false;
			// 
			// dashboardCancels
			// 
			this->dashboardCancels->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dashboardCancels->AutoSize = true;
			this->dashboardCancels->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboardCancels->Location = System::Drawing::Point(440, 286);
			this->dashboardCancels->Name = L"dashboardCancels";
			this->dashboardCancels->Size = System::Drawing::Size(0, 23);
			this->dashboardCancels->TabIndex = 5;
			// 
			// dashboardUsers
			// 
			this->dashboardUsers->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dashboardUsers->AutoSize = true;
			this->dashboardUsers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboardUsers->Location = System::Drawing::Point(135, 290);
			this->dashboardUsers->Name = L"dashboardUsers";
			this->dashboardUsers->Size = System::Drawing::Size(0, 23);
			this->dashboardUsers->TabIndex = 5;
			// 
			// dashboardBookings
			// 
			this->dashboardBookings->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dashboardBookings->AutoSize = true;
			this->dashboardBookings->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboardBookings->Location = System::Drawing::Point(442, 95);
			this->dashboardBookings->Name = L"dashboardBookings";
			this->dashboardBookings->Size = System::Drawing::Size(0, 23);
			this->dashboardBookings->TabIndex = 4;
			// 
			// dashboardRooms
			// 
			this->dashboardRooms->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dashboardRooms->AutoSize = true;
			this->dashboardRooms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboardRooms->Location = System::Drawing::Point(136, 99);
			this->dashboardRooms->Name = L"dashboardRooms";
			this->dashboardRooms->Size = System::Drawing::Size(0, 23);
			this->dashboardRooms->TabIndex = 4;
			// 
			// cancelsLabel
			// 
			this->cancelsLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cancelsLabel->AutoSize = true;
			this->cancelsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelsLabel->Location = System::Drawing::Point(402, 249);
			this->cancelsLabel->Name = L"cancelsLabel";
			this->cancelsLabel->Size = System::Drawing::Size(94, 31);
			this->cancelsLabel->TabIndex = 3;
			this->cancelsLabel->Text = L"Cancels";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(108, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 31);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Users";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(397, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 31);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Bookings";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(104, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Rooms";
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
			this->profilePanel->Size = System::Drawing::Size(627, 415);
			this->profilePanel->TabIndex = 29;
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
			// searchBookingsPanel
			// 
			this->searchBookingsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchBookingsPanel->Controls->Add(this->searchRoomNo);
			this->searchBookingsPanel->Controls->Add(this->searchBookingTo);
			this->searchBookingsPanel->Controls->Add(this->resetBookingSearch);
			this->searchBookingsPanel->Controls->Add(this->label7);
			this->searchBookingsPanel->Controls->Add(this->searchBookingFrom);
			this->searchBookingsPanel->Controls->Add(this->label8);
			this->searchBookingsPanel->Controls->Add(this->searchBookingBtn);
			this->searchBookingsPanel->Controls->Add(this->label9);
			this->searchBookingsPanel->Location = System::Drawing::Point(0, 0);
			this->searchBookingsPanel->Name = L"searchBookingsPanel";
			this->searchBookingsPanel->Size = System::Drawing::Size(772, 45);
			this->searchBookingsPanel->TabIndex = 31;
			// 
			// searchRoomNo
			// 
			this->searchRoomNo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchRoomNo->Location = System::Drawing::Point(86, 10);
			this->searchRoomNo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->searchRoomNo->Name = L"searchRoomNo";
			this->searchRoomNo->Size = System::Drawing::Size(113, 27);
			this->searchRoomNo->TabIndex = 34;
			// 
			// searchBookingTo
			// 
			this->searchBookingTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchBookingTo->DropDownWidth = 150;
			this->searchBookingTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchBookingTo->FormattingEnabled = true;
			this->searchBookingTo->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon",
					L"Saturday, Evening", L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon",
					L"Monday, Evening", L"Tuesday, Morning", L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon",
					L"Wednesday, Evening", L"Thursday, Morning", L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon",
					L"Friday, Evening"
			});
			this->searchBookingTo->Location = System::Drawing::Point(440, 9);
			this->searchBookingTo->Name = L"searchBookingTo";
			this->searchBookingTo->Size = System::Drawing::Size(126, 28);
			this->searchBookingTo->TabIndex = 33;
			// 
			// resetBookingSearch
			// 
			this->resetBookingSearch->Dock = System::Windows::Forms::DockStyle::Right;
			this->resetBookingSearch->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->resetBookingSearch->Location = System::Drawing::Point(608, 0);
			this->resetBookingSearch->Margin = System::Windows::Forms::Padding(26, 30, 26, 30);
			this->resetBookingSearch->Name = L"resetBookingSearch";
			this->resetBookingSearch->Size = System::Drawing::Size(82, 45);
			this->resetBookingSearch->TabIndex = 32;
			this->resetBookingSearch->Text = L"Reset";
			this->resetBookingSearch->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->resetBookingSearch->UseVisualStyleBackColor = true;
			this->resetBookingSearch->Click += gcnew System::EventHandler(this, &AdminHomeForm::resetBookingSearch_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(413, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 20);
			this->label7->TabIndex = 28;
			this->label7->Text = L"To: ";
			// 
			// searchBookingFrom
			// 
			this->searchBookingFrom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->searchBookingFrom->DropDownWidth = 150;
			this->searchBookingFrom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchBookingFrom->FormattingEnabled = true;
			this->searchBookingFrom->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon",
					L"Saturday, Evening", L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon",
					L"Monday, Evening", L"Tuesday, Morning", L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon",
					L"Wednesday, Evening", L"Thursday, Morning", L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon",
					L"Friday, Evening"
			});
			this->searchBookingFrom->Location = System::Drawing::Point(258, 9);
			this->searchBookingFrom->Name = L"searchBookingFrom";
			this->searchBookingFrom->Size = System::Drawing::Size(127, 28);
			this->searchBookingFrom->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(216, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 20);
			this->label8->TabIndex = 26;
			this->label8->Text = L"From: ";
			// 
			// searchBookingBtn
			// 
			this->searchBookingBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->searchBookingBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchBookingBtn->Location = System::Drawing::Point(690, 0);
			this->searchBookingBtn->Margin = System::Windows::Forms::Padding(26, 30, 26, 30);
			this->searchBookingBtn->Name = L"searchBookingBtn";
			this->searchBookingBtn->Size = System::Drawing::Size(82, 45);
			this->searchBookingBtn->TabIndex = 25;
			this->searchBookingBtn->Text = L"Search";
			this->searchBookingBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->searchBookingBtn->UseVisualStyleBackColor = true;
			this->searchBookingBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::searchBookingsBtn_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Room No: ";
			// 
			// noBookingsLabel
			// 
			this->noBookingsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->noBookingsLabel->AutoSize = true;
			this->noBookingsLabel->Location = System::Drawing::Point(249, 169);
			this->noBookingsLabel->Name = L"noBookingsLabel";
			this->noBookingsLabel->Size = System::Drawing::Size(108, 17);
			this->noBookingsLabel->TabIndex = 1;
			this->noBookingsLabel->Text = L"No Bookings Yet";
			this->noBookingsLabel->Visible = false;
			// 
			// bookingsPanel
			// 
			this->bookingsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookingsPanel->AutoScroll = true;
			this->bookingsPanel->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->bookingsPanel->Controls->Add(this->noBookingsLabel);
			this->bookingsPanel->Controls->Add(this->flowLayoutPanel1);
			this->bookingsPanel->Location = System::Drawing::Point(134, 55);
			this->bookingsPanel->Name = L"bookingsPanel";
			this->bookingsPanel->Size = System::Drawing::Size(627, 415);
			this->bookingsPanel->TabIndex = 30;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(492, 322);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(175, 100);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// registerAdminPanel
			// 
			this->registerAdminPanel->Controls->Add(this->registerAdminName);
			this->registerAdminPanel->Controls->Add(this->label10);
			this->registerAdminPanel->Controls->Add(this->registerAdminPhone);
			this->registerAdminPanel->Controls->Add(this->registerAdminAge);
			this->registerAdminPanel->Controls->Add(this->label11);
			this->registerAdminPanel->Controls->Add(this->label12);
			this->registerAdminPanel->Controls->Add(this->registerAdminEmail);
			this->registerAdminPanel->Controls->Add(this->label13);
			this->registerAdminPanel->Controls->Add(this->registerAdminPassword);
			this->registerAdminPanel->Controls->Add(this->registerAdminUsername);
			this->registerAdminPanel->Controls->Add(this->label14);
			this->registerAdminPanel->Controls->Add(this->label15);
			this->registerAdminPanel->Controls->Add(this->registerAdminBtn);
			this->registerAdminPanel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAdminPanel->Location = System::Drawing::Point(134, 55);
			this->registerAdminPanel->Name = L"registerAdminPanel";
			this->registerAdminPanel->Size = System::Drawing::Size(627, 411);
			this->registerAdminPanel->TabIndex = 32;
			// 
			// registerAdminName
			// 
			this->registerAdminName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerAdminName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAdminName->Location = System::Drawing::Point(422, 55);
			this->registerAdminName->MaxLength = 100;
			this->registerAdminName->Name = L"registerAdminName";
			this->registerAdminName->Size = System::Drawing::Size(193, 30);
			this->registerAdminName->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(331, 59);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 26);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Name";
			// 
			// registerAdminPhone
			// 
			this->registerAdminPhone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerAdminPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAdminPhone->Location = System::Drawing::Point(136, 180);
			this->registerAdminPhone->MaxLength = 100;
			this->registerAdminPhone->Name = L"registerAdminPhone";
			this->registerAdminPhone->Size = System::Drawing::Size(172, 30);
			this->registerAdminPhone->TabIndex = 17;
			// 
			// registerAdminAge
			// 
			this->registerAdminAge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAdminAge->Location = System::Drawing::Point(422, 116);
			this->registerAdminAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->registerAdminAge->Name = L"registerAdminAge";
			this->registerAdminAge->Size = System::Drawing::Size(192, 30);
			this->registerAdminAge->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(14, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 26);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Phone";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(331, 116);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 26);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Age";
			// 
			// registerAdminEmail
			// 
			this->registerAdminEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerAdminEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAdminEmail->Location = System::Drawing::Point(136, 235);
			this->registerAdminEmail->MaxLength = 100;
			this->registerAdminEmail->Name = L"registerAdminEmail";
			this->registerAdminEmail->Size = System::Drawing::Size(479, 30);
			this->registerAdminEmail->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(14, 239);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 26);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Email";
			// 
			// registerAdminPassword
			// 
			this->registerAdminPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerAdminPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerAdminPassword->Location = System::Drawing::Point(136, 120);
			this->registerAdminPassword->MaxLength = 100;
			this->registerAdminPassword->Name = L"registerAdminPassword";
			this->registerAdminPassword->PasswordChar = '*';
			this->registerAdminPassword->Size = System::Drawing::Size(172, 30);
			this->registerAdminPassword->TabIndex = 8;
			this->registerAdminPassword->UseSystemPasswordChar = true;
			// 
			// registerAdminUsername
			// 
			this->registerAdminUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->registerAdminUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerAdminUsername->Location = System::Drawing::Point(136, 57);
			this->registerAdminUsername->MaxLength = 100;
			this->registerAdminUsername->Name = L"registerAdminUsername";
			this->registerAdminUsername->Size = System::Drawing::Size(172, 30);
			this->registerAdminUsername->TabIndex = 9;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(14, 124);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(108, 26);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Password";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(14, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(113, 26);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Username";
			// 
			// registerAdminBtn
			// 
			this->registerAdminBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->registerAdminBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerAdminBtn->Location = System::Drawing::Point(244, 331);
			this->registerAdminBtn->Name = L"registerAdminBtn";
			this->registerAdminBtn->Size = System::Drawing::Size(125, 46);
			this->registerAdminBtn->TabIndex = 3;
			this->registerAdminBtn->Text = L"Register";
			this->registerAdminBtn->UseVisualStyleBackColor = true;
			this->registerAdminBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::registerAdminBtn_Click);
			// 
			// AdminHomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 478);
			this->Controls->Add(this->controlPanel);
			this->Controls->Add(this->welcomeMsg);
			this->Controls->Add(this->searchBookingsPanel);
			this->Controls->Add(this->searchPanel);
			this->Controls->Add(this->registerAdminPanel);
			this->Controls->Add(this->bookingsPanel);
			this->Controls->Add(this->addRoomPanel);
			this->Controls->Add(this->browsePanel);
			this->Controls->Add(this->profilePanel);
			this->Controls->Add(this->dashboardPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(790, 525);
			this->Name = L"AdminHomeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Reservation System";
			this->Load += gcnew System::EventHandler(this, &AdminHomeForm::AdminHomeForm_Load);
			this->controlPanel->ResumeLayout(false);
			this->addRoomPanel->ResumeLayout(false);
			this->addRoomPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addRoomPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addRoomFloor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addRoomNumber))->EndInit();
			this->searchPanel->ResumeLayout(false);
			this->searchPanel->PerformLayout();
			this->browsePanel->ResumeLayout(false);
			this->browsePanel->PerformLayout();
			this->dashboardPanel->ResumeLayout(false);
			this->dashboardPanel->PerformLayout();
			this->profilePanel->ResumeLayout(false);
			this->profilePanel->PerformLayout();
			this->searchBookingsPanel->ResumeLayout(false);
			this->searchBookingsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchRoomNo))->EndInit();
			this->bookingsPanel->ResumeLayout(false);
			this->bookingsPanel->PerformLayout();
			this->registerAdminPanel->ResumeLayout(false);
			this->registerAdminPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->registerAdminAge))->EndInit();
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

		System::Void resetView()
		{
			this->browsePanel->Visible = false;
			this->addRoomPanel->Visible = false;
			this->searchPanel->Visible = false;
			this->dashboardPanel->Visible = false;
			this->profilePanel->Visible = false;
			this->bookingsPanel->Visible = false;
			this->searchBookingsPanel->Visible = false;
			this->welcomeMsg->Visible = false;
			this->registerAdminPanel->Visible = false;
		}

		System::Void menuBtnClick(System::Object^ sender, System::EventArgs^ e) {
			if (this->controlPanel->Visible == true)
			{
				this->controlPanel->Visible = false;
			} else
			{
				this->controlPanel->Visible = true;
			}
		}

		System::Void dashboardBtnClick(System::Object^ sender, System::EventArgs^ e)
		{
			resetView();
			this->dashboardPanel->Visible = true;
			this->welcomeMsg->Visible = true;
		}

		System::Void logoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to logout?", "Confirmation", MessageBoxButtons::OKCancel);

			if (result == System::Windows::Forms::DialogResult::OK) {
				Main::logout();
				this->Close();
				action = 1;
			}
		}

	    System::Void AdminHomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
			this->welcomeMsg->Text = gcnew System::String(active_user.name.c_str());
			resetView();
			DisplayRoomsData(rooms, numRooms);
			DisplayBookings(bookings, numBookings);
			loadStatistics();
			loadProfile();
			this->welcomeMsg->Visible = true;
			this->dashboardPanel->Visible = true;
		}

		Void DisplayBookings(Booking* userBookings, int numberOfBookings)
		{
			this->bookingsPanel->Controls->Clear();

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
					bookingPanel->Size = System::Drawing::Size(this->bookingsPanel->Width * 0.95, this->bookingsPanel->Height * 0.25);
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
						Button^ modifyBtn = gcnew Button();
						modifyBtn->Text = "Modify";
						modifyBtn->Size = Drawing::Size(100, 25);
						modifyBtn->Location = Point(bookingPanel->Width - modifyBtn->Width - 10, 10);
						modifyBtn->Anchor = AnchorStyles::Top | AnchorStyles::Right;
						modifyBtn->Tag = gcnew String(userBookings[i].id.c_str());
						modifyBtn->Click += gcnew EventHandler(this, &AdminHomeForm::ModifyBooking);

						// Create a button to reserve
						Button^ cancelBtn = gcnew Button();
						cancelBtn->Text = "Cancel";
						cancelBtn->Anchor = AnchorStyles::Top | AnchorStyles::Right;
						cancelBtn->Size = Drawing::Size(100, 25);
						cancelBtn->Location = Point(bookingPanel->Width - cancelBtn->Width - 10, 40);
						cancelBtn->Tag = gcnew String(userBookings[i].id.c_str());
						cancelBtn->Click += gcnew EventHandler(this, &AdminHomeForm::CancelBtn_Click);

						bookingPanel->Controls->Add(modifyBtn);
						bookingPanel->Controls->Add(cancelBtn);
					}
					else
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
					bookingPanel->Controls->Add(roomFloorLabel);
					bookingPanel->Controls->Add(priceLabel);


					// Add the room panel to the roomsPanel
					this->bookingsPanel->Controls->Add(bookingPanel);

					// Update the vertical position for the next UI element
					yPos += 110; // Adjust as needed
				}
			}			
		}

		System::Void DisplayRoomsData(Room* rooms, int numRooms)
		{
			this->browsePanel->Controls->Clear();

			if (numRooms == 0)
			{
				this->noRoomsLabel->Visible = true;
			}
			else
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
						roomPanel->Size = System::Drawing::Size(this->browsePanel->Width * 0.95, this->browsePanel->Height * 0.25); // Adjust size as needed
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

						Button^ modifyRoomBtn = gcnew Button();
						modifyRoomBtn->Text = "Modify";
						modifyRoomBtn->Anchor = AnchorStyles::Top | AnchorStyles::Right; // Anchor to top, right, and left
						modifyRoomBtn->Size = System::Drawing::Size(100, 25); // Adjust size as needed
						modifyRoomBtn->Location = Point(roomPanel->Width - modifyRoomBtn->Width - 10, 2); // Adjust location to fit all three buttons
						modifyRoomBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::ModifyButtonClick);
						String^ roomIdString = gcnew String(rooms[i].id.c_str());
						modifyRoomBtn->Tag = roomIdString;


						Button^ showDetailsButton = gcnew Button();
						showDetailsButton->Text = "Show Details";
						showDetailsButton->Size = System::Drawing::Size(100, 25); // Adjust size as needed
						showDetailsButton->Location = Point(roomPanel->Width - showDetailsButton->Width - 10, 27);
						showDetailsButton->Anchor = AnchorStyles::Top | AnchorStyles::Right; // Anchor to top, right, and left
						showDetailsButton->Tag = gcnew String(rooms[i].id.c_str()); // Store description in Tag
						showDetailsButton->Click += gcnew System::EventHandler(this, &AdminHomeForm::ShowDetailsButtonClick);

						// Create a button to reserve
						Button^ deleteRoomBtn = gcnew Button();
						deleteRoomBtn->Text = "Delete";
						deleteRoomBtn->Anchor = AnchorStyles::Top | AnchorStyles::Right; // Anchor to top, right, and left
						deleteRoomBtn->Size = System::Drawing::Size(100, 25); // Adjust size as needed
						deleteRoomBtn->Location = Point(roomPanel->Width - deleteRoomBtn->Width - 10, 52);
						deleteRoomBtn->Click += gcnew System::EventHandler(this, &AdminHomeForm::DeleteButtonClick);
						deleteRoomBtn->Tag = roomIdString;

						// Add labels and buttons to the room panel
						roomPanel->Controls->Add(roomNameLabel);
						roomPanel->Controls->Add(roomTypeLabel);
						roomPanel->Controls->Add(roomFloorLabel);
						roomPanel->Controls->Add(priceLabel);
						roomPanel->Controls->Add(showDetailsButton);
						roomPanel->Controls->Add(deleteRoomBtn);
						roomPanel->Controls->Add(modifyRoomBtn);

						// Add the room panel to the roomsPanel
						this->browsePanel->Controls->Add(roomPanel);

						// Update the vertical position for the next UI element
						yPos += 110; // Adjust as needed
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

		System::Void addRoomPanelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			resetView();
			this->addRoomPanel->Visible = true;
			this->welcomeMsg->Visible = true;
		}

		System::Void addRoomSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
			int roomNumber = Main::getNumericUpDownValue(this->addRoomNumber);
			int roomType = this->addRoomType->SelectedIndex + 1;
			int roomFloor = Main::getNumericUpDownValue(this->addRoomFloor);
			int roomPrice = Main::getNumericUpDownValue(this->addRoomPrice);
			String^ description = this->addRoomDescription->Text;

			for (int i = 0; i < numRooms; ++i) {
				if (rooms[i].info.roomNumber == roomNumber) {
					MessageBox::Show("Room number already exists. Please choose a different room number.", "Duplicate Room Number", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; // Exit the function early
				}
			}

			// If no room with the same number exists, proceed with adding the room
			Main::addRoom(roomNumber, roomType, roomFloor, roomPrice, msclr::interop::marshal_as<std::string>(description));
			loadStatistics();
			DisplayRoomsData(rooms, numRooms);
			MessageBox::Show("Room Added Successfully!", "Success", MessageBoxButtons::OK);
		}

		System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int roomType = this->searchRoomType->SelectedIndex + 1;
			int from = Main::convertDayTimeToInt(this->searchFrom->SelectedIndex + 1);
			int to = Main::convertDayTimeToInt(this->searchTo->SelectedIndex + 1);

			searchRooms(roomType, from, to);
		}

		System::Void searchBookingsBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int roomNumber = Main::getNumericUpDownValue(this->searchRoomNo);
			int from = Main::convertDayTimeToInt(this->searchBookingFrom->SelectedIndex + 1);
			int to = Main::convertDayTimeToInt(this->searchBookingTo->SelectedIndex + 1);
			
			searchBookings(roomNumber, from, to);
		}

		Void resetBookingSearch_Click(System::Object^ sender, System::EventArgs^ e) {
			this->searchRoomNo->Value = 0;
			this->searchBookingTo->SelectedIndex = -1;
			this->searchBookingFrom->SelectedIndex = -1;
			DisplayBookings(bookings, numBookings);
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
						this->bookingsPanel->Visible = true;
						this->searchBookingsPanel->Visible = true;
						DisplayBookings(bookings, numBookings);
					}
				}
			}
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
							loadStatistics();
						}
						else
						{
							MessageBox::Show("Failed to cancel booking.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						resetView();
						this->bookingsPanel->Visible = true;
						this->searchBookingsPanel->Visible = true;
						DisplayBookings(bookings, numBookings);
					}
				}
			}
		}

		System::Void browseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			resetView();
			this->searchPanel->Visible = true;
			this->browsePanel->Visible = true;
		}

		System::Void resetSearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			this->searchRoomType->SelectedIndex = -1;
			this->searchFrom->SelectedIndex = -1;
			this->searchTo->SelectedIndex = -1;
			DisplayRoomsData(rooms, numRooms);
		}

		System::Void DeleteButtonClick(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ deleteButton = dynamic_cast<Button^>(sender);
			if (deleteButton != nullptr)
			{
				// Retrieve the room ID from the Tag property
				String^ roomId = dynamic_cast<String^>(deleteButton->Tag);

				if (roomId != nullptr)
				{
					System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete room ? All the associated bookings will also be deleted!", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						if (Main::deleteRoom(msclr::interop::marshal_as<std::string>(roomId)))
						{
							MessageBox::Show("Room deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
							DisplayRoomsData(rooms, numRooms);
						}
						else
						{
							MessageBox::Show("Failed to delete room. Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
				}
			}
		}

		System::Void ModifyButtonClick(System::Object^ sender, System::EventArgs^ e)
		{
			Button^ modifyButton = dynamic_cast<Button^>(sender);
			if (modifyButton != nullptr)
			{
				String^ roomId = dynamic_cast<String^>(modifyButton->Tag);

				if (roomId != nullptr)
				{
					std::string roomIdStr = msclr::interop::marshal_as<std::string>(roomId);
						ModifyRoom^ modifyRoomForm = gcnew ModifyRoom(roomId);
						modifyRoomForm->ShowDialog(); // Show as modal dialog
						if (modifyRoomForm->WasSubmitted())
						{
							// Only update the room data if changes were made
							//DisplayRoomsData(rooms, numRooms);
							searchRooms(this->searchRoomType->SelectedIndex + 1, this->searchFrom->SelectedIndex + 1, this->searchTo->SelectedIndex + 1);
						}
				}
			}
		}

		Void searchRooms(int roomType, int from, int to)
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
			result.first = nullptr;
		}

		Void searchBookings(int roomNumber, int from, int to)
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

			std::pair<Booking*, int> result = Main::searchBookings(roomNumber, from, to);

			DisplayBookings(result.first, result.second);

			delete[] result.first;
		}

		Void loadStatistics()
		{
			int cancelsNum = 0;
			for (int i = 0; i < numBookings; i++) 
			{
				if (!bookings[i].status.active && bookings[i].status.cancel_at != "")
				{
					cancelsNum++;
				}
			}
			
			int userTypeOneCount = 0;
			for (const auto& user : users) {
				if (user.user_type == 1) {
					userTypeOneCount++;
				}
			}

			this->dashboardUsers->Text = gcnew String(to_string(userTypeOneCount).c_str());
			this->dashboardCancels->Text = gcnew String(to_string(cancelsNum).c_str());
			this->dashboardBookings->Text = gcnew String(to_string(numBookings).c_str());
			this->dashboardRooms->Text = gcnew String(to_string(numRooms).c_str());
		}

		Void loadProfile()
		{
			this->profileEmail->Text = gcnew String(active_user.email.c_str());
			this->profilePhone->Text = gcnew String(active_user.phone.c_str());
			this->profileName->Text = gcnew String(active_user.name.c_str());
			this->profileUsername->Text = gcnew String(active_user.username.c_str());
			this->profileAge->Text = gcnew String(to_string(active_user.age).c_str());
		}

		Void profileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			resetView();
			this->profilePanel->Visible = true;
			this->welcomeMsg->Visible = true;
		}

		Void bookingsBtn_click(System::Object^ sender, System::EventArgs^ e) {
			resetView();
			this->bookingsPanel->Visible = true;
			this->searchBookingsPanel->Visible = true;
		}
		
		Void addAdminBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			resetView();
			this->registerAdminPanel->Visible = true;
			this->welcomeMsg->Visible = true;
		}

		string generateUniqueUserID() {
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

		Void registerAdminBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			// Get user inputs from the registration form
			String^ username = registerAdminUsername->Text;
			String^ email = registerAdminEmail->Text;
			String^ password = registerAdminPassword->Text;
			String^ name = registerAdminName->Text;
			String^ phone = registerAdminPhone->Text;
			int age = (int)registerAdminAge->Value;

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

			string emailRegexPattern = "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+";
			regex emailRegex(emailRegexPattern);

			if (!std::regex_match(msclr::interop::marshal_as<std::string>(email), emailRegex)) {
				MessageBox::Show("Invalid email format. Please enter a valid email address.", "Error", MessageBoxButtons::OK);
				return;
			}

			for (char c : msclr::interop::marshal_as<std::string>(username)) {
				if (!isalnum(c)) { // Check if the character is alphanumeric
					MessageBox::Show("Username cannot contain special characters or spaces.", "Error", MessageBoxButtons::OK);
					return;
				}
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
			newUser.user_type = 0;
			newUser.age = age;

			// Add the new user to the vector of users
			users.push_back(newUser);

			// Show success message
			MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK);

			// Clear the registration form fields
			registerAdminUsername->Text = "";
			registerAdminEmail->Text = "";
			registerAdminPassword->Text = "";
			registerAdminName->Text = "";
			registerAdminPhone->Text = "";
			registerAdminAge->Value = 0;
		}
};
}
