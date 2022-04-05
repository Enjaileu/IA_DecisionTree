#include "Utility.h"
#include <iostream>
using std::cout;
using std::endl;

void Utility::DisplayHour(int hour) {
	cout << "It is ";
	if (hour > 12) {
		cout << hour -12 << ":00 PM." << endl;
	}
	else {
		cout << hour << ":00 AM." << endl;
	}
}