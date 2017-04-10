/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:07 GMT-04:00
 */

#ifndef JH_LEFTHEELPOSZ_HH
#define JH_LEFTHEELPOSZ_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Jh_LeftHeelPosZ_raw(double *p_output1, const double *q);

    inline void Jh_LeftHeelPosZ(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Jh_LeftHeelPosZ_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JH_LEFTHEELPOSZ_HH
