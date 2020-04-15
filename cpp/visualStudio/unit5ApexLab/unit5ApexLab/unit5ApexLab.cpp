//
// Don't modify code in this file, with the exception
// of adding test cases.
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
    // modify input with the first string, and the expected output
    // in the second string.

    test(email_concat, "me@hotmail.com donna@yahoo.com mrt43@sbcglobal.net",
        "me@hotmail.com:donna@yahoo.com:mrt43@sbcglobal.net:");
    test(email_concat, "thor@getoffmyplanet.com", "thor@getoffmyplanet.com:");
    test(donation_total, "20.50 50 125 101.1 80 21 -1",
        "Send a t-shirt\nSend a t-shirt\nTotal donations made $397.60");
    test(donation_total, "10 10 10 -3", "Total donations made $30.00");
    test(average_books_checked_out, "10 20 10 20 10 20 10 20 10 20 10 20",
        "Average monthly circulation: 15 books\n");
    test(average_books_checked_out, "1800 2348 2485 5030 5644 5785 3043 4598 3940 3943 4002 3400",
        "Average monthly circulation: 3834 books\nExtend hours!!");
    test(rectangles, "3 5 X", "X X X \nX X X \nX X X \nX X X \nX X X \n");

    return 0;
}