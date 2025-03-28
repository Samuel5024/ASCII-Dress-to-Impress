#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream pants("dresspants.txt");
	string dresspants;
	int row = 0;

	while(getline(pants, dresspants)){
	    int width = dresspants.length();
	    
	    for(size_t col = 0; col < width; col++) {
	        
	        if(row >= 2 && row <= 3) { //print a white stripe
	            
	            if(col % 8 == 1 || col % 8 == 0){ //insert black stripes - simulate belt loops
	                cout << "\033[30m" << dresspants[col];
	            }
	            
	            else{
	                cout << "\033[37m" << dresspants[col];    
	            }
	        }
	        else {
	            cout << "\033[30m" << dresspants[col];
	        }
	    }
	    
	    cout << "\033[0m" << endl;
	    row++;
	}

	pants.close();
	return 0;
}