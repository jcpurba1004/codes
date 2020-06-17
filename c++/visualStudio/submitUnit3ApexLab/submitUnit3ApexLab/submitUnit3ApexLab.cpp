// submitUnit3ApexLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "apex_code.h"

using namespace std;

#define TEST_FUNC_PTR void (*test_func)(stringstream&, stringstream&)
void test(TEST_FUNC_PTR, const string& input, const string& expected)
{
	stringstream in_stream(input);
	stringstream out_stream;
	test_func(in_stream, out_stream);

	if (expected == out_stream.str())
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "With input \"" << input << "\" expected output \"" << expected
			<< "\", received \"" << out_stream.str() << "\"" << endl;
	}
}

int main()
{
	// To add a test case, duplicate one of the test lines below
	// modify input with the first string and the expected output
	// in the second string.

	test(street_address, "The Number Family\n789 Donaknowy St.\nBig City, CA 92929", "789 Donaknowy St.");
	test(street_address, "The Banks\n13 Cherry Tree Lane\nLondon, CA 92003", "13 Cherry Tree Lane");
	test(street_address, "The Mouses\n1 Happiest Place\nAnaheim, CA 92000", "1 Happiest Place");

	test(coffee_sale_item, "Latte 30 3.4", "Latte total sales = $102.00");
	test(coffee_sale_item, "Mocha 1 2.44", "Mocha total sales = $2.44");
	test(coffee_sale_item, "Yippee 101 10.10", "Yippee total sales = $1020.10");

	test(first_name_and_country, "Jane 345 One Fab Pl., USA", "Jane is from USA");
	test(first_name_and_country, "Jane 345555 One Fab Pl.           USA", "Jane is from USA");
	test(first_name_and_country, "Oscar 35 One Fab Pl., SesameStreet", "Oscar is from SesameStreet");
	test(first_name_and_country, "Oscar 35 One FabuloFabulous Pl. SesameStreet", "Oscar is from SesameStreet");

	return 0;
}