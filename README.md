# PRODIGY_SD_01
# Temperature Converter (C++)

## Overview

This program is a console-based temperature converter implemented in C++. It allows users to input a temperature value along with its unit (Celsius, Fahrenheit, or Kelvin) and converts that temperature into the other two units. The output is formatted to display temperatures with two decimal precision for easy reading.

## Features

- Converts temperature values between Celsius, Fahrenheit, and Kelvin scales.
- Accepts user input for both the temperature value and the unit.
- Validates input and handles invalid numeric entries or unknown units gracefully.
- Displays all three temperature units clearly formatted.
- Demonstrates the use of conditionals, string handling, and formatted output in C++.

## How it Works

1. The user is prompted to enter a temperature value (numeric).
2. The user then enters the unit of the given temperature (Celsius, Fahrenheit, or Kelvin).
3. The program processes the input and converts the temperature into the other two units using standard conversion formulas.
4. The results are displayed in a readable format.

## Code Structure

- `convertTemperature` function: Handles the conversion logic based on the input unit.
- `main` function: Manages user input, calls the conversion function, and displays output.
- Error handling is included to catch invalid temperature inputs and unknown unit entries.

## Example Usage

Enter temperature value: 100
Enter unit (Celsius, Fahrenheit, Kelvin): Celsius

Input: 100.00 C
Fahrenheit: 212.00 F
Kelvin: 373.15 K
