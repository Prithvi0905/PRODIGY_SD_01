#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

std::string convertTemperature(double temp, const std::string& unit) {
    double celsius = 0, fahrenheit = 0, kelvin = 0;
    std::ostringstream result;

    if (unit == "Celsius") {
        celsius = temp;
        fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        kelvin = temp + 273.15;
        result << std::fixed << std::setprecision(2);
        result << "Input: " << celsius << " C\n";
        result << "Fahrenheit: " << fahrenheit << " F\n";
        result << "Kelvin: " << kelvin << " K";
    }
    else if (unit == "Fahrenheit") {
        fahrenheit = temp;
        celsius = (temp - 32.0) * 5.0 / 9.0;
        kelvin = celsius + 273.15;
        result << std::fixed << std::setprecision(2);
        result << "Input: " << fahrenheit << " F\n";
        result << "Celsius: " << celsius << " C\n";
        result << "Kelvin: " << kelvin << " K";
    }
    else if (unit == "Kelvin") {
        kelvin = temp;
        celsius = temp - 273.15;
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        result << std::fixed << std::setprecision(2);
        result << "Input: " << kelvin << " K\n";
        result << "Celsius: " << celsius << " C\n";
        result << "Fahrenheit: " << fahrenheit << " F";
    }
    else {
        result << "Unknown unit selected.";
    }

    return result.str();
}

int main() {
    std::string input;
    double temp;
    std::string unit;

    std::cout << "Enter temperature value: ";
    std::getline(std::cin, input);
    try {
        temp = std::stod(input);
    }
    catch (...) {
        std::cout << "Invalid input. Please enter a numeric temperature.\n";
        return 1;
    }

    std::cout << "Enter unit (Celsius, Fahrenheit, Kelvin): ";
    std::getline(std::cin, unit);

    std::string result = convertTemperature(temp, unit);
    std::cout << "\n" << result << "\n";

    return 0;
}
