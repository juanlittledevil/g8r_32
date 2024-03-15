#ifndef MODE_SELECTOR_H
#define MODE_SELECTOR_H

//Mode Selector Singleton.

class ModeSelector {
public:
    static ModeSelector& getInstance();

    int getMode() const;
    void setMode(int newMode);

private:
    int mode;

    ModeSelector(); // Constructor is private
    ModeSelector(ModeSelector const&); // Don't Implement
    void operator=(ModeSelector const&); // Don't implement
};

#endif // MODE_SELECTOR_H