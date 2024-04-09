#ifndef LINKSAPPS_FLOAT_H
#define LINKSAPPS_FLOAT_H

class FloatCell {

public:

    FloatCell();//Default constructor
    FloatCell(const FloatCell &floatcell);// Copy constructor
    FloatCell(float value);//Parameters constructor
    ~FloatCell() = default;//Destructor

    FloatCell &operator= (const FloatCell &rhs);
    FloatCell &operator= (float i);

    FloatCell &operator+ (const FloatCell &rhs);
    FloatCell &operator+ (float i);

    FloatCell &operator- (const FloatCell &rhs);
    FloatCell &operator- (float i);

    FloatCell &operator* (FloatCell &rhs);
    FloatCell &operator* (float i);

    FloatCell &operator/ (FloatCell &rhs);
    FloatCell &operator/ (float i);

    FloatCell &operator% (FloatCell &rhs);
    FloatCell &operator% (float i);

private:

    float value;

};

#endif //LINKSAPPS_FLOAT_H