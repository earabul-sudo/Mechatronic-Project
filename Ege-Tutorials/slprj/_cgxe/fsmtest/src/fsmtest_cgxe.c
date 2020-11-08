/* Include files */

#include "fsmtest_cgxe.h"
#include "m_3p3lAHZKbasWvD6nFrjFR.h"

unsigned int cgxe_fsmtest_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 1632947182 &&
      ssGetChecksum1(S) == 3468142420 &&
      ssGetChecksum2(S) == 2805208717 &&
      ssGetChecksum3(S) == 3587791316) {
    method_dispatcher_3p3lAHZKbasWvD6nFrjFR(S, method, data);
    return 1;
  }

  return 0;
}
