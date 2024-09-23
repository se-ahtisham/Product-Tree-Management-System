#include"BinarySearchTree.h"



void intro()
{
	cout << endl;
	cout << "\t\t\t ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
	cout << "\t\t\t :::::::::::  Welcome To E-Commerce Recommendation syetm   ::::::::: " << endl;
	cout << "\t\t\t ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
	cout << endl;
}




int main()
{
	intro();
	int choice = 1;
	BinarySearchTree B1;
	string name = "";
	string catagory = "";
	int rating = 0;
	int price = 0;
	while (choice != 0)
	{
		int userchoice = 0;
		cout << endl;
		cout << " Press 1. To Insert Product " << endl;
		cout << " Press 2. To Search Product " << endl;
		cout << " Press 3. To Update Product Price " << endl;
		cout << " Press 4. To Find Most Expensive Product " << endl;
		cout << " Press 5. To Find Most Cheap Product " << endl;
		cout << " Press 6. To Show Products in Pre_Order " << endl;
		cout << " Press 7. To Show Products in In_Order " << endl;
		cout << " Press 8. To Show Products in Post_Order " << endl;
		cout << " Please Enter Your Choice >>>>>  ";
		cin >> userchoice;
		switch (userchoice)
		{
		case 1:
		{
			cout << endl;
			cout << " Please Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			cout << " Please Enter Product Raking: ";
			cin >> rating;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.InsertProduct(name, catagory, rating, price);
			cout << endl;
		}
		break;
		case 2:
		{
			cout << endl;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.SearchProduct(price);
			cout << endl;
		}
		break;
		case 3:
		{
			cout << endl;
			int newprice = 0;
			cout << " Please Enter Product Old Price: ";
			cin >> price;
			cout << " Please Enter Product New Price: ";
			cin >> newprice;
			B1.UpdateProduct(price, newprice);
			cout << endl;
		}
		break;
		case 4:
		{
			cout << endl;
			B1.PrintMaxmiumPriceProduct();
			cout << endl;
		}
		break;
		case 5:
		{
			cout << endl;
			B1.PrintMinimumPriceProduct();
			cout << endl;
		}
		break;

		case 6:
		{
			cout << endl;
			B1.PreOrderPrint(B1.GetRoot());
			cout << endl;
		}
		break;

		case 7:
		{
			cout << endl;
			B1.InOrderPrint(B1.GetRoot());
			cout << endl;
		}
		break;

		case 8:
		{
			cout << endl;
			B1.PostOrderPrint(B1.GetRoot());
			cout << endl;
		}
		break;


		default:
		{
			cout << endl;
			cout << " Error! Invlid Input :( " << endl;
		}
		break;

		} // Switch Brackets

		cout << " Press any key to run again and Press to exit " << endl;
		cout << " Please Enter Your Choice:  ";
		cin >> choice;
		cout << endl;
	} // while Loop Brackets



	system("Pause");
}