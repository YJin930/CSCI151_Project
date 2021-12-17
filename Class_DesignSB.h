#include <string>

class File {
public:
    File(std::string name)
        : Fname{ name } {}
    std::string Fname;
};

class Image {
public:
    Image(std::string type)
        : _type{ type } {}
    std::string _type;
};

class Date {
public:
    Date(std::string month, int day, int year)
        : _month{ month }, _day{ day }, _year{ year } {}
    std::string _month;
    int _day;
    int _year;
};

class Size {
public:
    Size(double ISize)
        :_ISize{ ISize } {}
    double _ISize;
};

class AuthorName {
public:
    AuthorName(std::string AName)
        : _AName{ AName } {}
    std::string _AName;
};

class ImageDimen {
public:
    ImageDimen(int width, int height)
        : _width{ width }, _height{ height } {}
    int _width;
    int _height;
};

class ApertureSize {
public:
    ApertureSize(int aperture)
        : _aperture{ aperture } {}
    int _aperture;
};

class ExposureTime {
public:
    ExposureTime(int time)
        : _time{ time } {}
    int _time;
};

class ISOvalue {
public:
    ISOvalue(int value)
        : _value{ value } {}
    int _value;
};

class Flash {
public:
    Flash(std::string enable)
        : _enable{ enable } {}
    std::string _enable;
};

void FileName(File obj);
void ImageType(Image pic);
void DateCreated(Date cre);
void ImageSize(Size siz);
void AuthoName(AuthorName auth);
void Dimen(ImageDimen dim);
void ApertSize(ApertureSize apert);
void Expotime(ExposureTime exp);
void ISOVALUE(ISOvalue iso);
void Flashenable(Flash ena);
