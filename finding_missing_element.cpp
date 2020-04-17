#include <iostream>

using namespace std;
void mis(int a[])

{

    int i;
    int h[12]={0};//an array with all elements as 0
    for(i=0;i<10;i++)
    {
        h[a[i]]++;//setting element present as in array 1
    }
    cout<<"the missing elements is/are:\n";
    for(int j=1;j<=12;j++)
    {
        if(h[j]==0)//the index having zero in array is the missing elements
        {

            cout<<j<<endl;
        }
    }

}
//finding missing element in unsorted list
int main()
{
    int arr[]={3,7,4,9,12,6,1,11,2,10};//array of elements
    mis(arr);//calling the functions
    return 0;
}
