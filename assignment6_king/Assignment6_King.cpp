/*  COPYRIGHT 2020 Kailen King
Author: Kailen King
Date: November 23,2020
Purpose: Assignment 6
Details: write a program that makes a queue of grogery items that also has the ammount of each item and the cost of each item and
display it
also create a makefile for the program.
*/

#include<iostream>    // library
#include<cmath>
#include<string>
#include <fstream>
using namespace std;

struct node
{
    string item;
    int count;
    double price;
    node *link;
};

class grocery{

public:
grocery()
    {
        head = NULL;
        tail = NULL;
    }
friend void payment(int count,double price);

void add_node(string i,int c,double p)
    {
        node *tmp = new node;
        tmp->item = i;
	tmp->count = c;
	tmp->price = p;
        tmp->link = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->link = tmp;
            tail = tail->link;
        }
    }

void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->item << tmp->count << tmp->price << endl;
            tmp = tmp->link;
        }
    }

 node* gethead()
    {
        return head;
    }

/*    static void display(node *head)
    {
        if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->item << head->count << head->price << endl;
            display(head->link);
        }
    }
*/
/*    static void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->link == NULL)
                a->link = b;
            else
                concatenate(a->link,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }

    void front(string i,int c,double p)
    {
        node *tmp = new node;
        tmp -> item = i;
	tmp -> count = c;
	tmp -> price = p;
        tmp -> link = head;
        head = tmp;
    }

    void after(node *a, int value)
    {
        node* p = new node;
        p->link = value;
        p->link = a->link;
        a->link = p;
    }
*/

void del (node *before_del)
    {
        node* temp;
        temp = before_del->link;
        before_del->link = temp->link;
        delete temp;
    }

private:
string item;
double price;
int count;
node *head,*tail;
};

void payment(int count,double price)
{
double cost =price*count;
cout<< cost;
}

int main()
{
grocery list;

string item;
double count;
double price;

int ammount;
cout<<"how many items do you have"<<endl;
cin>>ammount;

for(int i=0;i<ammount;i++){
while(i<ammount){
cout<<"enter name of  item "<<i+1<<endl;
list.add_node(item,count,price);

i++;
//}
//}
cin>>item;
cout<<"number of "<< item<<"s"<<endl;
cin>>count;
cout<<"enter price"<<endl;
cin>>price;
//list.add_node(item,count,price);
//list.display();
cout<<"your total is $"; //<<payment(count,price);
payment(count,price);
cout<<endl;
//cout<<price*count<<endl;
}cout<<endl;
}

cout<<"please take your items"<<endl;
//list.del(list.gethead()->link);
cout<<"thank you!"<<endl;

string line;
  ifstream myfile ("iFile.txt");
  if (myfile.is_open())
  {
    /*while ( getline (myfile,line) )
    {

     // cout << line << '\n';
	item = line;
	price = line;
    }
    */
 float a;
    while (myfile >> a)
    {
        printf("%f ", a);
    }

    getchar();
//cout<< a;
    return 0;
    myfile.close();
  }

  else cout << "Unable to open file";


//iFile.close();
return 0;
}
