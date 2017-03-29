/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 18:00:01 GMT-04:00
 */

#ifndef F_IMPACTTOEVELOCITY_VEC_HH
#define F_IMPACTTOEVELOCITY_VEC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void f_impactToeVelocity_vec_raw(double *p_output1, const double *var);

    inline void f_impactToeVelocity_vec(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 42, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 3, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      f_impactToeVelocity_vec_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // F_IMPACTTOEVELOCITY_VEC_HH
