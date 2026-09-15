#pragma once
class CalcExp
{
private:
	double Totmiles;
	double GasPrice;
	double MilesPerGallon;
	double ParkFee;
	double TollsFees;
	double TotGallons;
	double TotGasExp;
	double TotExpense;
	double getTotGallons();
	double getTotGasPrice();
	double getTotExpense();
	double getTotMiles();
	double getGasPrice();
	double getMilesPerGallon();
	double getTotGasExp();

public:
	void setvalues(double, double, double, double, double);
	CalcExp(double, double, double, double, double, double, double, double);
	CalcExp();
	void CalcTotGallons();
	void CalcGasExp();
	void CalcTotExpense();

	double getTotMiles();
	double getGasPrice();
	double getMilesPerGallon();
	double getTotGallons();
	double getTotGasExp();
	double getTotExpense();

	void setTotMiles(double);
	void setGasPrice(double);
	void setMilesPerGallon(double);
	void setTotGallons(double);
	void setTotExpense(double);
	void setTotGasExp(double);
	void setParkFee(double);
	void setTollsFees(double);
};

