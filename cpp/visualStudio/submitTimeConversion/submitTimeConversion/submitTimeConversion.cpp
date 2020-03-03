//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <cassert>
#include <iostream>
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

    // Testing minutes to 12 hour time
    test(minutes_to_12hour_time, "0", "0:0 !");
    test(minutes_to_12hour_time, "60", "1:0 !");
    test(minutes_to_12hour_time, "121", "2:1 !");
    test(minutes_to_12hour_time, "785", "1:5 !");
    test(minutes_to_12hour_time, "1453", "0:13 !");

    // Testing hours minutes seconds to 12 hour time
    test(numbers_to_12hour_time, "0 0 0", "0:0.0 !");
    test(numbers_to_12hour_time, "1 1 5", "1:1.5 !");
    test(numbers_to_12hour_time, "60.5 60 60", "1:31.0 !");
    test(numbers_to_12hour_time, "1 121 12", "3:1.12 !");
    test(numbers_to_12hour_time, "123.2 56 121", "4:10.1 !");

    return 0;
}