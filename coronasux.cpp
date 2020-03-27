#include <iostream>
using namespace std;

int  main() {
	int x[10], mod=0;
      	int *ptr;
      	cout << "\n\t PROGRAM PEMISAH BILANGAN GANJIL DAN GENAP";
      	cout << "\n\n";
      	ptr = x;
      	for (int y=0; y<10; y+=1) {
        	cout << "MASUKKAN BILANGAN NO. " << y+1 << " : ";
        	cin >> ptr[y];
      	}
      
     	cout << "\n \t BILANGAN GANJIL";
      	cout << "\n\n";
      	for (int y=0; y<10; y+=1) {
      		mod = ptr[y]%2;
      		if (mod != 0) {
      			cout << " " << ptr[y] << " ";
		}
	}
	
      	cout << "\n\n";
      	cout << "\n \t BILANGAN GENAP";
      	cout << "\n\n";
        for (int y=0; y<10; y+=1) {
		mod = ptr[y]%2;
          	if (mod == 0) {
			cout << " " << ptr[y] << " ";
		}
	}
				
      	cout << "\n\n";
      	return 0;
}
