#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{
	int x;
	//int y;
	cout << "input x:";
	cin >> x;
	cout << endl;
	//cout << "input y:";
	//cin >> y;
	//int key = -1;
	//while (key != 0)
	//{		
	//	cin >> key;
	//	switch (key)
	//	{
	//
	//	case 1:
	//	{
	//		char a = '+';
	//		cin >> a;
	//		int result = x + y;
	//		cout << result << endl;
	//		//if (a == '+')
	//		//{
	//		//	result = result + y;
	//		//	cout << result << endl;
	//		//}
	//		int result = x + y;
	//		cout << result << endl;
			char z = -1;
			while (z != 0)
			{
				cin >> z;
				int c;
				cin >> c;
				if (z == '+')
				{
					int result;
					result = x + c;
					cout << result << endl;
				}
				if (z == '-')
				{	
					int result;
					result = x - c;
					cout << result << endl;
				}
			}


	//	}break;

	//	case 2:
	//	{
	//		int result1 = x - y;
	//		cout << result1 << endl;
	//	}break;
	//	case 3: 
	//	{
	//		int result2 = x * y;
	//		cout << result2 << endl;
	//	}break;
	//	case 4:
	//	{
	//		int result3 = x / y;
	//		cout << result3 << endl;
	//	}
	//	}
	//}

}