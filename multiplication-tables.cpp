#include <iostream>

using namespace std;

// Function to generate and print multiplication tables
void printMultiplicationTables(int startNum, int endNum, int tablesPerRow) {

    // Loop through start number to end number, incrementing by tablesPerRow each iteration
    for (int num = startNum; num <= endNum; num += tablesPerRow) {

        // Loop through 1 to 10 for each multiple
        for (int multiple = 1; multiple <= 10; multiple++) {

            // Loop through the tablesPerRow and print each table
            for (int tableNum = 0; tableNum < tablesPerRow; tableNum++) {
                // Break if num + tableNum is greater than endNum
                if (num + tableNum > endNum) {
                    break;
                }
                cout << num + tableNum << " x " << multiple << " = " << (num + tableNum) * multiple << "\t";
            }
            cout << endl;

        }
        cout << endl;

    }

}

int main() {
    // Declare variables to hold start, end, and tablesPerRow
    int startNum, endNum, tablesPerRow;
    char choice;

    cout << " ~> This program will print a multiplication table from a given start number to a given end number." << endl << endl;

    // Loop until user chooses to exit
    while (true) {
        
        cout << "Enter the number to start the table at: ";
        cin >> startNum;

        cout << "Enter the number to end the table at: ";
        cin >> endNum;

        // Input validation for startNum and endNum
        while (startNum > endNum) {
            cout << "Error: The end number must be greater than the start number." << endl;

            cout << "Enter the number to start the table at: ";
            cin >> startNum;

            cout << "Enter the number to end the table at: ";
            cin >> endNum;
        }

        cout << "* Reduce maximum number of tables per row if the output is not displayed correctly." << endl;
        cout << "Enter maximum number of tables per row: ";
        cin >> tablesPerRow;

        // Input validation for tablesPerRow
        while (tablesPerRow < 1) {
            cout << "Error: The maximum number of tables per row must be greater than 0." << endl;

            cout << "Enter maximum number of tables per row: ";
            cin >> tablesPerRow;
        }

        // For formatting
        cout << endl;

        // Call function to generate and print multiplication tables
        printMultiplicationTables(startNum, endNum, tablesPerRow);

        // For formatting
        cout << endl;

        // Prompt user to either exit or continue
        cout << "Enter 'e' or 'E' to exit, or any other character to continue: ";
        cin >> choice;

        if (choice == 'e' || choice == 'E') {
            break;
        }
    }

    return 0;
}
