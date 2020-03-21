#include <iostream>
using namespace std;

void Ganjil (int &mod) { 
	mod = mod%2;
}

void Genap (int &mod) {
	mod = mod%2;
}

int  main() {
	int x[10], mod=0;
      	int *ptr;
      	cout << "\n\t PROGRAM PEMISAH BILANGAN GANJIL DAN GENAP";
      	cout << "\n\n";
      	ptr = x;
      	for (int y=0; y < 10; y+=1) {
        	cout << "MASUKKAN BILANGAN NO. " << y+1 << " : ";
        	cin >> ptr[y];
      	}
      
     	cout << "\n \t BILANGAN GANJIL";
      	cout << "\n\n";
      	for (int y=0; y<10; y+=1) {
      		Ganjil (ptr[y]);
      		if (ptr[y] != 0) {
      			cout << " " << ptr[y] << " ";
		}
	}
	
      	cout << "\n\n";
      	cout << "\n \t BILANGAN GENAP";
      	cout << "\n\n";
        for (int y=0; y<10; y+=1) {
		Genap (ptr[y]);
          	if (ptr[y] == 0) {
			cout << " " << ptr[y] << " ";
		}
	}
				
      	cout << "\n\n";
      	return 0;
}
