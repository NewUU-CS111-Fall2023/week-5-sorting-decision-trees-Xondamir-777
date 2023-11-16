/*
 * Author: Zokirjonov Xondamir
 * Date: 16.11.2023
 * Name: Main
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Task 1" << endl;
    string books[] = {"Catcher in the Rye", "Pride and Prejudice", "To Kill a Mockingbird", "The Great Gatsby", "Moby Dick"};
    for (int i =1; i < size(books); i++){
        string kk = books[i];
        int j = i-1;
        while (j >= 0 and books[j] > kk) {
            books[j + 1] = books[j];
            j--;
        }
        books[j + 1] = kk;
    }

    for (string el: books){
        cout << el << endl;

    }


    cout << "\n\nTask 2" << endl;
    int coins[] = {8, 3, 12, 6, 1,5, 10};
    int l = size(coins);
    int sorted_coins[l];
    for (int x=0; x<l; x++){
        sorted_coins[x]= 0;
    }
    int lmin = 0;
    int max = 0;
    for (int i=1; i<l; i++) {
        if ((max < coins[i])) {
            max = coins[i];
        }
    }
    for (int x=0; x<l; x++){
        int min = max;
        for (int i=0; i<l; i++){
            if ((min > coins[i]) and (coins[i] > lmin)){
                min = coins[i];
            }
        }
        lmin = min;
        sorted_coins[x] = min;
    }
    for (int el : sorted_coins){
        cout << el << " ";
    }

    cout << "\n\nTask 3" << endl;
    string soldiers[] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    int l1 = size(soldiers);
    if (l1%2==1){
        l1--;
    }
    for (int i = 0; i < l1; i+=2){
        string s1 = soldiers[i];
        soldiers[i] = soldiers[(i+1)];
        soldiers[i+1] = s1;
    }
    for (string el:soldiers){
        cout << el << endl;
    }

    cout << "\n\nTask 4" << endl;
    int elements[] = {5, 2, 8, 1, 4,6};
    int count=0, ll = size(elements) - 1;
    for (int i=1; i < ll; i++){
        if (elements[i-1] < elements[i] and elements[i+1] < elements[i]){
            count++;
        }
    }
    if (elements[0]> elements[1] and elements[0]> elements[ll]){
        count++;
    }
    if (elements[ll]> elements[0] and elements[ll]> elements[ll-1]){
        count++;
    }
    cout << count << endl;
    cout << "\n\nTask 5" << endl;
    // call for task 5
    return 0;
}
