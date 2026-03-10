#include<iostream>

using namespace std;

int count(int arr[], int size){
    int unique = 0;
    for(int i = 0; i < size; i++){
        bool found = false;
        for(int j = 0; j < i; j++){
            if(arr[j] == arr[i]){
                found = true;
                break;
            }
        }
        if(!found) unique++;
    }
    return unique;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}