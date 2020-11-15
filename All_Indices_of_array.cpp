#include<bits/stdc++.h>
using namespace std;

int len,x;
int shortLen;

int* IndicesArray(int arr[], int idx, int x, int fsf){
    if(idx == len){
       shortLen = fsf;
       return new int[fsf];
    }
    if(arr[idx] == x){
        int* iarr = IndicesArray(arr,idx+1, x, fsf+1);
        iarr[fsf] = idx;
        return iarr;
    }
    else{
        int* iarr = IndicesArray(arr,idx+1, x, fsf);
        return iarr;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    len = n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cin>>x;
    int* p = IndicesArray(arr, 0, x, 0);
    
    vector<int> values(p, p + shortLen);
    if (shortLen == 0) {
        cout << endl;
        return 0;
    }

    for (auto zz : values) {
        cout << zz << endl;
    }

    return 0;
}
