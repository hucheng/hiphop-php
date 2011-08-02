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

#ifndef __GENERATED_cls_RuntimeException_h10646350__
#define __GENERATED_cls_RuntimeException_h10646350__

#include <cls/RuntimeException.fw.h>
#include <cls/Exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 235 */
FORWARD_DECLARE_CLASS(RuntimeException);
extern const ObjectStaticCallbacks cw_RuntimeException;
class c_RuntimeException : public c_Exception {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(RuntimeException, RuntimeException)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_RuntimeException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_RuntimeException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_RuntimeException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_RuntimeException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_RuntimeException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_RuntimeException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_RuntimeException 1

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
};
ObjectData *coo_RuntimeException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_RuntimeException_h10646350__
