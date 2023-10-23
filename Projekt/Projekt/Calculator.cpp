﻿#include <iostream>
#include "Calculator.h"
#include <stdlib.h>

using namespace std;

void Calculator::Start()
{
    system("cls");

    cout << "What do you want to do in a calculator? \n";
    cout << "1) Addition + \n";
    cout << "2) Subtraction - \n";
    cout << "3) Multiplication * \n";
    cout << "4) Division / \n";
    cout << "5) Power ^ \n";
    cout << "6) Square Root | \n";
    cout << "Pick: ";
    cin >> choice;

    SetAmount();
}

void Calculator::SetAmount()
{
    system("cls");

    cout << "How many Numbers? \n";
    cout << "Answer: ";
    cin >> amountOfNumbers;
    numbers[amountOfNumbers];
    int i = 0;
    while (i < amountOfNumbers)
    {
        cout << "Number " << i + 1 << " :";
        cin >> numbers[i];
        
        i++;
    }

    Choice();
}

void Calculator::Choice()
{
    system("cls");

    switch (choice)
    {
    case 1:
        Addition();
    break;
    case 2:
        Addition();
    break;
    case 3:
        Addition();
    break;
    case 4:
        Addition();
    break;
    case 5:
        Addition();
    break;
    case 6:
        Addition();
    break;
    default:
        cout << "Theres no more choices";
    break;
    }
}

void Calculator::Addition()
{
    //cout << "First number: ";
    //cin >> number1;
    //cout << "Second numer: ";
    //cin >> number2;
    //cout << "Your number is: " << number1 + number2;

    number = numbers[0];

    for (int i = 1;i < amountOfNumbers; i++)
    {
        
        if (numbers[i] < 0)
        {
            cout << number << " + " << "(" << numbers[i] << ")";
        }
        else
        {
            cout << number << " + " << numbers[i];
        }
        number += numbers[i];
        cout << " = " << number << endl;

    }
}