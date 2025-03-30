#include <iostream>
#include <string>

using namespace std;

int main() {
    // Display available terms at startup
    cout << "ELECTRONIC COMPONENTS DICTIONARY\n";
    cout << "Available components:\n";
    cout << "RESISTOR, CAPACITOR, INDUCTOR, TRANSFORMER, POTENTIOMETER\n";
    cout << "FUSE, THERMISTOR, VARISTOR, CRYSTAL OSCILLATOR, DIODE\n";
    cout << "ZENER DIODE, LIGHT EMITTING DIODE, PHOTODIODE\n";
    cout << "BIPOLAR JUNCTION TRANSISTOR, FIELD EFFECT TRANSISTOR, MOSFET\n";
    cout << "THYRISTOR, TRIAC, OPTOCOUPLER, OPERATIONAL AMPLIFIER\n";
    cout << "555 TIMER IC, MICROCONTROLLER, MICROPROCESSOR\n";
    cout << "ANALOG TO DIGITAL CONVERTER, DIGITAL TO ANALOG CONVERTER\n";
    cout << "RECTIFIER, VOLTAGE REGULATOR, RELAY, BUZZER\n";
    cout << "PRINTED CIRCUIT BOARD, ARDUINO\n\n";
    
    string component;
    
    cout << "Enter electronic component: ";
    getline(cin, component);
    
    // Convert input to uppercase for case-insensitive comparison
    for(char &c : component) c = toupper(c);
    
    if (component == "RESISTOR") {
        cout << "Limits the flow of electric current in a circuit.";
    } else if (component == "CAPACITOR") {
        cout << "Stores and releases electrical energy in a circuit.";
    } else if (component == "INDUCTOR") {
        cout << "Stores energy in a magnetic field when electrical current flows through it.";
    } else if (component == "TRANSFORMER") {
        cout << "Transfers electrical energy between circuits using electromagnetic induction.";
    } else if (component == "POTENTIOMETER") {
        cout << "A variable resistor used to adjust voltage or current.";
    } else if (component == "FUSE") {
        cout << "A safety device that breaks the circuit when excessive current flows.";
    } else if (component == "THERMISTOR") {
        cout << "A resistor whose resistance changes with temperature.";
    } else if (component == "VARISTOR") {
        cout << "(VDR) A resistor that changes resistance based on voltage, protecting against voltage spikes.";
    } else if (component == "CRYSTAL OSCILLATOR") {
        cout << "Generates precise clock signals for circuits.";
    } else if (component == "DIODE") {
        cout << "Allows current to flow in only one direction.";
    } else if (component == "ZENER DIODE") {
        cout << "Allows current to flow in reverse when a specific voltage is reached, used for voltage regulation.";
    } else if (component == "LIGHT EMITTING DIODE") {
        cout << "(LED) Emits light when current passes through it.";
    } else if (component == "PHOTODIODE") {
        cout << "Converts light into electrical current.";
    } else if (component == "BIPOLAR JUNCTION TRANSISTOR") {
        cout << "(BJT) A transistor that amplifies or switches electrical signals.";
    } else if (component == "FIELD EFFECT TRANSISTOR") {
        cout << "(FET) Controls current flow using an electric field.";
    } else if (component == "MOSFET") {
        cout << "A type of FET widely used in digital circuits and power electronics.";
    } else if (component == "THYRISTOR") {
        cout << "(SCR) A semiconductor switch that conducts once triggered.";
    } else if (component == "TRIAC") {
        cout << "A semiconductor switch that controls AC power.";
    } else if (component == "OPTOCOUPLER") {
        cout << "Uses light to transfer electrical signals between circuits, providing isolation.";
    } else if (component == "OPERATIONAL AMPLIFIER") {
        cout << "(OP-AMP) A high-gain voltage amplifier used in signal processing.";
    } else if (component == "555 TIMER IC") {
        cout << "A versatile IC used for timing, oscillation, and pulse generation.";
    } else if (component == "MICROCONTROLLER") {
        cout << "A small computer on a chip used in embedded systems.";
    } else if (component == "MICROPROCESSOR") {
        cout << "The central processing unit (CPU) of a computer.";
    } else if (component == "ANALOG TO DIGITAL CONVERTER") {
        cout << "(ADC) Converts analog signals to digital.";
    } else if (component == "DIGITAL TO ANALOG CONVERTER") {
        cout << "(DAC) Converts digital signals to analog.";
    } else if (component == "RECTIFIER") {
        cout << "(BRIDGE RECTIFIER) Converts AC to DC using diodes.";
    } else if (component == "VOLTAGE REGULATOR") {
        cout << "Maintains a stable output voltage despite input or load changes.";
    } else if (component == "RELAY") {
        cout << "An electromechanical switch controlled by an electrical signal.";
    } else if (component == "BUZZER") {
        cout << "Produces sound using electrical signals.";
    } else if (component == "PRINTED CIRCUIT BOARD") {
        cout << "(PCB) A board that holds and connects electronic components in a circuit.";
    } else if (component == "ARDUINO") {
        cout << "Company that makes microcontrollers";
    } else {
        cout << "Component not found in dictionary. Try one from the list above.";
    }

    return 0;
}