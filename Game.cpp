#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int choiceOne_Path;
int choiceTwo_Path;
int choiceThree_Path;
int choiceFour_Path;

 int main()
    {
    cout << "THANK YOU FOR CHOOSING THIS GAME. Be the strong one to finish this" << endl;
    char name[50];
      cout << "What's your name lost human?" << endl;
     cin.getline(name, 50);
     cout << "You better move fast, " << name << ". You are running out of time to escape this place." << endl;
     cout << "\n----------------------------READ-----------------------------------" << endl;

     cout << "\n!!!---------------------- STORY ----------------------!!!" << endl;
        cout << "There was group of friends who goes out of town for a trip." << endl;
        cout << "As the night comes out, they decided to stroll along the place." << endl;
        cout << "As they strolling, they had a misunderstanding that resulted to one of them to sulk and go back to their rest house." << endl;
        cout << "As a result, he was lost and can't find a way to get back to his squad." << endl;
        cout << "As a consequence of walking too long, he became exhausted and went asleep on the street." << endl;
        cout << "When he woke up, he realized that he lies in a room like a motel." << endl;
        cout << "He freaks out and goes out of the room quick. As he search for the exit, " << endl;
        cout << "ghosts are trying to get him. He met a strange lady that can help or " << endl;
        cout << "prevent him from solving the challenges that will make a way to " << endl;
        cout << "get out of the haunted motel." << endl;


    cout << "What would you like to do?" << endl;
    cout << "\t >> Enter '1' Escape this place" << endl;
    cout << "\t >> Enter '2'  Just Die now" << endl;

    cout << "A white lady can help you but she wanted you to stay " << endl;
    cout << "\nEnter your choice: ";
    cin >> choiceOne_Path;
    if(choiceOne_Path == 1)
    {
        cout << "\n!!!----------------------Chapter One: Escape----------------------!!!" << endl;
        cout << "Strange Lady:Hello, " << name << ". You look good. Are you here for me?" << endl;
        cout << "\nYou: How can I escape this scary motel?" << endl;

        cout << "Strange Lady: Soon you will know. Just follow me." << endl;
        cout << "You run infront of the white lady." << endl;
    }
    else if(choiceOne_Path == 2)
    {
        cout << "\n!!!----------------------Chapter One: Wrong Move----------------------!!!" << endl;
        cout << "NO!, " << name << ". YOU CAN'T DIE NIE NOW! MAYBE NEXT CHAPTER YOU WILL" << endl;
        cout << "\nYou: I am going to find a way out! or I will just kill myself" << endl;
        cout << "Strange Lady: You are insane. There's a way out! Don't be scared." << endl;
        cout << "You: No. I have my strong confidence and I know my way out." << endl;
        cout << "Strange Lady: You can't do it by yourself" << endl;
    }
    else
    {
        cout << "Selecting any other choice is suicide" << endl;
        cout << "YOU DIED";
        return 0;

    }

    cout << "\n--------------------------------------------------" << endl;

    cout << "Do you want to start escaping?" << endl;
    cout << "\t >> Enter '1' Proceed to the challenge" << endl;
    cout << "\t >> Enter '2' Don't play " << endl;
    cout << "\nEnter your choice: ";
    cin >> choiceOne_Path;

    if(choiceOne_Path == 1)
        {

        cout << "\n!!!----------------------Chapter Two: Now or Never----------------------!!!" << endl;
        cout << "\nYou: What will I do now?" << endl;
        cout << "Strange Lady: Just follow what I say" << endl;
        cout << "You: Hmmmmmmmmm..." << endl;

        cout << endl;
        cout << "Do you want to listen to her or not?" << endl;
        cout << "\t >> Enter '1' Don't listen to the Strange Lady." << endl;
        cout << "\t >> Enter '2' Listen to what she has to say. " << endl;
        cout << "\nEnter your choice: ";
        cin >> choiceTwo_Path;

        }

    else if(choiceOne_Path == 2)
    {
        cout << "\n!!!----------------------Chapter Two: Wrong Move----------------------!!!" << endl;
        cout << "\nYou: NONSENSE MOTEL" << endl;
        cout << "Strange Lady: YOU WILL NEVER ESCAPE THIS MOTEL!!" << endl;
        cout << "You: REALLYYYYYY???" << endl;
        cout << "You jump over the broken window" << endl;
        cout << " YOU DIED " << endl;
    }

    if(choiceTwo_Path == 2)
    {
        cout << "\n!!!----------------------Chapter Three: The Stranger--------------------!!!" << endl;
        cout << "\nYou: Will you be guiding me to the exit?" << endl ;
        cout << "\nStrange Lady: I can only give you hints, would you like one now?" << endl ;
        cout << "\nYou: Hmmmmm......" << endl;
        cout << endl;
        cout << "Do you want to hear the hint?" << endl;
        cout << "\t >> Enter '1' Yes" << endl;
        cout << "\t >> Enter '2'  No" << endl;
        cin >> choiceThree_Path;
    }

    else if(choiceTwo_Path == 1)
    {
        cout << "\nStrange Lady: Are you ignoring me?!" << endl;
        cout << "\nYou: Yes I am." << endl;
        cout << "\nStrange Lady: Arrogant people will die!" << endl;
        cout << "\nWhile walking off to another place leaving the Strange Lady the floor suddenly opened up and you fell to your death." << endl;
        cout << "YOU DIED";
        return 0;
    }

    else
    {
        cout << "Selecting any other choice is suicide!" << endl;
        cout << "YOU DIED";
        return 0;
    }

    if(choiceThree_Path == 1)
    {
        cout << "\n!!!----------------------Chapter Four: Finale----------------------!!!" << endl;
        cout<<"\nStrange Lady: Thank you for heariing me out! You can find your friends by going through this door!" << endl;
        cout<<"\nThe Strange Lady creates a door in the wall magically!" <<endl;
        cout<<"\nYou go through the door and you suddenly woke up from your nightmare." << endl;
        cout<<"THE END";
        return 0;
    }

    else if(choiceThree_Path == 2)
    {
        cout<<"\nThe Strange Lady suddenly disappears and you got stuck there forever!"<<endl;
        cout<<"\nYOU DIED";
        return 0;
    }

    else
    {
        cout << "Selecting any other choice is suicide!" << endl;
        cout << "YOU DIED";
        return 0;
    }



     return 0;
    }

