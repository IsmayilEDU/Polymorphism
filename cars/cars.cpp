#include <iostream>
using namespace std;
#include<vector>

#include"mainClasses.h"

class Automatic final : public Car
{


public:

    //	Encapsulation of transmission
    const string get__transmission() const override final
    {
        return this->__transmission;
    }

    //  Default constructor
    Automatic() 
    {
        this->__transmission = "Automatic";
    }

    //Constructor with parameters
    Automatic(const string marka, const string model, const short year,
        const string ban, const double engine, const unsigned int mileage)
        :  Car(marka, model, year, ban, engine, mileage)
        {
            this->__transmission = "Automatic";
        }

    //	Show car's specifications
    void showSpecicifications() const
    {
        cout << "		Car's specifications" << endl
            << "Transmission: " << this->__transmission << endl
            << "Marka: " << this->get_marka() << endl
            << "Model: " << this->get_model() << endl
            << "Year: " << this->get_year() << endl
            << "Ban: " << this->get_ban() << endl
            << "Engine: " << this->get_engine() << endl
            << "Mileage: " << this->get_mileage() << endl
            << "New: " << boolalpha << this->get_checkNew() << endl
            << "Capacity: " << this->get_capacity() << endl << endl;
    }

};

class Manual final  : public Car
{

public:

    //	Encapsulation of transmission
    const string get__transmission() const override final
    {
        return this->__transmission;
    }

    //  Default constructor
    Manual()
    {
        this->__transmission = "Manual";
    }

    //Constructor with parameters
    Manual(const string marka, const string model, const short year,
        const string ban, const double engine, const unsigned int mileage)
        : Car(marka, model, year, ban, engine, mileage)
    {
        this->__transmission = "Manual";
    }

    //	Show car's specifications
    void showSpecicifications() const
    {
        cout << "		Car's specifications" << endl
            << "Transmission: " << this->__transmission << endl
            << "Marka: " << this->get_marka() << endl
            << "Model: " << this->get_model() << endl
            << "Year: " << this->get_year() << endl
            << "Ban: " << this->get_ban() << endl
            << "Engine: " << this->get_engine() << endl
            << "Mileage: " << this->get_mileage() << endl
            << "New: " <<boolalpha<< this->get_checkNew() << endl
            << "Capacity: " << this->get_capacity() << endl << endl;
    }

};

void show(Car* car)
{
    car->showSpecicifications();
}
void show(vector<Car*> car)
{
    for (int i = 0; i < car.size(); i++)
    {
        car[i]->showSpecicifications();
    }
}

int main()
{
    //  One car
    Car* car = new Automatic("BMW", "X6", 2000, "Sedan", 4.4, 10000);
    show(car);

    //  Car array
    Car car1 = Car("BMW", "X6", 2000, "Sedan", 4.4, 10000);
    Automatic car2 = Automatic("Kia", "Rio", 1999, "Sedan", 2, 20000);
    Manual car3 = Manual("Hyundai", "Sonata", 1998, "Sedan", 2.5, 50000);
    vector<Car*> cars;
    cars.push_back(&car1);
    cars.push_back(&car2);
    cars.push_back(&car3);

    show(cars);






}
