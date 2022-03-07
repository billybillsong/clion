//
// Created by 研发 on 2022/3/7.
//

#ifndef CLION_MANAGER_H
#define CLION_MANAGER_H
#include "Worker.h"

class Manager : public Worker
{
public:
    Manager(int id,string name,int did);
public:
    void doWork();
};
#endif //CLION_MANAGER_H
