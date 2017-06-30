#ifndef Ex02ChamberParameterisation_H
#define Ex02ChamberParameterisation_H

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \file Ex02ChamberParameterisation.h
/// \brief Definition of the Ex02ChamberParameterisation class
///
/// Geant4 ExampleN02 adapted to Virtual Monte Carlo \n
/// Id: Ex02ChamberParameterisation.hh,v 1.6 2002/01/09 17:24:08 ranjard Exp \n
/// GEANT4 tag Name: geant4-04-00-patch-02
///
/// \author I. Hrivnacova; IPN, Orsay

#include <TObject.h>

/// \ingroup E02
/// \brief The chamber parameterisation
///
/// A parameterisation that describes a series of boxes along Z
/// The boxes have equal width, & their lengths are a linear equation.
//  They are spaced an equal distance apart, starting from given location.
///
/// \date 21/04/2002
/// \author I. Hrivnacova; IPN, Orsay

class Ex02ChamberParameterisation : public TObject
{
  public:
    Ex02ChamberParameterisation(Int_t    noChambers,
                                Double_t radialSpacing,
                                Double_t layerThickness,
                                Double_t beampipeRadius,
                                Double_t length );

    virtual ~Ex02ChamberParameterisation();

    // methods
    void ComputeDimensions (Int_t copyNo, Double_t* dimension) const;


  private:
    Int_t     fNoChambers;      ///< Number of chambers
    Double_t  fHalfLength;      ///< The half-length of each tracker chamber
    Double_t  fSpacing;         ///< The distance between the chambers
    Double_t  fBeamPipe;        ///< The beam pipe radius
    Double_t  fThickness;       ///< The tracker detector thickness

  ClassDef(Ex02ChamberParameterisation,1) //Ex02ChamberParameterisation
};

#endif
