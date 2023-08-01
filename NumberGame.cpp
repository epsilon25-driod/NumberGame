#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
//Function to generate a random number between min and max(inclusive)
int generateRandomNumber(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}


//Function to provide a hint to player
void hintprovide(int num,int cnt)
{
    if(cnt==0)
    {
        if(num%2==0)
         cout<<"The Secret Number is Even."<<endl;
        else
         cout<<"The Secret Number is Odd."<<endl;
    }
    if(cnt==1)
    {
        if(num%3==0)
         cout<<"The Secret Number is a Multiple of 3."<<endl;
        else
         cout<<"The Secret Number is Not a Multiple of 3."<<endl;
    }
    if(cnt==2)
    {
        if(num%4==0)
         cout<<"The Secret Number is a Multiple of 4."<<endl;
        else
         cout<<"The Secret Number is not a Multiple of 4."<<endl;
    }
    if(cnt>=3)
    {
        cout<<"Sorry,You Have Exhausted your hint count."<<endl;
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    cout<<"Welcome to the Number guessing game.A game to test yout luck and Analytical Abilities."<<endl;
    cout<<"In this game,a secret number is selected between 1 to 100 both inclusive.Your objective is to guess the number."<<endl;
    cout<<"There are three levels in this game that vary upon no of attempts to guess the number."<<endl;
    cout<<"Level Easy:10 Attempts."<<endl;
    cout<<"Level Medium:7 Attempts."<<endl;
    cout<<"Level Hard:5 Attempts."<<endl;
    cout<<"Still Feeling a bit Tough.Don't worry,you have a limit of 3 hints,that can be used in between any of the attempts."<<endl;
    cout<<"Play Wisely!All the best."<<endl;
    int level,maxat,hcnt=0,num,guess;
    bool found=false;
    string str;
    cout<<"Select a level(1 for easy,2 for medium,3 for tough):";//Select the level
    cin>>level;
    int min=1,max=100;//Range can be modified
    if(level==1)
     maxat=10;
    else
     if(level==2)
      maxat=7;
     else
      maxat=5;
    num=generateRandomNumber(1,100);//Generates a Random number
    //Loop to check all attempts
    for(int i=1;i<=maxat;i++)
    {
        cout<<"Attempt "<<i<<" of "<<maxat<<"."<<endl;
        cout<<"Enter your guess:"<<endl;
        cin>>guess;
        if(guess==num)
        {
            cout<<"Congratulations you guessed the "<<num<<" in "<<i<<" attempts.Well done!"<<endl;
            found=true;
            break;
        }
        else
        {
            if(guess<num)
             cout<<"Too low!Try Again"<<endl;
            else
             cout<<"Too High!Try Again"<<endl;
        }
        //Hint Provider if required
        if(i<maxat && !found)
        {
            cout<<"Do you want to use a hint?(yes/no):";
            cin>>str;
            if(str=="yes" || str=="YES" || str=="Yes")
            {
                hintprovide(num,hcnt);
                hcnt++;
            }
        }
    }
    if(!found)
    {
        cout<<"You ran out of Attempts.The Secret Number was:"<<num<<endl;
        cout<<"Better Luck Next Time."<<endl;
    }
    return 0;
}