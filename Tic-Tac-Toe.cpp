#include <iostream>
using namespace std;
int main()
{
    cout << "*********** ***********  **********  ***********  *********   **********  ***********  *********   **********" << endl
         << " *********   *********  **********    *********  *********** **********    *********  *********** ********** " << endl
         << "    ***         ***     ***              ***     ***     *** ***              ***     **       ** **         " << endl
         << "    ***         ***     ***              ***     ***     *** ***              ***     **       ** ********   " << endl
         << "    ***         ***     ***              ***     *********** ***              ***     **       ** **         " << endl
         << "    ***       *******   **********       ***     ***     *** **********       ***     *********** ********** " << endl
         << "    ***      *********   **********      ***     ***     ***  **********      ***      *********   **********" << endl
         << endl
         << "                                  *******************************************" << endl
         << "                                  *        Muhammad Shakaib Arsalan         *" << endl
         << "                                  *         Programming Fundamental         *" << endl
         << "                                  *           Semester 01 Project           *" << endl
         << "                                  *            Tic Tac Toe Game             *" << endl
         << "                                  *               F2022266626               *" << endl
         << "                                  *    Submitted To : Muhamamd Awais Ali    *" << endl
         << "                                  *      School of System & Technology      *" << endl
         << "                                  *                UMT Lahore               *" << endl
         << "                                  *******************************************" << endl
         << endl;
    char sy_01, sy_02;
    string name_01, name_02;
    int win_01 = 0, win_02 = 0;
    cout << "1st Palyer\n  Enter Your Nick Name : ";
    cin >> name_01;
    cout << "  Choose Your Symbol : ";
    cin >> sy_01;
    cout << endl;
    cout << "2nd Palyer\n  Enter Your Nick Name : ";
    cin >> name_02;
    cout << "  Choose Your Symbol : ";
    cin >> sy_02;
    cout << endl;

    int run_01 = true;
    while (run_01)
    {
        cout << endl;
        cout << "     |     |      \t     |     |     \n";
        cout << "  1  |  2  |  3   \t     |     |     \n";
        cout << " ____|_____|____ \t_____|_____|_____\n";
        cout << "     |     |      \t     |     |     \n";
        cout << "  4  |  5  |  6   \t     |     |     \n";
        cout << " ____|_____|____ \t_____|_____|_____\n";
        cout << "     |     |      \t     |     |     \n";
        cout << "  7  |  8  |  9   \t     |     |     \n";
        cout << "     |     |      \t     |     |     \n";
        cout << endl;
        int c_win = 0;
        int trick[9];
        char pos[9];
        for (int i = 0; i < 9; i++)
        {
            pos[i] = ' ';
        }

        cout << "            ******************** Start ********************\n";

        int run = 1;
        while (run == 1)
        {
            cout << name_01 << " (" << sy_01 << ")"
                 << " First Turn is Yours : ";
            cin >> trick[0];
            if (trick[0] > 0 && trick[0] < 10)
            {
                pos[trick[0] - 1] = sy_01;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }
        }

        run = 1;
        while (run == 1)
        {
            cout << name_02 << " (" << sy_02 << ")"
                 << " Yours turn : ";
            cin >> trick[1];
            if (trick[1] > 0 && trick[1] < 10 && trick[1] != trick[0])
            {
                pos[trick[1] - 1] = sy_02;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }
        }

        run = 1;
        while (run == 1)
        {
            cout << name_01 << " (" << sy_01 << ")"
                 << " Yours turn : ";
            cin >> trick[2];
            if (trick[2] > 0 && trick[2] < 10 && trick[2] != trick[0] && trick[2] != trick[1])
            {
                pos[trick[2] - 1] = sy_01;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }
        }

        run = 1;
        while (run == 1)
        {
            cout << name_02 << " (" << sy_02 << ")"
                 << " Yours turn : ";
            cin >> trick[3];
            if (trick[3] > 0 && trick[3] < 10 && trick[3] != trick[0] && trick[3] != trick[1] && trick[3] != trick[2])
            {
                pos[trick[3] - 1] = sy_02;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }
        }

        run = 1;
        while (run == 1)
        {
            cout << name_01 << " (" << sy_01 << ")"
                 << " Yours turn : ";
            cin >> trick[4];
            if (trick[4] > 0 && trick[4] < 10 && trick[4] != trick[0] && trick[4] != trick[1] && trick[4] != trick[2] && trick[4] != trick[3])
            {
                pos[trick[4] - 1] = sy_01;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }

            if (pos[0] == pos[1] && pos[1] == pos[2] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[3] == pos[4] && pos[4] == pos[5] && (pos[3] == sy_01 || pos[3] == sy_02))
            {
                if (pos[3] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[3] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[6] == pos[7] && pos[7] == pos[8] && (pos[6] == sy_01 || pos[6] == sy_02))
            {
                cout << "$$$$$$$$$$$$$$$$$$";
                if (pos[6] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[6] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[3] && pos[3] == pos[6] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[1] == pos[4] && pos[4] == pos[7] && (pos[1] == sy_01 || pos[1] == sy_02))
            {
                if (pos[1] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[1] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[5] && pos[5] == pos[8] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[4] && pos[4] == pos[8] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[4] && pos[4] == pos[6] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
        }
        if (c_win == 0)
        {
            run = 1;
        }
        while (run == 1)
        {
            cout << name_02 << " (" << sy_02 << ")"
                 << " Yours turn : ";
            cin >> trick[5];
            if (trick[5] > 0 && trick[5] < 10 && trick[5] != trick[0] && trick[5] != trick[1] && trick[5] != trick[2] && trick[5] != trick[3] && trick[5] != trick[4])
            {
                pos[trick[5] - 1] = sy_02;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }

            if (pos[0] == pos[1] && pos[1] == pos[2] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[3] == pos[4] && pos[4] == pos[5] && (pos[3] == sy_01 || pos[3] == sy_02))
            {
                if (pos[3] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[3] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[6] == pos[7] && pos[7] == pos[8] && (pos[6] == sy_01 || pos[6] == sy_02))
            {
                if (pos[6] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[6] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[3] && pos[3] == pos[6] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[1] == pos[4] && pos[4] == pos[7] && (pos[1] == sy_01 || pos[1] == sy_02))
            {
                if (pos[1] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[1] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[5] && pos[5] == pos[8] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[4] && pos[4] == pos[8] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[4] && pos[4] == pos[6] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
        }
        if (c_win == 0)
        {
            run = 1;
        }
        while (run == 1)
        {
            cout << name_01 << " (" << sy_01 << ")"
                 << " Yours turn : ";
            cin >> trick[6];
            if (trick[6] > 0 && trick[6] < 10 && trick[6] != trick[0] && trick[6] != trick[1] && trick[6] != trick[2] && trick[6] != trick[3] && trick[6] != trick[4] && trick[6] != trick[5])
            {
                pos[trick[6] - 1] = sy_01;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }

            if (pos[0] == pos[1] && pos[1] == pos[2] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[3] == pos[4] && pos[4] == pos[5] && (pos[3] == sy_01 || pos[3] == sy_02))
            {
                if (pos[3] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[3] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[6] == pos[7] && pos[7] == pos[8] && (pos[6] == sy_01 || pos[6] == sy_02))
            {
                if (pos[6] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[6] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[3] && pos[3] == pos[6] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[1] == pos[4] && pos[4] == pos[7] && (pos[1] == sy_01 || pos[1] == sy_02))
            {
                if (pos[1] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[1] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[5] && pos[5] == pos[8] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[4] && pos[4] == pos[8] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[4] && pos[4] == pos[6] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
        }
        if (c_win == 0)
        {
            run = 1;
        }
        while (run == 1)
        {
            cout << name_02 << " (" << sy_02 << ")"
                 << " Yours turn : ";
            cin >> trick[7];
            if (trick[7] > 0 && trick[7] < 10 && trick[7] != trick[0] && trick[7] != trick[1] && trick[7] != trick[2] && trick[7] != trick[3] && trick[7] != trick[4] && trick[7] != trick[5] && trick[7] != trick[6])
            {
                pos[trick[7] - 1] = sy_02;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }

            if (pos[0] == pos[1] && pos[1] == pos[2] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[3] == pos[4] && pos[4] == pos[5] && (pos[3] == sy_01 || pos[3] == sy_02))
            {
                if (pos[3] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[3] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[6] == pos[7] && pos[7] == pos[8] && (pos[6] == sy_01 || pos[6] == sy_02))
            {
                if (pos[6] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[6] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[3] && pos[3] == pos[6] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[1] == pos[4] && pos[4] == pos[7] && (pos[1] == sy_01 || pos[1] == sy_02))
            {
                if (pos[1] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[1] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[5] && pos[5] == pos[8] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[4] && pos[4] == pos[8] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[4] && pos[4] == pos[6] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
        }
        if (c_win == 0)
        {
            run = 1;
        }
        while (run == 1)
        {
            cout << name_01 << " (" << sy_01 << ")"
                 << " Yours turn : ";
            cin >> trick[8];
            if (trick[8] > 0 && trick[8] < 10 && trick[8] != trick[0] && trick[8] != trick[1] && trick[8] != trick[2] && trick[8] != trick[3] && trick[8] != trick[4] && trick[8] != trick[5] && trick[8] != trick[6] && trick[8] != trick[7])
            {
                pos[trick[8] - 1] = sy_01;
                cout << endl;
                cout << "     |     |      \t     |     |      \n";
                cout << "  1  |  2  |  3   \t  " << pos[0] << "  |  " << pos[1] << "  |  " << pos[2] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  4  |  5  |  6   \t  " << pos[3] << "  |  " << pos[4] << "  |  " << pos[5] << "   \n";
                cout << " ____|_____|____  \t ____|_____|____ \n";
                cout << "     |     |      \t     |     |      \n";
                cout << "  7  |  8  |  9   \t  " << pos[6] << "  |  " << pos[7] << "  |  " << pos[8] << "   \n";
                cout << "     |     |      \t     |     |      \n";
                cout << endl;
                run = 0;
            }
            else
            {
                run = 1;
            }

            if (pos[0] == pos[1] && pos[1] == pos[2] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[3] == pos[4] && pos[4] == pos[5] && (pos[3] == sy_01 || pos[3] == sy_02))
            {
                if (pos[3] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[3] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[6] == pos[7] && pos[7] == pos[8] && (pos[6] == sy_01 || pos[6] == sy_02))
            {
                if (pos[6] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Row 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[6] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Row 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[3] && pos[3] == pos[6] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[1] == pos[4] && pos[4] == pos[7] && (pos[1] == sy_01 || pos[1] == sy_02))
            {
                if (pos[1] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[1] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[5] && pos[5] == pos[8] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Column 03" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Column 03" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[0] == pos[4] && pos[4] == pos[8] && (pos[0] == sy_01 || pos[0] == sy_02))
            {
                if (pos[0] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 01" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[0] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 01" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else if (pos[2] == pos[4] && pos[4] == pos[6] && (pos[2] == sy_01 || pos[2] == sy_02))
            {
                if (pos[2] == sy_01)
                {
                    cout << "   ********** " << name_01 << " (" << sy_01 << ") Wins **********\n               Diagonal 02" << endl;
                    win_01 = win_01 + 1;
                    c_win = 1;
                }
                else if (pos[2] == sy_02)
                {
                    cout << "   ********** " << name_02 << " (" << sy_02 << ") Wins **********\n               Diagonal 02" << endl;
                    win_02 = win_02 + 1;
                    c_win = 1;
                }
            }
            else
            {
                cout << "          ********** Draw **********" << endl;
            }
        }
        cout << endl;
        cout << "   ********** Total Score **********\n"
             << endl;
        cout << "1st Player\n  " << name_01 << " (" << sy_01 << ") = " << win_01 << endl;
        cout << "2nd Player\n  " << name_02 << " (" << sy_02 << ") = " << win_02 << endl;
        if (win_01 > win_02)
        {
            cout << "\nPlayer 1 takes the lead.";
        }
        else if (win_01 < win_02)
        {
            cout << "\nPlayer 2 takes the lead.";
        }
        else if (win_01 == win_02)
        {
            cout << "\nBoth teams attain an Identical Scores.";
        }
        cout << endl;
        string choice;
        int choice_01;
        do
        {
            cout << "\nWould you like to keep the competition going? (Y/N) ";
            cin >> choice;

            if (choice == "Y" || choice == "y")
            {
                run_01 = true;
                choice_01 = false;
                cout << "\n                   *********** New Game ***********\n";
            }

            else if (choice == "N" || choice == "n")
            {
                run_01 = false;
                choice_01 = false;
                cout << "\n************ You are Exited From Program ************";
                cout << "\n       ************ Good Bye ************";
                break;
            }
            else
            {
                choice_01 = true;
            }
        } while (choice_01);
    }

    cout << endl;
    return 0;
}