#include<iostream>
using namespace std;
void getSum(int *ptrArray,int size,int *ptrEvenSum,int *ptrOddSum){
	for (int i=0;i<size;i++){
		if (i%2==0)
			*ptrEvenSum+=*(ptrArray+i);
	}
    
   for (int i=0;i<size;i++){
		if (i%2!=0)
			*ptrOddSum+=*(ptrArray+i);
	  }
}
int main(){
	const int size=10;
	int array[10]={2,4,6,8,10,12,14,16,18,20};
	int a=0,b=0;
	int *ptrEvenSum=&a;
	int *ptrOddSum=&b;
	getSum(array,size,ptrEvenSum,ptrOddSum);
	cout<<"The sum of even elements of array is "<<*ptrEvenSum<<endl;
	cout<<"The sum of odd elements of array is "<<*ptrOddSum<<endl;
	return 0;
}