#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next=NULL;
    }

};

int main()
{
    node *Head;
    Head = NULL;


    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter" <<n<<"Values:\n";
    for (int i=0; i<n; i++)
    {
        cin>> arr[i];
    }


    for(int i=0; i<n; i++)
    {
        if (Head==NULL)
        {
            Head = new node(arr[i]);
        }
        else
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    node *temp= Head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp =temp->next;

    } ;


    return 0;


}
