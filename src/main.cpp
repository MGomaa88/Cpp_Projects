#include <iostream>
#include <iomanip>
#include <vector>
#include "include/list.h"

using namespace std;

int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        List simpleList;
        simpleList.name =  args[1]; 
         
        simpleList.print_menu();
    }
    else 
    {
        cout<< "Username is not supplied ....!!!!"<<endl;
    }
    


return 0;
}

