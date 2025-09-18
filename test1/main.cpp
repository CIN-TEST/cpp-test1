#include <iostream>
using namespace std;

// 華氏攝氏轉換
int main() {
    double fahrenheit;
    double celsius;
    
    cout << "請輸入華氏溫度:\n"; // Prompt user for Fahrenheit input
    cin >> fahrenheit; // Get Fahrenheit input from user
    
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) / 9 * 5;
    
    // Output the result
    cout << "攝氏溫度是:" << celsius;
    return 0;
}
