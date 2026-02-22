# Mode Finder (C++)

A simple C++ console program that finds the **most frequently occurring value** (the *mode*) in a list of integers.

## What it does
- Prompts for how many integers you want to enter
- Reads the integers into memory
- Counts how often each value occurs
- Prints:
  - the most frequent value (mode)
  - how many times it appears (frequency)

## How it works (high level)
For each element in the list, the program counts how many elements match it. The value with the highest count is the mode.

**Tie behavior:** If multiple values share the same highest frequency, the program returns the **first** one encountered.

## Complexity
- **Time:** O(n²) (nested counting loops)
- **Extra space:** O(1) beyond the input storage

## Example
Input:
Enter the number of values: 10  
Enter value 1: 2  
Enter value 2: 3  
Enter value 3: 3  
Enter value 4: 2  
Enter value 5: 2  
Enter value 6: 2  
Enter value 7: 3  
Enter value 8: 2  
Enter value 9: 3  
Enter value 10: 1  

Output:
Most frequent value: 2  
Frequency: 5  

## Build and Run (Visual Studio)
1. Open the solution in Visual Studio.
2. Build: **Build → Build Solution**
3. Run: **Debug → Start Without Debugging** (Ctrl + F5)

## Project files
- `MarquisNevadaAssignment4.cpp` — main source file (contains the mode-finding logic)
