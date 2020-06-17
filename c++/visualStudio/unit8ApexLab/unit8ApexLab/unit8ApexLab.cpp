//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <iomanip>
#include <random>
#include "apex_code.h"

using namespace std;

bool near(double expected, double result, double threshold)
{
    return abs(expected - result) < threshold;
}

// Use when testing double values
bool testNear(double expected, double result)
{
    if (false == near(expected, result, 0.002))
    {
        cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
    }
    else {
        cout << "PASS\n";
    }

    return expected == result;
}

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
    // To add a test case, duplicate the test lines below
    // You can add more local cup instances

    Cup unitCup(1, 1, 1);
    Cup cupTwo(2, 1, 1);
    Cup cup(5.3, 4.0, 9.0);
    Cup twoCup(2, 2, 2);
    Cup aCup(5.3, 4.0, 11.0); 
    


    (void)testNear(7.3303, cupTwo.capacityInMls());

    (void)testNear(3.1415, unitCup.capacityInMls());
    
    (void)testNear(615.3437, cup.capacityInMls());

    (void)test<bool>(true, halfFull(cup, 400));   

    (void)testNear(189.3365, pricePerMl(cup, 3.25));

    (void)test<bool>(false, fitInCupboard(&cup, 10.0, 5.0));

    (void)testNear(25.1327, twoCup.capacityInMls());

    (void)testNear(752.087, aCup.capacityInMls());
    (void)test<bool>(true, halfFull(aCup, 400));
    (void)testNear(231.411, pricePerMl(aCup, 3.25));
    (void)test<bool>(false, fitInCupboard(&aCup, 10.0, 5.0));

    return 0;
}