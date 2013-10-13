#include <iostream>
using namespace std;
class SafeArray{
public :
	void SetData(int x,int item);
	int GetData(int loc);
	SafeArray(int n):n(n){};
private:
	int n;
	int a[400];
};
void SafeArray::SetData(int x,int item){
	if(x>=(n-1)){
	cout<<"您越界了"<<endl;
	}
	else{
	a[x-1]=item;
	}
}
int SafeArray::GetData(int loc){
	if(loc>(n-1)){
	cout<<"您越界了"<<endl;
	}
	else{
		return a[loc-1];
	}
}
int main(){
	SafeArray a=SafeArray(20);
	a.SetData(22,9);
	a.SetData(18,100);
	int b=a.GetData(18);
	cout<<b<<endl;
}
