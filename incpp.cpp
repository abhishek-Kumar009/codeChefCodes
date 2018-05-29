#include<iostream>  //Note that this was written in Eclipse supporting java...Just copy the code!!
using namespace std;
int main()
{
	int T,i,j,temp=0,k,l,dif=0,n;
	cin >> T;
	while(T--) {
		cin>>n;
		int *s = new int[n];
		for( j=0;j<n;j++)
			cin>>s[j];
		
		for(k=0;k<n-1;k++) {
			int min=k;
			for(j=k+1;j<=n-1;j++) {
				if(s[j]<s[min])
					min=j;
			}
			temp=s[min];
			s[min]=s[k];
			s[k]=temp;
		}
		dif=s[1]-s[0];
		for(l=1;l<n-1;l++) {
			if((s[l+1]-s[l])<dif)
			dif=s[l+1]-s[l];
		}
		cout << dif << endl;
	}
	return 0;
}

