#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0, weight = 1;
    int remainder = 0;
    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * weight;
        binary = binary / 10;
        weight = weight * 2;
    }
    return decimal;
}

void decimalToOctal(int decimal)
{
    int i = 0;
    int octal[50];

    // converting decimal to octal
    //    int quotient = decimal;
    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
	cout << i<< endl;
    for (int j = i-1 ; j >= 0; j--)
    {
        cout << octal[j];
    }
}

int main()
{
    // as binary numbers can be long
    long binary;
    int remainder, decimal, quotient, i, j, octal_output[100];

    cout << "Enter a binary number: ";
    cin >> binary;

    decimal = binaryToDecimal(binary);
    
    decimalToOctal(decimal);

    return 0;
}