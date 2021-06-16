#include <iostream>
#include "GroupInfo.h"
#include "ScoreStack.h"
#include <time.h>

using namespace std;



int main()
{
    system("COLOR 79");

    int choice;

    Game game;

    do {
        system("cls");

        cout << "\n";
        cout << "\t\t ================================================\n";
        cout << "\t\t|            Rock Paper Scissor Game            |\n";
        cout << "\t\t ================================================\n\n\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t             1. Start Game              |\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t             2. Exit                    |\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\tEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            game.startGame();
            break;
        case 2:
            game.exitGame();
            break;
        }

    } while (choice != 2);


    return 0;
}