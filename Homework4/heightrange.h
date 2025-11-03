//  -------------------------------------  //
//  Copyright Katherine Asher Rogers 2025  //
//  -------------------------------------  //
#ifndef heightrange_H_
#define heightrange_H_

#include <string>
using std::string;
#include <iostream>
using std::ostream;
#include "height.h"

class HeightRange : public Height {
private:

    Height smallestHeight;
    Height largestHeight;

public:

    void SetShortest(const Height& h);
    Height GetShortest() const;
    void SetTallest(const Height& h);
    Height GetTallest() const;
    HeightRange();
    HeightRange(Height a);
    HeightRange(Height a, Height b);
    bool InRange(const Height& a, bool b = true);
    Height Width();

};

#endif