/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:00 GMT-04:00
 */

#ifndef JS_POSCOM_HH
#define JS_POSCOM_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Js_posCoM_raw(double *p_output1, const double *var);

    inline void Js_posCoM(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 1, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 56, 2);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Js_posCoM_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JS_POSCOM_HH
