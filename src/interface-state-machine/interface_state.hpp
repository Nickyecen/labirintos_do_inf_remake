#ifndef INTERFACE_STATE_HEADER
#define INTERFACE_STATE_HEADER

class InterfaceState {
    public:
    private:

    public:
        virtual ~InterfaceState() = default;
        
        virtual bool shouldDraw() const = 0;
        virtual bool isFinal() const = 0;

        virtual void enter() = 0;
        virtual InterfaceState* update() = 0;
        virtual void draw() const = 0;
        virtual void exit() = 0;
    private:
};

#endif