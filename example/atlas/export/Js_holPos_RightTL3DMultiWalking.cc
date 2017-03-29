/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:18 GMT-05:00
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
static void output1(double *p_output1,const double *var)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=3;
  p_output1[22]=3;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=4;
  p_output1[33]=4;
  p_output1[34]=4;
  p_output1[35]=4;
  p_output1[36]=4;
  p_output1[37]=4;
  p_output1[38]=4;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=5;
  p_output1[43]=5;
  p_output1[44]=5;
  p_output1[45]=5;
  p_output1[46]=5;
  p_output1[47]=5;
  p_output1[48]=5;
  p_output1[49]=5;
  p_output1[50]=5;
  p_output1[51]=5;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=6;
  p_output1[55]=6;
  p_output1[56]=6;
  p_output1[57]=6;
  p_output1[58]=6;
  p_output1[59]=6;
  p_output1[60]=6;
  p_output1[61]=7;
  p_output1[62]=7;
  p_output1[63]=8;
  p_output1[64]=8;
  p_output1[65]=9;
  p_output1[66]=9;
  p_output1[67]=1;
  p_output1[68]=5;
  p_output1[69]=6;
  p_output1[70]=16;
  p_output1[71]=17;
  p_output1[72]=18;
  p_output1[73]=19;
  p_output1[74]=20;
  p_output1[75]=21;
  p_output1[76]=22;
  p_output1[77]=2;
  p_output1[78]=4;
  p_output1[79]=5;
  p_output1[80]=6;
  p_output1[81]=16;
  p_output1[82]=17;
  p_output1[83]=18;
  p_output1[84]=19;
  p_output1[85]=20;
  p_output1[86]=21;
  p_output1[87]=23;
  p_output1[88]=3;
  p_output1[89]=4;
  p_output1[90]=5;
  p_output1[91]=6;
  p_output1[92]=16;
  p_output1[93]=17;
  p_output1[94]=18;
  p_output1[95]=19;
  p_output1[96]=20;
  p_output1[97]=21;
  p_output1[98]=24;
  p_output1[99]=4;
  p_output1[100]=5;
  p_output1[101]=6;
  p_output1[102]=16;
  p_output1[103]=17;
  p_output1[104]=18;
  p_output1[105]=19;
  p_output1[106]=20;
  p_output1[107]=21;
  p_output1[108]=25;
  p_output1[109]=4;
  p_output1[110]=5;
  p_output1[111]=6;
  p_output1[112]=16;
  p_output1[113]=17;
  p_output1[114]=18;
  p_output1[115]=19;
  p_output1[116]=20;
  p_output1[117]=21;
  p_output1[118]=26;
  p_output1[119]=4;
  p_output1[120]=5;
  p_output1[121]=6;
  p_output1[122]=17;
  p_output1[123]=18;
  p_output1[124]=19;
  p_output1[125]=20;
  p_output1[126]=21;
  p_output1[127]=27;
  p_output1[128]=7;
  p_output1[129]=28;
  p_output1[130]=8;
  p_output1[131]=29;
  p_output1[132]=9;
  p_output1[133]=30;
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

  double *var;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 67, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holPos_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_holPos_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
