//
// Created by 研发 on 2022/3/7.
//

#ifndef CLION_BOSS_H
#define CLION_BOSS_H
#include "Worker.h"

class Boss : public Worker
{
public:
    Boss(int id,string name,int did);
public:
    void doWork();
};
#endif //CLION_BOSS_H
