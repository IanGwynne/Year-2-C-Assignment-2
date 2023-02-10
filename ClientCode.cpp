//Write the code for the polymorphic function. Label all output. Add a comment statement clearly identifying the polymorphic function.
#include "Product.h"

//polymorphic function
void polymorphShowFunction(const Product* object)
{
	object->show(cout);
}

int main()
{
	// do not change my main except where you call the polymorphic function as indicated below

	cout << "1a) Create dynamic Product (non default): " << endl;
	Product* phone = new Product(90, "Android cell");
	assert(phone);
	cout << "Name= " << phone->getProductName() << endl;
	cout << "Bar code=" << phone->getBarCode() << endl << endl;
	phone->show(cout);
	cout << "Call polymorphic function:\n ";
	polymorphShowFunction(phone);



	cout << endl << endl;
	delete phone;

	cout << "1b) Create dynamic Product (default): " << endl;
	Product* item = new Product;
	assert(item);
	cout << "Name= " << item->getProductName() << endl;
	cout << "Bar code=" << item->getBarCode() << endl << endl;
	item->show(cout);
	cout << "Call polymorphic function:\n ";
	polymorphShowFunction(item);



	cout << endl << endl;
	delete item;


	cout << "2a) Create dynamic PrePackedFood (non default): " << endl;
	PrePackedFood* pasta = new PrePackedFood(40, "spaghetti", -.67);
	assert(pasta);
	cout << "Name= " << pasta->getProductName() << endl;
	cout << "Bar code=" << pasta->getBarCode() << endl << endl;
	cout << "Unit Price=" << pasta->getUnitPrice() << endl << endl;
	pasta->show(cout);
	cout << "Call polymorphic function:\n ";
	polymorphShowFunction(pasta);


	cout << endl << endl;
	delete pasta;


	cout << "2b) Create dynamic Prepacked (default): " << endl;
	PrePackedFood* food = new PrePackedFood;
	assert(food);
	cout << "Name= " << food->getProductName() << endl;
	cout << "Bar code=" << food->getBarCode() << endl << endl;
	cout << "Unit Price=" << food->getUnitPrice() << endl << endl;
	food->show(cout);
	cout << "Call polymorphic function:\n ";
	polymorphShowFunction(food);


	cout << endl << endl;
	delete food;


	cout << "3a) Create dynamic FreshFood (non default): " << endl;
	FreshFood* apples = new FreshFood(-6, "Delicious", 1.1, .67);
	assert(apples);
	cout << "Name= " << apples->getProductName() << endl;
	cout << "Bar code=" << apples->getBarCode() << endl << endl;
	cout << "Weight=" << apples->getWeight() << endl << endl;
	cout << "Price=" << apples->getUnitPrice() << endl << endl;
	apples->show(cout);
	cout << "Call polymorphic function:\n ";
	polymorphShowFunction(apples);


	cout << endl << endl;
	delete apples;

	cout << "3b) Create dynamic FreshFood (default): " << endl;
	FreshFood* freshPtr = new FreshFood;
	assert(freshPtr);
	cout << "Name= " << freshPtr->getProductName() << endl;
	cout << "Bar code=" << freshPtr->getBarCode() << endl << endl;
	cout << "Weight=" << freshPtr->getWeight() << endl << endl;
	cout << "Price=" << freshPtr->getUnitPrice() << endl << endl;
	freshPtr->show(cout);
	cout << "Call polymorphic function:\n ";
	polymorphShowFunction(freshPtr);


	cout << endl << endl;
	delete freshPtr;

	system("pause");
}

/*
1a) Create dynamic Product (non default):
Name= Android cell
Bar code=90

Barcode:90 is Android cell
Call polymorphic function:
 Barcode:90 is Android cell


1b) Create dynamic Product (default):

Please enter Product Name Android
Please enter Bar Code 6000
Name= Android
Bar code=6000

Barcode:6000 is Android
Call polymorphic function:
 Barcode:6000 is Android


2a) Create dynamic PrePackedFood (non default):
Name= spaghetti
Bar code=40

Unit Price=0

Barcode:40 is spaghetti
unitPrice is $0
Call polymorphic function:
 Barcode:40 is spaghetti
unitPrice is $0


2b) Create dynamic Prepacked (default):

Please enter Product Name Robot
Please enter Bar Code 9000
Please enter Unit Price 50
Name= Robot
Bar code=9000

Unit Price=50

Barcode:9000 is Robot
unitPrice is $50
Call polymorphic function:
 Barcode:9000 is Robot
unitPrice is $50


3a) Create dynamic FreshFood (non default):
Name= Delicious
Bar code=0

Weight=0.67

Price=1.1

Barcode:0 is Delicious
unitPrice is $1.1
weight is 0.67lbs
Total Price is $0.737
Call polymorphic function:
 Barcode:0 is Delicious
unitPrice is $1.1
weight is 0.67lbs
Total Price is $0.737


3b) Create dynamic FreshFood (default):

Please enter Product Name Barry
Please enter Bar Code 10000
Please enter Unit Price 400
Please enter Weight120
Name= Barry
Bar code=10000

Weight=120

Price=400

Barcode:10000 is Barry
unitPrice is $400
weight is 120lbs
Total Price is $48000
Call polymorphic function:
 Barcode:10000 is Barry
unitPrice is $400
weight is 120lbs
Total Price is $48000


Press any key to continue . . .

C:\Users\Ian\Desktop\Year 2 Semester 1\C++\Assignment 2\x64\Debug\Assignment 2.exe (process 10812) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/