#include <iostream>
using namespace std;
int main(){
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rows=3;
	int column=3;
	int sum=0;
	int largest=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			cout<<"enter the element"<<"["<<i<<"]"<<"["<<j<<"]";
			cin>>array[i][j];
		}
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			sum+=array[i][j];
		}
	}
	cout<<"sum of array is"<<sum<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			largest=max(array[i][j],largest);
		}
	}
	cout<<"enter the largest element "<<largest;
	return 0;
}