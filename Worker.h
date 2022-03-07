//
// Created by ÑÐ·¢ on 2022/3/7.
//

#ifndef CLION_WORKER_H
#define CLION_WORKER_H
#include <iostream>
using namespace std;
class Worker
{
public:
    int m_Id;
    string m_Name;
    int m_Depid;

public:
    virtual void doWork()=0;
};
#endif //CLION_WORKER_H
