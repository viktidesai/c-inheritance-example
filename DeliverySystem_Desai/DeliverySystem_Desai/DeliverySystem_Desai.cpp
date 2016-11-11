// DeliverySystem_Desai.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Package_Desai.h"
#include "Overnight_Desai.h"
#include "TwoDayPackage_Desai.h"
using namespace std;


int main()

{
	int i = 0; 
	do {
		Package_Desai a;

		a.dispinfo();

		cout << endl;
		cout << endl;
		cout << "=====================================================" << endl;
		cout << "Package 1:" << endl << endl;
		cout << "Sender:" << endl;
		cout << "John Smith" << endl;
		cout << "1 Davidson Road" << endl;
		cout << "Piscataway, NJ 08854" << endl;

		cout << endl;
		cout << endl;

		cout << "Receipent :" << endl;
		cout << "Tom Smith" << endl;
		cout << "2 Davidson Road" << endl;
		cout << "Piscataway, NJ 08854" << endl;

		cout << "Weight of package : 10 ounces" << endl;
		cout << "Type of delivery : Regular Delivery" << endl << endl << endl;

		cout << "Cost of Package:";
		a.setweight(10);
		a.calculateCost();
		cout << "========================================================";

		cout << endl;
		cout << endl;


		cout << "Package 2:" << endl << endl;
		cout << "Sender:" << endl;
		cout << "Mary James" << endl;
		cout << "6 Davidson Road" << endl;
		cout << "Piscataway, NJ 08854" << endl;

		cout << endl;
		cout << endl;

		cout << "Receipent :" << endl;
		cout << "Tom Ford" << endl;
		cout << "25 Davidson Road" << endl;
		cout << "Piscataway, NJ 08854" << endl << endl << endl;;

		cout << "Weight of package : 20 ounces" << endl;
		cout << "Type of delivery :Two Day Delivery" << endl;

		cout << "Cost of Package:";

		TwoDayPackage_Desai b;
		Package_Desai *x = &b;
		x->setweight(20);
		b.calculateCost();
		cout << "=========================================================";

		cout << endl;
		cout << endl;

		cout << "Package 3:" << endl << endl;
		cout << "Sender:" << endl;
		cout << "Jacob Gomez" << endl;
		cout << "24 Davidson Road" << endl;
		cout << "Piscataway, NJ 08854" << endl;

		cout << endl;
		cout << endl;

		cout << "Receipent :" << endl;
		cout << "Shawn Mendez" << endl;
		cout << "8 Davidson Road" << endl;
		cout << "Piscataway, NJ 08854" << endl << endl << endl;

		cout << "Weight of package : 30 ounces" << endl;
		cout << "Type of delivery : Overnight Delivery" << endl;

		cout << "Cost of Package:";

		Overnight_Desai c;
		Package_Desai *y = &c;
		y->setweight(30);
		c.calculateCost();
		Package_Desai d;
		cout << "====================================================";
		cout << endl;
		cout << endl;
		cout << "Total cost of all packages:";
		cout << a.coststd + b.costtwo + c.costovnt << " $" << endl << endl;

		cout << "Press 1 to exit";
		cin >> i;
	} while (i = 0); 
}

