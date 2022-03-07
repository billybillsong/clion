#include <iostream>
using namespace std;
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include "WorkerManager.h"



int main() {
    WorkerManager wm;
    int choice=0;
    while (true)
    {
        wm.showMenu();
        cout<<"请输入您的选择:"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 0:
                //0、退出管理程序
                wm.exitSystem();
                system("cls");
                break;
            case 1:
                //1、增加职工信息
                system("cls");
                break;
            case 2:
                //2、显示职工信息
                system("cls");
                break;
            case 3:
                //3、删除离职职工
                system("cls");
                break;
            case 4:
                //4、修改职工信息
                system("cls");
                break;
            case 5:
                //5、查找职工信息
                system("cls");
                break;
            case 6:
                //6、按照编号排序
                system("cls");
                break;
            case 7:
                //7、清空所有文档
                system("cls");
                break;
            default:
                break;

        }
    }

    system("pause");
    return 0;
}
