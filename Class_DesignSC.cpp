#include <iostream>
#include "Class_DesignSC.h"

void getItem(item get)
{
    std::cout << "Item Name: " << get._name << "    ID: " << get._id << "    Price: $" << get._price << "    In-Stock: " << get._instock <<"\n";
}

void inStock(store num)
{
    if ((num._stock - num._processOrders) < 0)
    {
        std::cout << "I'm sorry but we are out of stock \n";
    }
    else 
    {
        std::cout << num._itName << " x " << (num._stock - num._processOrders) << "\n";
    }

}