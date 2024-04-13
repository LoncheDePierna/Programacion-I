#ifndef LINKSAPPS_FLOAT_H
#define LINKSAPPS_FLOAT_H

class IntCell {

public:

    IntCell();//Default constructor
    IntCell(const IntCell &intCell);// Copy constructor
    explicit IntCell(int value);//Parameters constructor
    ~IntCell() = default;//Destructor

//Operadores de asignación =
    IntCell &operator= (const IntCell &rhs);
    IntCell &operator= (int i);
//Operadores de asignación +
    IntCell &operator+ (const IntCell &rhs);
    IntCell &operator+ (int i);
//Operadores de asignación -
    IntCell &operator- (const IntCell &rhs);
    IntCell &operator- (int i);
//Operadores de asignación *
    IntCell &operator* (IntCell &rhs);
    IntCell &operator* (int i);
//Operadores de asignación /
    IntCell &operator/ (IntCell &rhs);
    IntCell &operator/ (int i);
//Operadores de asignación %
    IntCell operator% (IntCell &rhs);
    IntCell operator% (int i);
//Operadores de comparacion ">,<,==,=>,=<,!="
    bool operator> (IntCell &rhs);
    bool operator> (int i);

    bool operator< (IntCell &rhs);
    bool operator< (int i);

    bool operator== (IntCell &rhs);
    bool operator== (int i);

    bool operator>= (IntCell &rhs);
    bool operator>= (int i);

    bool operator<= (IntCell &rhs);
    bool operator<= (int i);

    bool operator!= (IntCell &rhs);
    bool operator!= (int i);

private:

    int value;
};

#endif //LINKSAPPS_FLOAT_H