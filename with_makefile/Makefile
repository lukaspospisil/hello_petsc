ALL: hellopetsc

SRC				=  

CFLAGS	        = -I${PETSC_DIR}/include -I${PETSC_DIR}/${PETSC_ARCH}/include
FFLAGS	        = 
CPPFLAGS        =
FPPFLAGS        =
MAINFILE		= hellopetsc
OBJ = $(SRC:.c=.o)

include ${PETSC_DIR}/lib/petsc/conf/variables
include ${PETSC_DIR}/lib/petsc/conf/rules
include ${PETSC_DIR}/lib/petsc/conf/test

LIB 	  += -lm ${PETSC_KSP_LIB} ${FLLOP_LIB}
INCLUDE   += -Icommon 

hellopetsc: ${MAINFILE}.o ${OBJ} chkopts
	-${CLINKER} -o ${MAINFILE} ${MAINFILE}.o ${OBJ} ${LIB} ${INCLUDE} ${PETSC_LIB}
	${RM} -f ${MAINFILE}.o ${OBJ}
