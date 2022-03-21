#include "diversity_score_acyclic.h"

#include "../option_parser.h"
#include "../plugin.h"

using namespace std;

DiversityScoreAcyclic::DiversityScoreAcyclic(const Options &opts) : DiversityScore(opts) { 
    compute_states_metric = true;
}

void DiversityScoreAcyclic::compute_metrics() {
    dump_acyclc_plans();
}

static shared_ptr<DiversityScore> _parse_score(OptionParser &parser) {
    add_diversity_score_options_to_parser(parser);
    Options opts = parser.parse();

    shared_ptr<DiversityScoreAcyclic> engine;
    if (!parser.dry_run()) {
        engine = make_shared<DiversityScoreAcyclic>(opts);
    }

    return engine;
}

static Plugin<DiversityScore> _plugin("acyclic", _parse_score);
