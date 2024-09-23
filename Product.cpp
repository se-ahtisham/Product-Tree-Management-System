#include"Product.h"

Product::Product()
{
    Name = "";
    Catagory = "";
    Rating = 0;
}
void Product::SetProductName(string name1)
{
    this->Name = name1;
}
string Product::GetProductName()
{
    return Name;
}

void Product::SetProductCatagory(string catagory1)
{
    this->Catagory = catagory1;

}
string Product::GetProductCatagory()
{
    return Catagory;
}

void Product::SetProductRating(int rate1)
{
    this->Rating = rate1;
}
int Product::GetProductRate()
{
    return Rating;
}


void Product::SetProductPrice(int price1)
{
    this->Price = price1;
}
int Product::GetProductPrice()
{
    return Price;
}

void Product::Setleft(Product* l) {
    this->Left = l;
}
Product* Product::getLeft() {
    return Left;
}

void  Product::SetRight(Product* r) {
    this->Right = r;

}
Product* Product::getRight() {
    return Right;
}