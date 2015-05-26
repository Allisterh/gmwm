#ifndef GUESS_VALUES
#define GUESS_VALUES
#include <map>

arma::vec ar1_draw(unsigned int draw_id, double last_phi, double sigma_tot, std::string model_type);

unsigned int count_AR1s(std::vector<std::string> s);

std::map<std::string, int> count_models(const std::vector<std::string>& desc);	

arma::vec guess_initial(const std::vector<std::string>& desc, const arma::field<arma::vec>& objdesc,
                        std::string model_type, unsigned int num_param, double expect_diff, unsigned int N,
                        const arma::vec& wv_empir, const arma::vec& tau, unsigned int B=1000);


#endif