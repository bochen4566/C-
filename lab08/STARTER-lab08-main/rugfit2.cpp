// rugfit2.cpp - calculates fit of rug to a floor
// YOUR NAME(S), TODAY'S DATE
//BOchen Wang 3/9/22
#include <iostream>
using namespace std;

#include "Rectangle.h"

// change main where instructed in UPPER CASE below


int main() {
    
    double width, length;
    double wid, leng;
    Rectangle rug(0,0); // will be updated below

    // create Rectangle named "floor" for sizes input by user
    cout << "enter width and length of floor: ";
    cin >> width >> length;
    const Rectangle floor(width, length); // note: const object
    cout << "enter width and length of rug: ";
    cin >> wid >> leng;
    rug.setWidth(wid);
    rug.setLength(leng);
    // RESET Rectangle NAMED "rug" FOR SIZES INPUT BY USER
    // (instead of the (0,0) used when it was created.
    
    
    // DO NOT CHANGE ANYTHING BELOW (if you do, you are subject to
    // deductions, or getting a zero on the lab.))

    // print results
    cout << "floor area: " << floor.area() << endl;
    cout << "rug area: " << rug.area() << endl;
    double leftover = rug.area() - floor.area();
    cout << "leftover rug area: " <<
        (leftover > 0 ? leftover : 0) << endl;
    cout << "empty floor area: " <<
        (leftover < 0 ? -leftover : 0) << endl;

    return 0;
}
