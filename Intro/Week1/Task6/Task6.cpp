#include <iostream>

const int HOURS_PER_DAY = 24;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;

int main()
{
	int seconds;
	std::cin >> seconds;

	int dayMultiplier = HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;

	int days = seconds / dayMultiplier;
	
	seconds -= days * dayMultiplier;

	int hourMultiplier = MINUTES_PER_HOUR * SECONDS_PER_MINUTE;

	int hours = seconds / hourMultiplier;

	seconds -= hours * hourMultiplier;

	int minuteMultiplier = SECONDS_PER_MINUTE;

	int minutes = seconds / minuteMultiplier;

	seconds -= minutes * minuteMultiplier;

	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
}