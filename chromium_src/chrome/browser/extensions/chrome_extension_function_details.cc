// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/extensions/chrome_extension_function_details.h"

#include "extensions/browser/extension_function.h"

ChromeExtensionFunctionDetails::ChromeExtensionFunctionDetails(
    UIThreadExtensionFunction* function)
    : function_(function) {
}

ChromeExtensionFunctionDetails::~ChromeExtensionFunctionDetails() {
}
