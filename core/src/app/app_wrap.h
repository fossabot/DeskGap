#ifndef app_app_warp_h
#define app_app_warp_h

#include <napi.h>
#include "./app.h"

namespace DeskGap {
    class AppWrap: public Napi::ObjectWrap<AppWrap> {
    private:
        std::unique_ptr<App> app_;

        void Run(const Napi::CallbackInfo& info);
        void Exit(const Napi::CallbackInfo& info);

    #ifdef __APPLE__
        void SetMenu(const Napi::CallbackInfo& info);
    #endif

        Napi::Value GetPath(const Napi::CallbackInfo& info);
    public:
        AppWrap(const Napi::CallbackInfo& info);
        static Napi::Function Constructor(Napi::Env env);
    };
}

#endif
