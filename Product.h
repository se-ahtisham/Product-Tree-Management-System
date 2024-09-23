#pragma once

#include<iostream>
#include<string>
using namespace std;

class Product
{

private:
	string Name;
	string Catagory;
	int Rating;
	int Price;

	Product* Left;
	Product* Right;

public:
	Product();

	void SetProductName(string name1);
	string GetProductName();

	void SetProductCatagory(string catagory1);
	string GetProductCatagory();

	void SetProductRating(int rate1);
	int GetProductRate();


	void SetProductPrice(int price1);
	int GetProductPrice();


	void Setleft(Product* l);
	Product* getLeft();

	void SetRight(Product* r);
	Product* getRight();



};


