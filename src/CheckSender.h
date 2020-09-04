//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

#include <string>
#include "IMoneySender.h"
class CheckSender : public IMoneySender{
public:
    std::string sendMoney() const override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
