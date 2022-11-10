#include<iostream>
using namespace std;

int submax(int a[],int n,int i);
int max(int a[],int n);


int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	int a[100000];
	int sub_max_array[100000];
	cin>>n;

	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sub_max_array[i]=submax(a,n,i);
	}

	cout<<max(sub_max_array,n)<<endl;

   }

}


int submax(int a[],int n,int i){
  int sum=0;
  int previous_sum=0;
  int sub_max=0;
  for(int j=i;j<n;j++){
  previous_sum=sum;
  sum=sum+a[j];
  if(previous_sum>sum)
  sub_max=previous_sum;
  else
  sub_max=sum;
  }
  return sub_max;

}

int max(int a[],int n){
 int maxx=0;
 for(int i=0;i<n;i++){
 if(a[i]>maxx)
 maxx=a[i];
 }
 return maxx;
}
