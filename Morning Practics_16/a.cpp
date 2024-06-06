#include <iostream>
#include <string>

std::string to5BitBinary(int n) {
    std::string binary = "";
    for (int i = 4; i >= 0; --i) {
        binary += (n & (1 << i)) ? '1' : '0';
    }
    return binary;
}

int main() {
    // Loop through numbers 0 to 31
    for (int i = 0; i <= 31; ++i) {
        // Get the 5-bit binary representation of the number
        std::string binary = to5BitBinary(i);
        
        // Print the integer and its 5-bit binary representation
        std::cout << i << " in 5-bit binary is: " << binary << std::endl;
    }
    
    return 0;
}
