/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:28:50 GMT-04:00
 */

#ifndef JH_LEFTLEG_HH
#define JH_LEFTLEG_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Jh_LeftLeg_raw(double *p_output1, const double *q);

    inline void Jh_LeftLeg(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 21, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Jh_LeftLeg_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JH_LEFTLEG_HH
