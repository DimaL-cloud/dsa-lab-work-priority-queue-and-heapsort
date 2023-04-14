#include "../../headers/entities/assignment.h"

Assignment::Assignment() {
    interest = Evaluation(1 + rand() % 3);
    complexity = Evaluation(1 + rand() % 3);
    usefulness = Evaluation(1 + rand() % 3);
}

Assignment::Assignment(Evaluation interest, Evaluation complexity, Evaluation usefulness) : interest(interest),
                                                                                            complexity(complexity),
                                                                                            usefulness(usefulness) {}

bool Assignment::operator<(const Assignment &rhs) const {
    return usefulness < rhs.usefulness;
}

bool Assignment::operator>(const Assignment &rhs) const {
    return rhs < *this;
}

bool Assignment::operator==(const Assignment &rhs) const {
    return usefulness == rhs.usefulness;
}

bool Assignment::operator<=(const Assignment &rhs) const {
    return !(rhs < *this);
}

bool Assignment::operator>=(const Assignment &rhs) const {
    return !(*this < rhs);
}

ostream &operator<<(ostream &os, const Assignment &assignment) {
    os << "interest: " << assignment.interest << " complexity: " << assignment.complexity << " usefulness: "
       << assignment.usefulness;
    return os;
}

bool Assignment::operator!=(const Assignment &rhs) const {
    return !(rhs == *this);
}
