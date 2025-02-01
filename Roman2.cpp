#include <iostream>// Required for input and output 
#include <string>

using namespace std;

string convertToRoman(int number) {
    string romanNumerals[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    return romanNumerals[number - 1];
}

int main() {
    int userInput;
    
    do {
        cout << "Enter an integer between 1 and 10: ";
        cin >> userInput;
        if (userInput < 1 || userInput > 10) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (userInput < 1 || userInput > 10);
    
    string romanNumeral = convertToRoman(userInput);
    cout << "You entered a valid number: " << userInput << endl;
    cout << "The Roman numeral equivalent is: " << romanNumeral << endl;

    return 0;


    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;
    

    return 0;
}