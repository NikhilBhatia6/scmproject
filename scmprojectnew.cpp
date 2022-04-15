 [7:20 pm, 14/04/2022] ?: Ok
[7:22 pm, 14/04/2022] Pratham_arora: #include<iostream>
using namespace std;
int main()
{
    int size,index;
    cout<<"Please enter the size of the array you want "<<endl;
    cin>>size;
    cout<<endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Please enter the " << i << " element in the array    ";
        cin>>arr[i];

    }
    cout<<endl;

    int search;
    cout<<"Please enter the number you want to search  ";
    cin>>search;
    bool found =false;

    for(int k = 0; k < size; k++) {

        if(arr[k] == search)
        {
            found = true;
            index = k;

        }

    }
    if (found==false)
    {
        cout<<"Number not found"<<endl;
    }
    if (found==true)
    {
        cout<<"Number is found at index " <<index<<endl;
    }
    
}