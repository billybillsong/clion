//
// Created by �з� on 2022/3/7.
//

#include "Manager.h"

void Manager::doWork()
{
    cout<<"����ϰ彻�������񣬲��·������Ա��"<<endl;
}

Manager::Manager(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_Depid = did;
}