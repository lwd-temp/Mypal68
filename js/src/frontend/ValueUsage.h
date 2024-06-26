/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef frontend_ValueUsage_h
#define frontend_ValueUsage_h

namespace js {
namespace frontend {

// Used to control whether JSOp::CallIgnoresRv is emitted for function calls.
enum class ValueUsage {
  // Assume the value of the current expression may be used. This is always
  // correct but prohibits JSOp::CallIgnoresRv.
  WantValue,

  // Pass this when emitting an expression if the expression's value is
  // definitely unused by later instructions. You must make sure the next
  // instruction is JSOp::Pop, a jump to a JSOp::Pop, or something similar.
  IgnoreValue
};

} /* namespace frontend */
} /* namespace js */

#endif /* frontend_ValueUsage_h */
