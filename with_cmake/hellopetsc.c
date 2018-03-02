#include <petsc.h>

#undef __FUNCT__
#define __FUNCT__ "main"
int main(int argc,char **args)
{

  PetscErrorCode ierr;

  PetscInitialize(&argc,&args,(char*)0,(char*)0);

  ierr = PetscPrintf(PETSC_COMM_WORLD," === Hello from Petsc! ===\n");CHKERRQ(ierr);

  ierr = PetscFinalize();
  
  return 0;
}
