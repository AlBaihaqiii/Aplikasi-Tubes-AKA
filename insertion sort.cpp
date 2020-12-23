#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"masukan jumlah ukuran array:";
	cin>>n;
	int x[n];
	cout<<endl;
	
	for(int j=0; j<n; j++){
		cout<<"masukan bilangan ke dalam array ke-"<<j+1<<" :";
		cin>>x[j];
	}
	cout<<endl;
	
	for(int j=1; j<n; j++){
		int key = x[j];
		int i = j-1;
		while(i>=0 && x[i] > key){
			x[i+1] = x[i];
			i--;
		}
		x[i+1] = key;
		
		cout<<"langkah - langkah proses insertion sorting"<<endl;
		for(int m=0;m<n;m++){
		cout<<x[m]<<" ";
	    }
	    cout<<endl;
	}
	cout<<endl;
	cout<<"HASIL INSERTION SORT"<<endl;
	for(int m=0;m<n;m++){
		cout<<x[m]<<" ";
	}
}
