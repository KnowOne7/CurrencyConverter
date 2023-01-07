#include <iostream>
#include <string>

using namespace std;




int MainMenu() {
	int input = 0;
	string str_in = "";

	while (input != 9) {
		std::cout << "Enter a Denomination in:\n" <<
			"1. US. Dollars\n" <<
			"2. Yen\n" <<
			"3. Canadian Dollar\n" <<
			"4. Ruble\n" <<
			"5. Riyal\n\n" <<
			"9. Quit\n\n";

		(cin) >> (str_in);
		input << stoi(str_in);

		//if (!cin.good()) {
		//	//cout << "invalid option, Pease Try again\n";
		//	cin.clear();
		//	input = 5;
		//	
		//}

		//else {
		switch (input) {
		case 1:
			cout << "one";
			return 1;
		case 2:
			cout << "Two\n";
			break;
		case 3:
			cout << "one\n";
			break;
		case 4:
			cout << "one]\n";
			break;
		case 5:
			cout << "five\n";
			break;
		case 9:
			cout << "Quitting";
			exit(input);

		default:
			cout << "Invalid option, Pease Try again\n";
			return 0;
		}
		//}

	}
}