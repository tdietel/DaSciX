# Example script to set up the environment for Pythia and ROOT
#
# You must edit this file to reflect the locations of your 
# software packages.
#
# Source this file with 
#   . env.sh
# 

export DASCIX_DIR=/Users/tom/teaching/DaSciX

# installation directory for a few things
INSTDIR=/Users/tom/sw/install


# Pythia 8
export PYTHIA8=/Users/tom/sw/src/pythia8226
export PYTHIA8DATA=$PYTHIA8/share/Pythia8/xmldoc

# ROOT
. /Users/tom/sw/root/bin/thisroot.sh

# GEANT 4
. ~/sw/geant4.10.03.p01-install/bin/geant4.sh


# Virtual MC
export VGM_DIR=$INSTDIR/lib/VGM-4.4.0
export G4Root_DIR=$INSTDIR/lib/G4Root-3.4.0
export MTRoot_DIR=$INSTDIR/lib/MTRoot-3.4.0
export Geant4VMC_DIR=$INSTDIR/lib/Geant4VMC-3.4.0

# Mac OS X
export DYLD_LIBRARY_PATH=$INSTDIR/lib

# for Linux
#export LD_LIBRARY_PATH=$INSTDIR/lib

