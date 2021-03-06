// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     weex/weex_core/Source/android/jniprebuild/jni_generator.py
// For
//     com/taobao/weex/bridge/RequestHandler

#ifndef com_taobao_weex_bridge_RequestHandler_JNI
#define com_taobao_weex_bridge_RequestHandler_JNI

#include <jni.h>

//#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kRequestHandlerClassPath[] = "com/taobao/weex/bridge/RequestHandler";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_RequestHandler_clazz = NULL;
#define RequestHandler_clazz(env) g_RequestHandler_clazz

}  // namespace

static void InvokeOnSuccess(JNIEnv* env, jobject jcaller,
    jlong callback,
    jstring result);

static void InvokeOnFailed(JNIEnv* env, jobject jcaller,
    jlong callback);

// Step 2: method stubs.

static intptr_t g_RequestHandler_create = 0;
static base::android::ScopedLocalJavaRef<jobject>
    Java_RequestHandler_create(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, RequestHandler_clazz(env),
  //    RequestHandler_clazz(env), NULL);
  jmethodID method_id =
      base::android::GetMethod(
      env, RequestHandler_clazz(env),
      base::android::STATIC_METHOD,
      "create",

"("
")"
"Lcom/taobao/weex/bridge/RequestHandler;",
      &g_RequestHandler_create);

  jobject ret =
      env->CallStaticObjectMethod(RequestHandler_clazz(env),
          method_id);
  base::android::CheckException(env);
  return base::android::ScopedLocalJavaRef<jobject>(env, ret);
}

static intptr_t g_RequestHandler_send = 0;
static void Java_RequestHandler_send(JNIEnv* env, jobject obj, jstring
    instanceId,
    jstring url,
    jlong nativeCallback) {
  /* Must call RegisterNativesImpl()  */
  //CHECK_CLAZZ(env, obj,
  //    RequestHandler_clazz(env));
  jmethodID method_id =
      base::android::GetMethod(
      env, RequestHandler_clazz(env),
      base::android::INSTANCE_METHOD,
      "send",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"J"
")"
"V",
      &g_RequestHandler_send);

     env->CallVoidMethod(obj,
          method_id, instanceId, url, nativeCallback);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsRequestHandler[] = {
    { "nativeInvokeOnSuccess",
"("
"J"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(InvokeOnSuccess) },
    { "nativeInvokeOnFailed",
"("
"J"
")"
"V", reinterpret_cast<void*>(InvokeOnFailed) },
};

static bool RegisterNativesImpl(JNIEnv* env) {

  g_RequestHandler_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kRequestHandlerClassPath).Get()));

  const int kMethodsRequestHandlerSize =
      sizeof(kMethodsRequestHandler)/sizeof(kMethodsRequestHandler[0]);

  if (env->RegisterNatives(RequestHandler_clazz(env),
                           kMethodsRequestHandler,
                           kMethodsRequestHandlerSize) < 0) {
    //jni_generator::HandleRegistrationError(
    //    env, RequestHandler_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // com_taobao_weex_bridge_RequestHandler_JNI
