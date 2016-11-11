#include "stdafx.h"
#include "Package_Desai.h"
#include<iostream>
using namespace std;


Package_Desai::Package_Desai()
{
}

void Package_Desai::dispinfo()
{
	cout << "Package delivery services program"<<endl;

	cout <<"Cost per ounce for a package : $.50 / ounce"<<endl;
	cout << "Additional cost for two day delivery : $2.00 / ounce"<<endl;
	cout << "Additional cost for overnight delivery : $5.00 / ounce"<<endl;

}
void Package_Desai::setweight(int w)
{
	weight = w;
}

void Package_Desai::calculateCost()
{
	coststd = 0.5 * weight;
	cout << coststd << " $" << endl;
}
