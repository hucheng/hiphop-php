/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_OverflowException_hafddf195__
#define __GENERATED_cls_OverflowException_hafddf195__

#include <cls/OverflowException.fw.h>
#include <cls/RuntimeException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 251 */
FORWARD_DECLARE_CLASS(OverflowException);
extern const ObjectStaticCallbacks cw_OverflowException;
class c_OverflowException : public c_RuntimeException {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(OverflowException, OverflowException)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_OverflowException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_OverflowException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_OverflowException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_OverflowException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_OverflowException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_OverflowException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_OverflowException 1

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
};
ObjectData *coo_OverflowException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_OverflowException_hafddf195__
