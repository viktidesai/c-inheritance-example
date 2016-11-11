#include "stdafx.h"
#include "Package_Desai.h"
#include "TwoDayPackage_Desai.h"
#include <iostream>
using namespace std;


TwoDayPackage_Desai::TwoDayPackage_Desai()
{
}

void TwoDayPackage_Desai::calculateCost()
{
	costtwo = 2 * weight;
	cout << costtwo << " $ " << endl;
}

