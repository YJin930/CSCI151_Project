//Yuanjin Liang
//Project 4: Class Design Section B
//December 16th 2021

#include <string>
#include <iostream>
#include "Class_DesignSB.h"

int main()
{
    File o1{ "A"};
    FileName(o1);

    Image p1{".JPEG"};
    ImageType(p1);

    Date c1{"November", 21, 2021};
    DateCreated(c1);

    Size s1{138};
    ImageSize(s1);

    AuthorName a1{"Naomi Lei"};
    AuthoName(a1);

    ImageDimen d1{10, 8};
    Dimen(d1);

    ApertureSize as1(20);
    ApertSize(as1);

    ExposureTime e1{100};
    Expotime(e1);

    ISOvalue i1{1000};
    ISOVALUE(i1);

    Flash f1{"enable"};
    Flashenable(f1);
}
