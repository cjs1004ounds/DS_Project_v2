#include "Manager.h"

Manager::Manager()
{

}
Manager::~Manager()
{

}

void Manager::run(const char* command)
{
    // Open command & log file
    fcmd.open(command);
    flog.open("log.txt");
    if (!fcmd)
    {
        flog << "Fail to open command file" << endl;
        exit(-1);
    }

    // Run command
    char comm[8] = { 0 };
    char string[36] = { 0 };

    while (!fcmd.eof())
    {
        fcmd >> comm;
        if (!strcmp(comm, "LOAD"))
            LOAD();
        else if (!strcmp(comm, "ADD"))
        {
            fcmd.ignore();
            fcmd.getline(string, 36);

            ADD(string);
        }
        else if (!strcmp(comm, "QPOP"))
            ;
        else if (!strcmp(comm, "SEARCH"))
            ;
        else if (!strcmp(comm, "PRINT"))
            ;
        else if (!strcmp(comm, "DELETE"))
            ;
        else if (!strcmp(comm, "EXIT"))
        {
            PrintSuccess("EXIT");
            exit(0);
        }
        else
            PrintErrorCode(1000);
    }


    fcmd.close();
    flog.close();
    return;
}

void Manager::PrintSuccess(const char* cmd)
{
    flog << "===== " << cmd << " =====" << endl;
    flog << "Success" << endl;
    flog << "===============" << endl << endl;
}
void Manager::PrintErrorCode(int num)
{
    flog << "===== ERROR =====" << endl;
    flog << num << endl;
    flog << "===============" << endl << endl;
}

void Manager::LOAD()
{
    char name[20] = { 0 };
    int age;
    char collectday[16] = { 0 };
    char type;

    ifstream fdata;
    fdata.open("data.txt");
    if (!fcmd)
    {
        flog << "100" << endl;
        exit(-1);
    }

    MemberQueue q;
    flog << "===== " << "LOAD" << " =====" << endl;
    while (fdata >> name)
    {
        fdata >> age;
        fdata >> collectday;
        fdata >> type;

        //search해서  같은 이름 시 error
        q.push(name, age, collectday, type);
        flog << name << "/" << age << "/" << collectday << "/" << type << endl;
    }
    flog << "===============" << endl << endl;
}

void Manager::ADD(const char* string)
{
    MemberQueue q;
    char name[20] = { 0 };
    int age = 0;
    char collectday[16] = { 0 };
    char type = 0;
    int i = 0;

    //data 확인
    for (; i < 36; i++)
    {
        if (string[i] == '\n')
            if (string[i] == ' ')
                break;
            else
                name[i] = string[i];
    }

    q.push(name, age, collectday, type);
    flog << "===== " << "ADD" << " =====" << endl;
    flog << name << "/" << age << "/" << collectday << "/" << type << endl;
    flog << "===============" << endl << endl;
}

void Manager::QPOP()
{

}

void Manager::SEARCH()
{

}

void Manager::PRINT()
{

}

void Manager::DELETE()
{

}