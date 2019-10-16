//
// Created by Kan-Hua Lee on 2019/10/16.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <numeric>
#include <strings.h>
#include <assert.h>

#include <dirent.h>

using namespace std;

vector<string> getEvalIndices(const string &result_dir) {

  vector<string> indices;
  DIR *dir;
  dirent *entity;
  dir = opendir(result_dir.c_str());
  if (dir) {
    while (entity = readdir(dir)) {
      string path(entity->d_name);
      int32_t len = path.size();
      if (len < 10) continue;
      string index = path.substr(0, len-4);
      indices.push_back(index);
    }
  }
  return indices;
}

int main() {
  string result_dir="/Users/kanhua/Downloads/frustum-pointnets/train/detection_results_v1/data";
  vector<string> indices=getEvalIndices(result_dir);
  for (auto iter=indices.begin();iter!=indices.end();iter++)
  {
    cout << *iter <<endl;
  }
  return 0;
}