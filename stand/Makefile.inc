SUBDIR_PARALLEL=	yes

PACKAGE=		bootloader

# Firmware may not be able to handle branch protection failures
MK_BRANCH_PROTECTION=	no

# RELRO is not supported in standalone/EFI environment and would break linking
MK_RELRO=	no

.include "defs.mk"
