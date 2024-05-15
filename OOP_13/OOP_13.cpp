// OOP_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Transport {
protected:
    float s = 477;//растояние от Киева до Одессы (км)
public:

};

class Car: public Transport {
protected:
    float v = 120; // средняя скорость (км/ч)
    float gasoline = 56.39; // цена за 1л. бензина
    float gasoline_consumption = 11.1; // расход бензина на 100 км
public:
    void Time() const{
        float time;
        time = s / v;
        cout << "The car ride will take: " << time << " hours\n";
    }

    void Price() const {
        float price1;
        float price;
        price1 = (gasoline_consumption * gasoline) / 100; //грн на 1 км
        price = price1*s;
        cout << "The ride will cost: " << price << " hrn.\n\n";
    }
};

class Minibus : public Transport {
protected:
    float v = 90; // средняя скорость (км/ч)
    float diesel = 52.95; // цена за 1л. дизтопливо
    float diesel_consumption = 26.2; // расход дизтоплива на 100 км
public:
    void Time() const {
        float time;
        time = s / v;
        cout << "The minibus ride will take: " << time << " hours\n";
    }

    void Price() const {
        float price1;
        float price;
        price1 = (diesel_consumption * diesel) / 100; //грн на 1 км
        price = price1 * s;
        cout << "The ride will cost: " << price << " hrn.\n\n";
    }
};

class Tram : public Transport {
protected:
    float v = 20; // средняя скорость (км/ч)
public:
    void Time() const {
        float time;
        time = s / v;
        cout << "The tram ride will take: " << time << " hours\n";
    }

    void Price() const {
        float price = 8; //проезд на трамвае 8 грню
        cout << "The ride will cost: " << price << " hrn.\n\n";
    }
};

class ElectricScooter : public Transport {
protected:
    float v = 30; // средняя скорость (км/ч)
    float electric = 2.64; // цена за 1кВат. электричества
    float e = 0.5;//нужно для полного заряда батареи 0,5кВат
    // 1 батарея на 35 км
       
public:
    void Time() const {
        float time;
        time = s / v;
        cout << "The electric scooter ride will take: " << time << " hours\n";
    }
    void Price() const {
        int electric_consumption=s/35;// расход заряда на весь путь (кол-во батарей)
        float priceE = electric / 0.5; //стоимость заряда 1 батареи
        float price = electric_consumption * priceE; //кол-во батарей умножить на стоимость заряда одной батареи
        cout << "The ride will cost: " << price << " hrn.\n\n";
    }
    
};


class Bicycle : public Transport {
protected:
    float v = 25; // средняя скорость (км/ч)
public:
    void Time() const {
        float time;
        time = s / v;
        cout << "The bicycle ride will take: " << time << " hours\n";
    }

    void Price() const {
        float price = 0; //проезд на велосипеде 0 грню
        cout << "The ride will cost: " << price << " hrn.\n\n";
    }
};

int main()
{
    Car c;
    c.Time();
    c.Price();

    Minibus m;
    m.Time();
    m.Price();

    Tram tr;
    tr.Time();
    tr.Price();

    ElectricScooter e;
    e.Time();
    e.Price();

    Bicycle b;
    b.Time();
    b.Price();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
