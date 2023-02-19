/* 
    PICOSIM - TINY AIRBUS A320 SIMULATION - WRITTEN BY TYLER BROEGGER
    AIRBUS A320-214 | CFM56-5B4 | WINGTIP-FENCE

    RESOURCES REFERENCED:
     - FCOM ( FLIGHT CREW OPERATING MANUAL ) - Not Public
     - FCTM ( FLIGHT CREW TRAINING MANUAL ) - Not Public
     - QRH ( QUICK REFERENCE HANDBOOK ) - Not Public
     - TYPE CERTIFICATE DATA SHEET A320 - https://www.easa.europa.eu/en/downloads/16507/en
     - TYPE CERTIFICATE DATA SHEET CFM56-5B/C - https://www.easa.europa.eu/en/downloads/7797/en
   
    ABBREVIATIONS:
     - /

*/
#include <stdio.h>
#include <string.h>

struct flightmodel{
    int acfX;
    int acfY;
    int acfZ;
}fm;


struct aircraft{
    // GENERAL AIRCRAFT INFORMATION
    char type[5]; // 5 Characters, A320(4) + NULL Pointer

    // AIRCRAFT GEOMETRY
    double length; // in Meters
    double height; // in Meters
    double wingSpan; // in Meters
    double wingArea; // in Meters squared
    
    // AERODYNAMIC DATA
    

    // INERTIAL DATA
    int mass; // Actual weight of the aircraft at any given time.
    

    // CONTROL SURFACES
    int rAileron;
    int lAileron;
    int rSPoiler;
    int lSpoiler;
    int hStabilzer;
    int elevator;
    int rudder;
    int CONF;


}airbus;

void initPICOSIM(){
    printf("Hello World, the header file is working.");
}

