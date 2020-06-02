#include "include/list.h"

void List::print_menu(){
    int choice;

    cout<<"***********\n";
    cout<<"1-print list\n";
    cout<<"2-add list\n";
    cout<<"3-delete from list\n";
    cout<<"4-quit\n";
    cout<<"enter your choice";

    cin>>choice;

    if(choice==4){
        return;
    }
    else if(choice==2){
        add_item();

    }
    else if(choice==3){
        delete_item();

    }
    else if (choice==1){
        print_list();

    }
    else{
        cout<<"wrong input\n";
    }
}

void List::add_item(){
    cout <<"\n\n\n\n\n";
    cout<< "***additem***";
    cout <<"type an item and press enter";

    string item;
    cin>>item;

    list.push_back(item);
    cout<<"successfully add item to the list\n\n\n";

    cin.clear();

    print_menu();
}

void List::delete_item(){
    cout<<"**delete item**\n";
    cout<<"select an item index nummber to delete :\n  ";
    if (list.size()){
        for (int i=0;i < (int)list.size();i++){
            cout<<i<<":"<<list[i]<<"\n";
        }
        int choiceNum;
        cin>>choiceNum;
        list.erase(list.begin()+choiceNum);

    }
    else{
        cout<<"no items to delete\n";
    }
    print_menu();
}

void List::print_list(){
    cout <<"\n\n\n\n";
    cout <<"****printing list****\n";

    for(int list_index=0; list_index < (int)list.size();list_index++){
        cout<<"*"<< list[list_index]<<"\n";
    }

    cout<<"m-menu\n";
    char choice;
    cin >>choice;
    if (choice =='M' || choice =='m'){
        print_menu();
    }
    else{
        cout<<"wrong input";
    }
}

void List::find_userList(){
    bool userFound =false;

    cout <<"\n\n\n\n";
    cout <<"****welcome*"<<name<<"***\n";

    for(int user_index=0; user_index<(int)mainList.size();user_index++){
        cout<<mainList[user_index][0]<<"\n";
        if(mainList[user_index][0]==name){
            cout<<"user has been founnd"<< mainList[user_index][0]<<"\n";
            list=mainList[user_index];
            userFound=true;
            break;
        }
    }

   
}