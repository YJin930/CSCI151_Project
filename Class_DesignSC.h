#include <string>

class item {
public:
    item(std::string name, int id, double price, int instock)
        : _name{ name }, _id{ id }, _price{ price }, _instock{ instock } {}
    std::string _name;
    int _id;
    double _price;
    int _instock;
};

class store {
public:
    store(std::string itName, int stock, int processOrders)
        : _itName{ itName }, _stock{ stock }, _processOrders{ processOrders } {}
    std::string _itName;
    int _stock;
    int _processOrders;
};

void getItem(item get);
void inStock(store num);
