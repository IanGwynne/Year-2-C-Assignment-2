#include<iostream>
#include<iomanip>
#include<string>
#include<cassert>
using namespace std;

// Spec File for Assignment 2
// Ian Haworth

class Product
{
public:
	Product();
	Product(int/*bar code*/, string/*product name*/);
	~Product();
	virtual void show(ostream&/*output file or console*/)const;
	int getBarCode() const { return barCode; }
	string getProductName() const { return *productName; }
protected:
	int barCode;
	string* productName;
};

class PrePackedFood : public Product
{
public:
	PrePackedFood();
	PrePackedFood(int/*bar code*/, string/*product name*/, double/*Unit Price*/);
	void show(ostream&/*output file or console*/)const;
	double getUnitPrice() const { return unitPrice; }
private:
	double unitPrice;
};

class FreshFood : public Product
{
public:
	FreshFood();
	FreshFood(int/*bar code*/, string/*product name*/, double/*Unit Price*/, double/*weight*/);
	void show(ostream&/*output file or console*/)const;
	double getUnitPrice() const { return unitPrice; }
	double getWeight() const { return weight; }
private:
	double unitPrice;
	double weight;
};