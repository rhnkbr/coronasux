#include <iostream>
using namespace std;

Ganjil (int *mod) (int *mypointer) {
	for (int z=0; z<5; z+=1) {
		*mod = mypointer[z]%2;
		if (*mod != 0) {
			cout << " " << mypointer[z] << " ";
		}
	}
}

Genap (int *mod) (int *mypointer) {
	for (int z=0; z<5;z+=1) {
		mod = mypointer[z]%2;
		if(mod == 0){
			cout << " " << mypointer[z] << " ";
		}
	}
}

int  main() {
      int x[10],mod=0;
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
      
      Ganjil ()(&mod)(&mypointer);
      
      cout << "\n\n";
      cout << "\n \t BILANGAN GENAP";
      cout << "\n\n";
          
      Genap ()(&mod)(&mypointer);
          
      cout << "\n\n";
      return 0;
}
