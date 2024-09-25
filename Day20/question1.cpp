//Ques 1: You are given a image in n*m matrix now you have to rotate the image by 90 degree. Input : n=3, m=3 , image[3][3]={[1, 2, 3],[4,5,6],[7,8,9]}. Output =7 4 1
//8 5 2
//9 6 3

#include <iostream>
#include <vector>
using namespace std;

void rotateImage(vector<vector<int> >& image) {
    int n = image.size();
    int m = image[0].size();
    vector<vector<int> > rotated(m, vector<int>(n)); 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rotated[j][n - 1 - i] = image[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3, m = 3;
    vector<vector<int> > image(3, vector<int>(3));
    
    image[0][0] = 1; image[0][1] = 2; image[0][2] = 3;
    image[1][0] = 4; image[1][1] = 5; image[1][2] = 6;
    image[2][0] = 7; image[2][1] = 8; image[2][2] = 9;

    rotateImage(image);

    return 0;
}

