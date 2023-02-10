#include "Product.h"

// Implementation File for Assignment 2
// Ian Haworth

// Non-Default contructor for object of type Product
Product::Product(int newBarCode, string newProductName)
{
	barCode = (newBarCode >= 0) ? newBarCode : 0;
	productName = new string((newProductName.length() == 0) ? "NO NAME" : newProductName);
	assert(productName != NULL);
}

// Default contructor for object of type Product
Product::Product()
{
	productName = new string;
	assert(productName != NULL);
	cout << endl << "Please enter Product Name ";
	getline(cin, *productName);
	cout << "Please enter Bar Code ";
	cin >> barCode;
	while (barCode < 0)
	{
		cout << "BarCode must be at least 0, please re-enter" << endl;
		cin >> barCode;
	}
	cin.ignore(80, '\n');
}

// Destructor for object of type Product
Product::~Product()
{
	delete productName;
}

// Non-default constructor for Object of type PrePackedFood
PrePackedFood::PrePackedFood(int newBarcode, string newProductName, double newUnitPrice) : Product(newBarcode, newProductName)
{
	unitPrice = (newUnitPrice >= 0) ? newUnitPrice : 0;
}

// Default constructor for Object of type PrePackedFood
PrePackedFood::PrePackedFood() : Product()
{
	cout << "Please enter Unit Price ";
	cin >> unitPrice;
	while (unitPrice < 0)
	{
		cout << "Unit price must be at least 0, please re-enter" << endl;
		cin >> unitPrice;
	}
	cin.ignore(80, '\n');
}

// Non-default constructor for Object of type FreshFood
FreshFood::FreshFood(int newBarcode, string newProductName, double newUnitPrice, double newWeight) : Product(newBarcode, newProductName)
{
	unitPrice = (newUnitPrice >= 0) ? newUnitPrice : 0;
	weight = (newWeight >= 0) ? newWeight : 0;
}

// Default constructor for Object of type FreshFood
FreshFood::FreshFood() : Product()
{
	cout << "Please enter Unit Price ";
	cin >> unitPrice;
	while (unitPrice < 0)
	{
		cout << "Unit price must be at least 0, please re-enter" << endl;
		cin >> unitPrice;
	}
	cout << "Please enter Weight";
	cin >> weight;
	while (weight < 0)
	{
		cout << "Weight must be at least 0, please re-enter" << endl;
		cin >> weight;
	}
	cin.ignore(80, '\n');
}


// Shows the values within a Product
void Product::show(ostream& out) const
{
	out << "Barcode:" << barCode << " is " << *productName << endl;
}

// Shows the values within PrePackedFood
void PrePackedFood::show(ostream& out) const
{
	Product::show(out);
	out << "unitPrice is $" << unitPrice << endl;
}

// Shows the values within FreshFood
void FreshFood::show(ostream& out) const
{
	Product::show(out);
	out << "unitPrice is $" << unitPrice << endl
		<< "weight is " << weight << "lbs" << endl
		<< "Total Price is $" << unitPrice * weight << endl;
}