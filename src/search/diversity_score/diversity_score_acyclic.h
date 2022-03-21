#ifndef DIVERSITY_SCORE_DIVERSITY_SCORE_ACYCLIC_H
#define DIVERSITY_SCORE_DIVERSITY_SCORE_ACYCLIC_H

#include "diversity_score.h"

class DiversityScoreAcyclic : public DiversityScore {

public:
    DiversityScoreAcyclic(const options::Options &opts);
    virtual ~DiversityScoreAcyclic() = default;

    virtual void compute_metrics();

};

//}

#endif
