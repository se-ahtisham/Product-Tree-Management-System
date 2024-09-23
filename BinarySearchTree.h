#pragma once
#include"Product.h"


class BinarySearchTree
{
private:

	Product* Root;
	int count;

public:
	BinarySearchTree();

	Product * GetRoot();

	void InsertProduct(string Name, string catagory, int rating, int price);
	void SearchProduct(int price);
	void UpdateProduct(int OldPrice, int NewPrice);

	void PrintMaxmiumPriceProduct();
	void PrintMinimumPriceProduct();

	void PreOrderPrint(Product* temp);
	void InOrderPrint(Product* temp);
	void PostOrderPrint(Product* temp);


};

