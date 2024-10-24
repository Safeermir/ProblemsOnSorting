#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Ente the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the "<<n<<" elements of the array:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter the value of K :";
    cin>>k;
    for(int i=0;i<k;i++){
        int min=v[i];
        int minindex=i;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                minindex=j;
            }
        }
        swap(v[i],v[minindex]);
    }
    cout<<v[k-1];
}