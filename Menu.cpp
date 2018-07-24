/*
 * File Name: Menu
 * Project Name: Axis_Configuration
 * Author: James Marr
 * Date: 29 May 2018
 * Copyright © 2018 James Meagher. All rights reserved.
 * Purpose: Display the menu selection to user.
 */

// Import input and output library
#include <iostream>

int displayMenu( ) {
   using namespace std; 
   
   // This store the menu selection user chooses
   int selection = 0;
   
   cout << "________________________________________________________  " << endl;
   cout << "\t\t Axis Configuration Menu" << endl;
   
   cout << "1. Plate Orientation Sensor" << endl;
   
   cout << "2. Long Side Bar Code Configuration" << endl;
   
   cout << "3. Short Side Bar Code Configuration" << endl;
   
   cout << "4. Quit the program" << endl;
   cout << "_________________________________________________________ " << endl;
   
   cout << "Enter Your Selection: ";
   
   cin >> selection;
   
   return selection;
   
}// End of displayMenu( ) function 