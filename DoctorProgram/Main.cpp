#include <iostream>
#include <cmath>
#include "DoctorClass.h";

int main()
{
	int* x;
	x = new int;

	std::cout << "Before we begin, For this Program, we are using the Allocation and Deallocation of Heap memory in the form of pointers" << std::endl;
	std::cout << "For this, i will show how this memory works, as well as explain how it works!" << std::endl;

	std::cout << "Please input a number, that will become our Pointer! : "; // asking for the input
	std::cin >> *x;

	std::cout << "Now, Your number without being referenced is " << x << " " << std::endl; // show the memory address
	std::cout << "Now, We are going to reference it properly! " << *x << " " << std::endl; // show the proper number

	std::cout << "How this works, is that our computer will take a number, and Assign it a memory address, " << x << " , this is what it assigned your inputed number!" << std::endl;
	std::cout << " Now, when we call it without derefrencing it, It will ONLY give you that Address, But if we were to Refrence it properly, It gives us " << *x << " , This is how most of the following program works!" << std::endl;

	std::cout << " Once you create a NEW object, Such as i did with the Int, It is good practice to DELETE it after it is used, Thus clearing the memory it used, and allowing for programs to run faster!" << std::endl;

	delete x; // delete the used int

	std::cout << "Now, Let us get to the better program!" << std::endl;

	system("pause"); // Pauses the system, breaking up the Flow slightly

	DoctorClass* p = new DoctorClass(); // Iniating our new Person
	p->Name = "Sophie"; // Naming our Doctor
	p->Talk(); // Our doctor introduces herself
	p->WhatToSay("Today, Ill be Calculating your BMI! This Proscess is simple, and quite easy for a program like myself!"); // This programs allows the doctor to say what you want them to say!


	double* WeightInLbs; // storing this as a double pointer
	WeightInLbs = new double; // inting and making this pointer

	double WeightInKG; // changing the pointer to an int for later uses

	std::cout << " Please, Input your Weight in Pounds, Rounded to the \n nearest whole Number! : "; // asking the user for input, and telling them how to input what the program needs
	std::cin >> *WeightInLbs; // inputing the Number

	WeightInKG = *WeightInLbs * .4536; // calculation for Lbs to Kg

	std::cout << " You are " << WeightInKG << " Kilograms!\n\n"; // Telling the user their weight in KiloGrams!

	system("pause"); // Pauses the system, breaking up the Flow slightly

	double* HeightInCM; // Pointer Double
	HeightInCM = new double; // Inting the Pointer Double
	double HeightInM; // Double for Height in Meters

	std::cout << " \n\n Please Input your Height in CM! : "; // asking for the Users heignt in CM
	std::cin >> *HeightInCM; // Inputs the Number into the Pointer

	HeightInM = *HeightInCM * .01; // Calculation for converting CM to M

	std::cout << " You are " << HeightInM << " Meteres Tall!!\n\n"; // Tells the user how tall they are in M

	system("pause"); // Another Pause, Breaking up the suystem a little more

	std::cout << " \n\n Now, Let us calculate your BMI!"; // Now to the final calculation

	double Bmi_Height; // Double for the Height used in BMI calculation
	int* Bmi; // Intiger for final product, made as an int, so that it rounds up to the nearest full number
	Bmi = new int; // inting the Pointer Int

	Bmi_Height = pow(HeightInM, 2); // C Math allows me to use this for Putting the Height in M to the Power of two. (Squaring)

	*Bmi = WeightInKG / Bmi_Height; // Final calculation for BMI!


	std::cout << " Your BMI is " << *Bmi << std::endl; // States the BMI of the user

	if (*Bmi >= 9 && *Bmi <= 18) // If the BMI is Above nine, and Less than Eighteen, they are Underweight
	{
		std::cout << " You are Underweight! \n\n";
		p->WhatToSay(" You appear to be underweight! Heres a few things that can help you fix that!\n");
		p->WhatToSay(" You may want to eat more often! instead of 2-3 meals a day, It would be better to eat 5-6 small meals throughout the day!\n");
		p->WhatToSay(" You may want to eat more High Nutrient foods! (Whole-Grain bread, fruit, vegetables, dairy, lean protein, and nuts/seeds!) \n");
		p->WhatToSay(" If you find eating that much Difficult, Instead of Soda or Coffee, or other drinks, Smoothies may be better for you! Drink a smoothie made with milk, Fresh/Frozen fruit, or even a liquid Meal replacement! \n");
		p->WhatToSay(" Instead of drinking before a meal, Try drinking a high Calorie veberage along the meal, or 30 Min after! \n");
		p->WhatToSay(" Exercise! Although this may sound odd, Streingth training could give you more muscle weight than fat weight! \n");
	}
	if (*Bmi >= 19 && *Bmi <= 24) // If the BMI is above 19, and less than 24, They are Healthy
	{
		std::cout << "You are Healthy! \n\n";
		p->WhatToSay(" Youre at a healthy weight! Great job at taking care of yourself, but heres a few tips to say on this track!\n");
		p->WhatToSay(" Limit your portions! Having a good portion of healthy foods should help you keep healthy!\n");
		p->WhatToSay(" Exercise! Around 150 Min of Physical activity should be great! This is not all at once, and can be broken up throughout the day!\n");
	}
	if (*Bmi >= 25 && *Bmi <= 29)// If the BMI is above 25, and less than 29, They are Overweight
	{
		std::cout << " You are Overweight!\n\n";
		p->WhatToSay(" You appear to be overweight!, Here is a few tips to cut your weight down! \n");
		p->WhatToSay(" Consume more good fat, instead of bad fats! || Good fats include Avacado, Fish, etc, While bad fats are Saturated fats, and are found in fried foods! || \n");
		p->WhatToSay(" Consume less Processed /  Sugary foods! \n");
		p->WhatToSay(" Make sure to eat plenty of Dietary Fiber! \n");
		p->WhatToSay(" Exercise! Around 150 or More Min of Physical activity should be great! This is not all at once, and can be broken up throughout the day! \n");
		p->WhatToSay(" Try to Food budget + Prep! Budgeting you food means that, You have a set ammount of food per day, and Prepping means that you make your meals in advance! \n");
	}
	if (*Bmi >= 30 && *Bmi <= 39)// If the BMI is above 30, and less than 39, They are Obese
	{
		std::cout << " You are Obese!\n\n";
		p->WhatToSay(" You appear to be in the Obese Catagory! Heres a few things you can do to help that! \n");
		p->WhatToSay(" Follow a healthy eating plan! Make sure that this has fewer calories that what you eat currently! \n");
		p->WhatToSay(" Change up a few habits! Set goals for yourself, and be prepaired for setbacks -  They're normal! \n");
		p->WhatToSay(" Try a weight Managment Program! Check if theres a weight watchers group in your city or town! \n");
		p->WhatToSay(" Try Intermittent fasting! Theres the Alternate - day Fast, Where you eat nothing for a set day, than eat the next, \n");
		p->WhatToSay(" or, try having a set time frame in the day where you can eat! \n");
		p->WhatToSay(" Of course, Please consult your doctor! as they may suggest a medicine for you! \n");
	}
	if (*Bmi >= 40 )// If the BMI is above 40, They are Overly Obese
	{
		std::cout << "You are Extremely Obese!\n\n";
		p->WhatToSay(" You appear to be in the Obese Catagory! Heres a few things you can do to help that! \n");
		p->WhatToSay(" Follow a healthy eating plan! Make sure that this has fewer calories that what you eat currently! \n");
		p->WhatToSay(" Change up a few habits! Set goals for yourself, and be prepaired for setbacks -  They're normal! \n");
		p->WhatToSay(" Try a weight Managment Program! Check if theres a weight watchers group in your city or town! \n");
		p->WhatToSay(" Try Intermittent fasting! Theres the Alternate - day Fast, Where you eat nothing for a set day, than eat the next, \n");
		p->WhatToSay(" or, try having a set time frame in the day where you can eat! \n");
		p->WhatToSay(" Of course, Please consult your doctor! as they may suggest a medicine for you! \n");
		p->WhatToSay(" Your Doctor may also consider a Bypass surgury in order to help reduce your weight! \n");
	}

	delete p; // deleting the used Pointer!
	delete WeightInLbs; // deleting the used Pointer!
	delete HeightInCM; // deleting the used Pointer!
	delete Bmi; // deleting the used Pointer!

	return 0;
}