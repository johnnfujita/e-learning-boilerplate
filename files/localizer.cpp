#include <iostream>
#include <vector>

using namespace ::std;

int main() {

int height = 4;
int width = 2;
char color = 'r';
vector< vector<char> > grid = {{'r', 'r'}, {'g', 'g'}, {'g', 'g'}, {'g', 'g'}};
vector <vector <float> > beliefs(4, vector<float> (2, 1)); 
float p_miss = 0.99;
vector<float> row;
float p_hit = 0.01;
vector <vector <float> > newGrid(4, vector<float> (2, 1)); 

for (int i = 0; i < height;i++) {
  	for(int j =0;j < width; j++) {
          cout << width << " \n";
      // am i a elegant gentleman or what? hehehe... hope cpp has ternary ops
      cout << "hit i: " << i << ",j:  " << j << "\n";
      int hit = color == grid[i][j] ? 1 : 0;
      cout << "hit i: " << i << ",j:  " << j << "\n";
      float masked = beliefs[i][j] * (hit * p_hit + (1-hit) * p_miss);
      row.push_back(masked);
      
    
    }
    newGrid.push_back(row);
    row={};
  }



}

