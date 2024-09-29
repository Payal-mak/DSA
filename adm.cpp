#include <iostream>
#include <vector>
using namespace std;

// Function for Adaptive Delta Demodulation
void adaptiveDeltaDemodulation(vector<int>& bitStream, double stepSize, double initVoltage, double minStepSize, double maxStepSize) {
    double currentVoltage = initVoltage;
    double currentStepSize = stepSize;

    cout << "Initial Voltage: " << currentVoltage << "V" << endl;

    // Iterate through each bit in the bitstream
    for (int i = 0; i < bitStream.size(); ++i) {
        if (bitStream[i] == 1) {
            // Increase voltage if bit is 1
            currentVoltage += currentStepSize;
        } else {
            // Decrease voltage if bit is 0
            currentVoltage -= currentStepSize;
        }

        // Clamp voltage to range [0V, 5V]
        if (currentVoltage > 5.0) currentVoltage = 5.0;
        if (currentVoltage < 0.0) currentVoltage = 0.0;

        cout << "Bit: " << bitStream[i] << " -> Voltage: " << currentVoltage << "V" << endl;

        // Adaptive step size: Increase if consecutive bits are same, decrease if different
        if (i > 0 && bitStream[i] == bitStream[i-1]) {
            currentStepSize = min(currentStepSize * 2, maxStepSize); // Increase step size but limit to max
        } else {
            currentStepSize = max(currentStepSize / 2, minStepSize); // Decrease step size but limit to min
        }

        cout << "Current Step Size: " << currentStepSize << "V" << endl;
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
    double initialVoltage = 2.5;       // Initial voltage
    double initialStepSize = 0.5;      // Initial step size (can be adjusted to 1.0 if needed)
    double minStepSize = 0.5;          // Minimum step size
    double maxStepSize = 1.0;          // Maximum step size

    // Perform adaptive delta demodulation
    adaptiveDeltaDemodulation(bitStream, initialStepSize, initialVoltage, minStepSize, maxStepSize);

    return 0;
}
