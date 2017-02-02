//
//  StringsController.cpp
//  YeahStrings!
//
//  Created by White, Nicholas on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "StringsController.hpp"
#include <string>
#include <iostream>

using namespace std;

StringsController :: StringsController()
{
    phrase = "antanenyes parmanen";
    correctT = "I presented him with a book";
    
}

void StringsController :: start()
{
    StringsController :: translate();
}

string StringsController :: translate()
{
    string input;
    
    cout << "Translate this phrase" << endl;
    cout << "antanenyes parmanen" << endl;
    cout << "The correct translation has " << correctT.length() << " characters" << endl;

    
    getline(cin, input);
    

    
    if(!input.empty())
    {
        cout << "You at least did something" << endl;
        
        if(input.length() == correctT.length())
        {
            cout << "Your have the right number of characters" << endl;
            
            if(input[0] == correctT[0])
            {
                cout << "The first letter of the correct translation matches the first letter of your translation." << endl;
            }
            else
            {
                cout << "The first letter of the correct translation does not match the first letter of your translation." << endl;
            }
        
        }
        else if(input.length() < correctT.length())
        {
            cout << "Too few letters. Come on! I even gave you the length." << endl;
        }
        else if(input.length() > correctT.length())
        {
            cout << "Too many letters. Come on! I even gave you the length." << endl;
        }
        
    }
    else
    {
        cout << "You aren't even trying" << endl;
    }
    
    return 0;
}


