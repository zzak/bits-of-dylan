#include "run-time.h"

void _Init_multiply_ () __attribute__((constructor));
void _Init_multiply_ () {
  extern void _Init_Run_Time();
  extern void _Init_io_();
  extern void _Init_dylan_();
  extern void _Init_multiply__X_library_for_system();
  extern void _Init_multiply__X_multiply_for_system();
  extern void _Init_multiply__X_library_for_user();
  extern void _Init_multiply__X_multiply_for_user();
  static int initp = 0;
  if (!initp) {
    initp = 1;
    _Init_Run_Time();
    _Init_io_();
    _Init_dylan_();
    _Init_multiply__X_library_for_system();
    _Init_multiply__X_multiply_for_system();
    _Init_multiply__X_library_for_user();
    _Init_multiply__X_multiply_for_user();
  }
}
