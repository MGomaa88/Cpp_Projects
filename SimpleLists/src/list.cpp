#include "include/list.h"

void List::print_menu()
{
    int choice;
    cout<<"******************\n";
    cout<<" 1 - Print list. \n ";
    cout<<" 2 - Add to list. \n ";
    cout<<" 3 - Delete from list. \n ";
    cout<<" 4 - Quit. \n ";
    cout<<" Enter your choice and return: ";
    cin>>choice;
    
    if (choice == 4)
    {
        exit(0);
    }
    else if (choice == 3 )
    {
        delete_item();
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 1)
    {
        print_list();
    }
       
    else
    {
      cout<<"Sorry choice not implemented yet"<<endl;

    }
    
    
}


void List::print_list()
{
    cout<<"\n\n\n";
    cout<<" *** Printing List *** \n";

    for (size_t list_index = 0; list_index < list.size(); list_index++)
    {
        cout << " * "<< list[list_index] << "\n";
    }
    
    cout<<"M - Menu \n";
    char choice;
    cin>>choice;

    if (choice == 'M' || choice == 'm')
    {
        print_menu();
    }
    else
    {
        cout<<"Invalid Choice. Quiting.. \n";
    }
    
}
void List::add_item()
{
    string input;
    cout<<"\n\n\n\n";
    cout<<" *** Add an item ***\n";
    cout<<"Type in an item and press enter: ";
    cin>>input;

    list.push_back(input);
    cout<<"Successfully added an item to the list \n\n";
    cin.clear();
    
    print_menu();

}
void List::delete_item()
{
    int choice;
    cout<<" *** Delete Item ***\n\n";
    cout<<"Select an item index number to delete\n";
    if (list.size())
    {
        for (size_t i = 0; i < list.size(); i++)
        {
            cout<< i << ": " << list[i]<< endl;
                                 
        }
        cin>>choice;
        list[choice] = nullptr;
        
    }
    else
    {
        cout<<"No items to delete. \n";
    }
    
    print_menu();
}