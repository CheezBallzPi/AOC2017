#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream fin("input");
ifstream fin2("input");

int main() {
    int num, max = 0, min = 99999, hash = 0;
    
    // Part 1
    for(int i = 0; i < 16; i++) {
        max = 0;
        min = 99999;
        for(int j = 0; j < 16; j++) {
            fin >> num;
            if(num < min)
                min = num;
            if(num > max)
                max = num;
        }
        //cout << max << " " << min << endl; 
        hash += (max - min);
    }
    cout << hash << endl;

    // Part 2
    hash = 0;
    int nums[16];
    for(int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {
            fin2 >> nums[j];
            //cout << nums[j] << " "; 
        }
        //cout << endl;
        for(int j = 0; j < 16; j++) {
            for(int k = j + 1; k < 16; k++) {
                if(nums[j] % nums[k] == 0) {
                    hash += nums[j] / nums[k];
                    break;
                }
                else if(nums[k] % nums[j] == 0) {
                    hash += nums[k] / nums[j];
                    break;
                }
            }
        }
    }
    cout << hash << endl;

    return 0;
}