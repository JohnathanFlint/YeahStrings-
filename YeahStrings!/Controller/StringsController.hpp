//
//  StringsController.hpp
//  YeahStrings!
//
//  Created by White, Nicholas on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef StringsController_hpp
#define StringsController_hpp

#include <string>

using namespace std;

class StringsController
{
public:
    StringsController();
    void start();
    
private:
    string phrase;
    string correctT;
    string translate();
};

#endif /* StringsController_hpp */
