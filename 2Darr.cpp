#include <bits/stdc++.h>

using namespace std;


int main()
{
    //
    // vector<vector<int>> arr(6);
    //
    // // for (int i = 0; i < 6; i++) {
    //     arr[i].resize(6);
    // 
    //     string arr_row_temp_temp;
    //     getline(cin, arr_row_temp_temp);
    //
    //     vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));
    //
    //     for (int j = 0; j < 6; j++) {
    //         int arr_row_item = stoi(arr_row_temp[j]);
    //
    //         arr[i][j] = arr_row_item;
    //     }
    // }


    for(int k=0;k<6;k++) {
        for(int l=0; l<6; l++){
            // cout<<arr[k][l];
        }
        // cout<<endl;
    }


    int max=INT_MIN;
    int count=0;

    for(int k=0; k<=3; k++){
        for(int l=0; l<=3; l++){
            count= arr[k][l] + arr[k][l+1] + arr[k][l+2] + arr[k+1][l+1] + arr[k+2] [l] + arr[k+2][l+1] + arr[k+2][l+2];
            if(count>max){
                max=count;
            }
        }
    }
    cout<<max<<endl;

    return 0;
}
