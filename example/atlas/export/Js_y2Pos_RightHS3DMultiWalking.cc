/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:59:47 GMT-04:00
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
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=4;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=4;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=5;
  p_output1[56]=5;
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=5;
  p_output1[63]=5;
  p_output1[64]=5;
  p_output1[65]=5;
  p_output1[66]=5;
  p_output1[67]=5;
  p_output1[68]=6;
  p_output1[69]=6;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=6;
  p_output1[75]=6;
  p_output1[76]=6;
  p_output1[77]=6;
  p_output1[78]=6;
  p_output1[79]=6;
  p_output1[80]=6;
  p_output1[81]=6;
  p_output1[82]=7;
  p_output1[83]=7;
  p_output1[84]=7;
  p_output1[85]=7;
  p_output1[86]=7;
  p_output1[87]=7;
  p_output1[88]=7;
  p_output1[89]=7;
  p_output1[90]=7;
  p_output1[91]=7;
  p_output1[92]=7;
  p_output1[93]=7;
  p_output1[94]=7;
  p_output1[95]=7;
  p_output1[96]=5;
  p_output1[97]=17;
  p_output1[98]=19;
  p_output1[99]=21;
  p_output1[100]=22;
  p_output1[101]=23;
  p_output1[102]=24;
  p_output1[103]=25;
  p_output1[104]=26;
  p_output1[105]=27;
  p_output1[106]=28;
  p_output1[107]=29;
  p_output1[108]=30;
  p_output1[109]=5;
  p_output1[110]=17;
  p_output1[111]=19;
  p_output1[112]=21;
  p_output1[113]=22;
  p_output1[114]=23;
  p_output1[115]=31;
  p_output1[116]=32;
  p_output1[117]=33;
  p_output1[118]=34;
  p_output1[119]=35;
  p_output1[120]=36;
  p_output1[121]=37;
  p_output1[122]=5;
  p_output1[123]=17;
  p_output1[124]=19;
  p_output1[125]=21;
  p_output1[126]=22;
  p_output1[127]=23;
  p_output1[128]=38;
  p_output1[129]=39;
  p_output1[130]=40;
  p_output1[131]=41;
  p_output1[132]=42;
  p_output1[133]=43;
  p_output1[134]=44;
  p_output1[135]=5;
  p_output1[136]=16;
  p_output1[137]=17;
  p_output1[138]=19;
  p_output1[139]=21;
  p_output1[140]=22;
  p_output1[141]=23;
  p_output1[142]=45;
  p_output1[143]=46;
  p_output1[144]=47;
  p_output1[145]=48;
  p_output1[146]=49;
  p_output1[147]=50;
  p_output1[148]=51;
  p_output1[149]=5;
  p_output1[150]=16;
  p_output1[151]=17;
  p_output1[152]=18;
  p_output1[153]=19;
  p_output1[154]=21;
  p_output1[155]=22;
  p_output1[156]=23;
  p_output1[157]=52;
  p_output1[158]=53;
  p_output1[159]=54;
  p_output1[160]=55;
  p_output1[161]=56;
  p_output1[162]=57;
  p_output1[163]=58;
  p_output1[164]=5;
  p_output1[165]=17;
  p_output1[166]=19;
  p_output1[167]=20;
  p_output1[168]=21;
  p_output1[169]=22;
  p_output1[170]=23;
  p_output1[171]=59;
  p_output1[172]=60;
  p_output1[173]=61;
  p_output1[174]=62;
  p_output1[175]=63;
  p_output1[176]=64;
  p_output1[177]=65;
  p_output1[178]=5;
  p_output1[179]=11;
  p_output1[180]=17;
  p_output1[181]=19;
  p_output1[182]=21;
  p_output1[183]=22;
  p_output1[184]=23;
  p_output1[185]=66;
  p_output1[186]=67;
  p_output1[187]=68;
  p_output1[188]=69;
  p_output1[189]=70;
  p_output1[190]=71;
  p_output1[191]=72;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_y2Pos_RightHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_y2Pos_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
