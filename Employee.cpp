//
// Created by �з� on 2022/3/7.
//
#include "Employee.h"

void Employee::doWork()
{
    cout<<"��ɾ�����������"<<endl;
}

Employee::Employee(int id,string name,int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_Depid = did;
}