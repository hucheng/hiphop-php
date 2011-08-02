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

#ifndef __GENERATED_cls_SplObjectStorage_h3ad1ae4b__
#define __GENERATED_cls_SplObjectStorage_h3ad1ae4b__

#include <cls/SplObjectStorage.fw.h>
#include <cls/Iterator.h>
#include <cls/Countable.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/splobjectstorage.php line 12 */
FORWARD_DECLARE_CLASS(SplObjectStorage);
extern const ObjectStaticCallbacks cw_SplObjectStorage;
class c_SplObjectStorage : public ExtObjectData {
  public:

  // Properties
  Variant m_storage;
  int64 m_index;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(SplObjectStorage, SplObjectStorage)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_SplObjectStorage 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SplObjectStorage 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_SplObjectStorage 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  Variant *o_realPropPrivate(CStrRef s, int flags) const;

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SplObjectStorage 1

  // DECLARE_COMMON_INVOKE
  static const MethodCallInfoTable s_call_info_table[];
  static const int s_call_info_index[];

  public:
  static const ClassPropTable os_prop_table;
  c_SplObjectStorage() : m_index(0LL) {}
  void init();
  public: void t_rewind();
  public: bool t_valid();
  public: int64 t_key();
  public: Variant t_current();
  public: void t_next();
  public: int t_count();
  public: bool t_contains(CVarRef v_obj);
  public: void t_attach(CVarRef v_obj);
  public: void t_detach(CVarRef v_obj);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(detach);
  DECLARE_METHOD_INVOKE_HELPERS(attach);
  DECLARE_METHOD_INVOKE_HELPERS(count);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(contains);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
ObjectData *coo_SplObjectStorage() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_SplObjectStorage_h3ad1ae4b__
