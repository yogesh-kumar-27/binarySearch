
#include <iostream>
using namespace std;

class binarySearch
{
int arr[100],n,search;
public:
void getdata();
int searchfun();
void display();
};

void binarySearch :: getdata()
{
cout<<"Enter how many Number of array you want to create:-";
cin>>n;
cout<<"\nEnter "<<n<<" Integers in Ascending order\n";
int i;
for( i=0;i<n;i++)
{
    // cout<<"\nEnter the element in the "<<(i+1)<<" position of the array:";
    cin>>arr[i];
}    
    cout<<"\nEnter your Search :- ";
    
    cin>>search;
}

int binarySearch :: searchfun()
{
int low=0,high=n-1,mid;

while(low <= high)
{
    mid=(high+low)/2;
   if(arr[mid]==search)
      return(mid+1);
   else
   {
      if(arr[mid] < search)
            low=mid+1;
      else
          high=mid;
   }

} 
  return -1;//it use as an indicator because it is an intiger type we've return some value
//    int flag=0;
//    int i;
//   for(i=0;i<n;i++)
//    {
//      if(search == arr[i])
//      {
//        cout<<"\n\nThe element "<<search<<" is present in the position "<<(i+1)<<" of the array";
//        flag++;
//      }
//    }
//    if(flag==0)
//     cout<<"\nGiven key "<<search<<" is not present in the array";
}

void binarySearch :: display()
{
int result;
result=searchfun();
if(result== -1) 
    cout<<"\n\nEntered search is Invalid\n";
else
    cout<<"\n\nSearch is Located at "<<result<<" Postition\n";
}

int main()
{
   binarySearch o1;
   o1.getdata();
   o1.display();
 
return 0;
}