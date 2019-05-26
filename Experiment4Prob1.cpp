#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int choice, n1, n2, ans;
	char y;
	
	cout << "MENU:" << endl;
	cout << " 1. Add" << endl;
	cout << " 2. Subtract" << endl;
	cout << " 3. Multiply" << endl;
	cout << " 4. Divide" << endl;
	cout << " 5. Modulus" << endl;
	
	do
	{
		cout << "Enter your choice: ";
		cin >> choice;
		cout << "Enter the 1st number: ";
		cin >> n1;
		cout << "Enter the 2nd number: ";
		cin >> n2;
		
		switch(choice)
		{
			case 1:
				ans = ( n1+n2 );
				break;
			case 2:
				ans = ( n1-n2 );
				break;
			case 3:
				ans = ( n1*n2 );
				break;
			case 4:
				ans = ( n1/n2 );
				break;
			case 5:
				ans = ( n1%n2 );
				break;
			
			default: cout << " Error!! ";
			break;
		}
		
		cout << " Answer: " << ans << endl;
		cout << " Do you want to continue? y/n ";
		cin >> y;
	} while(y == 'y' || y == 'Y');
	system ("pause");
	
	_getch();
	return 0;
}
// i love you to the moon and back <3
