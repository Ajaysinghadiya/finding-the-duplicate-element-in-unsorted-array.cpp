//this program will show the duplicate numbers in the unsorted array and counting the number of accurances 

#include<iostream>
using namespace std;

int  main ()
{
    int numebr_of_elements;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>> numebr_of_elements;
    int array[numebr_of_elements];
    cout<<"Enter the elemetns one by one :"<< endl;
    for(int i=0;i<numebr_of_elements;i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<numebr_of_elements-1;i++)
    {
        int count=1;
        if(array[i]!=-1)//This will refuse that element which is repeating again
        {
            for(int j=i+1;j<numebr_of_elements;j++)
            {
                if(array[i]==array[j])
                {
                    count++;//Counting the number of accurances
                    array[j]=-1;//Replacing that element by -1 so that it will not count itself again
                }
            }
            if(count>1)
            {
                cout<<array[i]<<" is appearing "<< count <<" times "<< endl;
            }
        }
    }
 
    return 0;
}
