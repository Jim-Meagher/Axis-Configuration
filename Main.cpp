/*
 * File Name: Main
 * Project Name: Axis_Configuration
 * Author: James Marr
 * Date: 29 May 2018
 * Copyright © 2018 James Meagher. All rights reserved.
 * Purpose: Run the application 
 */

// Import C standard library
#include <cstdlib>

// Import input output library
#include<iostream>

#include "ConfigureAxis.h"
#include "Menu.h"

int main(int argc, char** argv) {
    
    using namespace std;
    
    int selection = displayMenu( );
    
    cout << endl << endl;
    
    // Option 1 
    if(selection == 1) {
       
        PlateOrientationSensor( );
        
    } // end of if statement
    
    // Option 2
    else if(selection == 2) {
        
        longSideBarCodes( );
        
    } // end of first else if statement
    
    // Option 3
    else if(selection == 3){
        
        shortSideBarCode( );
        
    }// end of second third else if statement
    
    // Option 4
    else if(selection == 4) {
        
        cout << "Exiting the program!" << endl;
        
        return EXIT_SUCCESS;
    }// end of third else if statement 
    
    else {
        
        cout << "Invalid Selection!" << endl;
        
    }// end of else statement 
    
    return EXIT_SUCCESS;
    
}// End of main function

