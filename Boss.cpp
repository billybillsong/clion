//
// Created by �з� on 2022/3/7.
//

#include "Boss.h"

void Boss::doWork()
{
    cout<<"��ɹ�˾��������"<<endl;
}
Boss::Boss(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_Depid = did;
}