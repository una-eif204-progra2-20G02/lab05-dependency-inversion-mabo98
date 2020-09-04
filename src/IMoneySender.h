//
// Created by felip on 3/9/2020.
//

#ifndef LAB_05_MABO98_IMONEYSENDER_H
#define LAB_05_MABO98_IMONEYSENDER_H

#include <iostream>
class IMoneySender {
public:
    virtual std::string sendMoney() const = 0;
    virtual ~IMoneySender();
};


#endif //LAB_05_MABO98_IMONEYSENDER_H
