
#include<iostream> 
using namespace std; 
template<typename t> 
 void selection(t a[],int n) 
{ 
    int min; 
    for(int i=0;i<n;i++) 
    { 
        min=i; 
        for(int j=i+1;j<n;j++) 
        { 
            if(a[j]<a[min]) 
            min=j; 
        } 
    swap(a[i],a[min]);
    } 
    cout<<"Array after sorting : "<<endl; 
    for(int i=0;i<n;i++) 
    { 
        cout<<a[i]<<endl;   
    } 
    cout<<endl; 
} 
int main() 
{ 
int n; 
cout<<"Enter the array length : "<<endl; 
cin>>n; 
int a[n]; 
float f[n]; 
cout<<"Enter the integer array : "<<endl; 
for(int i=0;i<n;i++) 
{ 
cout<<"Enter the element at index "<<i<<" : "<<endl; cin>>a[i];
} 
cout<<"Enter the float array : "<<endl; 
for(int i=0;i<n;i++) 
{ 
cout<<"Enter the element at indec "<<i<<" : "<<endl; cin>>f[i]; 
} 
selection<int>(a,n); 
selection<float>(f,n); 
return 0; 
} 
/*Enter the element at index 0 : 
62 
Enter the element at index 1 : 
54 
Enter the element at index 2 : 
57 
Enter the element at index 3 : 
1 
Enter the element at index 4 : 
100 
Enter the float array : 
Enter the element at indec 0 : 
6.3 
Enter the element at indec 1 : 
5.4 
Enter the element at indec 2 : 
5.7 
Enter the element at indec 3 : 
1.1 
Enter the element at indec 4 : 
1.01 
Array after sorting : 
1,54,57,62,100, 
Array after sorting : 
1.01,1.1,5.4,5.7,6.3,*/
