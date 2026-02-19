#include <iostream>
#include <string>
#include <cstdio>
#include <random>

using namespace std;

class pick_number{
    private:
    int secret_num;

    public:
    int your_num;

    void guess(pick_number num)
    {
        string y_n;

        mt19937 gen(random_device{}());             //}
        uniform_int_distribution<int> dist(1, 10);  // }    Random number part
        num.secret_num = dist(gen);                 //}

        start: cout <<"Please pick a number between 1-10"<< endl;

        cin >> num.your_num;
        if(num.secret_num==num.your_num)
        {
            cout << "Congrats your number is correct" <<endl;
        }
        else
        {
            cout << "Your guessing is wrong! true number was "<<num.secret_num<< endl;
            cout <<"Do you want to try again ? (yes/no)" << endl;
            cin >> y_n;
            if(y_n == "yes")
            {
                goto start;
            }
            else if(y_n == "no")
            {
                cout << "have a nice day" << endl;
            }
            else
            {
                cout << "you have entered a wrong command" << endl;
            }
            
        }
    }


};

int main()
{
    pick_number player;
    player.guess(player);


    return 0;
}