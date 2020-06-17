//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <fstream>
#include "apex_code.h"

using namespace std;

// Use for everything other than doubles/floats
template<typename T> bool test(T expected, T result)
{
    if (expected != result)
    {
        cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
    }
    else {
        cout << "PASS\n";
    }

    return expected == result;
}

int main()
{
    // To add a test case, duplicate one of the test lines below
    // modify input with the first string, and the expected output
    // in the second string.

    // Test upperCharAnd
    (void)test(false, upperCharAnd('x', 'X'));
    (void)test(true, upperCharAnd('A', 'X'));
    (void)test(false, upperCharAnd('a', 'x'));
    (void)test(false, upperCharAnd('E', 'g'));
    (void)test(true, upperCharAnd('Z', 'K'));

    // Test getNumberTiles
    (void)test(1, getNumberTiles(1.0, 1.0, 12));
    (void)test(4, getNumberTiles(1.0, 1.0, 8));
    (void)test(16, getNumberTiles(1.0, 1.0, 3));
    (void)test(48, getNumberTiles(10.5, 1.42, 8));
    (void)test(22, getNumberTiles(10.5, 1.42, 12));

    return 0;
}