#include <iostream>
#include <vector>

template <class T>

std::vector<std::vector<T>> create_matrix(T x, int m, int n){

	std::vector<T> row (n, x);
	std::vector<std::vector<T>> matrix (m, row);
/*
	for(int i=0; i<n; i++){
		row.push_back(x);
	}
	for(int i=0; i<m; i++){
		matrix.push_back(row);
	}
*/

	return matrix;
}

int main(){
	char number;
	int row;
	int column;
	std::cin >> number >> row >> column;
	std::vector<std::vector<char>> marr = create_matrix(number, row, column);
	std::cout << "column: " << marr[0].size() << std::endl;
	std::cout << "rows: " << marr.size() << std::endl;
	
	for(int i=0; i<marr.size(); i++){
		for(int j=0; j<marr[i].size(); j++){
			std::cout << marr[i][j] << " ";
		}
		std::cout << "\n";
	}

	
}
