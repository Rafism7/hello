#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    vector<int>data={1,2,3};
    //vector data type here is int
    data.push_back(9);
    //If we need to add any element to the vector we can use push_back() function
    cout<<data[3]<<endl;
    //Alternate way 
    cout<<data[data.size() - 1]<<endl;
    //Pop back function to reduce size
    data.pop_back();
    cout<<data.size()<<endl;
    //Therefore size is dynamic
    //size() – Returns the number of elements in the vector.
    vector<int>b1;

    for(int i =1;i<=6;i++){
        b1.push_back(i);
    }
    cout<<"Size : " << b1.size();
    cout<<"\nCapacity :"<<b1.capacity();
    //capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    cout<< "\nMax_size :"<<b1.max_size();

    //resizing the vector to 5 elements

    b1.resize(5);
    //resize(n) – Resizes the container so that it contains ‘n’ elements.
    cout<<"\nSize : "<<b1.size();

    //Check if the vector is  empty or not 
    if (b1.empty() == false)
    //empty() – Returns whether the container is empty.
        cout<<"\nVector is not empty";
    else
        cout<<"\nVector is empty";

    //Shrink the vector

    b1.shrink_to_fit();
    //shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    cout<< "\nVector elements are: ";
    for( auto it =b1.begin(); it != b1.end();it++)
        cout<<*it<<" ";
        
    return 0;

}
