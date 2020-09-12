#include <Windows.h>

class Window
{
    public:
        Window();
        //initialize the window
        bool init();
        //release the window
        bool release();

        bool broadcast();

        bool isRunning();

        virtual void onCreate();
        virtual void onUpdate();
        virtual void onDestroy();

        ~Window();

    protected:
        HWND m_hwnd;
        bool m_is_running;
};