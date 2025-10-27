#include <iostream>
#include <vector>
using namespace std;

// Function for Delta Demodulation
void deltaDemodulation(vector<int>& bitStream, double stepSize, double initVoltage) {
    double currentVoltage = initVoltage;

    cout << "Initial Voltage: " << currentVoltage << "V" << endl;

    // Iterate through each bit in the bitstream
    for (int i = 0; i < bitStream.size(); ++i) {
        if (bitStream[i] == 1) {
            // Increase voltage if bit is 1
            currentVoltage += stepSize;
        } else {
            // Decrease voltage if bit is 0
            currentVoltage -= stepSize;
        }

        // Clamp voltage to range [0V, 5V]
        if (currentVoltage > 5.0) currentVoltage = 5.0;
        if (currentVoltage < 0.0) currentVoltage = 0.0;

        // Output the voltage after each bit
        cout << "Bit: " << bitStream[i] << " -> Voltage: " << currentVoltage << "V" << endl;
    }
}

int main() {
    int n;  // Number of bits in the input stream
    cout << "Enter number of bits in the input stream: ";
    cin >> n;

    vector<int> bitStream(n);
    cout << "Enter the bitstream (0s and 1s): ";
    for (int i = 0; i < n; ++i) {
        cin >> bitStream[i];
    }

    // Parameters for the demodulator
    double initialVoltage = 2.5;  // Initial voltage
    double stepSize = 0.5;        // Fixed step size (you can set this to 1.0 if needed)

    // Perform delta demodulation
    deltaDemodulation(bitStream, stepSize, initialVoltage);

    return 0;
}
