
#include <iostream>
using namespace std;

class Time
{
	int hours;
	int minutes;
	int seconds;
	int total;
public:
	Time()
	{
		hours = minutes = seconds = total = 0;
	}
	explicit Time(int seconds)
	{
		hours = seconds / 3600;
		minutes = seconds / 60 % 60;
		this->seconds = seconds % 60;
		total = 0;
	}
	Time(int hours, int minutes, int seconds)
	{
		if (hours > -1 && hours < 24 && minutes > -1 && minutes < 60 && seconds < -1 && seconds > 60)
		{
			this->hours = hours, this->minutes = minutes, this->seconds = seconds;
		}
		else
		{
			cout << "error: incorrect time entered\n";
		}
		total = 0;
	}
	void printTime()const
	{
		if (hours > -1 && hours < 10)
		{
			if (minutes > -1 && minutes < 10)
			{
				if (seconds > -1 && seconds < 10)
				{
					cout << "0" << hours << ":0" << minutes << ":0" << seconds;
				}
				else
				{
					cout << "0" << hours << ":0" << minutes << ":" << seconds;
				}
			}
			else if (seconds > -1 && seconds < 10)
			{
				cout << "0" << hours << ":" << minutes << ":0" << seconds;
			}
			else
			{
				cout << "0" << hours << ":" << minutes << ":" << seconds;
			}
		}
		else if (minutes > -1 && minutes < 10)
		{
			if (seconds > -1 && seconds < 10)
			{
				cout << hours << ":0" << minutes << ":0" << seconds;
			}
			else
			{
				cout << hours << ":" << minutes << ":0" << seconds;
			}
		}
		else if(seconds > -1 && seconds < 10)
		{
			cout << hours << ":" << minutes << ":0" << seconds;
		}
		else
		{
			cout << hours << ":" << minutes << ":" << seconds;
		}
	}
	void addOneSecond()
	{
		if (hours == 23 && minutes == 59 && seconds == 59)
		{
			hours = minutes = seconds = 0;
		}
		else if (hours != 23 && minutes == 59 && seconds == 59)
		{
			hours++;
			minutes = seconds = 0;
		}
		else if (minutes != 59 && seconds == 59)
		{
			minutes++;
			seconds = 0;
		}
		else if (hours != 23 && minutes != 59 && seconds != 59)
		{
			seconds++;
		}
	}
	int totalSeconds()const
	{
		return this->hours * 3600 + this->minutes * 60 + this->seconds;
	}
#pragma region operators
	Time operator +(Time& other)
	{
		/*Time newTime(this->hours + other.hours, this->minutes + other.minutes, this->seconds + other.seconds);
		return newTime;*/
		Time res((*this).totalSeconds() + other.totalSeconds());
	}
	Time operator -(Time& other)
	{
		Time res((*this).totalSeconds() - other.totalSeconds());
	}
	Time operator *(Time& other)
	{
		Time res((*this).totalSeconds() * other.totalSeconds());
	}
	Time operator /(Time& other)
	{
		Time res((*this).totalSeconds() / other.totalSeconds());
	}
	bool operator >(const Time& other)
	{
		return (this->hours > other.hours && this->minutes > other.minutes && this->seconds > other.seconds);
	}
	bool operator <(const Time& other)
	{
		return (this->hours < other.hours && this->minutes < other.minutes && this->seconds < other.seconds);
	}
	bool operator >=(const Time& other)
	{
		return (this->hours >= other.hours && this->minutes >= other.minutes && this->seconds >= other.seconds);
	}
	bool operator <=(const Time& other)
	{
		return (this->hours <= other.hours && this->minutes <= other.minutes && this->seconds <= other.seconds);
	}
	bool operator ==(const Time& other)
	{
		return (this->hours == other.hours && this->minutes == other.minutes && this->seconds == other.seconds);
	}
	bool operator !=(const Time& other)
	{
		return (this->hours != other.hours && this->minutes != other.minutes && this->seconds != other.seconds);
	}
#pragma endregion
};

void main()
{

}