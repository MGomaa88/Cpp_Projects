#include<iostream>
#include<vector>

using namespace std;

class List
{
    private:

    protected:

    public:
    List(){
        //construcor

    }
    ~List(){
        //destructor

    }
    vector<string> list;
    string name;
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
   



};