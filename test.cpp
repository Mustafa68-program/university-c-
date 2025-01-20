#include <iostream>
using namespace std;
int main(){
	string array="hello";
	int start=0;
	int sz=5;
	int end=sz-1;
	while(start<end){
		swap(array[start],array[end]);
		start++;
		end--;
	}
	for(int i=0;i<sz;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}