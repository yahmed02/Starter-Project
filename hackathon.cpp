//
//  main.cpp
//  Hackathon
//
//  Created by Yaseen Ahmed on 2020-10-28.
//  Copyright © 2020 Yaseen Ahmed. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void greeting(string &);
void reservation(string &);
void menu(string &);
void deliver(string &);
void complaint(string &);
void offers(string &);
int leaveProgram();
void makeDecision(int, string &);
void getInput(string &);


int main()
{
    string keywords[] = {"hi", "hello", "reservation", "menu", "deliver", "complain", "offers", "discounts", "bye", "exit"};
    string input, name = "";


    cout << "Welcome to the EatRight chat service" << endl;
    getInput(name);

    cout << "\n";

    return 0;
}
void makeDecision(int functionDecision, string &name)
{

    if (functionDecision == 0 || functionDecision == 1)
    {
        greeting(name);
    }
    else if (functionDecision == 2)
    {
        reservation(name);
    }
    else if (functionDecision == 3)
    {
        menu(name);
    }
    else if (functionDecision == 4)
    {
        deliver(name);
    }
    else if (functionDecision == 5)
    {
        complaint(name);
    }
    else if (functionDecision == 6 || functionDecision == 7)
    {
       offers(name);
    }
    else if (functionDecision == 8 || functionDecision == 9)
    {
        leaveProgram();
    }

    return;

}

void greeting(string &name)
{
    string keywords[] = {"hi", "hello", "reserv", "menu", "deliver", "complaint", "offers", "discounts", "bye", "exit"};
    string input;
    int functionDecision = 0;

    cout << "Hi! Please input your name: ";
    getline(cin, name);
    cout << "Greetings " << name << "! How can I help you today? " << endl;
    getline(cin, input);


    for (int i=0; i<10; i++)
    {
        if (input.find(keywords[i]) != string::npos)
        {
            functionDecision = i;
            break;
        }

    }

    makeDecision(functionDecision, name);

}

void reservation(string &name)
{
    string reserve;
    string keywords[] = {"hi", "hello", "reservation", "menu", "deliver", "complaint", "offers", "discounts", "bye", "exit"};
    string input;

    cout << "I can surely help you with that!" << endl;
    cout << "What is the reservation date and for how many: " << endl;
    cin.ignore();
    getline(cin, reserve);
    cout << "Reservation confirmed on " << reserve << " for: " << name << endl;

    getInput(name);

}

void menu(string &name)
{
    cout << "Fake Menu" << endl;
    getInput(name);
}

void deliver(string &name)
{
    cout << "We sure do!" << endl;
    cout << "Please call 11010 for more details!" << endl;
    getInput(name);
}

void complaint(string &name)
{
    cout << "Sorry to hear that!" << endl;
    cout << "Please call 11018 to submit your compalint!" << endl;
    getInput(name);
}

void offers(string &name)
{

    cout << "We sure do!" << endl;
    cout << "Fake Offers: " << endl;
    getInput(name);
}

int leaveProgram()
{
    cout << "Thanks for choosing our resturant! See you soon! Goodbye" << endl;
    return 0;

}

void getInput(string &name)
{
    string keywords[] = {"hi", "hello", "reservation", "menu", "deliver", "complaint", "offer", "discount", "bye", "exit"};
    string input;
    int functionDecision;


    cout << "\n==> ";
    getline(cin, input);


    for (int i=0; i<10; i++)
    {
        if (input.find(keywords[i]) != string::npos)
        {
            functionDecision = i;
            break;
        }
    }

    if (functionDecision != 0 && functionDecision != 1 && functionDecision !=2 && functionDecision != 3 && functionDecision !=4 && functionDecision !=5 && functionDecision != 6 && functionDecision !=7 && functionDecision !=8 && functionDecision != 9)
    {
        cout << "Sentence Not Understood! Try again!" << endl;
        getInput(name);
    }

    makeDecision(functionDecision, name);

}
