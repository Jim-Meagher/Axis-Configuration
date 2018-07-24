/*
 * File Name: Long_Side_Bar_Code_Configuration
 * Project Name: Axis_Configuration
 * Author: James Marr
 * Date: 30 May 2018
 * Copyright © 2018 James Meagher. All rights reserved.
 * Purpose: Configure the Custom and Manufacturing barcode position for both
 * axis. Y-axis Custom and Manufacturing barcode position will be the same.
 */

// Import input output library 
#include<iostream>

#include "ConfigureAxis.h"

void longSideBarCodes( ) {
    
    using namespace std;
    
    // Axis endpoint positions
    int YAxis1, YAxis2, YAxis3, YAxis4 = 0;
    
    int XAxis1, XAxis2 = 0;
    
    cout << "_________________________________________________________" << endl;
    
    cout << "\t\t Long Side Bar Code Configuration" << endl;
    
    cout << "1st Y-Axis plate position at which the "
         << "Manufacturing barcode can be read: ";
    
    cin >> YAxis1;
    
    cout << "2nd Y-Axis plate position at which the"
         << " Manufacturing barcode can be read: ";
    
    cin >> YAxis2;
    
    cout << "1st Y-Axis plate position at which the "
         << "Custom barcode can be read: ";
    
    cin >> YAxis3;
    
    cout << "2nd Y-Axis plate position at which the "
         << "Custom barcode can be read: ";
    
    cin >> YAxis4;
    
    cout << "Calculating the midpoint range of four Y-axis position values for "
         << "Manufacturing and Custom barcode........\n" << endl;
    
    int YAxis = (YAxis1 + YAxis2 + YAxis3 + YAxis4) / 4;
    
    cout << "Verify Y-axis is within range.................."  << "\n" << endl;
    
    if(YAxis >= 9900 && YAxis <= 10300) {
        
        cout << "Y-axis is within spec" << endl;
        
        cout << "Please move Y-axis " << YAxis <<" from home position!" << endl;
    
        cout << "Save position for Manufacturing BarCode and Custom Barcode \n";
    } // end of if statement
    
    else {
        cout << "Y-axis value is out of range: " << YAxis << endl;
        
        cout << "Please review your data to determine if correct" << endl;           
    }
    // Section break
    cout << "\n\n";
    
    cout << "1st X-Axis plate position at which the "
         << "Manufacturing barcode can be read: ";
    
    cin >> XAxis1;
    
    cout << "2nd X-Axis plate position at which the "
         << "Manufacturing barcode can be read: ";
    
    cin >> XAxis2;
    
    int XAxis = computeMidPoint(XAxis1, XAxis2);
    
    cout << "Calculating the midpoint range of two X-axis position values for "
         << "Manufacturing barcode........ " << "\n";
    
    cout << "Verify X-axis is within range.................."  << "\n" << endl;
    
    if(XAxis >= 900 && XAxis <= 1200) {
        cout << "X-axis is within spec" << endl;
        
        cout << "Please move X-axis " << XAxis <<" from home position!" << endl;
    
        cout << "Save position for Manufacturing BarCode \n" << endl;
          
    } // end of if statement
    
    else {
        
        cout << "X-axis value is out of range: " << XAxis << "\n" << endl;
        
        cout << "Please review your data to determine if correct" << endl;
    }// end of else statement
    
    // Section break
    cout << "\n\n";
    
    cout << "1st X-Axis plate position at which the "
         << "Custom barcode can be read: ";
    
    cin >> XAxis1;
    
    cout << "2nd X-Axis plate position at which the "
         << "Custom barcode can be read: ";
    
    cin >> XAxis2;
    
    XAxis = computeMidPoint(XAxis1, XAxis2);
    
    cout << "Calculating the midpoint range of two X-axis position values for "
         << "Custom barcode........ " << "\n";
    
    cout << "Verify X-axis is within range.................."  << "\n" << endl;
    
    if(XAxis >= 3200 && XAxis <= 3400) {
        cout << "X-axis is within spec" << endl;
        
        cout << "Please move X-axis " << XAxis <<" from home position!" << endl;
    
        cout << "Save position for Custom BarCode \n" << endl;
          
    } // end of if statement
    
    else {
        
        cout << "X-axis value is out of range: " << XAxis << "\n" << endl;
        
        cout << "Please review your data to determine if correct" << endl;
    }// end of else statement
  
    
}// End of longSideBarCodes( ) function