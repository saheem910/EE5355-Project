/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:59:01 GMT-04:00
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
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=5;
  p_output1[75]=5;
  p_output1[76]=5;
  p_output1[77]=5;
  p_output1[78]=5;
  p_output1[79]=5;
  p_output1[80]=5;
  p_output1[81]=5;
  p_output1[82]=5;
  p_output1[83]=5;
  p_output1[84]=5;
  p_output1[85]=5;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=6;
  p_output1[101]=6;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=6;
  p_output1[107]=6;
  p_output1[108]=6;
  p_output1[109]=6;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=7;
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=7;
  p_output1[125]=7;
  p_output1[126]=7;
  p_output1[127]=7;
  p_output1[128]=7;
  p_output1[129]=7;
  p_output1[130]=7;
  p_output1[131]=8;
  p_output1[132]=8;
  p_output1[133]=8;
  p_output1[134]=8;
  p_output1[135]=8;
  p_output1[136]=8;
  p_output1[137]=8;
  p_output1[138]=8;
  p_output1[139]=8;
  p_output1[140]=8;
  p_output1[141]=8;
  p_output1[142]=8;
  p_output1[143]=8;
  p_output1[144]=8;
  p_output1[145]=8;
  p_output1[146]=8;
  p_output1[147]=8;
  p_output1[148]=8;
  p_output1[149]=8;
  p_output1[150]=8;
  p_output1[151]=9;
  p_output1[152]=9;
  p_output1[153]=9;
  p_output1[154]=9;
  p_output1[155]=9;
  p_output1[156]=9;
  p_output1[157]=9;
  p_output1[158]=9;
  p_output1[159]=9;
  p_output1[160]=9;
  p_output1[161]=9;
  p_output1[162]=9;
  p_output1[163]=9;
  p_output1[164]=10;
  p_output1[165]=10;
  p_output1[166]=10;
  p_output1[167]=10;
  p_output1[168]=10;
  p_output1[169]=10;
  p_output1[170]=10;
  p_output1[171]=10;
  p_output1[172]=10;
  p_output1[173]=10;
  p_output1[174]=10;
  p_output1[175]=10;
  p_output1[176]=10;
  p_output1[177]=10;
  p_output1[178]=10;
  p_output1[179]=10;
  p_output1[180]=11;
  p_output1[181]=12;
  p_output1[182]=13;
  p_output1[183]=4;
  p_output1[184]=5;
  p_output1[185]=6;
  p_output1[186]=16;
  p_output1[187]=17;
  p_output1[188]=18;
  p_output1[189]=19;
  p_output1[190]=20;
  p_output1[191]=21;
  p_output1[192]=22;
  p_output1[193]=23;
  p_output1[194]=24;
  p_output1[195]=25;
  p_output1[196]=26;
  p_output1[197]=27;
  p_output1[198]=38;
  p_output1[199]=39;
  p_output1[200]=40;
  p_output1[201]=41;
  p_output1[202]=42;
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
  p_output1[224]=4;
  p_output1[225]=5;
  p_output1[226]=6;
  p_output1[227]=16;
  p_output1[228]=17;
  p_output1[229]=18;
  p_output1[230]=19;
  p_output1[231]=20;
  p_output1[232]=21;
  p_output1[233]=22;
  p_output1[234]=23;
  p_output1[235]=24;
  p_output1[236]=25;
  p_output1[237]=26;
  p_output1[238]=27;
  p_output1[239]=38;
  p_output1[240]=39;
  p_output1[241]=40;
  p_output1[242]=41;
  p_output1[243]=42;
  p_output1[244]=5;
  p_output1[245]=6;
  p_output1[246]=17;
  p_output1[247]=18;
  p_output1[248]=19;
  p_output1[249]=20;
  p_output1[250]=21;
  p_output1[251]=25;
  p_output1[252]=26;
  p_output1[253]=27;
  p_output1[254]=37;
  p_output1[255]=39;
  p_output1[256]=41;
  p_output1[257]=5;
  p_output1[258]=6;
  p_output1[259]=16;
  p_output1[260]=17;
  p_output1[261]=18;
  p_output1[262]=19;
  p_output1[263]=20;
  p_output1[264]=21;
  p_output1[265]=25;
  p_output1[266]=26;
  p_output1[267]=27;
  p_output1[268]=38;
  p_output1[269]=39;
  p_output1[270]=40;
  p_output1[271]=41;
  p_output1[272]=42;
  p_output1[273]=4;
  p_output1[274]=5;
  p_output1[275]=6;
  p_output1[276]=10;
  p_output1[277]=11;
  p_output1[278]=12;
  p_output1[279]=13;
  p_output1[280]=14;
  p_output1[281]=15;
  p_output1[282]=22;
  p_output1[283]=23;
  p_output1[284]=24;
  p_output1[285]=25;
  p_output1[286]=26;
  p_output1[287]=27;
  p_output1[288]=32;
  p_output1[289]=33;
  p_output1[290]=34;
  p_output1[291]=35;
  p_output1[292]=36;
  p_output1[293]=4;
  p_output1[294]=5;
  p_output1[295]=6;
  p_output1[296]=10;
  p_output1[297]=11;
  p_output1[298]=12;
  p_output1[299]=13;
  p_output1[300]=14;
  p_output1[301]=15;
  p_output1[302]=22;
  p_output1[303]=23;
  p_output1[304]=24;
  p_output1[305]=25;
  p_output1[306]=26;
  p_output1[307]=27;
  p_output1[308]=31;
  p_output1[309]=32;
  p_output1[310]=33;
  p_output1[311]=34;
  p_output1[312]=35;
  p_output1[313]=36;
  p_output1[314]=4;
  p_output1[315]=5;
  p_output1[316]=6;
  p_output1[317]=10;
  p_output1[318]=11;
  p_output1[319]=12;
  p_output1[320]=13;
  p_output1[321]=14;
  p_output1[322]=15;
  p_output1[323]=22;
  p_output1[324]=23;
  p_output1[325]=24;
  p_output1[326]=25;
  p_output1[327]=26;
  p_output1[328]=27;
  p_output1[329]=32;
  p_output1[330]=33;
  p_output1[331]=34;
  p_output1[332]=35;
  p_output1[333]=36;
  p_output1[334]=5;
  p_output1[335]=6;
  p_output1[336]=11;
  p_output1[337]=12;
  p_output1[338]=13;
  p_output1[339]=14;
  p_output1[340]=15;
  p_output1[341]=25;
  p_output1[342]=26;
  p_output1[343]=27;
  p_output1[344]=31;
  p_output1[345]=33;
  p_output1[346]=35;
  p_output1[347]=5;
  p_output1[348]=6;
  p_output1[349]=10;
  p_output1[350]=11;
  p_output1[351]=12;
  p_output1[352]=13;
  p_output1[353]=14;
  p_output1[354]=15;
  p_output1[355]=25;
  p_output1[356]=26;
  p_output1[357]=27;
  p_output1[358]=32;
  p_output1[359]=33;
  p_output1[360]=34;
  p_output1[361]=35;
  p_output1[362]=36;
  p_output1[363]=28;
  p_output1[364]=29;
  p_output1[365]=30;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 183, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holVel_RightHS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_holVel_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
