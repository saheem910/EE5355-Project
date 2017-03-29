/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:12 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var,const double *auxdata)
{
  double t1;
  double t2;
  double t3;
  t1 = -1. + auxdata[0];
  t2 = 1/t1;
  t3 = -0.5*t2*var[0];
  p_output1[0]=-0.5*t2*(var[22] + var[64]);
  p_output1[1]=-1.;
  p_output1[2]=t3;
  p_output1[3]=1.;
  p_output1[4]=t3;
  p_output1[5]=-0.5*t2*(var[23] + var[65]);
  p_output1[6]=-1.;
  p_output1[7]=t3;
  p_output1[8]=1.;
  p_output1[9]=t3;
  p_output1[10]=-0.5*t2*(var[24] + var[66]);
  p_output1[11]=-1.;
  p_output1[12]=t3;
  p_output1[13]=1.;
  p_output1[14]=t3;
  p_output1[15]=-0.5*t2*(var[25] + var[67]);
  p_output1[16]=-1.;
  p_output1[17]=t3;
  p_output1[18]=1.;
  p_output1[19]=t3;
  p_output1[20]=-0.5*t2*(var[26] + var[68]);
  p_output1[21]=-1.;
  p_output1[22]=t3;
  p_output1[23]=1.;
  p_output1[24]=t3;
  p_output1[25]=-0.5*t2*(var[27] + var[69]);
  p_output1[26]=-1.;
  p_output1[27]=t3;
  p_output1[28]=1.;
  p_output1[29]=t3;
  p_output1[30]=-0.5*t2*(var[28] + var[70]);
  p_output1[31]=-1.;
  p_output1[32]=t3;
  p_output1[33]=1.;
  p_output1[34]=t3;
  p_output1[35]=-0.5*t2*(var[29] + var[71]);
  p_output1[36]=-1.;
  p_output1[37]=t3;
  p_output1[38]=1.;
  p_output1[39]=t3;
  p_output1[40]=-0.5*t2*(var[30] + var[72]);
  p_output1[41]=-1.;
  p_output1[42]=t3;
  p_output1[43]=1.;
  p_output1[44]=t3;
  p_output1[45]=-0.5*t2*(var[31] + var[73]);
  p_output1[46]=-1.;
  p_output1[47]=t3;
  p_output1[48]=1.;
  p_output1[49]=t3;
  p_output1[50]=-0.5*t2*(var[32] + var[74]);
  p_output1[51]=-1.;
  p_output1[52]=t3;
  p_output1[53]=1.;
  p_output1[54]=t3;
  p_output1[55]=-0.5*t2*(var[33] + var[75]);
  p_output1[56]=-1.;
  p_output1[57]=t3;
  p_output1[58]=1.;
  p_output1[59]=t3;
  p_output1[60]=-0.5*t2*(var[34] + var[76]);
  p_output1[61]=-1.;
  p_output1[62]=t3;
  p_output1[63]=1.;
  p_output1[64]=t3;
  p_output1[65]=-0.5*t2*(var[35] + var[77]);
  p_output1[66]=-1.;
  p_output1[67]=t3;
  p_output1[68]=1.;
  p_output1[69]=t3;
  p_output1[70]=-0.5*t2*(var[36] + var[78]);
  p_output1[71]=-1.;
  p_output1[72]=t3;
  p_output1[73]=1.;
  p_output1[74]=t3;
  p_output1[75]=-0.5*t2*(var[37] + var[79]);
  p_output1[76]=-1.;
  p_output1[77]=t3;
  p_output1[78]=1.;
  p_output1[79]=t3;
  p_output1[80]=-0.5*t2*(var[38] + var[80]);
  p_output1[81]=-1.;
  p_output1[82]=t3;
  p_output1[83]=1.;
  p_output1[84]=t3;
  p_output1[85]=-0.5*t2*(var[39] + var[81]);
  p_output1[86]=-1.;
  p_output1[87]=t3;
  p_output1[88]=1.;
  p_output1[89]=t3;
  p_output1[90]=-0.5*t2*(var[40] + var[82]);
  p_output1[91]=-1.;
  p_output1[92]=t3;
  p_output1[93]=1.;
  p_output1[94]=t3;
  p_output1[95]=-0.5*t2*(var[41] + var[83]);
  p_output1[96]=-1.;
  p_output1[97]=t3;
  p_output1[98]=1.;
  p_output1[99]=t3;
  p_output1[100]=-0.5*t2*(var[42] + var[84]);
  p_output1[101]=-1.;
  p_output1[102]=t3;
  p_output1[103]=1.;
  p_output1[104]=t3;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var,*auxdata;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var,auxdata).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 85 && ncols == 1) && 
      !(mrows == 1 && ncols == 85))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "auxdata is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
  auxdata = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 105, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var,auxdata);


}

#else // MATLAB_MEX_FILE

#include "J_intPosTZ_vec.hh"

namespace Kinematics
{
namespace basic
{

void J_intPosTZ_vec_raw(double *p_output1, const double *var,const double *auxdata)
{
  // Call Subroutines
  output1(p_output1, var, auxdata);

}

}
}

#endif // MATLAB_MEX_FILE
