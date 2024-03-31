#include <iostream>
using namespace std;

int main()
{
    int board_roll = 789144;
    int rolls = {789144,789145,789146,789147}
    while (board_roll < 789190)
    {
        cout << board_roll << '\n';
        board_roll++;
    }
}