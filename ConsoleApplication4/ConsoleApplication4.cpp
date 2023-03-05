
#include <iostream>
#include <string>

using namespace std;

bool isPasswordValid(string password)
{
	if (password.length() < 8)
	{
		return false;
	}

	bool hasDigit = false;
	bool hasLower = false;
	bool hasUpper = false;
	bool hasSpecial = false;

	for (int i = 0; 1 < password.length(); i++ )
	{
		if (isdigit(password[i]))
		{
			hasDigit = true;
		}
		else if (islower(password[i]))
		{
			hasLower = true;
		}
		else if (isupper(password[i]))
		{
			hasUpper = true;
		}
		else
		{
			hasSpecial = true;
		}
	}

	return (hasDigit && hasLower && hasUpper && hasSpecial);

}

int main()
{
	string passsword;
	cout << "enter password:";
	cin >> passsword;

	if (isPasswordValid(passsword))
	{
		cout << "password valid" << endl;
	}
	else
	{
		cout << "password invalid" << endl;
	}

	return 0;
}

