// project2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int oc1 = 5, oc2 = 4, oc3 = 3, sr = (oc1 + oc2 + oc3) / 3;
    cout << "Имя студента: Иван Иванов" << endl;
    cout << "Фамилия студента: Петров" << endl;
    
    cout << "Оценки за экзамен: " << oc1 << " " << oc2 << " " << oc3 << " " <<  endl;
    
    cout << "Средний балл студента: " << sr << endl;

    return 0;
}

