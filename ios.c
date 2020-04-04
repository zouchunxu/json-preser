
/************************************************************
 * The following C source code was automatically generated
 * by the TRANSLATE feature in Salford Predictive Modeler(R).
 * Modeling version: 8.2.0.713, Translation version: 8.2.0.713
 ************************************************************/

#include <string.h>  /* for strcmp() */
#include <math.h>    /* for exp()    */

/************************************************************
 *     **** APPLICATION-DEPENDENT MISSING VALUES ****
 * The two constants must be set **by you** to whatever
 * value(s) you use in your data management or programming
 * workflow to represent missing data.
 ************************************************************/

const double DBL_MISSING_VALUE = -10e36/* value needed here! */ ;
const int    INT_MISSING_VALUE = -999999/* value needed here! */ ;

/************************************************************
 * Translations of TreeNet models allow an initialization
 * value (which can be a variable or a constant) to be
 * specified, which value is added to the raw scores from
 * regression and binary logistic models.  This should be
 * if the model was built with an initialization variable
 * (normally the scores from a previous model).
 * If such is required, then change the value of INIT
 * below.
 ************************************************************/

#define INIT 0.0

/************
 * PREDICTORS
 ************/


/***************************************************************
 * Here come the treenets in the grove.  A shell for calling them
 * appears at the end of this source file.
 ***************************************************************/

double TreeNet_155(double * const pProb0, double * const pProb1, \
                   double BIRTHDAY, double ZMXY_SCORE, double WHITENAME_SCORE, double APP_QUANTITY, \
                   int SOCIAL_IDENTITY, \
                   char *RACE, char *BANK_NAME, char *GENDER, char *SALARY, char *COMPANY_TYPE, char *WORK_TIME, char *EDUCATION_LEVEL, char *AREA)
{
  /* TreeNet version: 8.2.0.713 */
  /* TreeNet: TreeNet_155 */
  /* Timestamp: 20170822200055 */
  /* Grove: C:\Users\Administrator\AppData\Local\Temp\sbo_01440.grv */
  /* Target: IS_OVERDUE30 */
  /* N trees: 164 */
  /* N target classes: 2 */

  double target, net_response = 0.0;
  int node, done;

  /***************************/
  /* Class-specific treenets */
  /***************************/

  double expsum = 0.0;
  double prob0, score0; /* IS_OVERDUE30 = 0 */
  double prob1, score1; /* IS_OVERDUE30 = 1 */

  /*******************************************************/
  /* The following predictors had no missing data in     */
  /* the learn sample, so the TreeNet model is unable to */
  /* accommodate missing data for them during scoring.   */
  /* They must be imputed.  These particular values are  */
  /* the learn sample medians and/or modes. These are    */
  /* provided as a convenience, you may wish to replace  */
  /* these expressions with your own.                    */
  /*******************************************************/

  if (!RACE || !strlen(RACE)) RACE = "1";
  if (!BANK_NAME || !strlen(BANK_NAME)) BANK_NAME = "CCB";
  if (!GENDER || !strlen(GENDER)) GENDER = "male";
  if (SOCIAL_IDENTITY == DBL_MISSING_VALUE) SOCIAL_IDENTITY = 1;
  if (!SALARY || !strlen(SALARY)) SALARY = "3001-5000";
  if (!COMPANY_TYPE || !strlen(COMPANY_TYPE)) COMPANY_TYPE = "NULL";
  if (!WORK_TIME || !strlen(WORK_TIME)) WORK_TIME = "NULL";
  if (!EDUCATION_LEVEL || !strlen(EDUCATION_LEVEL)) EDUCATION_LEVEL = "college";
  if (!AREA || !strlen(AREA)) AREA = "East China";
  if (BIRTHDAY == DBL_MISSING_VALUE) BIRTHDAY = 1.99103e+007;
  if (ZMXY_SCORE == DBL_MISSING_VALUE) ZMXY_SCORE = 662;

  /* Tree 1 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.89960079;
      node = 3;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 527.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = -0.94853155;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -1.0374965;
      node = 2;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 5;
      else node = -6;
      break;

    case -6:
      target = -1.0566483;
      node = 6;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -1.0498881;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -1.0282625;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 2 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 556.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "5001-8000")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.067490151;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.09888196;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 633.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = -0.0050663259;
      node = 6;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000")
              )) node = 5;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.00037234685;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940814) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.017149733;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.036277099;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 3 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.092079259;
      node = 3;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = 0.0017535299;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.070046243;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.0044211744;
      node = 4;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000")
         )) node = -5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.00050285548;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.018243475;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 4 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 560) node = 2;
      else node = 4;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = 0.11013579;
      node = 3;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020637126;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.070979472;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.010459858;
      node = 6;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 701.5) node = -4;
      else node = -5;
      break;

    case -4:
      target = -0.0013040019;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.012932138;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 5 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.081375274;
      node = 3;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 534) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.069385683;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.017009875;
      node = 2;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 636.5) node = -4;
      else node = 5;
      break;

    case -4:
      target = 0.010377011;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 757.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.00493394;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.044073269;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 6 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = 0.023897078;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.050783575;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 632.5) node = -3;
      else node = 4;
      break;

    case -3:
      target = 0.011958658;
      node = 3;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = -0.013277989;
      node = 4;
      done = 1;
      break;

    case 5:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -5;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = -0.0031913141;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.016447919;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 7 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 584.5) node = 2;
      else node = 5;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.065573001;
      node = 4;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.0073785199;
      node = 1;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
         )) node = -2;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "1")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = 0.0039932355;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.05971539;
      node = 3;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 640.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.0076307082;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0048903436;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 8 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 570.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.033442943;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.056550093;
      node = 2;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -3:
      target = -0.011334396;
      node = 3;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 704.5) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.010412528;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910118) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0090373142;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.00039262201;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 9 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 584.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.028105442;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.055773525;
      node = 2;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 5;
      else node = 4; /* default direction */
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -3;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0040042718;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.017845433;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 633.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.028345872;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0017686595;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 10 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "5001-8000")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.026872253;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.056403351;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 632.5) node = -3;
      else node = 4;
      break;

    case -3:
      target = 0.0094413525;
      node = 3;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.010592035;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910118) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.0059006966;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0047089685;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 11 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.030431274;
      node = 1;
      done = 1;
      break;

    case 2:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = 3;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = -6;
      else node = 3; /* default direction */
      break;

    case -6:
      target = 0.016256339;
      node = 6;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 4;
      else node = -5;
      break;

    case -5:
      target = -0.0024786318;
      node = 5;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19950376) node = 5;
      else node = -4;
      break;

    case -4:
      target = 0.042999668;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19860256) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.054548597;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0021610252;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 12 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 578.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "NULL")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = 0.049694516;
      node = 3;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.0091567872;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.035343917;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.0059351467;
      node = 6;
      done = 1;
      break;

    case 5:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -4;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.0047103361;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.010740898;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 13 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "5001-8000")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = 0.048341039;
      node = 3;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0064987965;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.032433945;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = -0.0061363093;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.019988429;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0027574318;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 14 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.00070835828;
      node = 6;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 503) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.039465054;
      node = 1;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = 5;
      else node = 4; /* default direction */
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19935666) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.0059503399;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.028469239;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19935676) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.051458146;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0039968569;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 15 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
          !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "8001-12000")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.017452592;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.040637803;
      node = 2;
      done = 1;
      break;

    case 3:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 4;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 684.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.0017468977;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0083960813;
      node = 4;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = -0.011666986;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.021813403;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 16 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 586.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 541) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.033832628;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.021468442;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 4;
      else node = 5;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0088418248;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.011337865;
      node = 4;
      done = 1;
      break;

    case 5:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -5;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = -0.0040808485;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.015320684;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 17 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = 0.047434996;
      node = 3;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = 0.011298367;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.032897598;
      node = 2;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.00075776301;
      node = 6;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 616.5) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0063676612;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.035166703;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 18 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0025969507;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960410) node = 3;
      else node = -5;
      break;

    case -5:
      target = 0.054207121;
      node = 5;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 557) node = 4;
      else node = 5;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.010993717;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.041911107;
      node = 2;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 601.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = -0.0060493986;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.013088608;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 19 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890522) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.0094587238;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19920620) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.04125955;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.014846898;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19820462) node = -4;
      else node = 5;
      break;

    case -4:
      target = -0.013426485;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19820824) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.047401396;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.00043338638;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 20 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "5001-8000")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = 0.0052790895;
      node = 3;
      done = 1;
      break;

    case 3:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0068702104;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.014262872;
      node = 2;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 587) node = 5;
      else node = -6;
      break;

    case -6:
      target = 0.0075045327;
      node = 6;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "3001-5000")
         )) node = -4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0011873373;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.038444336;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 21 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 550.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = 0.010806404;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.043190774;
      node = 2;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = 4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0047366592;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960112) node = -4;
      else node = 5;
      break;

    case -4:
      target = 0.0042348319;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960860) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.085569473;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0076613766;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 22 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 2;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 704.5) node = 3;
      else node = 4;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.00021848967;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0086551646;
      node = 2;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "NULL")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.017800032;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.18514948;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19911056) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.042014685;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.011469251;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 23 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 534) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.033426288;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.01762107;
      node = 2;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 5;
      else node = 4; /* default direction */
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910622) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.00051528185;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0067185965;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19840368) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.015367883;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.010729652;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 24 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 631.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0031434688;
      node = 6;
      done = 1;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.013384633;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19870914) node = -2;
      else node = 4;
      break;

    case -2:
      target = -0.0061033551;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890760) node = 5;
      else node = -5;
      break;

    case -5:
      target = 0.010615408;
      node = 5;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "5001-8000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = 0.011014998;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.061551047;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 25 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 557) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.012049501;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.029781317;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19840622) node = -3;
      else node = 4;
      break;

    case -3:
      target = -0.012731021;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19941022) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.004798532;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940570) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0029486835;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.026366008;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 26 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 584.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -6.6339574e-005;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19930718) node = 3;
      else node = 5;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19905872) node = 4;
      else node = -3;
      break;

    case -3:
      target = -0.01415175;
      node = 3;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = 0.008653299;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.038892262;
      node = 2;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.00082877682;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.045687388;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 27 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558) node = 2;
      else node = 3;
      break;

    case 2:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = 0.01324615;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.055333987;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19955664) node = -3;
      else node = 4;
      break;

    case -3:
      target = -7.8089374e-005;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960406) node = -4;
      else node = 5;
      break;

    case -4:
      target = 0.061548366;
      node = 4;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
          !strcmp(SALARY, "NULL")
         )) node = -5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "8001-12000")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.0011362397;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.076785132;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 28 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "4-7 Year") ||
          !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
          !strcmp(WORK_TIME, "7+ Year")
         )) node = 3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 4;
      else node = 3; /* default direction */
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
          !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "4-7 Year")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.0073007643;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0045607062;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "NULL")
         )) node = -3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.00010867061;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -3.0843617e-005;
      node = 4;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "7+ Year")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.01316843;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.024733932;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 29 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = -0.001337995;
      node = 3;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CMB")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.019956142;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0085002336;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CEB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.0073542024;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.024889377;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.062337115;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 30 of 164 */
  /* N terminal nodes = 4, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -4;
      break;

    case -4:
      target = -0.0086443824;
      node = 4;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.019308155;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 97) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.00031081009;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0043135933;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 31 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 587) node = 2;
      else node = 4;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.004315491;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890764) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.0052718583;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.026315866;
      node = 3;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.0021812323;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 612) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.042198044;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0060182537;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 32 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.027638227;
      node = 3;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.025705755;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.017154946;
      node = 2;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 602.5) node = -4;
      else node = 5;
      break;

    case -4:
      target = -0.013713279;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 617.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.011299589;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0020860314;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 33 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 586.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19905656) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.027451233;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0042202127;
      node = 2;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -3:
      target = -0.0054388073;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890920) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.00082705663;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19881004) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0059156909;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.03673969;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 34 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 636.5) node = 2;
      else node = 5;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = -4;
      else node = 3; /* default direction */
      break;

    case -4:
      target = 0.016700693;
      node = 4;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19950812) node = -1;
      else node = 4;
      break;

    case -1:
      target = 0.00064488983;
      node = 1;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 613.5) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.043892558;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0073714217;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19861210) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.01187153;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0014679469;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 35 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.020542967;
      node = 1;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0026235068;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900964) node = 4;
      else node = 5;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19880428) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.0025060658;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.062005235;
      node = 4;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = -0.013580625;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.016594754;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 36 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "6") ||
          !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "5")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.020105843;
      node = 1;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0016318988;
      node = 4;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1")
         )) node = -2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.005014844;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.00062027808;
      node = 3;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "4")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.016189752;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.019741634;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 37 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 594.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.0021701807;
      node = 1;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = 0.014826138;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.059533233;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900524) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.0039929051;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19861158) node = -4;
      else node = -5;
      break;

    case -4:
      target = -0.0048621151;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0079396336;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 38 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = 2;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 3;
      else node = 2; /* default direction */
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 636.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.0037054516;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0062259008;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19840866) node = -3;
      else node = 4;
      break;

    case -3:
      target = 0.048310135;
      node = 3;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = -0.02036296;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19911012) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.025140069;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.005885711;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 39 of 164 */
  /* N terminal nodes = 4, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -4;
      break;

    case -4:
      target = -0.00042524775;
      node = 4;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.017199272;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 97) node = -2;
      else node = -3;
      break;

    case -2:
      target = 7.9926699e-005;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0073997153;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 40 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "5")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.020112634;
      node = 1;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = -2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "3")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = 0.00016780848;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0024814907;
      node = 3;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.021925909;
      node = 6;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "6")
         )) node = -4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.014557314;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.014767871;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 41 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PSBC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.017193016;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "ICBC")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0040765887;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -1.358898e-005;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.0054759893;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BOC")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.013394592;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.018382675;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 42 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0058290389;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0042439974;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 43 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 521) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.024869722;
      node = 1;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 3;
      else node = -6;
      break;

    case -6:
      target = -0.0021352277;
      node = 6;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000")
              )) node = 4;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0077107153;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -3:
      target = -0.006012013;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960222) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.013674338;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.011090286;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 44 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "6") ||
          !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "5")
         )) node = 3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "6") ||
               !strcmp(COMPANY_TYPE, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.014227449;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.010705846;
      node = 2;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "6")
         )) node = -3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0026458009;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -7.7291919e-005;
      node = 4;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "4")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.011791103;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.023307535;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 45 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0057833864;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.004000344;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 46 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "PSBC")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.020036727;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.020239449;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.011020173;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC")
              )) node = -5;
      else node = 5; /* default direction */
      break;

    case -5:
      target = 0.0042057301;
      node = 5;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CMB")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0021626916;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 4.2197046e-005;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 47 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 2;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 685.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.0012195584;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.010365115;
      node = 2;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000")
              )) node = 4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.020310076;
      node = 3;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.040580159;
      node = 6;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 637.5) node = -4;
      else node = -5;
      break;

    case -4:
      target = -0.013392204;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.01956966;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 48 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = 0.013573602;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.013967215;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 45) node = -2;
      else node = 4;
      break;

    case -2:
      target = 0.00078348298;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 99) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.012839494;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0071562625;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 49 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0015894951;
      node = 6;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 624.5) node = 3;
      else node = 5;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 584.5) node = 4;
      else node = -3;
      break;

    case -3:
      target = -0.0029681556;
      node = 3;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.024938203;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.013103852;
      node = 2;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0065800013;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.02128457;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 50 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 594.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.014067439;
      node = 1;
      done = 1;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = 3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0074949498;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = -0.0017292632;
      node = 6;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 603.5) node = -3;
      else node = 5;
      break;

    case -3:
      target = -0.021477757;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19850564) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.02651098;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0060547187;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 51 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.014497304;
      node = 1;
      done = 1;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000")
              )) node = 3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0072245629;
      node = 2;
      done = 1;
      break;

    case 3:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = -3;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.0015699886;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910764) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.0059833484;
      node = 6;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 662.5) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.04878821;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.013691813;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 52 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.017810673;
      node = 1;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 3;
      else node = 5;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -2:
      target = -0.003401418;
      node = 2;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
          !strcmp(SALARY, "NULL")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "8001-12000")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.010379529;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0494666;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 659.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.0077466437;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -6.5793952e-005;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 53 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 510.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.022736758;
      node = 1;
      done = 1;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -2:
      target = -0.017403403;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 672.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = -0.00512107;
      node = 6;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960726) node = 5;
      else node = -5;
      break;

    case -5:
      target = -0.015524569;
      node = 5;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "8001-12000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0083217046;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.004356251;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 54 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000")
         )) node = 3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.028300508;
      node = 3;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.012022845;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.019053783;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900106) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.0046206796;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19820314) node = -4;
      else node = -5;
      break;

    case -4:
      target = -0.016513181;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0033414467;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 55 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PSBC")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB")
              )) node = 4;
      else node = 3; /* default direction */
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.0098773849;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0039196764;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.00096840993;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0014249568;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.012721962;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.040133012;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 56 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0079270076;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0029552488;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 57 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.0069450885;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19920212) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.028431924;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0044809133;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19970172) node = 5;
      else node = -6;
      break;

    case -6:
      target = 0.021200258;
      node = 6;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.0094136588;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.0012224401;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 58 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "6-11 Month")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.024707087;
      node = 6;
      done = 1;
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "4-7 Year") ||
          !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
          !strcmp(WORK_TIME, "7+ Year")
         )) node = 3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 5;
      else node = 3; /* default direction */
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "7+ Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.020392783;
      node = 1;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.008697836;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0063524258;
      node = 3;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "NULL")
         )) node = -4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.00085248284;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0051128846;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 59 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PSBC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.01653784;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CEB")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0025224338;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.00072148702;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.056611151;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "PSBC")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.015208177;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.01936785;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 60 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "PSBC")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.020112745;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0097739515;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "PABC")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -3:
      target = -0.0034338764;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.0028859712;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CIB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.00029948266;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0010205482;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 61 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = 2;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 699.5) node = 3;
      else node = -3;
      break;

    case -3:
      target = -0.01323366;
      node = 3;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 648.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = -0.0037668091;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.002250282;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.0040198914;
      node = 4;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000")
         )) node = -5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = -0.020511916;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.026864432;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 62 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PSBC")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.018543007;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "PABC")
              )) node = 5;
      else node = 3; /* default direction */
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "ICBC")
              )) node = 4;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.01048664;
      node = 1;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ICBC")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0027465586;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.00088870118;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CIB")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0028669457;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.009271734;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 63 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West") ||
          !strcmp(AREA, "South China")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "North East")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
         )) node = 3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "South China")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Sorth West")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0053722966;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0050612846;
      node = 2;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = -3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0015620935;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.00083174232;
      node = 4;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China")
         )) node = -5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0062405321;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0094073706;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 64 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "6") ||
          !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6")
         )) node = 3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 4;
      else node = 3; /* default direction */
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "6")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.015683073;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0098560294;
      node = 2;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "3")
         )) node = -3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0030181819;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0019322422;
      node = 4;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "4")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0098845704;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.012411946;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 65 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "6")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.010053645;
      node = 1;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "3")
              )) node = -4;
      else node = 4; /* default direction */
      break;

    case -4:
      target = 0.00052025576;
      node = 4;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1")
         )) node = -2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.002079713;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0012670606;
      node = 3;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "2")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.011369288;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.011701056;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 66 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 521) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.022767386;
      node = 1;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 685.5) node = 3;
      else node = -6;
      break;

    case -6:
      target = -0.0076935635;
      node = 6;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "5001-8000")
              )) node = 4;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0013399502;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 5;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0034943627;
      node = 3;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 673.5) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0072837131;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.036156109;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 67 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.012958999;
      node = 1;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West")
         )) node = -2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0052813101;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0032317526;
      node = 3;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.003313051;
      node = 4;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China")
         )) node = -5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0063150962;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0082894332;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 68 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 517) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.017967267;
      node = 1;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19840368) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.044331387;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.01028048;
      node = 3;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = -4;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0010022003;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19860512) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.011741308;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.015427695;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 69 of 164 */
  /* N terminal nodes = 7, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (APP_QUANTITY != DBL_MISSING_VALUE) node = 2;
      else node = -7;
      break;

    case -7:
      target = 0.0015896964;
      node = 7;
      done = 1;
      break;

    case 2:
      if (APP_QUANTITY < 56.5) node = 3;
      else node = 6;
      break;

    case 3:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 41.5) node = 4;
      else node = -4;
      break;

    case -4:
      target = 0.020818406;
      node = 4;
      done = 1;
      break;

    case 4:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 27.5) node = 5;
      else node = -3;
      break;

    case -3:
      target = -0.015793744;
      node = 3;
      done = 1;
      break;

    case 5:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 18.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = -0.0019446084;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.027945269;
      node = 2;
      done = 1;
      break;

    case 6:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 74) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.0084672595;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.020459367;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 70 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.0035929727;
      node = 1;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = -2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "3")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = 3.4079049e-005;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.00034151833;
      node = 3;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "5")
         )) node = -4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.007711413;
      node = 4;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "2")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.013162136;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.012527614;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 71 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "ICBC")
              )) node = 3;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.01213377;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ICBC")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0015469589;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.00084988654;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.0082658446;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.013591134;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.034075454;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 72 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 550.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.013681464;
      node = 1;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.00076822654;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940964) node = 4;
      else node = -6;
      break;

    case -6:
      target = 0.028528273;
      node = 6;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 627.5) node = -3;
      else node = 5;
      break;

    case -3:
      target = -0.022413313;
      node = 3;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 642) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.027068841;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0026476038;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 73 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "NULL")
         )) node = 2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
              )) node = 3;
      else node = 2; /* default direction */
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 566) node = -1;
      else node = -2;
      break;

    case -1:
      target = -0.012334024;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0022517509;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = 0.0021930837;
      node = 6;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 603.5) node = 5;
      else node = -5;
      break;

    case -5:
      target = 0.016873567;
      node = 5;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.01029879;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.026262313;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 74 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 499.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.021503491;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960130) node = 3;
      else node = 4;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19880528) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.0064368343;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.00019195212;
      node = 3;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "NULL")
         )) node = 5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "8001-12000")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.088373959;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960468) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.030969623;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0037471039;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 75 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900806) node = 2;
      else node = 4;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900708) node = 3;
      else node = -3;
      break;

    case -3:
      target = 0.052393816;
      node = 3;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.017807093;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0029209665;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19901216) node = -4;
      else node = 5;
      break;

    case -4:
      target = -0.017054286;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910118) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.046565381;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0027305171;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 76 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.028233254;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.014440024;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19920226) node = -3;
      else node = 4;
      break;

    case -3:
      target = -0.0041371911;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19920506) node = 5;
      else node = -6;
      break;

    case -6:
      target = 0.0012786175;
      node = 6;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.010534712;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.063140589;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 77 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = -0.016687836;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.013909199;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 97) node = -2;
      else node = 4;
      break;

    case -2:
      target = -0.00075877042;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 99.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = -0.020162318;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0011081102;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 78 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 581) node = 2;
      else node = 4;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 528) node = -1;
      else node = 3;
      break;

    case -1:
      target = -0.0065595402;
      node = 1;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = 0.010770712;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.032492096;
      node = 3;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 704.5) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.017702751;
      node = 6;
      done = 1;
      break;

    case 5:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = -4;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.0020907552;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0097274544;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 79 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 587) node = 2;
      else node = 5;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -4;
      else node = 3; /* default direction */
      break;

    case -4:
      target = 0.027699117;
      node = 4;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19881008) node = -1;
      else node = 4;
      break;

    case -1:
      target = -0.015402298;
      node = 1;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.026666505;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.018324258;
      node = 3;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 602.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.017291085;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.001983363;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 80 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960726) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.016830482;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960416) node = 3;
      else node = 5;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910118) node = 4;
      else node = -3;
      break;

    case -3:
      target = -0.0029781425;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900428) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.00013950174;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.019489229;
      node = 2;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
         )) node = -4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0023457686;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.09349367;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 81 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
          !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "South China")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North East")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West") ||
               !strcmp(AREA, "South China")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.0075591264;
      node = 1;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West")
         )) node = -2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0045907263;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0036472647;
      node = 3;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.003668214;
      node = 6;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0010651096;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0021082715;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 82 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 2;
      else node = 2; /* default direction */
      break;

    case -1:
      target = -0.0040178451;
      node = 1;
      done = 1;
      break;

    case 2:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "8001-12000")
              )) node = 3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0014579273;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 650.5) node = -3;
      else node = 4;
      break;

    case -3:
      target = 0.013782011;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19870112) node = -4;
      else node = 5;
      break;

    case -4:
      target = -0.019879329;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19900914) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.030166228;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0020109304;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 83 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000")
              )) node = 2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.0061304902;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19880214) node = 3;
      else node = -6;
      break;

    case -6:
      target = -5.5818835e-007;
      node = 6;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = 4;
      else node = -2; /* default direction */
      break;

    case -2:
      target = 0.0048759124;
      node = 2;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 5;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.063794637;
      node = 5;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19865614) node = -3;
      else node = -4;
      break;

    case -3:
      target = -0.0023062842;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.049291897;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 84 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = -0.0053530202;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.012173317;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 97) node = -2;
      else node = 4;
      break;

    case -2:
      target = 2.0216715e-005;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 99.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.01174603;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0044912692;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 85 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.015476457;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0056586629;
      node = 2;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China")
         )) node = -3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -3:
      target = -0.001964174;
      node = 3;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.0037480432;
      node = 6;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Sorth West")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0010616846;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0022669362;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 86 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0022180623;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960580) node = 3;
      else node = -5;
      break;

    case -5:
      target = -0.012346247;
      node = 5;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19955676) node = 4;
      else node = -4;
      break;

    case -4:
      target = 0.037755148;
      node = 4;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "8001-12000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "NULL")
              )) node = 5;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.0020160152;
      node = 1;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 630.5) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.0058505205;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.036814496;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 87 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (APP_QUANTITY != DBL_MISSING_VALUE) node = 2;
      else node = -6;
      break;

    case -6:
      target = 0.0034089301;
      node = 6;
      done = 1;
      break;

    case 2:
      if (APP_QUANTITY < 119.5) node = 3;
      else node = -5;
      break;

    case -5:
      target = 0.011133808;
      node = 5;
      done = 1;
      break;

    case 3:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 25.5) node = -1;
      else node = 4;
      break;

    case -1:
      target = -0.019658633;
      node = 1;
      done = 1;
      break;

    case 4:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 76.5) node = 5;
      else node = -4;
      break;

    case -4:
      target = -0.015769821;
      node = 4;
      done = 1;
      break;

    case 5:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 62.5) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.0067772175;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0072107252;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 88 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.013416253;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19871010) node = 3;
      else node = -6;
      break;

    case -6:
      target = -0.0011512156;
      node = 6;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "8001-12000")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -2:
      target = -0.0098246902;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19820464) node = -3;
      else node = 5;
      break;

    case -3:
      target = -0.010545709;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19830216) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.039857792;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0097173612;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 89 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = -0.01356083;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.013100024;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 99) node = 4;
      else node = -4;
      break;

    case -4:
      target = 0.0089493998;
      node = 4;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 91) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.0026309041;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0059890438;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 90 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 639.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0038086469;
      node = 6;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.0055529773;
      node = 5;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = 4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below")
              )) node = -4;
      else node = 4; /* default direction */
      break;

    case -4:
      target = 0.05432383;
      node = 4;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 5;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.031535454;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19931068) node = -1;
      else node = -2;
      break;

    case -1:
      target = -0.017611207;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0010006682;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 91 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PSBC")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "ICBC")
              )) node = 4;
      else node = 3; /* default direction */
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CMB")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.017614189;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0095726659;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "ICBC")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.00039460271;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0015625305;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.0085817349;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.084746934;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 92 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.018634135;
      node = 6;
      done = 1;
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "4")
              )) node = -5;
      else node = 3; /* default direction */
      break;

    case -5:
      target = 0.0046833237;
      node = 5;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6")
         )) node = 4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 5;
      else node = 4; /* default direction */
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "6")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0098804428;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0062072181;
      node = 2;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "3")
         )) node = -3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0029670317;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0025786233;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 93 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940426) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0083668197;
      node = 6;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 668.5) node = 3;
      else node = -5;
      break;

    case -5:
      target = -0.0049993831;
      node = 5;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "8001-12000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.010863291;
      node = 1;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 602.5) node = 5;
      else node = -4;
      break;

    case -4:
      target = 0.0057799304;
      node = 4;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.010546499;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.01018318;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 94 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 741.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = 0.049679713;
      node = 6;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 611.5) node = 3;
      else node = -5;
      break;

    case -5:
      target = -0.0018252183;
      node = 5;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910356) node = 4;
      else node = -4;
      break;

    case -4:
      target = -0.0010614265;
      node = 4;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19881004) node = 5;
      else node = -3;
      break;

    case -3:
      target = 0.027938308;
      node = 3;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020495847;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.016778068;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 95 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "5")
         )) node = 3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "6") ||
               !strcmp(COMPANY_TYPE, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "5")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.01994045;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.01351192;
      node = 2;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "3")
         )) node = -3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0036567343;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 9.1685638e-005;
      node = 4;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "2")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0069152628;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.014333045;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 96 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "6-11 Month")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.017969845;
      node = 6;
      done = 1;
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.0092359365;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
         )) node = 4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -5;
      else node = 4; /* default direction */
      break;

    case -5:
      target = 0.0052834035;
      node = 5;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "NULL")
         )) node = -2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -2:
      target = -0.0016883485;
      node = 2;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year")
         )) node = -3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.00077397285;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.00031214743;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 97 of 164 */
  /* N terminal nodes = 4, Depth = 3 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (SOCIAL_IDENTITY == 2 || SOCIAL_IDENTITY == 4
         ) node = 2;
      else if (SOCIAL_IDENTITY == 1 || SOCIAL_IDENTITY == 3
              ) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (SOCIAL_IDENTITY == 4
         ) node = -1;
      else if (SOCIAL_IDENTITY == 1 || SOCIAL_IDENTITY == 2 ||
               SOCIAL_IDENTITY == 3
              ) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.019499591;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0099231318;
      node = 2;
      done = 1;
      break;

    case 3:
      if (SOCIAL_IDENTITY == 3
         ) node = -3;
      else if (SOCIAL_IDENTITY == 1 || SOCIAL_IDENTITY == 2 ||
               SOCIAL_IDENTITY == 4
              ) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = 0.0034383138;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0034838143;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 98 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.00018474857;
      node = 1;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910604) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.019207374;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.020218154;
      node = 3;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 685.5) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.0084129154;
      node = 6;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 649) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0075845824;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.030715912;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 99 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PSBC")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.022674675;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0039030842;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = 4; /* default direction */
      break;

    case -6:
      target = 0.035850238;
      node = 6;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC")
              )) node = -5;
      else node = 5; /* default direction */
      break;

    case -5:
      target = 0.0048783293;
      node = 5;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = 0.00052683743;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0018835024;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 100 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "South China")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = -0.00088813017;
      node = 3;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0044279334;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0037527441;
      node = 2;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
          !strcmp(AREA, "North China") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "North East")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.0056908523;
      node = 6;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "South China")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.003516028;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0043180718;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 101 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0014478111;
      node = 4;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "ICBC")
              )) node = 4;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.020064105;
      node = 1;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ICBC")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0033771274;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0022908303;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "PSBC")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.0096528752;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.014708115;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 102 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "4-7 Year") ||
          !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
          !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year")
              )) node = -4;
      else node = 3; /* default direction */
      break;

    case -4:
      target = 0.0032444246;
      node = 4;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.0085775815;
      node = 1;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0045093727;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0017276835;
      node = 3;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "7+ Year")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.016447274;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.017887287;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 103 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 587) node = 2;
      else node = 5;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 565.5) node = 3;
      else node = -4;
      break;

    case -4:
      target = 0.036242879;
      node = 4;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.012401242;
      node = 1;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19921124) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.029202811;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0090022781;
      node = 3;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 602.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.021326199;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.00059839224;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 104 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0050752602;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0037183407;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 105 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.00044031969;
      node = 1;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = -6;
      else node = 3; /* default direction */
      break;

    case -6:
      target = 0.040852089;
      node = 6;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = 4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "5001-8000")
              )) node = 5;
      else node = 4; /* default direction */
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.02389731;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0010899746;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890518) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.0012754142;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.049461238;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 106 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 640.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = 0.0003092229;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19921124) node = 3;
      else node = 4;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 584.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.019498449;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0084291328;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19930416) node = -3;
      else node = 5;
      break;

    case -3:
      target = -0.023265668;
      node = 3;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.007759959;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.011278139;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 107 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 613.5) node = 3;
      else node = -4;
      break;

    case -4:
      target = -0.0018365115;
      node = 4;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.023308843;
      node = 1;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = 0.0035467438;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.018314717;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940416) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.0051359028;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.03464572;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 108 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19901020) node = 2;
      else node = 5;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 573.5) node = 3;
      else node = 4;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0012178035;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.03188891;
      node = 2;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -3;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = 0.0024927293;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.014402207;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 665.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.00073683048;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.01470478;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 109 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North West")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "Sorth West") ||
               !strcmp(AREA, "South China")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.015915937;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0099486935;
      node = 2;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
          !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West") ||
          !strcmp(AREA, "South China")
         )) node = 4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China")
              )) node = -6;
      else node = 4; /* default direction */
      break;

    case -6:
      target = 0.00058352705;
      node = 6;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Sorth West")
         )) node = -3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -3:
      target = -0.0026927511;
      node = 3;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "South China")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.0010464011;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.00072118797;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 110 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.0056041461;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.018552222;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 684.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = -0.011807646;
      node = 6;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "NULL")
              )) node = 5;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0011380754;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940726) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.019029306;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.0095552788;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 111 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19930112) node = 3;
      else node = -3;
      break;

    case -3:
      target = 0.026393994;
      node = 3;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
               !strcmp(SALARY, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.001854218;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.024658927;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -6:
      target = 0.0025494697;
      node = 6;
      done = 1;
      break;

    case 5:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "3001-5000")
         )) node = -4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.0090024158;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -2.8250838e-005;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 112 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "7+ Year")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020523496;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.020062002;
      node = 2;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "NULL")
         )) node = -3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.00034788827;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.00022270366;
      node = 4;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0033622437;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0055573164;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 113 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 650.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 534) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.013789172;
      node = 1;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 571) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.0081775755;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0038127124;
      node = 3;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "8001-12000") || !strcmp(SALARY, "NULL")
         )) node = 5;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "3001-5000") ||
               !strcmp(SALARY, "5001-8000")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = -0.0013806708;
      node = 6;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.017002976;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.01031849;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 114 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19951172) node = -1;
      else node = 2;
      break;

    case -1:
      target = -0.00030283362;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960714) node = 3;
      else node = -6;
      break;

    case -6:
      target = 0.0014650194;
      node = 6;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = 4;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0039799105;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = 5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -5;
      else node = 5; /* default direction */
      break;

    case -5:
      target = 0.099383563;
      node = 5;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 662) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.052720662;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.016236735;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 115 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CMB")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PSBC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.020732066;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ICBC")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0049690332;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0026712394;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CMB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.0030964776;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0041284036;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.005565254;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 116 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "6") ||
          !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "4")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "5")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.020015335;
      node = 1;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "NULL")
         )) node = -2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "6")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -2:
      target = -0.0009591399;
      node = 2;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = -3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "6")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.0014932863;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0062316281;
      node = 4;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "2")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0096427264;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.013391551;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 117 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0059098949;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0014135553;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 118 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = 0.013612647;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.010713119;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 46) node = -2;
      else node = 4;
      break;

    case -2:
      target = 0.00014779067;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 99.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = -0.020293338;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0054359844;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 119 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = 2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 3;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19840668) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.012469992;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0049780193;
      node = 2;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "NULL")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
              )) node = 4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.0012474325;
      node = 3;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 5;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -6:
      target = 0.029776812;
      node = 6;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 587) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.021374478;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0073929656;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 120 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19950564) node = 2;
      else node = 3;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 658.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = -0.0037653105;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.001767642;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19950718) node = -3;
      else node = 4;
      break;

    case -3:
      target = 0.057123052;
      node = 3;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 630.5) node = 5;
      else node = -6;
      break;

    case -6:
      target = -0.0039397344;
      node = 6;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0077496902;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.028784704;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 121 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PSBC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.024400489;
      node = 1;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0065375307;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0005339277;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PSBC")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0046139191;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "PSBC")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.014405054;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.032233324;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 122 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0054974048;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0034083374;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 123 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 586.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = 0.00022279067;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19930308) node = 3;
      else node = -5;
      break;

    case -5:
      target = 0.029272793;
      node = 5;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.029089676;
      node = 1;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19906176) node = 5;
      else node = -4;
      break;

    case -4:
      target = -0.013374749;
      node = 4;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = 0.0025971729;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.023092855;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 124 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 619.5) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0019151254;
      node = 6;
      done = 1;
      break;

    case 2:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 615.5) node = 3;
      else node = 5;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
          !strcmp(SALARY, "8001-12000")
         )) node = 4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "NULL")
              )) node = -3;
      else node = 4; /* default direction */
      break;

    case -3:
      target = 0.046507925;
      node = 3;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 610.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.0056467028;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0092059698;
      node = 2;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.0075505726;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.057474038;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 125 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "6")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "4")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.010827731;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0062509792;
      node = 2;
      done = 1;
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
          !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "6") ||
          !strcmp(COMPANY_TYPE, "NULL")
         )) node = 4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2")
              )) node = 5;
      else node = 4; /* default direction */
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = -3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "3")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.00090286101;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.003147127;
      node = 4;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1")
         )) node = -5;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0053210096;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0077264223;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 126 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19840676) node = 2;
      else node = 4;
      break;

    case 2:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 3;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.058663532;
      node = 3;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 620.5) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.028836946;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0028705304;
      node = 2;
      done = 1;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -4;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.0043215132;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19955664) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.0011543798;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.017033378;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 127 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "7+ Year") ||
          !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "7+ Year")
         )) node = 3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "NULL")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = -0.001824422;
      node = 3;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "7+ Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.010605474;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0066097448;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "4-7 Year") ||
          !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
          !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.0066762639;
      node = 6;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0026182001;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0040034602;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 128 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 568.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.013002791;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.01866384;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 617.5) node = 4;
      else node = 5;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000-3000") ||
          !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
          !strcmp(SALARY, "8001-12000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "NULL")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.0076569343;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.045940176;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 711.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.00011284064;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.014804676;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 129 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "4-7 Year") ||
          !strcmp(WORK_TIME, "6 Year")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.015406463;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.012719756;
      node = 2;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year")
         )) node = -3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0016847717;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.00028615203;
      node = 4;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "6-11 Month")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0043999357;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.010714744;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 130 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = -0.026588606;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < 99.5) node = 3;
      else node = -4;
      break;

    case -4:
      target = 0.011401722;
      node = 4;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < -0.5) node = -1;
      else node = 4;
      break;

    case -1:
      target = 0.0030330878;
      node = 1;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 92) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.0015030073;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0076652414;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 131 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 534) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.014658552;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940908) node = 3;
      else node = -6;
      break;

    case -6:
      target = -0.0065717344;
      node = 6;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19871118) node = 4;
      else node = -5;
      break;

    case -5:
      target = 0.0021004381;
      node = 5;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 629.5) node = -2;
      else node = 5;
      break;

    case -2:
      target = -0.014060702;
      node = 2;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 641.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.017816708;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0065766517;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 132 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 2;
      else node = 2; /* default direction */
      break;

    case -1:
      target = -0.0087623091;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19930330) node = 3;
      else node = 5;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19921202) node = 4;
      else node = -4;
      break;

    case -4:
      target = -0.01834977;
      node = 4;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19920910) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.00097590052;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.021727023;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19930560) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.032563078;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0039759521;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 133 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = 2;
      else node = 2; /* default direction */
      break;

    case -1:
      target = -4.9043504e-006;
      node = 1;
      done = 1;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -2:
      target = -0.0078255509;
      node = 2;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "8001-12000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000 below") || !strcmp(SALARY, "2000-3000") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000") ||
               !strcmp(SALARY, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -3:
      target = -0.021200176;
      node = 3;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 658.5) node = -4;
      else node = 5;
      break;

    case -4:
      target = 0.011098845;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 670.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.051852956;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.015902121;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 134 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = 2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "4")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.011052847;
      node = 6;
      done = 1;
      break;

    case 2:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
          !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
          !strcmp(COMPANY_TYPE, "6")
         )) node = 3;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "5") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 5;
      else node = 3; /* default direction */
      break;

    case 3:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1")
         )) node = -1;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2") || !strcmp(COMPANY_TYPE, "3") ||
               !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.005973531;
      node = 1;
      done = 1;
      break;

    case 4:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "3") ||
          !strcmp(COMPANY_TYPE, "4") || !strcmp(COMPANY_TYPE, "5") ||
          !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
         )) node = -2;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "2")
              )) node = -3;
      else node = -2; /* default direction */
      break;

    case -2:
      target = -0.0017884768;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.00083384824;
      node = 3;
      done = 1;
      break;

    case 5:
      if (COMPANY_TYPE && ( /* handle null string */
          !strcmp(COMPANY_TYPE, "5")
         )) node = -4;
      else if (COMPANY_TYPE && ( /* handle null string */
               !strcmp(COMPANY_TYPE, "1") || !strcmp(COMPANY_TYPE, "2") ||
               !strcmp(COMPANY_TYPE, "3") || !strcmp(COMPANY_TYPE, "4") ||
               !strcmp(COMPANY_TYPE, "6") || !strcmp(COMPANY_TYPE, "NULL")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.00025875549;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.00043133039;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 135 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19850168) node = 2;
      else node = 3;
      break;

    case 2:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = -1;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.015845552;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.015356947;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 704.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = -0.013191364;
      node = 6;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 702.5) node = 5;
      else node = -5;
      break;

    case -5:
      target = 0.053447723;
      node = 5;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890522) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.0053989063;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.001208608;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 136 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
          !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.011701141;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "NULL")
         )) node = -2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0010178715;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0020532522;
      node = 3;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = 0.011080123;
      node = 4;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "6-11 Month")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.01343839;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.018742885;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 137 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
          !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "Sorth West")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
          !strcmp(AREA, "North China") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "North East")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = -0.0029917484;
      node = 3;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0098979186;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0076964471;
      node = 2;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Sorth West")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -4:
      target = -0.00042105998;
      node = 4;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China")
         )) node = -5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.001882014;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.003300929;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 138 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.006857114;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0031843667;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 139 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "ICBC")
              )) node = -3;
      else node = 3; /* default direction */
      break;

    case -3:
      target = -0.004711345;
      node = 3;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "GDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020426311;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.014975548;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.014127511;
      node = 6;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0010446568;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0030823808;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 140 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 531.5) node = -1;
      else node = 2;
      break;

    case -1:
      target = -0.019171483;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19890220) node = 3;
      else node = 5;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19880566) node = -2;
      else node = 4;
      break;

    case -2:
      target = 0.00059391712;
      node = 2;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
         )) node = -3;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "NULL")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.016793755;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.07308262;
      node = 4;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 601.5) node = -5;
      else node = -6;
      break;

    case -5:
      target = -0.010113284;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.0017065036;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 141 of 164 */
  /* N terminal nodes = 2, Depth = 2 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (GENDER && ( /* handle null string */
          !strcmp(GENDER, "female")
         )) node = -1;
      else if (GENDER && ( /* handle null string */
               !strcmp(GENDER, "male")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0059104697;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.001539415;
      node = 2;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 142 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "ICBC")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.010348034;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0028575871;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "PABC")
         )) node = 4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CCB")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.0015528152;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0028652313;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "PSBC")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.008708144;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.019905352;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 143 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.00089056966;
      node = 3;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.01931564;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0025072137;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0063135655;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CIB")
         )) node = -5;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.013981455;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.021392184;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 144 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "South China")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.009237781;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0046054079;
      node = 2;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China") || !strcmp(AREA, "South China")
         )) node = 4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "South China")
         )) node = -3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = 0.00089067681;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0012220521;
      node = 4;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China")
         )) node = -5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0041481724;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0056303263;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 145 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "6-11 Month")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.013473089;
      node = 6;
      done = 1;
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.014561857;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year")
         )) node = -2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -2:
      target = -0.0022333854;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
         )) node = 5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -5;
      else node = 5; /* default direction */
      break;

    case -5:
      target = 0.0032722488;
      node = 5;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "NULL")
         )) node = -3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = 0.00051219277;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0010866458;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 146 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "PSBC")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.013423294;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC")
              )) node = 5;
      else node = 3; /* default direction */
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC")
              )) node = -3;
      else node = 4; /* default direction */
      break;

    case -3:
      target = -0.0031689245;
      node = 3;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "SPDB")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020286515;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0094931328;
      node = 2;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "PABC")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.00070641629;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0070194259;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 147 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = 2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19810364) node = -1;
      else node = -2;
      break;

    case -1:
      target = 0.034117683;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.007642354;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 609.5) node = 4;
      else node = 5;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19935456) node = -3;
      else node = -4;
      break;

    case -3:
      target = -0.01878696;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.014777004;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19960720) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.0019454824;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.020025061;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 148 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19870126) node = -1;
      else node = 2;
      break;

    case -1:
      target = -0.0053400423;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19870326) node = -2;
      else node = 3;
      break;

    case -2:
      target = 0.045249486;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 561.5) node = 4;
      else node = 5;
      break;

    case 4:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school") ||
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -3;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
              )) node = -4;
      else node = -3; /* default direction */
      break;

    case -3:
      target = 0.0063482064;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.029705752;
      node = 4;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above")
         )) node = -5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = -0.00272377;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0052574779;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 149 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PSBC")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020591048;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.011937185;
      node = 2;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = 4; /* default direction */
      break;

    case -6:
      target = 0.071006864;
      node = 6;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "PABC")
              )) node = 5;
      else node = -3; /* default direction */
      break;

    case -3:
      target = -0.0017234424;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CMB") ||
          !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "CIB")
              )) node = -5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.0031594671;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.022610261;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 150 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North West")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "Sorth West") ||
               !strcmp(AREA, "South China")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.011230727;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.0095950902;
      node = 2;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Central China") || !strcmp(AREA, "Sorth West")
         )) node = 4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "South China")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "Sorth West")
         )) node = -3;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "South China")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0026278632;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0004557418;
      node = 4;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China")
         )) node = -5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "North China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.0017256495;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0027063927;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 151 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
          !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
         )) node = 2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "South China")
              )) node = 4;
      else node = 2; /* default direction */
      break;

    case 2:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North China")
         )) node = -1;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.015016272;
      node = 1;
      done = 1;
      break;

    case 3:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "North West")
         )) node = -2;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.008481924;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0039923099;
      node = 3;
      done = 1;
      break;

    case 4:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "East China") || !strcmp(AREA, "North China") ||
          !strcmp(AREA, "North East") || !strcmp(AREA, "North West") ||
          !strcmp(AREA, "Sorth West") || !strcmp(AREA, "South China")
         )) node = 5;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China")
              )) node = -6;
      else node = 5; /* default direction */
      break;

    case -6:
      target = 0.004416348;
      node = 6;
      done = 1;
      break;

    case 5:
      if (AREA && ( /* handle null string */
          !strcmp(AREA, "South China")
         )) node = -4;
      else if (AREA && ( /* handle null string */
               !strcmp(AREA, "Central China") || !strcmp(AREA, "East China") ||
               !strcmp(AREA, "North China") || !strcmp(AREA, "North East") ||
               !strcmp(AREA, "North West") || !strcmp(AREA, "Sorth West")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = -0.00068293881;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0013093829;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 152 of 164 */
  /* N terminal nodes = 4, Depth = 3 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (SOCIAL_IDENTITY == 2 || SOCIAL_IDENTITY == 4
         ) node = 2;
      else if (SOCIAL_IDENTITY == 1 || SOCIAL_IDENTITY == 3
              ) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (SOCIAL_IDENTITY == 4
         ) node = -1;
      else if (SOCIAL_IDENTITY == 1 || SOCIAL_IDENTITY == 2 ||
               SOCIAL_IDENTITY == 3
              ) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.020697303;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.011990725;
      node = 2;
      done = 1;
      break;

    case 3:
      if (SOCIAL_IDENTITY == 3
         ) node = -3;
      else if (SOCIAL_IDENTITY == 1 || SOCIAL_IDENTITY == 2 ||
               SOCIAL_IDENTITY == 4
              ) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0041620118;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0015829623;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 153 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 558.5) node = 2;
      else node = 3;
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -2;
      else node = -1; /* default direction */
      break;

    case -1:
      target = 0.0033416785;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.028426846;
      node = 2;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 624.5) node = 4;
      else node = -6;
      break;

    case -6:
      target = -0.0011018629;
      node = 6;
      done = 1;
      break;

    case 4:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19931016) node = -3;
      else node = 5;
      break;

    case -3:
      target = -0.011844238;
      node = 3;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 607) node = -4;
      else node = -5;
      break;

    case -4:
      target = -0.014205324;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.011276241;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 154 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (APP_QUANTITY != DBL_MISSING_VALUE) node = 2;
      else node = -6;
      break;

    case -6:
      target = 0.00061328596;
      node = 6;
      done = 1;
      break;

    case 2:
      if (APP_QUANTITY < 24) node = -1;
      else node = 3;
      break;

    case -1:
      target = -0.021095314;
      node = 1;
      done = 1;
      break;

    case 3:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 33.5) node = -2;
      else node = 4;
      break;

    case -2:
      target = 0.010044811;
      node = 2;
      done = 1;
      break;

    case 4:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 45.5) node = -3;
      else node = 5;
      break;

    case -3:
      target = -0.020997858;
      node = 3;
      done = 1;
      break;

    case 5:
      if (APP_QUANTITY != DBL_MISSING_VALUE && APP_QUANTITY < 52.5) node = -4;
      else node = -5;
      break;

    case -4:
      target = 0.021715221;
      node = 4;
      done = 1;
      break;

    case -5:
      target = -0.01162729;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 155 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = 2;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
               !strcmp(SALARY, "3001-5000") || !strcmp(SALARY, "5001-8000")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case 2:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = 3;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.01018736;
      node = 1;
      done = 1;
      break;

    case 3:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 633) node = -2;
      else node = -3;
      break;

    case -2:
      target = 0.032089349;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0032184813;
      node = 3;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1") || !strcmp(RACE, "NULL")
         )) node = -4;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.001715079;
      node = 4;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910512) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.019097235;
      node = 5;
      done = 1;
      break;

    case -6:
      target = -0.001365179;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 156 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19950506) node = 2;
      else node = 5;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19940726) node = 3;
      else node = -4;
      break;

    case -4:
      target = -0.013236016;
      node = 4;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school")
              )) node = 4;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.003162022;
      node = 1;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 630.5) node = -2;
      else node = -3;
      break;

    case -2:
      target = -0.0035876337;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.0068220916;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19950724) node = -5;
      else node = -6;
      break;

    case -5:
      target = 0.052132879;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0028891318;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 157 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 517) node = -1;
      else node = 2;
      break;

    case -1:
      target = 0.016966531;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19910118) node = 3;
      else node = -6;
      break;

    case -6:
      target = -0.0039728623;
      node = 6;
      done = 1;
      break;

    case 3:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19901208) node = 4;
      else node = -5;
      break;

    case -5:
      target = 0.027778872;
      node = 5;
      done = 1;
      break;

    case 4:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 565) node = -2;
      else node = 5;
      break;

    case -2:
      target = 0.018866905;
      node = 2;
      done = 1;
      break;

    case 5:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 676.5) node = -3;
      else node = -4;
      break;

    case -3:
      target = -0.0014195822;
      node = 3;
      done = 1;
      break;

    case -4:
      target = 0.0089970554;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 158 of 164 */
  /* N terminal nodes = 5, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE) node = 2;
      else node = -5;
      break;

    case -5:
      target = -0.0044554632;
      node = 5;
      done = 1;
      break;

    case 2:
      if (WHITENAME_SCORE < -0.5) node = -1;
      else node = 3;
      break;

    case -1:
      target = 0.0061174788;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 97) node = -2;
      else node = 4;
      break;

    case -2:
      target = -0.0027704751;
      node = 2;
      done = 1;
      break;

    case 4:
      if (WHITENAME_SCORE != DBL_MISSING_VALUE && WHITENAME_SCORE < 99) node = -3;
      else node = -4;
      break;

    case -3:
      target = 0.012172978;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.0010642194;
      node = 4;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 159 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.017013912;
      node = 1;
      done = 1;
      break;

    case -2:
      target = -0.019366594;
      node = 2;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "NULL")
         )) node = 4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month")
         )) node = -3;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6 Year") || !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -3:
      target = -0.0080587319;
      node = 3;
      done = 1;
      break;

    case -4:
      target = -0.00033812756;
      node = 4;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.003131546;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.0053791125;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 160 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
          !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "HXB") ||
          !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
          !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "GDB")
              )) node = -6;
      else node = 2; /* default direction */
      break;

    case -6:
      target = 0.065653287;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "PABC")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -1:
      target = -0.025593086;
      node = 1;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "SPDB")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.019264383;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.0017559062;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CEB")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0028163302;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0047222149;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 161 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19850620) node = 2;
      else node = -6;
      break;

    case -6:
      target = -0.0010376757;
      node = 6;
      done = 1;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19850164) node = 3;
      else node = -5;
      break;

    case -5:
      target = 0.038184777;
      node = 5;
      done = 1;
      break;

    case 3:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000") ||
          !strcmp(SALARY, "NULL")
         )) node = -1;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000")
              )) node = 4;
      else node = -1; /* default direction */
      break;

    case -1:
      target = -0.00057989324;
      node = 1;
      done = 1;
      break;

    case 4:
      if (RACE && ( /* handle null string */
          !strcmp(RACE, "1")
         )) node = 5;
      else if (RACE && ( /* handle null string */
               !strcmp(RACE, "2") || !strcmp(RACE, "NULL")
              )) node = -4;
      else node = -4; /* default direction */
      break;

    case -4:
      target = 0.069612121;
      node = 4;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "High school")
         )) node = -2;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "NULL") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school") ||
               !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
               !strcmp(EDUCATION_LEVEL, "college")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.020387912;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 0.033192319;
      node = 3;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 162 of 164 */
  /* N terminal nodes = 6, Depth = 5 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "NULL")
         )) node = 2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year")
              )) node = 5;
      else node = 2; /* default direction */
      break;

    case 2:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year")
         )) node = -1;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "4-7 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = 3;
      else node = 3; /* default direction */
      break;

    case -1:
      target = -0.0089840963;
      node = 1;
      done = 1;
      break;

    case 3:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "1-3 Year") || !strcmp(WORK_TIME, "1-5 Month") ||
          !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
          !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "7+ Year")
         )) node = 4;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "NULL")
              )) node = -4;
      else node = 4; /* default direction */
      break;

    case -4:
      target = -0.00068552526;
      node = 4;
      done = 1;
      break;

    case 4:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "4-7 Year")
         )) node = -2;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") ||
               !strcmp(WORK_TIME, "7+ Year") || !strcmp(WORK_TIME, "NULL")
              )) node = -3;
      else node = -3; /* default direction */
      break;

    case -2:
      target = -0.0029183711;
      node = 2;
      done = 1;
      break;

    case -3:
      target = -0.001252744;
      node = 3;
      done = 1;
      break;

    case 5:
      if (WORK_TIME && ( /* handle null string */
          !strcmp(WORK_TIME, "7+ Year")
         )) node = -5;
      else if (WORK_TIME && ( /* handle null string */
               !strcmp(WORK_TIME, "1-3 Year") ||
               !strcmp(WORK_TIME, "1-5 Month") ||
               !strcmp(WORK_TIME, "4-7 Year") || !strcmp(WORK_TIME, "6 Year") ||
               !strcmp(WORK_TIME, "6-11 Month") || !strcmp(WORK_TIME, "NULL")
              )) node = -6;
      else node = -6; /* default direction */
      break;

    case -5:
      target = 0.010423193;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.012134126;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 163 of 164 */
  /* N terminal nodes = 6, Depth = 6 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "PABC")
         )) node = -1;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = 2;
      else node = 2; /* default direction */
      break;

    case -1:
      target = -0.020080229;
      node = 1;
      done = 1;
      break;

    case 2:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BOC") ||
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
          !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
          !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
          !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "SPDB")
         )) node = 3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "PSBC")
              )) node = -6;
      else node = 3; /* default direction */
      break;

    case -6:
      target = 0.0094232477;
      node = 6;
      done = 1;
      break;

    case 3:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ICBC")
         )) node = -2;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CCB") ||
               !strcmp(BANK_NAME, "CEB") || !strcmp(BANK_NAME, "CIB") ||
               !strcmp(BANK_NAME, "CMB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = 4;
      else node = 4; /* default direction */
      break;

    case -2:
      target = -0.0022402892;
      node = 2;
      done = 1;
      break;

    case 4:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CMB")
         )) node = -3;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "ABC") || !strcmp(BANK_NAME, "BCM") ||
               !strcmp(BANK_NAME, "BOC") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "GDB") ||
               !strcmp(BANK_NAME, "HXB") || !strcmp(BANK_NAME, "ICBC") ||
               !strcmp(BANK_NAME, "PABC") || !strcmp(BANK_NAME, "PSBC") ||
               !strcmp(BANK_NAME, "SPDB")
              )) node = 5;
      else node = 5; /* default direction */
      break;

    case -3:
      target = 0.00052242743;
      node = 3;
      done = 1;
      break;

    case 5:
      if (BANK_NAME && ( /* handle null string */
          !strcmp(BANK_NAME, "ABC")
         )) node = -4;
      else if (BANK_NAME && ( /* handle null string */
               !strcmp(BANK_NAME, "BCM") || !strcmp(BANK_NAME, "BOC") ||
               !strcmp(BANK_NAME, "CCB") || !strcmp(BANK_NAME, "CEB") ||
               !strcmp(BANK_NAME, "CIB") || !strcmp(BANK_NAME, "CMB") ||
               !strcmp(BANK_NAME, "GDB") || !strcmp(BANK_NAME, "HXB") ||
               !strcmp(BANK_NAME, "ICBC") || !strcmp(BANK_NAME, "PABC") ||
               !strcmp(BANK_NAME, "PSBC") || !strcmp(BANK_NAME, "SPDB")
              )) node = -5;
      else node = -5; /* default direction */
      break;

    case -4:
      target = 0.0019911485;
      node = 4;
      done = 1;
      break;

    case -5:
      target = 0.0036299367;
      node = 5;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  /* Tree 164 of 164 */
  /* N terminal nodes = 6, Depth = 4 */

  target = 0.0;
  node = 1; /* start at root node */
  done = 0; /* set at terminal node */

  while (done == 0) switch (node) {

    case 1:
      if (ZMXY_SCORE != DBL_MISSING_VALUE && ZMXY_SCORE < 675.5) node = 2;
      else node = 4;
      break;

    case 2:
      if (BIRTHDAY != DBL_MISSING_VALUE && BIRTHDAY < 19970324) node = 3;
      else node = -3;
      break;

    case -3:
      target = -0.020776721;
      node = 3;
      done = 1;
      break;

    case 3:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -1;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school") ||
               !strcmp(EDUCATION_LEVEL, "Secondary school") ||
               !strcmp(EDUCATION_LEVEL, "Under the high school")
              )) node = -2;
      else node = -2; /* default direction */
      break;

    case -1:
      target = -0.0020620303;
      node = 1;
      done = 1;
      break;

    case -2:
      target = 0.0034412426;
      node = 2;
      done = 1;
      break;

    case 4:
      if (SALARY && ( /* handle null string */
          !strcmp(SALARY, "12000 high") || !strcmp(SALARY, "2000 below") ||
          !strcmp(SALARY, "2000-3000") || !strcmp(SALARY, "3001-5000") ||
          !strcmp(SALARY, "5001-8000") || !strcmp(SALARY, "8001-12000")
         )) node = -4;
      else if (SALARY && ( /* handle null string */
               !strcmp(SALARY, "NULL")
              )) node = 5;
      else node = -4; /* default direction */
      break;

    case -4:
      target = -0.010817252;
      node = 4;
      done = 1;
      break;

    case 5:
      if (EDUCATION_LEVEL && ( /* handle null string */
          !strcmp(EDUCATION_LEVEL, "NULL") ||
          !strcmp(EDUCATION_LEVEL, "Secondary school") ||
          !strcmp(EDUCATION_LEVEL, "Under the high school") ||
          !strcmp(EDUCATION_LEVEL, "Undergraduate and above") ||
          !strcmp(EDUCATION_LEVEL, "college")
         )) node = -5;
      else if (EDUCATION_LEVEL && ( /* handle null string */
               !strcmp(EDUCATION_LEVEL, "High school")
              )) node = -6;
      else node = -5; /* default direction */
      break;

    case -5:
      target = 0.010569885;
      node = 5;
      done = 1;
      break;

    case -6:
      target = 0.12005585;
      node = 6;
      done = 1;
      break;

    default: /* error */
      target = 0.0;
      done = 1;
      node = 0;
      break;

  }

  net_response += target;

  score0 = exp(-net_response); /* IS_OVERDUE30 = 0 */
  expsum += score0;
  score1 = exp(net_response); /* IS_OVERDUE30 = 1 */
  expsum += score1;

  /***************************************/
  /* Probabilities for each target class */
  /***************************************/

  prob0 = score0 / expsum; /* IS_OVERDUE30 = 0 */
  if (pProb0) *pProb0 = prob0;
  prob1 = score1 / expsum; /* IS_OVERDUE30 = 1 */
  if (pProb1) *pProb1 = prob1;

  return(net_response);
}

/******************************
 * CALL EACH TreeNet EXPLICITLY
 ******************************/

double grove(double birthday, double zmxy_score, double whitename_score, double app_quantity, \
           int social_identity, \
           char *race, char *bank_name, char *gender, char *salary, char *company_type, char *work_time, char *education_level, char *area)
{
  double pProb0;
  double pProb1;
  double net_response = TreeNet_155(&pProb0, &pProb1,\
                                    birthday, zmxy_score, whitename_score, app_quantity,\
                                    social_identity,\
                                    race, bank_name, gender, salary, company_type, work_time, education_level, area);
  // printf("*******\n");
  // printf("pProb0: %f\n", pProb0);
  // printf("pProb1: %f\n", pProb1);
  // printf("net_response: %f\n", net_response);
  // printf("*******\n");
  return pProb1;
}
