#include <iostream>
using namespace std;

Ganjil (int *mod) (int *ptr) {
	for (int y=0; y<10; y+=1) {
		*mod = ptr[y]%2;
		if (*mod != 0) {
			cout << " " << ptr[y] << " ";
		}
	}
}

Genap (int *mod) (int *ptr) {
	for (int y=0; y<10; y+=1) {
		mod = ptr[y]%2;
		if(mod == 0){
			cout << " " << ptr[y] << " ";
		}
	}
}

int  main() {
      int x[10], mod=0;
      int *ptr;
      cout << "\n\t PROGRAM PEMISAH BILANGAN GANJIL DAN GENAP";
      cout << "\n\n";
      ptr = x;
      for (int y=0; y < 10; y+=1) {
            cout << "MASUKKAN BILANGAN NO. " << y+1 << ": ";
            cin >> ptr[y];
      }
      
      cout << "\n \t BILANGAN GANJIL";
      cout << "\n\n";
      
      Ganjil ()(&mod)(&ptr);
      
      cout << "\n\n";
      cout << "\n \t BILANGAN GENAP";
      cout << "\n\n";
          
      Genap ()(&mod)(&ptr);
          
      cout << "\n\n";
      return 0;
}
