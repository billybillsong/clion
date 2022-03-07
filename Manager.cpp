//
// Created by 研发 on 2022/3/7.
//

#include "Manager.h"

void Manager::doWork()
{
    cout<<"完成老板交给的任务，并下发任务给员工"<<endl;
}

Manager::Manager(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_Depid = did;
}