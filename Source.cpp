#include<iostream>
using namespace std;
int main()


{
	//declare variables
	double gigabytes, dataInMegabytes, lowQualityHours, normalQualityHours, highQualityHours;


	// constants for data usage (per minute)

	const double lowQuality = 0.72;
	const double normalQuality = 1.20;
	const double  highQuality = 2.40;


	//bytes in gigabyte
	const double bytesInGigabytes = 1e9;

	//bytes in megabyte
	const double bytesInMegabytes = 1e6;



	//promote user to include their hotspot data plan in gigabytes(per month)
	cout << " How many gigabytes of data are you including in your monthly hotspot plan?/n";
	cin >> gigabytes;


	dataInMegabytes = gigabytes * bytesInGigabytes / bytesInMegabytes;

	//calculate the number of hours for low, normal, and high quality music the user can stream (monthly).
	lowQualityHours = dataInMegabytes/ lowQuality / 60;
	normalQualityHours = dataInMegabytes / normalQuality / 60;
	highQualityHours = dataInMegabytes / highQuality / 60;



	cout << " Having " << gigabytes << " gigabytes in data\n";
	cout << " you're able to stream " << lowQualityHours << " hours of music per month\n.";
	cout << " you're able to stream " << normalQualityHours << " hours of music per month.\n";
	cout << " you're able to stream " << highQualityHours << " hours of music per month. \n";

	return 0;




}