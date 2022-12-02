#include <iostream>
#include "Arrays.h"
using namespace std;
static char data_structure_type[10] = {"Arrays"};
int main() {
    short operatorNumber;
    while (true)
    {
        cout<<"Select the "<<data_structure_type<<" operation:\n";
        cout<<"*** 1. "<<"Initialize "<<data_structure_type<<".\n";
        cout<<"*** 2. "<<"Show complete "<<data_structure_type<<".\n";
        cout<<"*** 3. "<<"Read one of "<<data_structure_type<<".\n";
        cout<<"*** 4. "<<"Add data of "<<data_structure_type<<".\n";
        cout<<"*** 5. "<<"Delete data of "<<data_structure_type<<".\n";
        cout<<"*** 6. "<<"Update data of "<<data_structure_type<<".\n";
        cout<<"*** 7. "<<"Exit.\n";
        cin>>operatorNumber;
        if(operatorNumber == 7) {return 0;}
        switch(operatorNumber){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                cout<<"No such operation! Please input again\n"<<endl;
                break;
        }
    }
    return 0;
}
