/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:56 GMT-04:00
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
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=1;
  p_output1[21]=1;
  p_output1[22]=1;
  p_output1[23]=1;
  p_output1[24]=1;
  p_output1[25]=1;
  p_output1[26]=1;
  p_output1[27]=1;
  p_output1[28]=1;
  p_output1[29]=1;
  p_output1[30]=1;
  p_output1[31]=1;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
  p_output1[50]=2;
  p_output1[51]=2;
  p_output1[52]=2;
  p_output1[53]=2;
  p_output1[54]=2;
  p_output1[55]=2;
  p_output1[56]=2;
  p_output1[57]=2;
  p_output1[58]=2;
  p_output1[59]=2;
  p_output1[60]=2;
  p_output1[61]=2;
  p_output1[62]=2;
  p_output1[63]=2;
  p_output1[64]=2;
  p_output1[65]=3;
  p_output1[66]=3;
  p_output1[67]=3;
  p_output1[68]=3;
  p_output1[69]=3;
  p_output1[70]=3;
  p_output1[71]=3;
  p_output1[72]=3;
  p_output1[73]=3;
  p_output1[74]=3;
  p_output1[75]=3;
  p_output1[76]=3;
  p_output1[77]=3;
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=3;
  p_output1[88]=3;
  p_output1[89]=3;
  p_output1[90]=3;
  p_output1[91]=3;
  p_output1[92]=3;
  p_output1[93]=3;
  p_output1[94]=3;
  p_output1[95]=3;
  p_output1[96]=3;
  p_output1[97]=4;
  p_output1[98]=4;
  p_output1[99]=4;
  p_output1[100]=4;
  p_output1[101]=4;
  p_output1[102]=4;
  p_output1[103]=4;
  p_output1[104]=4;
  p_output1[105]=4;
  p_output1[106]=4;
  p_output1[107]=4;
  p_output1[108]=4;
  p_output1[109]=4;
  p_output1[110]=4;
  p_output1[111]=4;
  p_output1[112]=4;
  p_output1[113]=4;
  p_output1[114]=4;
  p_output1[115]=4;
  p_output1[116]=4;
  p_output1[117]=4;
  p_output1[118]=5;
  p_output1[119]=5;
  p_output1[120]=5;
  p_output1[121]=5;
  p_output1[122]=5;
  p_output1[123]=5;
  p_output1[124]=5;
  p_output1[125]=5;
  p_output1[126]=5;
  p_output1[127]=5;
  p_output1[128]=5;
  p_output1[129]=5;
  p_output1[130]=5;
  p_output1[131]=5;
  p_output1[132]=5;
  p_output1[133]=5;
  p_output1[134]=5;
  p_output1[135]=5;
  p_output1[136]=5;
  p_output1[137]=5;
  p_output1[138]=5;
  p_output1[139]=5;
  p_output1[140]=5;
  p_output1[141]=5;
  p_output1[142]=5;
  p_output1[143]=6;
  p_output1[144]=6;
  p_output1[145]=6;
  p_output1[146]=6;
  p_output1[147]=6;
  p_output1[148]=6;
  p_output1[149]=6;
  p_output1[150]=6;
  p_output1[151]=6;
  p_output1[152]=6;
  p_output1[153]=6;
  p_output1[154]=6;
  p_output1[155]=6;
  p_output1[156]=6;
  p_output1[157]=6;
  p_output1[158]=6;
  p_output1[159]=6;
  p_output1[160]=6;
  p_output1[161]=6;
  p_output1[162]=6;
  p_output1[163]=6;
  p_output1[164]=6;
  p_output1[165]=6;
  p_output1[166]=6;
  p_output1[167]=6;
  p_output1[168]=7;
  p_output1[169]=8;
  p_output1[170]=9;
  p_output1[171]=4;
  p_output1[172]=5;
  p_output1[173]=6;
  p_output1[174]=16;
  p_output1[175]=17;
  p_output1[176]=18;
  p_output1[177]=19;
  p_output1[178]=20;
  p_output1[179]=21;
  p_output1[180]=22;
  p_output1[181]=23;
  p_output1[182]=24;
  p_output1[183]=25;
  p_output1[184]=26;
  p_output1[185]=27;
  p_output1[186]=37;
  p_output1[187]=38;
  p_output1[188]=39;
  p_output1[189]=40;
  p_output1[190]=41;
  p_output1[191]=42;
  p_output1[192]=43;
  p_output1[193]=44;
  p_output1[194]=45;
  p_output1[195]=46;
  p_output1[196]=47;
  p_output1[197]=48;
  p_output1[198]=59;
  p_output1[199]=60;
  p_output1[200]=61;
  p_output1[201]=62;
  p_output1[202]=63;
  p_output1[203]=4;
  p_output1[204]=5;
  p_output1[205]=6;
  p_output1[206]=16;
  p_output1[207]=17;
  p_output1[208]=18;
  p_output1[209]=19;
  p_output1[210]=20;
  p_output1[211]=21;
  p_output1[212]=22;
  p_output1[213]=23;
  p_output1[214]=24;
  p_output1[215]=25;
  p_output1[216]=26;
  p_output1[217]=27;
  p_output1[218]=37;
  p_output1[219]=38;
  p_output1[220]=39;
  p_output1[221]=40;
  p_output1[222]=41;
  p_output1[223]=42;
  p_output1[224]=43;
  p_output1[225]=44;
  p_output1[226]=45;
  p_output1[227]=46;
  p_output1[228]=47;
  p_output1[229]=48;
  p_output1[230]=58;
  p_output1[231]=59;
  p_output1[232]=60;
  p_output1[233]=61;
  p_output1[234]=62;
  p_output1[235]=63;
  p_output1[236]=4;
  p_output1[237]=5;
  p_output1[238]=6;
  p_output1[239]=16;
  p_output1[240]=17;
  p_output1[241]=18;
  p_output1[242]=19;
  p_output1[243]=20;
  p_output1[244]=21;
  p_output1[245]=22;
  p_output1[246]=23;
  p_output1[247]=24;
  p_output1[248]=25;
  p_output1[249]=26;
  p_output1[250]=27;
  p_output1[251]=37;
  p_output1[252]=38;
  p_output1[253]=39;
  p_output1[254]=40;
  p_output1[255]=41;
  p_output1[256]=42;
  p_output1[257]=43;
  p_output1[258]=44;
  p_output1[259]=45;
  p_output1[260]=46;
  p_output1[261]=47;
  p_output1[262]=48;
  p_output1[263]=59;
  p_output1[264]=60;
  p_output1[265]=61;
  p_output1[266]=62;
  p_output1[267]=63;
  p_output1[268]=5;
  p_output1[269]=6;
  p_output1[270]=17;
  p_output1[271]=18;
  p_output1[272]=19;
  p_output1[273]=20;
  p_output1[274]=21;
  p_output1[275]=25;
  p_output1[276]=26;
  p_output1[277]=27;
  p_output1[278]=38;
  p_output1[279]=39;
  p_output1[280]=40;
  p_output1[281]=41;
  p_output1[282]=42;
  p_output1[283]=46;
  p_output1[284]=47;
  p_output1[285]=48;
  p_output1[286]=58;
  p_output1[287]=60;
  p_output1[288]=62;
  p_output1[289]=5;
  p_output1[290]=6;
  p_output1[291]=16;
  p_output1[292]=17;
  p_output1[293]=18;
  p_output1[294]=19;
  p_output1[295]=20;
  p_output1[296]=21;
  p_output1[297]=25;
  p_output1[298]=26;
  p_output1[299]=27;
  p_output1[300]=37;
  p_output1[301]=38;
  p_output1[302]=39;
  p_output1[303]=40;
  p_output1[304]=41;
  p_output1[305]=42;
  p_output1[306]=46;
  p_output1[307]=47;
  p_output1[308]=48;
  p_output1[309]=59;
  p_output1[310]=60;
  p_output1[311]=61;
  p_output1[312]=62;
  p_output1[313]=63;
  p_output1[314]=5;
  p_output1[315]=6;
  p_output1[316]=16;
  p_output1[317]=17;
  p_output1[318]=18;
  p_output1[319]=19;
  p_output1[320]=20;
  p_output1[321]=21;
  p_output1[322]=25;
  p_output1[323]=26;
  p_output1[324]=27;
  p_output1[325]=37;
  p_output1[326]=38;
  p_output1[327]=39;
  p_output1[328]=40;
  p_output1[329]=41;
  p_output1[330]=42;
  p_output1[331]=46;
  p_output1[332]=47;
  p_output1[333]=48;
  p_output1[334]=59;
  p_output1[335]=60;
  p_output1[336]=61;
  p_output1[337]=62;
  p_output1[338]=63;
  p_output1[339]=49;
  p_output1[340]=50;
  p_output1[341]=51;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 171, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holAcc_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_holAcc_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
