#include <iostream>
#include "FlightInfo.h"
using namespace std;

int main()
{
	FlightInfo plane;
	
	char input;
	int speed;
	int direction;
	int altitude;

	do
	{
		try
		{
			cout << "Enter Speed: ";
			cin >> speed;
			plane.setSpeed(speed);
			cout << "Enter Direction: ";
			cin >> direction;
			plane.setDirection(direction);
			cout << "Enter Altitude: ";
			cin >> altitude;
			plane.setAbsoluteAltitude(altitude);
			plane.setFuelLevel(20);

			plane.showAll();
			int level = plane.getFuelLevel() - 5;
			plane.setFuelLevel(level);


		}
		catch (FlightInfo::WrongSpeed e)
		{
			cout << "Error: " << e.getValue()
				<< " is an invalid value for the "
				<< " plane's speed./n";
		}
		catch (FlightInfo::WrongDirection e)
		{
			cout << "Error: " << e.getValue()
				<< " is an invalid value for the "
				<< " plane's direcction./n";
		}
		catch (FlightInfo::WrongAlt e)
		{
			cout << "Error: " << e.getValue()
				<< " is an invalid value for the "
				<< " plane's altitude./n";
		}
		catch (FlightInfo::WrongFuel e)
		{
			cout << "Error: " << e.getValue()
				<< " is an invalid value for the "
				<< " plane's fuel./n";
		}
		catch (...)
		{
			cout << "Error: " << ""
				<< " is an invalid value for the "
				<< " plane's fuel./n";
		}
		
		cout << "Would you like to continue(Y/N)? ";
		cin >> input;
	} while (input != 'N' || input != 'n');

	system("pause");
	return 0;
}