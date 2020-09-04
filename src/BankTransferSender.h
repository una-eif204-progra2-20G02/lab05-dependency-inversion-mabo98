//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H


#include <string>
#include "IMoneySender.h"
class BankTransferSender : public IMoneySender  {
public:
    std::string sendMoney() const override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
