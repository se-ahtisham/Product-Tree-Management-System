#include"BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
	Root = NULL;
	count = 0;
}


Product* BinarySearchTree:: GetRoot() {
	return Root;
}

void BinarySearchTree::InsertProduct(string Name, string catagory, int rating, int price)
{
	Product* NewProduct = new Product();
	NewProduct->SetProductName(Name);
	NewProduct->SetProductCatagory(catagory);
	NewProduct->SetProductRating(rating);
	NewProduct->SetProductPrice(price);
	if (Root == NULL)
	{
		Root = NewProduct;
		cout << " Product Insert Successfully :) " << endl;
		count++;
		return;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			// For Larger Values
			if (price > temp->GetProductPrice() && temp->getRight() != NULL)
			{
				temp = temp->getRight();
			}
			else if (price > temp->GetProductPrice() && temp->getRight() == NULL)
			{
				temp->SetRight(NewProduct);
				cout << " Product Insert Successfully :) " << endl;
				count++;
				return;

			}

			// For Small Values
			if (price < temp->GetProductPrice() && temp->getLeft() != NULL)
			{
				temp = temp->getLeft();
			}
			else if (price < temp->GetProductPrice() && temp->getLeft() == NULL)
			{
				temp->Setleft(NewProduct);
				cout << " Product Insert Successfully :) " << endl;
				count++;
				return;

			}

		}

	}

}



void BinarySearchTree::SearchProduct(int price)
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			if (price > temp->GetProductPrice())
			{
				temp = temp->getRight();
			}
			else if (price < temp->GetProductPrice())
			{
				temp = temp->getLeft();
			}
			else
			{
				cout << " ::::: Found ::::: " << endl;
				cout << " Product Name is: " << temp->GetProductName() << endl;
				cout << " Product Catagory is: " << temp->GetProductCatagory() << endl;
				cout << " Product Price is: " << temp->GetProductPrice() << endl;
				cout << " Product Rating is: " << temp->GetProductRate() << endl;
				cout << endl;
				return;

			}

		}


	}
}
void BinarySearchTree::UpdateProduct(int OldPrice, int NewPrice)
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			if (OldPrice > temp->GetProductPrice())
			{
				temp = temp->getRight();
			}
			else if (OldPrice < temp->GetProductPrice())
			{
				temp = temp->getLeft();
			}
			else
			{
				cout << " ::::: Found ::::: " << endl;
				cout << " ::::: Old Details are ::::: " << endl;
				cout << " Product Name is: " << temp->GetProductName() << endl;
				cout << " Product Catagory is: " << temp->GetProductCatagory() << endl;
				cout << " Product Price is: " << temp->GetProductPrice() << endl;
				cout << " Product Rating is: " << temp->GetProductRate() << endl;
				cout << endl;
				cout << endl;
				temp->SetProductPrice(NewPrice);
				cout << " ::::: New Details are ::::: " << endl;
				cout << " Product Name is: " << temp->GetProductName() << endl;
				cout << " Product Catagory is: " << temp->GetProductCatagory() << endl;
				cout << " Product Price is: " << temp->GetProductPrice() << endl;
				cout << " Product Rating is: " << temp->GetProductRate() << endl;
				cout << endl;
				return;

			}

		}


	}





}

void BinarySearchTree::PrintMaxmiumPriceProduct()
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}

	else
	{
		Product* temp = Root;
		while (temp->getRight() != NULL)
		{
			temp = temp->getRight();
		}
		cout << " ::::: This is Most Expensive Product ::::: " << endl;
		cout << " Product Name is: " << temp->GetProductName() << endl;
		cout << " Product Catagory is: " << temp->GetProductCatagory() << endl;
		cout << " Product Price is: " << temp->GetProductPrice() << endl;
		cout << " Product Rating is: " << temp->GetProductRate() << endl;
		cout << endl;
	}




}
void BinarySearchTree::PrintMinimumPriceProduct()
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}

	else
	{
		Product* temp = Root;
		while (temp->getLeft() != NULL)
		{
			temp = temp->getLeft();
		}


		cout << " ::::: This is Most Cheap Product ::::: " << endl;
		cout << " Product Name is: " << temp->GetProductName() << endl;
		cout << " Product Catagory is: " << temp->GetProductCatagory() << endl;
		cout << " Product Price is: " << temp->GetProductPrice() << endl;
		cout << " Product Rating is: " << temp->GetProductRate() << endl;
		cout << endl;
	}



}


void BinarySearchTree::PreOrderPrint(Product* temp)
{
    if (temp == NULL)
	{
        return;
    }
	cout << "The Product Name is: "<< temp->GetProductName() << endl;
	cout << "The Product Price is: "<< temp->GetProductPrice() << endl;
	cout << "-----------------------------" << endl;
    PreOrderPrint(temp->getLeft());
    PreOrderPrint(temp->getRight());
}
void BinarySearchTree:: InOrderPrint(Product* temp) {
	

	if (temp == NULL)
	{
		return;
	}
	PreOrderPrint(temp->getLeft());
	cout << "The Product Name is: " << temp->GetProductName() << endl;
	cout << "The Product Price is: " << temp->GetProductPrice() << endl;
	cout << "-----------------------------" << endl;
	PreOrderPrint(temp->getRight());
}



void BinarySearchTree:: PostOrderPrint(Product* temp) {
	if (temp == NULL)
	{
		return;
	}
	PreOrderPrint(temp->getLeft());
	PreOrderPrint(temp->getRight());
	cout << "The Product Name is: " << temp->GetProductName() << endl;
	cout << "The Product Price is: " << temp->GetProductPrice() << endl;
	cout << "-----------------------------" << endl;
}