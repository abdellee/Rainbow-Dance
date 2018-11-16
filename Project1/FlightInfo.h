#pragma once
#ifndef FlightInfo_H
#define FlightInfo_H

#include <iostream>
using namespace std;


class FlightInfo
{
private:
	int absoluteAltitude = 0;
	int speed = 0;
	int fuelLevel = 0;
	int direction = 0;
public:

	class WrongAlt
	{
	private:
		int value;
	public:
		WrongAlt(int val)
		{
			value = val;
		}
		int getValue() const
		{
			return value;
		}
	};

	class WrongSpeed
	{
	private:
		int value;
	public:
		WrongSpeed(int val)
		{
			value = val;
		}
		int getValue() const
		{
			return value;
		}
	};

	class WrongFuel
	{
	private:
		int value;
	public:
		WrongFuel(int val)
		{
			value = val;
		}
		int getValue() const
		{
			return value;
		}
	};

	class WrongDirection
	{
	private:
		int value;
	public:
		WrongDirection(int val)
		{
			value = val;
		}
		int getValue() const
		{
			return value;
		}
	};
	// setters

	//valid 100-10000
	void setAbsoluteAltitude(int alt) {
		if (alt / 300 > getFuelLevel())
		{
			throw std::exception("Invalid value.");
		}

		if (alt >= 100 && alt <= 10000)
		{
			absoluteAltitude = alt;
		}
		else
			throw WrongAlt(alt);
	}

	//valid 1 - 650
	void setSpeed(int currentSpeed) {

		if (currentSpeed >= 1 && currentSpeed <= 650)
		{
			speed = currentSpeed;
		}
		else
			throw WrongSpeed(currentSpeed);
	}

	// Valid 1 - 100
	void setFuelLevel(int level) {
		if (level >= 1 && level <= 100)
		{
			fuelLevel = level;
		}
		else
			throw WrongFuel(level);
	}

	// valid 1-360
	void setDirection(int heading) {
		if (heading < 1)
		{
			throw WrongDirection(heading);
		}
		if (heading > 360)
		{
			throw WrongDirection(heading);
		}

		direction = heading;
		/*if (heading >= 1 && heading <= 360)
		{
			direction = heading;
		}
		else
			throw WrongDirection(heading);*/
	}

	// getters
	int getAbsoluteAltitude() {
		return absoluteAltitude;
	}
	int getSpeed() {
		return speed;
	}
	int getFuelLevel() {
		return fuelLevel;
	}
	int getDirection() {
		return direction;
	}


	void showAll() {
		cout << "Altitude     = " << getAbsoluteAltitude() << endl;
		cout << "Speed        = " << getSpeed() << endl;
		cout << "FuelLevel    = " << getFuelLevel() << endl;
		cout << "Direction    = " << getDirection() << endl;
	}
};

#endif