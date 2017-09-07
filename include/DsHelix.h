#ifndef DSHELIX_H
#define DSHELIX_H

class DsHelix
{

  // default contructor: initialize everything with 0
  DsHelix();
  
  // construct from TParticle
  DsHelix(TParticle* part);

  // propagate this helix to radius (given by detector layer)
  void PropagateToRadius(Double_t r);
  
protected:

  // Track parameters are described in:
  // http://personalpages.to.infn.it/~puccio/htmldoc/src/AliExternalTrackParam.cxx.html#BtscaC
  
  Double_t fP[5]; // track parameters
  Double_t fC[15]; // covariance matrix

};

#endif
