#pragma once

class Calculator
{
private:
	int choice;
	int amountOfNumbers;
	float number;
	float numbers[];
public:
	void Start();
	void SetAmount();
	void Choice();
	void Addition();
	void Subtraction();
	void Multiplication();
	void Division();
	void Power();
	void Root();
};

