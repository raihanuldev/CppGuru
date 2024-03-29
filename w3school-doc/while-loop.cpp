#include <iostream>
using namespace std;

int main()
{
    int board_roll = 789144;
    while (board_roll < 789190)
    {
        cout << board_roll << '\n';
        board_roll++;
    }
}