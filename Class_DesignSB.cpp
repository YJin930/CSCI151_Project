#include <iostream>
#include "Class_DesignSB.h"

void FileName(File obj)
{
    std::cout << "File Name: " << obj.Fname << "\n";
}

void ImageType(Image pic)
{
    if (pic._type == ".JPEG")
    {
        std::cout << "Image Type: .JPEG \n";
    }
    else if (pic._type == ".PNG")
    {
        std::cout << "Image Type: .PNG";
    }
    else if (pic._type == ".GIF")
    {
        std::cout << "Image Type: .GIF";
    }
    else 
    {
        std::cout << "invalid \n";
    }
}

void DateCreated(Date cre)
{
    std::cout << "Date Created: " << cre._month << " " << cre._day << " " << cre._year << "\n";
}

void ImageSize(Size siz)
{
    std::cout << "Size: " << siz._ISize << "MB \n";
}

void AuthoName(AuthorName auth)
{
    std::cout << "Author: " << auth._AName << "\n";
}

void Dimen(ImageDimen dim)
{
    std::cout << "Image Dimensions: " << dim._width << " by " << dim._height << "\n";
}

void ApertSize(ApertureSize apert)
{
    std::cout << "Aperture Size: f/" << apert._aperture << "\n";
}

void Expotime(ExposureTime exp)
{
    std::cout << "Exposure Time: 1/" << exp._time << "\n";
}

void ISOVALUE(ISOvalue iso)
{
    std::cout << "ISO Value: " << iso._value << "\n";
}

void Flashenable(Flash ena)
{
    std::cout << "Flash Enable: " << (ena._enable == "enable") << "\n";
}
