#include "Matrix.hpp"

namespace matrix {
    Matrix::Matrix(const unsigned int &rows, const unsigned int &cols) {
        m_rows = rows;
        m_cols = cols;

        m_data.resize(m_rows);
        for (auto& i : m_data) {
            i.resize(m_cols, 0.0);
        }
    }

    double &Matrix::get(const unsigned int& row, const unsigned int& col) {
        return m_data.at(row).at(col);
    }

    void Matrix::set(const unsigned int& row, const unsigned int& col, const double& value) {
        m_data.at(row)[col] = value;
    }

}