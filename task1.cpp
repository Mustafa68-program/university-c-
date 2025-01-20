
#include <iostream>
using namespace std;
int main(){
	int array[5];
	int sz=5;
	int largest=INT_MIN;
	float average=0;
	int start=0;
	int end=sz-1;
	for(int i=0;i<sz;i++){
		cin>>array[i];
		average=(average+array[i]);
		largest=max(array[i],largest);
}
	while(start<=end){
		swap(array[start],array[end]);
			start++;
			end--;
		}
	cout<<"largest is "<<largest<<endl;
	cout<<"average is "<<average/sz<<endl ;
	cout<<"reverse array is:  ";
	for(int i=0;i<sz;i++){
		cout<<array[i]<<"  ";
	}	
	return 0;
}