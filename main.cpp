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
        cout<<"����������ѡ��:"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 0:
                //0���˳��������
                wm.exitSystem();
                system("cls");
                break;
            case 1:
                //1������ְ����Ϣ
                system("cls");
                break;
            case 2:
                //2����ʾְ����Ϣ
                system("cls");
                break;
            case 3:
                //3��ɾ����ְְ��
                system("cls");
                break;
            case 4:
                //4���޸�ְ����Ϣ
                system("cls");
                break;
            case 5:
                //5������ְ����Ϣ
                system("cls");
                break;
            case 6:
                //6�����ձ������
                system("cls");
                break;
            case 7:
                //7����������ĵ�
                system("cls");
                break;
            default:
                break;

        }
    }

    system("pause");
    return 0;
}
