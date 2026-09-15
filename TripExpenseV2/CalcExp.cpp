#include "CalcExp.h"

CalcExp::CalcExp(double a, double b, double c, double d, double e, double f, double g, double h)
{
	this->Totmiles = a;
	this->GasPrice = b;
	this->MilesPerGallon = c;
	this->ParkFee = d;
	this->TollsFees = e;
	this->TotGallons = f;
	this->TotGasExp = g;
	this->TotExpense = h;

	this->TotGallons = 0;
	this->TotGasExp = 0;
	this->TotExpense = 0;
} 

CalcExp::CalcExp()
{
	this->Totmiles = 0;
	this->GasPrice = 0;
	this->MilesPerGallon = 0;
	this->ParkFee = 0;
	this->TollsFees = 0;
	this->TotGallons = 0;
	this->TotGasExp = 0;
	this->TotExpense = 0;
}

void CalcExp::CalcTotGallons()
{
	this->TotGallons = this->Totmiles / this->MilesPerGallon;
}

double CalcExp::getTotGallons()
{
	return this->TotGallons;
}

void CalcExp::CalcGasExp()
{
	this->TotGasExp = this->TotGallons * this->GasPrice;
}
double CalcExp::getTotGasPrice()
{
	return this->TotGasExp;
}

void CalcExp::CalcTotExpense()
{
	this->TotExpense = this->TotGasExp + this->ParkFee + this->TollsFees;
}
double CalcExp::getTotExpense()
{
	return this->TotExpense;
}

void CalcExp::setTotMiles(double a)
{
	this->Totmiles = a;
}

void CalcExp::setGasPrice(double b)
{
	this->GasPrice = b;
}