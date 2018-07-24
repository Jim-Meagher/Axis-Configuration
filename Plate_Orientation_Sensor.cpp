/*
 * File Name: Plate_Orientation_Sensor
 * Project Name: Axis_Configuration
 * Author: James Marr
 * Date: 29 May 2018
 * Copyright © 2018 James Meagher. All rights reserved.
 * Purpose: Adjust the Plate Orientation Sensor X and Y Axis Position
 */

// Import Input Output library 
#include <iostream>

#include "ConfigureAxis.h"

void PlateOrientationSensor( ) {
    using namespace std;
    
    // Axis End Point Positions
    int XAxis_Point1, XAxis_Point2 = 0;
    
    int YAxis_Point1, YAxis_Point2 = 0;
    
    cout <<"__________________________________________________________" << endl;
    
    cout <<"\t\t Plate Orientation Sensor Adjustment" << endl;
    
    cout <<"Please enter the 1st Y-axis plate position: ";
    
    cin >> YAxis_Point1;
    
    cout <<"Please enter the 2nd Y-axis plate position "; 
    
    cin >>YAxis_Point2;
    
    cout << "Calculating the midpoint range of two Y-axis position values for "
         << "Orientation Sensor...................................... " << "\n";
    
    int YAxis = computeMidPoint(YAxis_Point1, YAxis_Point2);
    
    cout << "Please move Y-axis " << YAxis <<" from home position!" << endl;
    
    cout << "Save position for CheckOrientationPosition" << endl;
    
    // Section break
    cout << "\n\n";
    
    cout <<"Please enter the 1st X-axis plate position: ";
    
    cin >> XAxis_Point1;
    
    cout <<"Please enter the 2nd X-axis plate position: ";
    
    cin >> XAxis_Point2;
    
    cout << "Calculating the midpoint range of two X-axis position values for "
         << "Orientation Sensor...................................... " << "\n";
    
    int XAxis = computeMidPoint(XAxis_Point1, XAxis_Point2);
    
    cout <<"Please move X-axis " << XAxis <<" from home position!" << endl;
    
    cout << "Save position for CheckOrientationPosition" << endl;
    
    cout <<"_________________________________________________________" << endl;
    
}// End of PlateOrientationSensor( ) function