/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:20 GMT-04:00
 */

#ifndef JYA1_RIGHTHS3DMULTIWALKING_HH
#define JYA1_RIGHTHS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Jya1_RightHS3DMultiWalking_raw(double *p_output1, const double *q);

    inline void Jya1_RightHS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Jya1_RightHS3DMultiWalking_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JYA1_RIGHTHS3DMULTIWALKING_HH
