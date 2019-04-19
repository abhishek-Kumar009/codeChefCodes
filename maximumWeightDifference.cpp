#include<bits/stdc++.h>
using namespace std;
void merge(int *a, int s, int e){
	int mid = (s + e)/2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];

	while(i <= mid && j <= e){
		if(a[i] < a[j]){
			temp[k++] = a[i++];
		}else{
			temp[k++] = a[j++];
		}
	}
	while(j <= e){
		temp[k++] = a[j++];
	}

	while(i <= mid){
		temp[k++] = a[i++];
	}
	for(int i = s; i <= e; i++){
		a[i] = temp[i];
	}

}
void mergeSort(int a[], int s, int e){
	if(s >= e)
		return;
	int mid = (s + e)/2;
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);

	merge(a, s, e);

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		cin >> k;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		mergeSort(a, 0, n - 1);
		int r = 0;
		int res_k = k;
		if (k > n/2)
		    res_k = n - k;
		int WtSon = 0, WtChef = 0;
		while(r < n){
			if(r < res_k)
				WtSon += a[r];
			else
				WtChef += a[r];
			r++;
		}
		cout << WtChef - WtSon <<endl;	
	}
	return 0;
}
