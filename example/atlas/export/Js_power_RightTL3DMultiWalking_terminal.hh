/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:52 GMT-04:00
 */

#ifndef JS_POWER_RIGHTTL3DMULTIWALKING_TERMINAL_HH
#define JS_POWER_RIGHTTL3DMULTIWALKING_TERMINAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Js_power_RightTL3DMultiWalking_terminal_raw(double *p_output1, const double *var);

    inline void Js_power_RightTL3DMultiWalking_terminal(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 1, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 25, 2);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Js_power_RightTL3DMultiWalking_terminal_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JS_POWER_RIGHTTL3DMULTIWALKING_TERMINAL_HH
