#pragma once

inline int main()
{
    int coinsUsed[MAX_COINS_CHANGE],    // List of coins used
        numCoinsUsed = 0,                   // The number of coins used
        amount;                             // The amount to make change for

                                            // Display the possible coin values.
    cout << "Here are the valid coin values, in cents: ";
    for (int index = 0; index < 5; index++)
        cout << coinValues[index] << " ";
    cout << endl;

    // Get input from the user.
    cout << "Enter the amount of cents (as an integer) "
        << "to make change for: ";
    cin >> amount;
    cout << "What is the maximum number of coins to give as change? ";
    cin >> numCoins;

    // Call the recursive function.
    makeChange(numCoins, amount, coinsUsed, numCoinsUsed);

    // Display the results.
    cout << "Number of possible combinations: " << numSolutions << endl;
    cout << "Best combination of coins:\n";
    if (numBestCoins == NO_SOLUTION)
        cout << "\tNo solution\n";
    else
    {
        for (int count = 0; count < numBestCoins; count++)
            cout << bestCoins[count] << " ";
    }
    cout << endl;
    return 0;
}

void makeChange(int coinsLeft, int amount, int coinsUsed[] int numCoinsUsed);
