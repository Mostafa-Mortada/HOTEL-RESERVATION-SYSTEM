#pragma once

namespace hotelreservationsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BookingForm
	/// </summary>
	public ref class BookingForm : public System::Windows::Forms::Form
	{
	private:
		String^ id;
		bool submitted; // Flag to track if the submit button was clicked
		bool isEdit;
		int from;
		int to;

	public:
		BookingForm(String^ id, bool isEdit, int from, int to)
		{
			InitializeComponent();
			this->id = id;
			this->submitted = false;
			this->isEdit = isEdit;
			this->FormClosing += gcnew FormClosingEventHandler(this, &BookingForm::OnFormClosing);
			this->ShowInTaskbar = false;
			if (isEdit)
			{
				this->from = from;
				this->to = to;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BookingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ bookingTo;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ bookingFrom;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ bookingSubmit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ totalPrice;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookingForm::typeid));
			this->bookingTo = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bookingFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bookingSubmit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->totalPrice = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bookingTo
			// 
			this->bookingTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bookingTo->DropDownWidth = 150;
			this->bookingTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookingTo->FormattingEnabled = true;
			this->bookingTo->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon", L"Saturday, Evening",
					L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon", L"Monday, Evening", L"Tuesday, Morning",
					L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon", L"Wednesday, Evening", L"Thursday, Morning",
					L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon", L"Friday, Evening"
			});
			this->bookingTo->Location = System::Drawing::Point(315, 33);
			this->bookingTo->Name = L"bookingTo";
			this->bookingTo->Size = System::Drawing::Size(185, 28);
			this->bookingTo->TabIndex = 37;
			this->bookingTo->SelectedIndexChanged += gcnew System::EventHandler(this, &BookingForm::bookingPeriod_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(277, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 20);
			this->label4->TabIndex = 36;
			this->label4->Text = L"To: ";
			// 
			// bookingFrom
			// 
			this->bookingFrom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bookingFrom->DropDownWidth = 150;
			this->bookingFrom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bookingFrom->FormattingEnabled = true;
			this->bookingFrom->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Saturday, Morning", L"Saturday, Afternoon",
					L"Saturday, Evening", L"Sunday, Morning", L"Sunday, Afternoon", L"Sunday, Evening", L"Monday, Morning", L"Monday, Afternoon",
					L"Monday, Evening", L"Tuesday, Morning", L"Tuesday, Afternoon", L"Tuesday, Evening", L"Wednesday, Morning", L"Wednesday, Afternoon",
					L"Wednesday, Evening", L"Thursday, Morning", L"Thursday, Afternoon", L"Thursday, Evening", L"Friday, Morning", L"Friday, Afternoon",
					L"Friday, Evening"
			});
			this->bookingFrom->Location = System::Drawing::Point(80, 32);
			this->bookingFrom->Name = L"bookingFrom";
			this->bookingFrom->Size = System::Drawing::Size(175, 28);
			this->bookingFrom->TabIndex = 35;
			this->bookingFrom->SelectedIndexChanged += gcnew System::EventHandler(this, &BookingForm::bookingPeriod_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 20);
			this->label3->TabIndex = 34;
			this->label3->Text = L"From: ";
			// 
			// bookingSubmit
			// 
			this->bookingSubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bookingSubmit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bookingSubmit->Location = System::Drawing::Point(450, 115);
			this->bookingSubmit->Name = L"bookingSubmit";
			this->bookingSubmit->Size = System::Drawing::Size(110, 39);
			this->bookingSubmit->TabIndex = 38;
			this->bookingSubmit->Text = L"Submit";
			this->bookingSubmit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->bookingSubmit->UseVisualStyleBackColor = true;
			this->bookingSubmit->Click += gcnew System::EventHandler(this, &BookingForm::bookingSubmit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Total Price: ";
			// 
			// totalPrice
			// 
			this->totalPrice->AutoSize = true;
			this->totalPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalPrice->Location = System::Drawing::Point(115, 115);
			this->totalPrice->Name = L"totalPrice";
			this->totalPrice->Size = System::Drawing::Size(25, 20);
			this->totalPrice->TabIndex = 40;
			this->totalPrice->Text = L"0$";
			// 
			// BookingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 166);
			this->Controls->Add(this->totalPrice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bookingSubmit);
			this->Controls->Add(this->bookingTo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->bookingFrom);
			this->Controls->Add(this->label3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BookingForm";
			this->Text = L"Booking";
			this->Load += gcnew System::EventHandler(this, &BookingForm::BookingForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:bool WasSubmitted()
		{
			return submitted;
		}
		void OnFormClosing(Object^ sender, FormClosingEventArgs^ e)
		{
			if (e->CloseReason == CloseReason::UserClosing && !submitted)
			{
				// Check if the values are changed
				if (from != this->from || to != this->to)
				{
					Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to close without saving changes?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (result == Windows::Forms::DialogResult::No)
					{
						e->Cancel = true;
					}
				}
			}
		}

		Void bookingSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
			int from = Main::convertDayTimeToInt(this->bookingFrom->SelectedIndex + 1);
			int to = Main::convertDayTimeToInt(this->bookingTo->SelectedIndex + 1);
			String^ temp_id = this->id;
			string id = msclr::interop::marshal_as<std::string>(temp_id);

			if (from != this->from || to != this->to)
			{
				Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to submit the changes?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

				if (result == Windows::Forms::DialogResult::Yes) {
					if (!this->isEdit) {
						if (!Main::reserveBooking(id, from, to)) { // id is roomId in this case
							MessageBox::Show("Room Booking Failed, Room Not Available!", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}
					else {
						Booking booking = Main::findBooking(id);
						if (!Main::modifyBooking(to_string(booking.room_id), from, to, booking.id)) {// id is bookingId in this case
							MessageBox::Show("Booking Update Failed, Room Not Available!", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}
					this->Close();
					submitted = true;
					MessageBox::Show(this->isEdit ? "Booking Updated Successfully!" : "Room Booked Successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}
				else {
					return;
				}
			}
			
			this->Close();

		}

		Void BookingForm_Load(Object^ sender, EventArgs^ e) {
			if (this->isEdit) {
				this->bookingFrom->SelectedIndex = Main::convertIntToDayTime(this->from);
				this->bookingTo->SelectedIndex = Main::convertIntToDayTime(this->to);
			}
		}
		Void bookingPeriod_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			int periodsNo = 0;
			int from = Main::convertDayTimeToInt(this->bookingFrom->SelectedIndex + 1);
			int to = Main::convertDayTimeToInt(this->bookingTo->SelectedIndex + 1);
			String^ roomId = "";

			if (!this->isEdit) {
				roomId = this->id;
			}
			else {
				String^ bookingId = this->id;
				Booking booking = Main::findBooking(msclr::interop::marshal_as<std::string>(bookingId));
				roomId = gcnew String(to_string(booking.room_id).c_str());
			}

			if (from > to) {
				swap(from, to);
			}

			// Iterate through the period range
			for (int i = from; i <= to; i++) {
				int timeOfDay = i % 10;

				// Check if the time of day is valid (1 for morning, 2 for afternoon, 3 for evening)
				if (timeOfDay >= 1 && timeOfDay <= 3) {
					periodsNo++;
				}
			}
			this->totalPrice->Text = gcnew String(to_string((periodsNo * Main::findRoom(msclr::interop::marshal_as<std::string>(roomId)).info.price)).c_str()) + "$";
		}
};
}
