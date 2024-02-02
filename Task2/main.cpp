#include <iostream>

struct bank {
    std::string name;
    int number;
    double balance;
};

void balanceBank(bank &change, double newBalance) {
 change.balance = newBalance;
}

int main(){
    double newBalance;

    bank change;

    std::cout << "Введите номер счета: ";
    std::cin >> change.number;

    std::cout << "Введите имя владельца: ";
    std::cin >> change.name;

    std::cout << "Введите баланс: ";
    std::cin >> change.balance;

    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    balanceBank(change, newBalance);

    std::cout << std::endl;

    std::cout << "Ваш счет: " << change.name << ", " << change.number << ", " << change.balance << std::endl;
}
