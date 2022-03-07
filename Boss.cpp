//
// Created by 研发 on 2022/3/7.
//

#include "Boss.h"

void Boss::doWork()
{
    cout<<"完成公司所有事务"<<endl;
}
Boss::Boss(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_Depid = did;
}