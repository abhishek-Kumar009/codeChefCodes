#include<iostream>
using namespace std;

int main() {
	int T,i,j,l;
		cin>>T;    // Number of test Cases
		
		for (i = 1; i <= T; i++) {
		int N;
			cin>>N;
			int arr[N+1];
			arr[0] = 0;
			for (j = 1; j <= N; j++) { // Loop for taking input of Length of the songs
				cin>>arr[j];
			}
			int k;
			cin>>k; // index of Uncle John before sorting
			int comp = arr[k];
			for (j = 1; j <= N; j++) {
				int min = j;
				for (l = j + 1; l <= N; l++) {
					if (arr[l] < arr[min])
						min = l;
				}
				int temp = arr[min];
				arr[min] = arr[j];
				arr[j] = temp;

			}
			for (j = 1; j <= N; j++) {
				if(arr[j] == comp)
				cout<<j<<endl;

			}
			

		}
		return 0;

	

}
