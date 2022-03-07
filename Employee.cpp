//
// Created by 研发 on 2022/3/7.
//
#include "Employee.h"

void Employee::doWork()
{
    cout<<"完成经理交给的任务"<<endl;
}

Employee::Employee(int id,string name,int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_Depid = did;
}