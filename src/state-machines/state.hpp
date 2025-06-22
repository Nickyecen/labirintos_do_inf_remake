#ifndef STATE_HEADER
#define STATE_HEADER

class State {
    public:
        virtual ~State() = default;
        
        virtual bool isFinal() const = 0;

        virtual void enter() = 0;
        virtual State* update() = 0;
        virtual void exit() = 0;

        virtual bool shouldStop() const = 0;
};

#endif