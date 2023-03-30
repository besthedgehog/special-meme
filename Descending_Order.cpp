#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to return a non-negative integer with its digits in descending order
int descendingOrder(int num)
{
    // Convert the integer to a string
    string str = to_string(num);

    // Sort the string in descending order
    sort(str.rbegin(), str.rend());

    // Convert the string back to an integer and return it
    return stoi(str);
}

// Example usage
int main()
{
    int num = 123456789;
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Number with digits in descending order: " << descendingOrder(num) << std::endl;
    return 0;
}
