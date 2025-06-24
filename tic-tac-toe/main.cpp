#include <iostream>

using namespace std;
char arr[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player='x';
void show()
{
    cout<<"\t _________________"<<endl;
    cout<<"\t|     |     |     |"<<endl;
    cout<<"\t|  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  |"<<endl;
    cout<<"\t|_____|_____|_____|"<<endl;
    cout<<"\t|     |     |     |"<<endl;
    cout<<"\t|  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  |"<<endl;
    cout<<"\t|_____|_____|_____|"<<endl;
    cout<<"\t|     |     |     |"<<endl;
    cout<<"\t|  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  |"<<endl;
    cout<<"\t|_____|_____|_____|"<<endl;
}
void play()
{
    bool valid =false;
    while(!valid)
    {
        cout<<"\nPlease Enter Position for player : "<<player<<endl;
        char position;
        cin>>position;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(position==arr[i][j])
                {
                    arr[i][j]=player;
                    valid=true;
                    break;
                }
            }
        }
        if(!valid)
        {

            cout<<"Invalid move! Try again."<<endl;;

        }
    }
    player = (player == 'x') ? 'o' : 'x';
}
char whoWin()
{
    //test Rows
    int xCounter,oCounter,test=0;
    for(int i=0; i<3; i++)
    {
        xCounter=0,oCounter=0;
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]!='x'&&arr[i][j]!='o')
            {
                test++;
            }
            if(arr[i][j]=='x')
            {
                xCounter++;//3
            }
            else if(arr[i][j]=='o')
            {
                oCounter++;//0
            }
            if(xCounter==3)
            {
                return 'x';
            }
            else if(oCounter==3)
            {
                return 'o';
            }
        }

    }
    //test colums
    for(int i=0; i<3; i++)
    {
        xCounter=0,oCounter=0;
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]!='x'&&arr[i][j]!='o')
            {
                test++;
            }
            if(arr[j][i]=='x')
            {
                xCounter++;//3
            }
            else if(arr[j][i]=='o')
            {
                oCounter++;//0
            }
            if(xCounter==3)
            {
                return 'x';
            }
            else if(oCounter==3)
            {
                return 'o';
            }
        }

    }
    if(arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x')
    {
        return 'x';
    }
    else if(arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')
    {
        return 'o';
    }
    else if(arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x')
    {
        return 'x';
    }
    else if(arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o')
    {
        return 'o';
    }
    if(test==0)
    {
        return 'z';
    }
    return '.';
}
int main()
{
    while(whoWin()=='.')
    {
        cout<<"PLAYER 1 : x\t PLAYER 2 : O "<<endl;
        show();
        play();
        //system("cls");
    }
    show();
    if(whoWin()=='z')
    {
        cout<<"No Winner In This Game!!"<<endl;
    }
    else
    {
        cout<<"The Winner In This Game Is : "<<whoWin()<<" Congraulations"<<endl;
    }
    return 0;
}
