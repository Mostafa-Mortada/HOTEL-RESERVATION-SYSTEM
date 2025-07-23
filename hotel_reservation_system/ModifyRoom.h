#pragma once

namespace hotelreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModifyRoom
	/// </summary>
	public ref class ModifyRoom : public System::Windows::Forms::Form
	{
	private:
		String^ roomId;
		bool submitted; // Flag to track if the submit button was clicked
		String^ originalDescription;
		int originalPrice;
		int originalFloor;
		int originalRoomNumber;
		int originalRoomTypeIndex;

	public:
		ModifyRoom(String^ roomId)
		{
			InitializeComponent();
			this->roomId = roomId;
			this->submitted = false; // Initialize the flag
			this->FormClosing += gcnew FormClosingEventHandler(this, &ModifyRoom::OnFormClosing);
			this->ShowInTaskbar = false; // Prevent form from appearing in taskbar
			loadRoomData();
			// Use the room ID here as needed
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModifyRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ modifySubmit;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ modifyRoomDescription;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ modifyRoomPrice;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ modifyRoomFloor;
	private: System::Windows::Forms::NumericUpDown^ modifyRoomNumber;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ modifyRoomType;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyRoom::typeid));
			this->modifySubmit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->modifyRoomDescription = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->modifyRoomPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->modifyRoomFloor = (gcnew System::Windows::Forms::NumericUpDown());
			this->modifyRoomNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->modifyRoomType = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modifyRoomPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modifyRoomFloor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modifyRoomNumber))->BeginInit();
			this->SuspendLayout();
			// 
			// modifySubmit
			// 
			this->modifySubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->modifySubmit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->modifySubmit->Location = System::Drawing::Point(488, 344);
			this->modifySubmit->Name = L"modifySubmit";
			this->modifySubmit->Size = System::Drawing::Size(110, 39);
			this->modifySubmit->TabIndex = 28;
			this->modifySubmit->Text = L"Submit";
			this->modifySubmit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->modifySubmit->UseVisualStyleBackColor = true;
			this->modifySubmit->Click += gcnew System::EventHandler(this, &ModifyRoom::modifySubmit_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Description:";
			// 
			// modifyRoomDescription
			// 
			this->modifyRoomDescription->Location = System::Drawing::Point(23, 198);
			this->modifyRoomDescription->Multiline = true;
			this->modifyRoomDescription->Name = L"modifyRoomDescription";
			this->modifyRoomDescription->Size = System::Drawing::Size(417, 181);
			this->modifyRoomDescription->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(489, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 17);
			this->label5->TabIndex = 34;
			this->label5->Text = L"*per period ";
			// 
			// modifyRoomPrice
			// 
			this->modifyRoomPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyRoomPrice->Location = System::Drawing::Point(317, 110);
			this->modifyRoomPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->modifyRoomPrice->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->modifyRoomPrice->Name = L"modifyRoomPrice";
			this->modifyRoomPrice->Size = System::Drawing::Size(166, 30);
			this->modifyRoomPrice->TabIndex = 33;
			this->modifyRoomPrice->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(292, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 23);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Price: ";
			// 
			// modifyRoomFloor
			// 
			this->modifyRoomFloor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyRoomFloor->Location = System::Drawing::Point(23, 110);
			this->modifyRoomFloor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->modifyRoomFloor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->modifyRoomFloor->Name = L"modifyRoomFloor";
			this->modifyRoomFloor->Size = System::Drawing::Size(166, 30);
			this->modifyRoomFloor->TabIndex = 31;
			this->modifyRoomFloor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// modifyRoomNumber
			// 
			this->modifyRoomNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyRoomNumber->Location = System::Drawing::Point(23, 35);
			this->modifyRoomNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->modifyRoomNumber->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->modifyRoomNumber->Name = L"modifyRoomNumber";
			this->modifyRoomNumber->Size = System::Drawing::Size(166, 30);
			this->modifyRoomNumber->TabIndex = 30;
			this->modifyRoomNumber->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 23);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Floor: ";
			// 
			// modifyRoomType
			// 
			this->modifyRoomType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modifyRoomType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyRoomType->FormattingEnabled = true;
			this->modifyRoomType->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Single", L"Double", L"Triple", L"Quad",
					L"Connecting", L"Deluxe", L"Suite", L"Junior Suite", L"Studio"
			});
			this->modifyRoomType->Location = System::Drawing::Point(317, 35);
			this->modifyRoomType->Name = L"modifyRoomType";
			this->modifyRoomType->Size = System::Drawing::Size(166, 31);
			this->modifyRoomType->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(292, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 23);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Type: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 23);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Room Number: ";
			// 
			// ModifyRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 395);
			this->Controls->Add(this->modifySubmit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->modifyRoomDescription);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->modifyRoomPrice);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->modifyRoomFloor);
			this->Controls->Add(this->modifyRoomNumber);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->modifyRoomType);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModifyRoom";
			this->Text = L"ModifyRoom";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modifyRoomPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modifyRoomFloor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modifyRoomNumber))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		bool WasSubmitted()
		{
			return submitted;
		}

	private:
		void OnFormClosing(Object^ sender, FormClosingEventArgs^ e)
		{
			if (e->CloseReason == CloseReason::UserClosing && !submitted)
			{
				// Check if the values are changed
				if (modifyRoomDescription->Text != originalDescription ||
					Main::getNumericUpDownValue(modifyRoomPrice) != originalPrice ||
					Main::getNumericUpDownValue(modifyRoomFloor) != originalFloor ||
					Main::getNumericUpDownValue(modifyRoomNumber) != originalRoomNumber ||
					modifyRoomType->SelectedIndex != originalRoomTypeIndex)
				{
					// Show confirmation dialog only if the form is being closed by the user and values are changed
					Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to close without saving changes?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (result == Windows::Forms::DialogResult::No)
					{
						e->Cancel = true; // Cancel the form closing event
					}
				}
			}
		}

		Void loadRoomData()
		{
			for (int i = 0; i < numRooms; ++i) {
				if (msclr::interop::marshal_as<String^>(rooms[i].id) == this->roomId) {
					modifyRoomNumber->Value = rooms[i].info.roomNumber;
					modifyRoomFloor->Value = rooms[i].info.floor;
					modifyRoomType->SelectedIndex = rooms[i].info.roomType-1;
					modifyRoomPrice->Value = rooms[i].info.price;
					modifyRoomDescription->Text = gcnew String(rooms[i].info.Description.c_str());

					// To check if the values changed
					originalDescription = gcnew String(rooms[i].info.Description.c_str());
					originalPrice = rooms[i].info.price;
					originalFloor = rooms[i].info.floor;
					originalRoomNumber = rooms[i].info.roomNumber;
					originalRoomTypeIndex = rooms[i].info.roomType - 1;
					break;
				}
			}
		}

		Void modifySubmit_Click(System::Object^ sender, System::EventArgs^ e) {
			// Ask for confirmation
			if (modifyRoomDescription->Text != originalDescription ||
				Main::getNumericUpDownValue(modifyRoomPrice) != originalPrice ||
				Main::getNumericUpDownValue(modifyRoomFloor) != originalFloor ||
				Main::getNumericUpDownValue(modifyRoomNumber) != originalRoomNumber ||
				modifyRoomType->SelectedIndex != originalRoomTypeIndex)
			{
				Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to submit the changes?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

				// Check user's response
				if (result == Windows::Forms::DialogResult::Yes) {
					// Proceed with updating room data
					String^ description = modifyRoomDescription->Text;
					int price = Main::getNumericUpDownValue(modifyRoomPrice);
					int floor = Main::getNumericUpDownValue(modifyRoomFloor);
					int roomNumber = Main::getNumericUpDownValue(modifyRoomNumber);
					int roomTypeIndex = modifyRoomType->SelectedIndex + 1;

					std::string descriptionStr = msclr::interop::marshal_as<std::string>(description);

					for (int i = 0; i < numRooms; ++i) {
						if (msclr::interop::marshal_as<String^>(rooms[i].id) == this->roomId) {
							rooms[i].info.Description = descriptionStr;
							rooms[i].info.price = price;
							rooms[i].info.floor = floor;
							rooms[i].info.roomNumber = roomNumber;
							rooms[i].info.roomType = roomTypeIndex;
							submitted = true;

							this->Close();
							MessageBox::Show("Room data updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

							return;
						}
					}
				}
			}
			
			this->Close();
		}
};
	
}
