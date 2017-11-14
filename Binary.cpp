// Binary.cpp : Defines the entry point for the console application.
// Convert a decimal number to binary, illustrate shift bits.

#include "stdafx.h"
#include <iostream>
using namespace std;

// Function prototype.
void show_binary(unsigned int bin_wrd);

int main()
{
	unsigned bin_wrd;
	cout << "Enter a number between 0 and 65535: ";
	cin >> bin_wrd;

	cout << "The number " << bin_wrd << " in binary: ";
	show_binary(bin_wrd);

	// Shift left 1 position
	bin_wrd = bin_wrd << 1;
	cout << "Value left shifted 1 place: " << bin_wrd << "\n";
	show_binary(bin_wrd);

	// Shift right 2 positions
	bin_wrd = bin_wrd >> 2;
	cout << "Value right shifted 2 places: " << bin_wrd << "\n";
	show_binary(bin_wrd);

    return 0;
}

// Display the bits in a 16 bit word function definition.
void show_binary(unsigned int wrd_bits)
{
	int bit;

	for (bit = 32768; bit > 0; bit = bit / 2)
	{
		if (wrd_bits & bit) cout << "1 ";
		else cout << "0 ";
		if (bit == 16 || bit == 256 || bit == 4096) cout << " ";
	}
		
	cout << "\n";
}