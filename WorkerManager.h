//
// Created by 研发 on 2022/3/7.
//

#ifndef CLION_WORKERMANAGER_H
#define CLION_WORKERMANAGER_H
#include "Worker.h"

class WorkerManager
{
public:
    void showMenu();   //显示菜单

    void exitSystem();  //退出系统

    void addWorker();   //增加职工信息

public:
    Worker * worker;
    Worker ** workerArray;
};
#endif //CLION_WORKERMANAGER_H
