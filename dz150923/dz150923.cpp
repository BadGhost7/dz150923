#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    
    string replies[] = {
        "Интересно. Расскажите больше.",
        "Что вам еще интересно?",
        "Не могу дать точного ответа, но давайте попробуем разобраться вместе.",
        "Я не уверен, пожалуйста, уточните вопрос.",
        "Интересный подход. Расскажите подробнее.",
        "Это может быть возможно, но не могу утверждать наверняка.",
        "Пожалуйста, переформулируйте вопрос.",
        "На этот вопрос я не могу ответить."
    };

    srand(time(0)); 

    cout << "Привет! Я чат-бот.\n";

    string userMessage;
    while (true) {
        cout << "Ваше сообщение: ";
        getline(cin, userMessage);

        if (userMessage == "Привет") {
            cout << "Привет! Как могу помочь?\n";
        }
        else if (userMessage == "Пока") {
            cout << "Пока! Хорошего дня!\n";
            break;
        }
        else {
            int randomIndex = rand() % (sizeof(replies) / sizeof(replies[0]));
            cout << replies[randomIndex] << "\n";
        }
    }

    return 0;
}