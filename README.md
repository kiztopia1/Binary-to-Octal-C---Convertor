# Binary to Octal convertor in c++

## Algorithm
- Taking the input (binary)
  ![Flow chart](https://github.com/kiztopia1/Binary-to-Octal-C---Convertor/blob/master/TakingInput.jpg?raw=true)
- Convert the binary into decimal by dividing each digit of the binary the corresponding weight
  ![Flow chart](https://github.com/kiztopia1/Binary-to-Octal-C---Convertor/blob/master/BinaryToDecimal.jpg?raw=true)
- Convert the decimal to octal by dividing it by 8 and storing the reminder into an array until the decimal divided by 8 becomes zero
  ![Flow chart](https://github.com/kiztopia1/Binary-to-Octal-C---Convertor/blob/master/DecimalToOctal.jpg?raw=true)
- Then display the numbers in the array in reverse order
- ![Flow chart](https://github.com/kiztopia1/Binary-to-Octal-C---Convertor/blob/master/PrintngFromTheArray.jpg?raw=true)
