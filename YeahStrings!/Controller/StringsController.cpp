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

void StringsController :: start()
{
    StringsController :: translate();
}

string StringsController :: translate()
{
    string input;
    
    cout << "Translate this phrase" << endl;
    cout << "Narn e·Dant Gondolin ar Orthad en·Êl" << endl;
    
    getline(cin, input);
    
    cout << input.length() << endl;
    
   /* if(!input.empty())
    {
        cout << "You at least did something" << endl;
        
        if(input.length() == 44)
        {
            cout << "Your have the right number of characters" << endl;
            
            if(
        
        }
        else if(input.length() < 44)
        {
            cout << "Too few letters" << endl;
        }
        else if(input.length() > 44)
        {
            cout << "Too many letters" << endl;
        }
        
    }
    else
    {
        cout << "You aren't even trying" << endl;
    }*/
    
    return 0;
}


