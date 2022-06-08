Alternative mid-exam 40 points:

1)Write a program that adds the natural numbers and stands at the number entered by the user. 
#include <iostream>

using namespace std;

int main()
{
    //1)Write a program that adds the natural numbers and stands at the number entered by the user. 
    int w;
    cout<<"enter you start please";
    cin>>w;
    int sum = 0;
    for (int i = w ; i<=10;++i)
        {
            sum+=i;
        }
        cout<<" sum = "<<sum;
    return 0;
}

2)   Write a program that receives  numbers and prints them backwards. 
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //2)   Write a program that receives  numbers and prints them backwards. 
    int w[10];
    cout<<"enter your numbers please";
    for (int i = 0 ; i<10; ++i)
        cin>>w[i];
    cout<<endl;
    cout<<"backwards:->";
    for (int q = 9 ; q>=0;--q)
        {
            cout<<w[q];
        }
        
    return 0;
}

3)  Write a program that receives the names and grades of students, counts the number of successful students, and prints out all student's data.
#include <iostream>

using namespace std;
struct students {
   char  name[50];
   int   grades;
};  
int main()
{
    //Write a program that receives the names and grades of students, 
    //counts the number of successful students, and prints out all student's data.
   struct students IT[2];
   
    
    for (int i = 0 ; i<2; ++i)
    {
        cout<<"enter the data for ->"<<i+1;
        cin>>IT[i].name;
        cin>>IT[i].grades;
    }
   int sum =0;
   for (int i = 0 ; i<2; ++i)
    {
        if(IT[i].grades >= 50)
            sum+=1;
    }
    cout<<endl;
    cout<<"the number of successful students ="<<sum;
    cout<<endl;
   for (int i = 0 ; i<2; ++i)
    {
        cout<<endl;
        cout<<IT[i].name;
        cout<<" -> ";
        cout<<IT[i].grades;
    }
        
    return 0;
}

4)   Make a  20- size queue  that receives integers and prints prime numbers from them.
//4)   Make a  20- size queue  that receives integers and prints prime numbers from them.
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
#define MAX 20
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert()
{
    int item;
    if(rear == MAX - 1)
        cout<<"Queue Overflow n";
    else
    {
    if(front== - 1)
        front = 0;
        cout<<"Inset the integers in queue : ";
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}

void display()
{
    int i,q;
    int flag ;
    if(front == - 1)
        cout<<"Queue is empty n";
    else
    {
        cout<<"Queue is : ";
    for(i = front; i <= rear; i++)
    {
        flag = 0;
       
         for (q = 2; q <= queue_array[i] / 2; ++q) {

        // condition for non-prime
        if (queue_array[i] % q == 0) {
            flag = 1;
            break;
        }
    }

    if (queue_array[i] == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d ", queue_array[i]);
        else
            printf(" ");
    } } } }

int main()
{
    int w = 0;
while(w < 20)
    {
        insert();
    w++;
    }
display();
return 0;
}
}
