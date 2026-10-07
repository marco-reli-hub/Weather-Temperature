// 7. Write a code to read temperature in centigrade and display a suitable message according to the temperature state below: Temp < 0 then Freezing weather, Temp 0-10 then Very Cold weather, Temp 10-20 then Cold weather, Temp 20-30 then Normal in Temp, Temp 30-40 then Its Hot, Temp >=40 then Its Very Hot.


#include <iostream>
using namespace std;

int main() 
{
	int temperature;

	cout << "Enter the temperature: ";
	cin >> temperature;

	if (temperature < 0) {
		cout << "It's freezing weather!" << endl;
	}
	else if (temperature > 0 && temperature <= 10) {
		cout << "It's very cold weather!" << endl;
	}
	else if (temperature > 10 && temperature <= 20) {
		cout << "It's cold weather!" << endl;
	}
	else if (temperature > 20 && temperature <= 30) {
		cout << "It's normal weather!" << endl;
	}
	else if (temperature > 30 && temperature <= 40) {
		cout << "It's hot weather" << endl;
	}
	else if (temperature > 40) {
		cout << "It's very hot weather!" << endl;
	}
	
	return 0;
}
