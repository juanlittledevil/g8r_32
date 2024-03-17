class Mode {
public:
    virtual void handleSinglePress() = 0;
    virtual void handleDoublePress() = 0;
    virtual void handleLongPress() = 0;
    virtual void handlePressReleased() = 0;
    virtual void handleSelectionStates() = 0;
    virtual void setup() = 0;
    virtual void update() = 0;
};