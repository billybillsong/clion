//
// Created by 研发 on 2022/3/7.
//

#ifndef CLION_EMPLOYEE_H
#define CLION_EMPLOYEE_H
#include "Worker.h"

class Employee : public Worker
{
public:
    Employee(int id,string name,int did);
public:
    void doWork();
};
#endif //CLION_EMPLOYEE_H
