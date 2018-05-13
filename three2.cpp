#include <iostream>
#include <vector>

using namespace std;
int main() {
	int n;
	int cot = 0;
    cin >> n;
    vector<int> a(n);
    int i, j, k;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (i = 0; i < n-2; i++) {
    	for (j = i+1; j < n-1; j++) {
    		for (k = j+1; k < n; k++) {
    			
				if (a[k] >= a[j] && a[k] >= a[i] && a[i] + a[j] > a[k]){
						cot++;
						cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
				
				else if (a[j] >= a[k] && a[j] >= a[i] && a[i] + a[k] > a[j]){
						cot++;
						cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
				else if (a[i] >= a[k] && a[i] >= a[j] && a[j] + a[k] > a[i]){
						cot++;
						cout << a[i] << " " << a[j] << " " << a[k] << endl;
				} 
			}
		}
	} 
	cout << cot << endl;
    return 0;
}

