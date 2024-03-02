#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    
int deposit;
int percent;
int desiredAmount;
int currentYear = 0;



cout << "Добро пожаловать в банк!\nВведите размер вклада: "; cin >> deposit;
cout << "Введите процентную ставку: "; cin >> percent;
cout << "Введите желаемую сумму: "; cin >> desiredAmount;
while (deposit <= desiredAmount) {
    deposit = deposit + (deposit / percent);

    currentYear++;

}
cout << "Прийдется подождать: " << currentYear << " лет!\n" << "На вашем счету будет: " << deposit;
}

