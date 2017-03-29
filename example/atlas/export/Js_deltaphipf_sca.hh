/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 18:00:00 GMT-04:00
 */

#ifndef JS_DELTAPHIPF_SCA_HH
#define JS_DELTAPHIPF_SCA_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Js_deltaphipf_sca_raw(double *p_output1, const double *var);

    inline void Js_deltaphipf_sca(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 1, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 5, 2);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Js_deltaphipf_sca_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JS_DELTAPHIPF_SCA_HH
