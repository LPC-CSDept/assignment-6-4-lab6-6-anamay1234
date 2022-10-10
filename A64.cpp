
#include <iostream>
#include <iomanip>
using namespace std;

//----------
// Make a line for Function Prototype for getListprime Here
//----------
void printPrimeList(int a, int b){
    int flag;
    cout << " Prime numbers between " << a << " and " << b << ":" << endl;\
    for(int i=a; i <=b; i++){  
        if(i == 1 || i == 0)
           continue;
        flag =1;
        for(int j =2; j<= (i/2); ++j){
            if(i % j == 0){
                flag =0;
                break;
            }
        } 
        if (flag == 1){
            cout << i << " ";
        }   
    }
}
void getListprime(int begin){
    printPrimeList(begin, 100);
}
void getListprime(){
    printPrimeList(0,100);
}
void getListprime(int begin, int end){
    printPrimeList(begin, end);
}

int main()
{
	int begin, end;
	cout << "Enter your input (two integer for range ) \n";
	cin >> begin >> end;
	if (begin < end)
		getListprime(begin, end);
	else if (begin > end)
		getListprime();
	else
		getListprime(begin);
}
