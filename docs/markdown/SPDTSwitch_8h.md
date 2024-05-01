SPDTSwitch.h Pin.h src/SPDTSwitch.cpp include/SPDTSwitch.h Pin.h
include/SPDTSwitch.h src/SPDTSwitch.cpp SPDTSwitch SwitchState NEUTRAL
STATE\_A STATE\_B

\#ifndefSPDT\_SWITCH\_H \#defineSPDT\_SWITCH\_H \#include\"Pin.h\"
enumSwitchState{ NEUTRAL, STATE\_A, STATE\_B }; classSPDTSwitch{
private: InputPinpinA; InputPinpinB; public:
SPDTSwitch(intpinA,intpinB); voidbegin(); SwitchStateread(); }; \#endif
