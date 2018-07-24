/*
 * File Name: Short_Side_Bar_Code_Configuration
 * Project Name: Axis_Configuration
 * Author: James Marr
 * Date: 01 June 2018
 * Copyright © 2018 James Meagher. All rights reserved.
 * Purpose: Configure the Short-Side Custom Barcode position for both
 * axis. 
 */

// Import input output library 
#include<iostream>

#include "ConfigureAxis.h"

void shortSideBarCode( ) {
    
    using namespace std;
    
    // Axis endpoint positions
    int YAxis1, YAxis2  = 0;
    
    int XAxis1, XAxis2 = 0;
    
    cout << "_________________________________________________________" << endl;
    
    cout << "\t\t Short Side Bar Code Configuration" << endl;
       
    cout << "1st X-Axis plate position at which the "
         << "short-side custom barcode can be read: ";
    
    cin >> XAxis1;
    
    cout << "2nd X-Axis plate position at which the "
         << "short-side custom barcode can be read: ";
    
    cin >> XAxis2;
    
    int XAxis = computeMidPoint(XAxis1, XAxis2);
    
    cout << "Calculating the midpoint range of two X-axis position values for "
         << "Short-Side Custom Barcode........ " << "\n";
    
    cout << "Verify X-axis is within range.................."  << "\n" << endl;
    
    if(XAxis >= 1000 && XAxis <= 1200) {
        cout << "X-axis is within spec" << endl;
        
        cout << "Please move X-axis " << XAxis <<" from home position!" << endl;
    
        cout << "Save position for Short-Side Custom BarCode \n" << endl;
          
    } // end of if statement
    
    else {
        
        cout << "X-axis value is out of range: " << XAxis << "\n" << endl;
        
        cout << "Please review your data to determine if correct" << endl;
    }// end of else statement
    
    // Section break
    cout << "\n\n";
    
    cout << "1st Y-Axis plate position at which the "
         << "short-side custom barcode can be read: ";
    
    cin >> YAxis1;
    
    cout << "2nd Y-Axis plate position at which the "
         << "short-side custom barcode can be read: ";
    
    cin >> YAxis2;
    
    cout << "Calculating the midpoint range of two Y-axis position values for "
         << "short-side custom barcode........\n" << endl;
    
    int YAxis = computeMidPoint(YAxis1, YAxis2);
    
    cout << "Verify Y-axis is within range.................."  << "\n" << endl;
    
    if(YAxis >= 5500 && YAxis <= 5700) {
        
        cout << "Y-axis is within spec" << endl;
        
        cout << "Please move Y-axis " << YAxis <<" from home position!" << endl;
    
        cout << "Save position for Short-Side Custom Barcode \n";
    } // end of if statement
    
    else {
        cout << "Y-axis value is out of range: " << YAxis << endl;
        
        cout << "Please review your data to determine if correct" << endl;           
    }
  
}// End of shortSideBarCode( ) function
