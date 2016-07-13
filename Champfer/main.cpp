//
//  main.cpp
//  Champfer
//
//  Created by Thomas Vine on 13/07/2016.
//  Copyright © 2016 Thomas Vine. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string location, line;
    ifstream fileToOpen;
    
    
    cout << "Welcome to Champfer!" << endl;
    cout << "Please specify file path" << endl;
    cin >> location;
    
    fileToOpen.open (location);
    
    if (fileToOpen.is_open())
    {
        while(getline(fileToOpen,line))
        {
            cout << line << endl;
        }
        fileToOpen.close();
    }
    
    else cout << "Unable to open file";
    
    return 0;
}
