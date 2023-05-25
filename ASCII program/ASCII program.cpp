#include <iostream>
using namespace std;

int main() //This is an ASCII(American Standard Code for Information Interchange) program 
//Its a character encoding used to format text and data and has unique values for 128 alphabetic,numeric 
//or special characters
{

	char a1,a2,a3,a4,a5;
	cout << "Enter a 5 letters for the ASCII program to convert to numbers  \n";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << "ASCII MESSAGE:" << int(a1) << " " << int(a2) << " " << int(a3) << " " << int(a4) << " " << int(a5);
	system("pause>0");
}
