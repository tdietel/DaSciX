# Example script to set up the environment for Pythia and ROOT
#
# You must edit this file to reflect the locations of your
# software packages.
#
# Source this file with
#   . env.sh
#

# Pythia 8
export PYTHIA8=~/Root/pythia8226
export PYTHIA8DATA=$PYTHIA8/share/Pythia8/xmldoc

# ROOT
. ~/Root/root-build/bin/thisroot.sh

# GEANT 4
. ~/Geant4/geant4-install/bin/geant4.sh

# installation directory for a few things
export INSTDIR=~/Geant4/install/lib/

# Virtual MC
export VGM_DIR=$INSTDIR/VGM-4.4.0
export G4Root_DIR=$INSTDIR/G4Root-3.4.0/
export MTRoot_DIR=$INSTDIR/MTRoot-3.4.0/
export Geant4VMC_DIR=$INSTDIR/Geant4VMC-3.4.0/

# Needed for loadlibs.C macro
export DASCIX_DIR=~/DaSciX/

# Mac OS X
# export DYLD_LIBRARY_PATH=$INSTDIR/lib

# for Linux
export LD_LIBRARY_PATH=$INSTDIR
