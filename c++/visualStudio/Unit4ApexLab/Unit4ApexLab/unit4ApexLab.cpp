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

    test(middle_word_check, "apple", "apple comes before middle");
    test(middle_word_check, "Middle", "Middle comes before middle");
    test(middle_word_check, "tree", "tree comes after middle");
    test(middle_word_check, "1tree", "1tree comes before middle");
    test(middle_word_check, "2bee", "2bee comes before middle");
    test(animal_abcs, "a", "anteater");
    test(animal_abcs, "B", "bat");
    test(animal_abcs, "c", "caterpillar");
    test(animal_abcs, "D", "dolphin");
    test(animal_abcs, "e", "emu");
    test(animal_abcs, "F", "frog");
    test(animal_abcs, "T", "T is not supported");
    test(animal_abcs, "*", "* is not supported");
    test(animal_abcs, "1", "1 is not supported");
    test(animal_abcs, "2", "2 is not supported");
    test(delivery_range_check, "electric 85 3.2 5 5.06 3", "You can make it in your electric car!");
    test(delivery_range_check, "gas 240 12 3.5 4.3 20 5", "You can make it in your gas car!");
    test(delivery_range_check, "electric 200 30 30 30 30", "Not going to happen");
    test(delivery_range_check, "gas 100 30 30 30 30", "Not going to happen");
    test(delivery_range_check, "gas 100 50 30 50 30", "Not going to happen");
    test(delivery_range_check, "gas 10 5 5 5 5", "Not going to happen");
    test(delivery_range_check, "electric 85 3.4 10 5 5", "You can make it in your electric car!");
    test(delivery_range_check, "gas 85 3 3 3 3", "You can make it on an electric scooter!");
    test(delivery_range_check, "gas 85 3 3 5 3", "You can make it on an electric scooter!");
    test(delivery_range_check, "gas 200 2.57 6.7 40 3", "You can make it in your gas car!");
    return 0;
}