C
C*    *COMMON*  *MESSPASS* - SELECT MACHINE SPECIFIC PART OF THE CODE 

      LOGICAL LMESSPASS,LPBIOIN,LPBIOOUT,LFDBIOIN,LFDBIOOUT,LGRIBIN

      COMMON /MESSPASS/ LMESSPASS,LPBIOIN, LPBIOOUT, LFDBIOIN,LFDBIOOUT,
     &                  LGRIBIN
C
C*     VARIABLE.   TYPE.     PURPOSE.
C      --------    ----      -------
C
C      *LMESSPASS  LOGICAL   SELECT PART OF THE CODE THAT IS SPECIFIC
C                            TO A MESSAGE PASSING OR A MULTI-TASKED 
C                            ENVIRONMENT.
C      *LPBIOIN    LOGICAL   SELECT TYPE OF INPUT OF BINARY FILES,
C                            IF TRUE THE PBIO SOFTWARE WILL BE USED FOR
C                            INPUT.
C      *LPBIOOUT   LOGICAL   SELECT TYPE OF OUTPUT OF BINARY FILES,
C                            IF TRUE THE PBIO SOFTWARE WILL BE USED FOR
C                            OUTPUT.
C
C      *LFDBIOIN   LOGICAL   SELECT TYPE OF INPUT OF BINARY FILES IF
C                            IF TRUE THE FDB SOFTWARE WILL BE USED FOR
C                            INPUT.
C      *LFDBIOOUT  LOGICAL   SELECT TYPE OF OUTPUT OF BINARY FILES
C                            IF TRUE THE PBIO SOFTWARE WILL BE USED FOR
C                            OUTPUT.
C      *LGRIBIN    LOGICAL   SELECT TYPE OF INPUT OF SPECTRA FILES
C                            IF TRUE INPUT GRIB SPECTRA , CD, WINDS
C                            ARE EXPECTED AS INPUTS.
C ----------------------------------------------------------------------
