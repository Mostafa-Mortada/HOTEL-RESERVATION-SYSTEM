#include <iostream>

#include "AdminHomeForm.h"
#include "LoginForm.h"

#include "Constants.h"
#include "FileIO.h"
#include "Main.h"
#include "UserHomeForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


int main() {
	json usersData;
	json sessionData;

	bool mustLogin = true;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	hotelreservationsystem::LoginForm loginform;
	hotelreservationsystem::UserHomeForm userHomeForm;
	hotelreservationsystem::AdminHomeForm adminHomeForm;

	if (FileIO::readFromJsonFile(USERS_PATH, usersData)) {
		FileIO::loadUsersData(usersData);
		if (FileIO::readFromJsonFile(SESSION_PATH, sessionData)) {
			int session_result = FileIO::loadSession(sessionData);
			if (session_result == 200)
			{
				mustLogin = false;
			}
		}
	}

	if (mustLogin)
	{
		loginform.ShowDialog();
	}

	if (active_user.id != "")
	{
		FileIO::loadDatabase();
		// begin app
		int result = 0;
		while (result != -1)
		{
			switch (active_user.user_type)
			{
			case 0: // admin
				result = adminHomeForm.ShowAndReturnAction();
				break;
			case 1: // user
				result = userHomeForm.ShowAndReturnAction();
				break;
			default: // unknown (error in database)
				cout << "Unknown User Type" << "\n" << "Logging Out..." << endl;
			}

			if (result == 1) // user logged out
			{
				result = loginform.ShowAndReturnAction();
			}
			else if (result == 2) // user closes app
			{
				break;
			}
		}

		// end app
		if (!Main::saveChanges())
		{
			cout << "Saving Process Failed" << endl;
		};
	}

	Main::cleanUp();

	return 0;
}
