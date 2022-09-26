#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;
deque<int> dq;
vector<int> v;
int n, temp;
int num=1;
int idx1,idx2;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cin >> temp;
        if(dq.empty()){
            dq.push_back(temp);
		    for(int j=0;j<n;j++){
                if(v[j]==temp) break;
                idx1=j;
            }
        }
        else if(i==1){
            for(int j=0;j<n;j++){
                if(v[j]==temp) break;
                idx2=j;
            }
            if(idx1-idx2==1 || idx1-idx2==-1) num++;
        }
        else{
            
        }
    }
	}
}