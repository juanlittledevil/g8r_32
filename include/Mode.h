#ifndef MODE_H
#define MODE_H

class Mode {
public:
    virtual void handleSinglePress() = 0;
    virtual void handleDoublePress() = 0;
    virtual void handleLongPress() = 0;
    virtual void handlePressReleased() = 0;
    virtual void handleSelectionStates() = 0;
    virtual void handleResetSinglePress() = 0;
    virtual void handleResetDoublePress() = 0;
    virtual void handleResetLongPress() = 0;
    virtual void handleResetPressReleased() = 0;
    virtual void setup() = 0;
    virtual void teardown() = 0;
    virtual void update() = 0;
};

#endif // MODE_H