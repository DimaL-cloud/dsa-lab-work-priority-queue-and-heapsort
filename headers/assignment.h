#ifndef LAB3_ASSIGNMENT_H
#define LAB3_ASSIGNMENT_H

#include <ostream>

#include "enums/evaluation.h"

using namespace std;

struct Assignment {
private:
    Evaluation interest;
    Evaluation complexity;
    Evaluation usefulness;

public:
    Assignment();

    Assignment(Evaluation interest, Evaluation complexity, Evaluation usefulness);

    bool operator<(const Assignment &rhs) const;

    bool operator>(const Assignment &rhs) const;

    bool operator<=(const Assignment &rhs) const;

    bool operator>=(const Assignment &rhs) const;

    bool operator==(const Assignment &rhs) const;

    bool operator!=(const Assignment &rhs) const;

    friend ostream &operator<<(ostream &os, const Assignment &assignment);
};


#endif //LAB3_ASSIGNMENT_H
