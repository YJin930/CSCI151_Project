//Yuanjin Liang
//Project 4: Class Design Section C
//December 16th 2021

#include <string>
#include <iostream>
#include "Class_DesignSC.h"

int main()
{
    item g1{"Book", 1, 1.50, 12};
    getItem(g1);

    item g2{"Pencil", 2, 0.50, 17};
    getItem(g2);

    item g3{"Eraser", 3, 0.75, 6};
    getItem(g3);

    item g4{"Highlighter", 4, 1.00, 19};
    getItem(g4);

    item g5{"Markers", 5, 5.00, 21};
    getItem(g5);

    item g6{"Crayons", 6, 4.50, 6};
    getItem(g6);

    item g7{"Staples", 7, 2.50, 16};
    getItem(g7);

    item g8{"Paper", 8, 0.25, 8};
    getItem(g8);

    store s1{"Book", 12, 1};
    inStock(s1);

    store s2{"Pencil", 17, 2};
    inStock(s2);

    store s3{"Eraser", 6, 3};
    inStock(s3);

    store s4{"Highlighter", 19, 0};
    inStock(s4);

    store s5{"Markers", 21, 8};
    inStock(s5);

    store s6{"Crayons", 6, 7};
    inStock(s6);

    store s7{"Staples", 16, 2};
    inStock(s7);

    store s8{"Paper", 8, 3};
    inStock(s8);
}