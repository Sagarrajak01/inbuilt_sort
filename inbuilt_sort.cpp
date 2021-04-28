#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Input size of elements : ";
  cin>>n;
  vector <int> a(n);        //declaration of vector
  cout<<"Input "<<n<<" elements \n";
  cout<<"--------------------\n";
  for(int i=0;i<n;i++){
    cout<<"Enter "<<i+1<<" element :";
    cin>>a[i];
    cout<<endl;
  }
sort(a.begin(),a.end());       //address of vector
cout<<"After sorting elements are \n";
for(int i=0;i<n;i++){
  cout<<a[i];
  cout<<endl;
}
return 0;
}

