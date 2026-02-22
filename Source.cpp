/**
   @file MarquisNevadaAssignment4.cpp
   @author Nevada Marquis
   @date 2026-02-16
   @version 1.0

   Finds the most frequently occurring value in an array of integers by
   counting matches for each element (nested loop approach).
*/

#include <iostream>
using namespace std;

/**
   Finds the most frequently occurring value in an array.
   If there is a tie, the first value with the highest frequency is kept.
   @param values the array of input values
   @param size the number of elements in the array (must be at least 1)
   @param frequency set to the number of times the most frequent value occurs
   @return the most frequently occurring value
*/
int most_frequent_value(const int values[], int size, int& frequency)
{
    int mode_value = values[0];
    int max_count = 1;

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (values[j] == values[i])
            {
                count++;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            mode_value = values[i];
        }
    }

    frequency = max_count;
    return mode_value;
}

int main()
{
    int size;

    // Prompt for input size
    cout << "Enter the number of values: ";
    cin >> size;

    // Validate size (must be at least 1)
    while (size <= 0)
    {
        cout << "Size must be at least 1. Enter the number of values: ";
        cin >> size;
    }

    // Create a dynamic array to store the values
    int* values = new int[size];

    // Read values into the array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> values[i];
    }

    // Compute most frequent value and its frequency
    int frequency = 0;
    int mode_value = most_frequent_value(values, size, frequency);

    // Output results with clear labeling
    cout << "Most frequent value: " << mode_value << endl;
    cout << "Frequency: " << frequency << endl;

    // Clean up dynamic memory
    delete[] values;

    return 0;
}