#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

// Function to print a line based on column widths
void printLine(const std::vector<int>& colWidths) {
    std::cout << "+";
    for (int width : colWidths) {
        std::cout << std::string(width + 2, '-') << "+";
    }
    std::cout << std::endl;
}

// Function to print a row
void printRow(const std::vector<std::string>& row, const std::vector<int>& colWidths) {
    std::cout << "|";
    for (size_t i = 0; i < row.size(); ++i) {
        std::cout << " " << std::left << std::setw(colWidths[i]) << row[i] << " |";
    }
    std::cout << std::endl;
}

int main() {
    // Table Data
    std::vector<std::vector<std::string>> table = {
        {"ID", "Name", "Score"},
        {"1", "Alice", "95.5"},
        {"2", "Bob", "88.0"},
        {"10", "Charlotte", "99.9"}
    };

    // Find max width for each column
    std::vector<int> colWidths(table[0].size(), 0);
    for (const auto& row : table) {
        for (size_t i = 0; i < row.size(); ++i) {
            colWidths[i] = std::max(colWidths[i], static_cast<int>(row[i].length()));
        }
    }

    // Print Table
    printLine(colWidths);  // Top Border
    printRow(table[0], colWidths);  // Header
    printLine(colWidths);  // Header Bottom Border

    for (size_t i = 1; i < table.size(); ++i) {
        printRow(table[i], colWidths);
    }

    printLine(colWidths);  // Bottom Border

    return 0;
}
