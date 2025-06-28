#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    char playAgain='Y';
    while(playAgain=='Y'||playAgain=='y')
    {
        int secretNumber;
        secretNumber=(rand() % 100 + 1);
        cout << "                                           ###Welcome to Guess Number Game!###\n" << endl;
        cout <<"You have to guess a number between 1 and 100.";
        cout<<"You'll have limited choices based on the level you choose.";
        cout<<"Good Luck!!.\n"<<endl;
        cout<<"Enter The Difficulty Level: \n"<<endl;
        cout<<"1 For Easy!"<<"  "<<"2 For Medium!"<<"  "<<"3 For Difficult!"<<"  "<<"0 For End Game!\n"<<endl;
        cout<<"Enter The Number:";
        int x;
        cin>>x;
        if(x==1)
        {
            int moves=10;
            cout<<"\nYou have 10 choices for finding the secret number between 1 to 100."<<endl;
            while(moves>0)
            {
                cout<<"\nGuess The Number:";
                int n;
                cin>>n;
                if (n==secretNumber)
                {
                    cout<<"Well played!you won, "<<n<<" is the secret number"<<endl;
                    cout<<"                    Thanks for playing..."<<endl;
                    break;
                }
                else if (n<secretNumber)
                {
                    cout<<"Nope, n is not the right number"<<endl;
                    cout<<"The secret number is greater than the number you have chosen"<<endl;
                    moves--;
                    cout<<moves<<"choices left."<<endl;
                }
                else if (n>secretNumber)
                {
                    cout<<"Nope, n is not the right number"<<endl;
                    cout<<"The secret number is smaller than the number you have chosen"<<endl;
                    moves--;
                    cout<<moves<<"choices left."<<endl;
                }
                if (moves==0)
                {
                    cout<<"GAME OVER! The secret number was: "<<secretNumber<<endl;
                }
            }
            cout<<"\nDo you want to play again? (Y/N) : ";
            cin>>playAgain;
        }

        else if (x==2)
        {
            int moves=7;
            cout<<"\nYou have 7 choices for finding the secret number between 1 to 100.\n"<<endl;
            while(moves>0)
            {
                cout<<"\nGuess The Number:";
                int n;
                cin>>n;
                if (n==secretNumber)
                {
                    cout<<"Well played!you won, "<<n<<" is the secret number"<<endl;
                    cout<<"                    Thanks for playing..."<<endl;
                    break;
                }
                else if (n<secretNumber)
                {
                    cout<<"Nope, n is not the right number"<<endl;
                    cout<<"The secret number is greater than the number you have chosen"<<endl;
                    moves--;
                    cout<<moves<<"choices left."<<endl;
                }
                else if (n>secretNumber)
                {
                    cout<<"Nope, n is not the right number"<<endl;
                    cout<<"The secret number is smaller than the number you have chosen"<<endl;
                    moves--;
                    cout<<moves<<"choices left."<<endl;
                }
                if (moves==0)
                {
                    cout<<"GAME OVER! The secret number was: "<<secretNumber<<endl;
                }
            }
            cout<<"\nDo you want to play again? (Y/N) : ";
            cin>>playAgain;
        }
        else if (x==3)
        {
            int moves=5;
            cout<<"\nYou have 5 choices for finding the secret number between 1 to 100.\n"<<endl;
            while(moves>0)
            {
                cout<<"\nGuess The Number:";
                int n;
                cin>>n;
                if (n==secretNumber)
                {
                    cout<<"Well played!you won, "<<n<<" is the secret number"<<endl;
                    cout<<"                    Thanks for playing..."<<endl;
                    break;
                }
                else if (n<secretNumber)
                {
                    cout<<"Nope, n is not the right number"<<endl;
                    cout<<"The secret number is greater than the number you have chosen"<<endl;
                    moves--;
                    cout<<moves<<"choices left."<<endl;
                }
                else if (n>secretNumber)
                {
                    cout<<"Nope, n is not the right number"<<endl;
                    cout<<"The secret number is smaller than the number you have chosen"<<endl;
                    moves--;
                    cout<<moves<<"choices left."<<endl;
                }
                if (moves==0)
                {
                    cout<<"GAME OVER! The secret number was: "<<secretNumber<<endl;
                }
            }
            cout<<"\nDo you want to play again? (Y/N) : ";
            cin>>playAgain;
        }
        else if (x==0)
        {
            cout<<"\n                                                      ###End Game!###"<<endl;
            cout<<"                                                     ###Thanks GoodBye###"<<endl;
            return 0;
        }
        else
        {
            cout<<"\nInvalid Input";
        }
    }


    return 0;
}
