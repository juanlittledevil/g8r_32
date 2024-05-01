Gates Gates.h int int Gates::numGates numGates int \* int\*
Gates::gateCounters gateCounters Gate \* Gate\* Gates::gateArray
gateArray int int Gates::selectedGate selectedGate Gates::Gates
(std::vector\< int \> pins, int numGates) Gates std::vector\< int \>
pins int numGates Gates::\~Gates () \~Gates void void Gates::begin ()
begin void void Gates::setState (int gateIndex, bool state) setState int
gateIndex bool state bool bool Gates::getState (int gateIndex) getState
int gateIndex void void Gates::turnOnGate (int index) turnOnGate int
index void void Gates::turnOffGate (int index) turnOffGate int index
void void Gates::setALLGates (bool state) setALLGates bool state void
void Gates::update (unsigned long currentTime) update unsigned long
currentTime void void Gates::trigger (int index, unsigned long
currentTime) trigger int index unsigned long currentTime void void
Gates::setDivision (int index, int division) setDivision int index int
division int int Gates::getDivision (int index) getDivision int index
void void Gates::setSelectedGate (int gate) setSelectedGate int gate int
int Gates::getSelectedGate () getSelectedGate void void
Gates::setGateOnDuration (int index, int duration) setGateOnDuration int
index int duration OutputPin Pin Gates -gateArray Gate Gatesbegin
GatesgateArray GatesgateCounters GatesGates GatesgetDivision
GatesgetSelectedGate GatesgetState GatesnumGates GatesselectedGate
GatessetALLGates GatessetDivision GatessetGateOnDuration
GatessetSelectedGate GatessetState Gatestrigger GatesturnOffGate
GatesturnOnGate Gatesupdate Gates\~Gates
