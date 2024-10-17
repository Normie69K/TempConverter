# Temperature Converter

A simple console-based temperature converter written in C. This program allows users to convert temperatures between Celsius, Fahrenheit, and Kelvin. It features a user-friendly menu, input prompts, and an ASCII art display of the word "Temperature."

## Features

- Converts between three temperature scales: Celsius, Fahrenheit, and Kelvin.
- User-friendly interface with prompts for input.
- ASCII art display for enhanced visual appeal.
- Handles invalid input and offers a chance to re-enter values.

## Getting Started

### Prerequisites

- A C compiler (like GCC) installed on your system.
- Basic understanding of how to compile and run C programs.

### Installation

1. Clone the repository:
   ```bash
   https://github.com/Normie69K/TempConverter.git
   ```

2. Navigate to the project directory:
   ```bash
   cd temperature-converter
   ```

3. Compile the program:
   ```bash
   gcc temp-converter.c -o temp-converter
   ```

### Usage

1. Run the compiled program:
   ```bash
   ./temp-converter
   ```

2. Follow the on-screen prompts to enter your name, select the temperature unit you want to convert from, and enter the temperature value.

3. Select the temperature unit you want to convert to and view the result.

### Example

```
Enter your name: Alice
Welcome, Alice!
Select options from below:
1. Celsius
2. Fahrenheit
3. Kelvin
Select the temperature unit you are entering the value for: 1
Enter the amount of temperature you want to convert: 25
Select options from below:
1. Celsius
2. Fahrenheit
3. Kelvin
Select the temperature unit you want to convert to: 2
After converting 25 °C to °F, we get 77 °F
```

## Code Explanation

- The program uses functions to organize the code:
  - `displayTemperatureArt()`: Displays the ASCII art for the word "Temperature."
  - `menu()`: Displays the options for temperature units.
- It uses conditional statements to perform the necessary conversions based on user input.
- The program employs the `sleep()` function to create a pause between outputs, enhancing user experience.

## Contributing

Feel free to fork the repository and make a pull request with improvements or bug fixes. If you have suggestions for features or enhancements, please open an issue.
