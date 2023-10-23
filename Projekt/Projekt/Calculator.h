#pragma once

class Calculator
{
private:
	int choice;
	int number;
	int amountOfNumbers;
	int numbers[];
public:
	void Start();
	void SetAmount();
	void Choice();
	void Addition();
	void Substraction();
	void Multiplication();
	void Division();
	void Power();
	void Root();
};

