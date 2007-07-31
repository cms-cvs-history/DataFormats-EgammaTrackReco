#include "DataFormats/TrackCandidate/interface/TrackCandidateCollection.h"
#include "DataFormats/CLHEP/interface/Migration.h" 
#include <boost/cstdint.hpp> 
#include "DataFormats/TrackingRecHit/interface/TrackingRecHitFwd.h" 
#include "DataFormats/TrackCandidate/interface/TrackCandidate.h"
#include "DataFormats/TrackCandidate/interface/TrackCandidateSeedAssociation.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "Rtypes.h" 
#include "Math/Cartesian3D.h" 
#include "Math/Polar3D.h" 
#include "Math/CylindricalEta3D.h" 
#include "DataFormats/TrackReco/interface/TrackFwd.h" 
#include "DataFormats/EgammaTrackReco/interface/TrackCandidateSuperClusterAssociation.h"
#include "DataFormats/EgammaTrackReco/interface/TrackSuperClusterAssociation.h"
#include "DataFormats/Common/interface/RefProd.h" 
#include "DataFormats/EgammaReco/interface/SuperCluster.h"
#include "DataFormats/EgammaReco/interface/SuperClusterFwd.h" 


#include "DataFormats/Common/interface/Wrapper.h"

namespace {
  namespace {

    reco::TrackCandidateSuperClusterAssociationCollection v5;
    edm::Wrapper<reco::TrackCandidateSuperClusterAssociationCollection> c5;
    reco::TrackCandidateSuperClusterAssociation vv5;
    reco::TrackCandidateSuperClusterAssociationRef r5;
    reco::TrackCandidateSuperClusterAssociationRefProd rp5;
    reco::TrackCandidateSuperClusterAssociationRefVector rv5;

    reco::TrackSuperClusterAssociationCollection v6;
    edm::Wrapper<reco::TrackSuperClusterAssociationCollection> c6;
    reco::TrackSuperClusterAssociation vv6;
    reco::TrackSuperClusterAssociationRef r6;
    reco::TrackSuperClusterAssociationRefProd rp6;
    reco::TrackSuperClusterAssociationRefVector rv6;




  }
}

