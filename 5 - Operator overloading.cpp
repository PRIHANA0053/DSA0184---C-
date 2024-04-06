#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int columns;

public:
    Matrix(const std::vector<std::vector<int>>& matrixData) : data(matrixData) {
        rows = matrixData.size();
        columns = matrixData[0].size();
    }

    Matrix operator*(const Matrix& other) {
        if (columns != other.rows) {
            throw std::invalid_argument("Matrix dimensions are not compatible for multiplication.");
        }

        std::vector<std::vector<int>> result(rows, std::vector<int>(other.columns, 0));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.columns; j++) {
                for (int k = 0; k < columns; k++) {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return Matrix(result);
    }

    void print() {
        for (const auto& row : data) {
            for (int element : row) {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<std::vector<int>> matrixData1 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> matrixData2 = {{5, 6}, {7, 8}};

    Matrix matrix1(matrixData1);
    Matrix matrix2(matrixData2);

    Matrix result = matrix1 * matrix2;

    std::cout << "Matrix 1:" << std::endl;
    matrix1.print();

    std::cout << "Matrix 2:" << std::endl;
    matrix2.print();

    std::cout << "Result:" << std::endl;
    result.print();

    return 0;
}
