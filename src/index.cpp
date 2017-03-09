#include <node.h>

namespace gluino
{

void Hello(const v8::FunctionCallbackInfo<v8::Value> &args)
{
    auto *isolate = args.GetIsolate();
    args.GetReturnValue().Set(v8::String::NewFromUtf8(isolate, "world!"));
}

void init(v8::Local<v8::Object> exports)
{
    NODE_SET_METHOD(exports, "hello", Hello);
}

NODE_MODULE(GLUINO_MODULE_NAME, init)
}
