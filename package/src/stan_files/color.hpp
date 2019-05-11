/*
    EasyBayes is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    EasyBayes is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with EasyBayes.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.18.1

#include <stan/model/model_header.hpp>

namespace model_color_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_color");
    reader.add_event(59, 57, "end", "model_color");
    return reader;
}

#include <meta_header.hpp>
 class model_color : public prob_grad {
private:
    int n;
    vector<double> r;
    vector<double> g;
    vector<double> b;
    vector<double> h;
    vector<double> s;
    vector<double> v;
public:
    model_color(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    model_color(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model_color_namespace::model_color";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        // initialize member variables
        try {
            current_statement_begin__ = 2;
            context__.validate_dims("data initialization", "n", "int", context__.to_vec());
            n = int(0);
            vals_i__ = context__.vals_i("n");
            pos__ = 0;
            n = vals_i__[pos__++];
            current_statement_begin__ = 4;
            validate_non_negative_index("r", "n", n);
            context__.validate_dims("data initialization", "r", "double", context__.to_vec(n));
            validate_non_negative_index("r", "n", n);
            r = std::vector<double>(n,double(0));
            vals_r__ = context__.vals_r("r");
            pos__ = 0;
            size_t r_limit_0__ = n;
            for (size_t i_0__ = 0; i_0__ < r_limit_0__; ++i_0__) {
                r[i_0__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 5;
            validate_non_negative_index("g", "n", n);
            context__.validate_dims("data initialization", "g", "double", context__.to_vec(n));
            validate_non_negative_index("g", "n", n);
            g = std::vector<double>(n,double(0));
            vals_r__ = context__.vals_r("g");
            pos__ = 0;
            size_t g_limit_0__ = n;
            for (size_t i_0__ = 0; i_0__ < g_limit_0__; ++i_0__) {
                g[i_0__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 6;
            validate_non_negative_index("b", "n", n);
            context__.validate_dims("data initialization", "b", "double", context__.to_vec(n));
            validate_non_negative_index("b", "n", n);
            b = std::vector<double>(n,double(0));
            vals_r__ = context__.vals_r("b");
            pos__ = 0;
            size_t b_limit_0__ = n;
            for (size_t i_0__ = 0; i_0__ < b_limit_0__; ++i_0__) {
                b[i_0__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 8;
            validate_non_negative_index("h", "n", n);
            context__.validate_dims("data initialization", "h", "double", context__.to_vec(n));
            validate_non_negative_index("h", "n", n);
            h = std::vector<double>(n,double(0));
            vals_r__ = context__.vals_r("h");
            pos__ = 0;
            size_t h_limit_0__ = n;
            for (size_t i_0__ = 0; i_0__ < h_limit_0__; ++i_0__) {
                h[i_0__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 9;
            validate_non_negative_index("s", "n", n);
            context__.validate_dims("data initialization", "s", "double", context__.to_vec(n));
            validate_non_negative_index("s", "n", n);
            s = std::vector<double>(n,double(0));
            vals_r__ = context__.vals_r("s");
            pos__ = 0;
            size_t s_limit_0__ = n;
            for (size_t i_0__ = 0; i_0__ < s_limit_0__; ++i_0__) {
                s[i_0__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 10;
            validate_non_negative_index("v", "n", n);
            context__.validate_dims("data initialization", "v", "double", context__.to_vec(n));
            validate_non_negative_index("v", "n", n);
            v = std::vector<double>(n,double(0));
            vals_r__ = context__.vals_r("v");
            pos__ = 0;
            size_t v_limit_0__ = n;
            for (size_t i_0__ = 0; i_0__ < v_limit_0__; ++i_0__) {
                v[i_0__] = vals_r__[pos__++];
            }

            // validate, data variables
            current_statement_begin__ = 2;
            check_greater_or_equal(function__,"n",n,1);
            current_statement_begin__ = 4;
            for (int k0__ = 0; k0__ < n; ++k0__) {
                check_greater_or_equal(function__,"r[k0__]",r[k0__],0);
                check_less_or_equal(function__,"r[k0__]",r[k0__],255);
            }
            current_statement_begin__ = 5;
            for (int k0__ = 0; k0__ < n; ++k0__) {
                check_greater_or_equal(function__,"g[k0__]",g[k0__],0);
                check_less_or_equal(function__,"g[k0__]",g[k0__],255);
            }
            current_statement_begin__ = 6;
            for (int k0__ = 0; k0__ < n; ++k0__) {
                check_greater_or_equal(function__,"b[k0__]",b[k0__],0);
                check_less_or_equal(function__,"b[k0__]",b[k0__],255);
            }
            current_statement_begin__ = 8;
            for (int k0__ = 0; k0__ < n; ++k0__) {
                check_greater_or_equal(function__,"h[k0__]",h[k0__],0);
                check_less_or_equal(function__,"h[k0__]",h[k0__],(2 * stan::math::pi()));
            }
            current_statement_begin__ = 9;
            for (int k0__ = 0; k0__ < n; ++k0__) {
                check_greater_or_equal(function__,"s[k0__]",s[k0__],0);
                check_less_or_equal(function__,"s[k0__]",s[k0__],1);
            }
            current_statement_begin__ = 10;
            for (int k0__ = 0; k0__ < n; ++k0__) {
                check_greater_or_equal(function__,"v[k0__]",v[k0__],0);
                check_less_or_equal(function__,"v[k0__]",v[k0__],1);
            }
            // initialize data variables


            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 15;
            ++num_params_r__;
            current_statement_begin__ = 16;
            ++num_params_r__;
            current_statement_begin__ = 17;
            ++num_params_r__;
            current_statement_begin__ = 18;
            ++num_params_r__;
            current_statement_begin__ = 19;
            ++num_params_r__;
            current_statement_begin__ = 20;
            ++num_params_r__;
            current_statement_begin__ = 23;
            ++num_params_r__;
            current_statement_begin__ = 24;
            ++num_params_r__;
            current_statement_begin__ = 25;
            ++num_params_r__;
            current_statement_begin__ = 26;
            ++num_params_r__;
            current_statement_begin__ = 27;
            ++num_params_r__;
            current_statement_begin__ = 28;
            ++num_params_r__;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model_color() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        stan::io::writer<double> writer__(params_r__,params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        if (!(context__.contains_r("mu_r")))
            throw std::runtime_error("variable mu_r missing");
        vals_r__ = context__.vals_r("mu_r");
        pos__ = 0U;
        context__.validate_dims("initialization", "mu_r", "double", context__.to_vec());
        double mu_r(0);
        mu_r = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,255,mu_r);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable mu_r: ") + e.what());
        }

        if (!(context__.contains_r("sigma_r")))
            throw std::runtime_error("variable sigma_r missing");
        vals_r__ = context__.vals_r("sigma_r");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma_r", "double", context__.to_vec());
        double sigma_r(0);
        sigma_r = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,sigma_r);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma_r: ") + e.what());
        }

        if (!(context__.contains_r("mu_g")))
            throw std::runtime_error("variable mu_g missing");
        vals_r__ = context__.vals_r("mu_g");
        pos__ = 0U;
        context__.validate_dims("initialization", "mu_g", "double", context__.to_vec());
        double mu_g(0);
        mu_g = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,255,mu_g);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable mu_g: ") + e.what());
        }

        if (!(context__.contains_r("sigma_g")))
            throw std::runtime_error("variable sigma_g missing");
        vals_r__ = context__.vals_r("sigma_g");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma_g", "double", context__.to_vec());
        double sigma_g(0);
        sigma_g = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,sigma_g);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma_g: ") + e.what());
        }

        if (!(context__.contains_r("mu_b")))
            throw std::runtime_error("variable mu_b missing");
        vals_r__ = context__.vals_r("mu_b");
        pos__ = 0U;
        context__.validate_dims("initialization", "mu_b", "double", context__.to_vec());
        double mu_b(0);
        mu_b = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,255,mu_b);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable mu_b: ") + e.what());
        }

        if (!(context__.contains_r("sigma_b")))
            throw std::runtime_error("variable sigma_b missing");
        vals_r__ = context__.vals_r("sigma_b");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma_b", "double", context__.to_vec());
        double sigma_b(0);
        sigma_b = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,sigma_b);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma_b: ") + e.what());
        }

        if (!(context__.contains_r("mu_h")))
            throw std::runtime_error("variable mu_h missing");
        vals_r__ = context__.vals_r("mu_h");
        pos__ = 0U;
        context__.validate_dims("initialization", "mu_h", "double", context__.to_vec());
        double mu_h(0);
        mu_h = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,(2 * stan::math::pi()),mu_h);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable mu_h: ") + e.what());
        }

        if (!(context__.contains_r("kappa_h")))
            throw std::runtime_error("variable kappa_h missing");
        vals_r__ = context__.vals_r("kappa_h");
        pos__ = 0U;
        context__.validate_dims("initialization", "kappa_h", "double", context__.to_vec());
        double kappa_h(0);
        kappa_h = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,kappa_h);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable kappa_h: ") + e.what());
        }

        if (!(context__.contains_r("mu_s")))
            throw std::runtime_error("variable mu_s missing");
        vals_r__ = context__.vals_r("mu_s");
        pos__ = 0U;
        context__.validate_dims("initialization", "mu_s", "double", context__.to_vec());
        double mu_s(0);
        mu_s = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,1,mu_s);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable mu_s: ") + e.what());
        }

        if (!(context__.contains_r("sigma_s")))
            throw std::runtime_error("variable sigma_s missing");
        vals_r__ = context__.vals_r("sigma_s");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma_s", "double", context__.to_vec());
        double sigma_s(0);
        sigma_s = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,sigma_s);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma_s: ") + e.what());
        }

        if (!(context__.contains_r("mu_v")))
            throw std::runtime_error("variable mu_v missing");
        vals_r__ = context__.vals_r("mu_v");
        pos__ = 0U;
        context__.validate_dims("initialization", "mu_v", "double", context__.to_vec());
        double mu_v(0);
        mu_v = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0,1,mu_v);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable mu_v: ") + e.what());
        }

        if (!(context__.contains_r("sigma_v")))
            throw std::runtime_error("variable sigma_v missing");
        vals_r__ = context__.vals_r("sigma_v");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma_v", "double", context__.to_vec());
        double sigma_v(0);
        sigma_v = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,sigma_v);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma_v: ") + e.what());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(vector<T__>& params_r__,
                 vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;

        try {
            // model parameters
            stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);

            local_scalar_t__ mu_r;
            (void) mu_r;  // dummy to suppress unused var warning
            if (jacobian__)
                mu_r = in__.scalar_lub_constrain(0,255,lp__);
            else
                mu_r = in__.scalar_lub_constrain(0,255);

            local_scalar_t__ sigma_r;
            (void) sigma_r;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma_r = in__.scalar_lb_constrain(0,lp__);
            else
                sigma_r = in__.scalar_lb_constrain(0);

            local_scalar_t__ mu_g;
            (void) mu_g;  // dummy to suppress unused var warning
            if (jacobian__)
                mu_g = in__.scalar_lub_constrain(0,255,lp__);
            else
                mu_g = in__.scalar_lub_constrain(0,255);

            local_scalar_t__ sigma_g;
            (void) sigma_g;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma_g = in__.scalar_lb_constrain(0,lp__);
            else
                sigma_g = in__.scalar_lb_constrain(0);

            local_scalar_t__ mu_b;
            (void) mu_b;  // dummy to suppress unused var warning
            if (jacobian__)
                mu_b = in__.scalar_lub_constrain(0,255,lp__);
            else
                mu_b = in__.scalar_lub_constrain(0,255);

            local_scalar_t__ sigma_b;
            (void) sigma_b;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma_b = in__.scalar_lb_constrain(0,lp__);
            else
                sigma_b = in__.scalar_lb_constrain(0);

            local_scalar_t__ mu_h;
            (void) mu_h;  // dummy to suppress unused var warning
            if (jacobian__)
                mu_h = in__.scalar_lub_constrain(0,(2 * stan::math::pi()),lp__);
            else
                mu_h = in__.scalar_lub_constrain(0,(2 * stan::math::pi()));

            local_scalar_t__ kappa_h;
            (void) kappa_h;  // dummy to suppress unused var warning
            if (jacobian__)
                kappa_h = in__.scalar_lb_constrain(0,lp__);
            else
                kappa_h = in__.scalar_lb_constrain(0);

            local_scalar_t__ mu_s;
            (void) mu_s;  // dummy to suppress unused var warning
            if (jacobian__)
                mu_s = in__.scalar_lub_constrain(0,1,lp__);
            else
                mu_s = in__.scalar_lub_constrain(0,1);

            local_scalar_t__ sigma_s;
            (void) sigma_s;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma_s = in__.scalar_lb_constrain(0,lp__);
            else
                sigma_s = in__.scalar_lb_constrain(0);

            local_scalar_t__ mu_v;
            (void) mu_v;  // dummy to suppress unused var warning
            if (jacobian__)
                mu_v = in__.scalar_lub_constrain(0,1,lp__);
            else
                mu_v = in__.scalar_lub_constrain(0,1);

            local_scalar_t__ sigma_v;
            (void) sigma_v;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma_v = in__.scalar_lb_constrain(0,lp__);
            else
                sigma_v = in__.scalar_lb_constrain(0);


            // transformed parameters



            // validate transformed parameters

            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            // model body

            current_statement_begin__ = 34;
            lp_accum__.add(uniform_log<propto__>(mu_r, 0, 255));
            current_statement_begin__ = 35;
            lp_accum__.add(uniform_log<propto__>(sigma_r, 0, 100));
            current_statement_begin__ = 36;
            lp_accum__.add(uniform_log<propto__>(mu_g, 0, 255));
            current_statement_begin__ = 37;
            lp_accum__.add(uniform_log<propto__>(sigma_g, 0, 100));
            current_statement_begin__ = 38;
            lp_accum__.add(uniform_log<propto__>(mu_b, 0, 255));
            current_statement_begin__ = 39;
            lp_accum__.add(uniform_log<propto__>(sigma_b, 0, 100));
            current_statement_begin__ = 41;
            lp_accum__.add(uniform_log<propto__>(mu_h, 0, (2 * stan::math::pi())));
            current_statement_begin__ = 42;
            lp_accum__.add(uniform_log<propto__>(kappa_h, 0, 2));
            current_statement_begin__ = 43;
            lp_accum__.add(uniform_log<propto__>(mu_s, 0, 1));
            current_statement_begin__ = 44;
            lp_accum__.add(uniform_log<propto__>(sigma_s, 0, 0.5));
            current_statement_begin__ = 45;
            lp_accum__.add(uniform_log<propto__>(mu_v, 0, 1));
            current_statement_begin__ = 46;
            lp_accum__.add(uniform_log<propto__>(sigma_v, 0, 0.5));
            current_statement_begin__ = 50;
            lp_accum__.add(normal_log<propto__>(r, mu_r, sigma_r));
            current_statement_begin__ = 51;
            lp_accum__.add(normal_log<propto__>(g, mu_g, sigma_g));
            current_statement_begin__ = 52;
            lp_accum__.add(normal_log<propto__>(b, mu_b, sigma_b));
            current_statement_begin__ = 54;
            lp_accum__.add(von_mises_log<propto__>(h, mu_h, kappa_h));
            current_statement_begin__ = 55;
            lp_accum__.add(normal_log<propto__>(s, mu_s, sigma_s));
            current_statement_begin__ = 56;
            lp_accum__.add(normal_log<propto__>(v, mu_v, sigma_v));

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("mu_r");
        names__.push_back("sigma_r");
        names__.push_back("mu_g");
        names__.push_back("sigma_g");
        names__.push_back("mu_b");
        names__.push_back("sigma_b");
        names__.push_back("mu_h");
        names__.push_back("kappa_h");
        names__.push_back("mu_s");
        names__.push_back("sigma_s");
        names__.push_back("mu_v");
        names__.push_back("sigma_v");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);
        static const char* function__ = "model_color_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        double mu_r = in__.scalar_lub_constrain(0,255);
        double sigma_r = in__.scalar_lb_constrain(0);
        double mu_g = in__.scalar_lub_constrain(0,255);
        double sigma_g = in__.scalar_lb_constrain(0);
        double mu_b = in__.scalar_lub_constrain(0,255);
        double sigma_b = in__.scalar_lb_constrain(0);
        double mu_h = in__.scalar_lub_constrain(0,(2 * stan::math::pi()));
        double kappa_h = in__.scalar_lb_constrain(0);
        double mu_s = in__.scalar_lub_constrain(0,1);
        double sigma_s = in__.scalar_lb_constrain(0);
        double mu_v = in__.scalar_lub_constrain(0,1);
        double sigma_v = in__.scalar_lb_constrain(0);
        vars__.push_back(mu_r);
        vars__.push_back(sigma_r);
        vars__.push_back(mu_g);
        vars__.push_back(sigma_g);
        vars__.push_back(mu_b);
        vars__.push_back(sigma_b);
        vars__.push_back(mu_h);
        vars__.push_back(kappa_h);
        vars__.push_back(mu_s);
        vars__.push_back(sigma_s);
        vars__.push_back(mu_v);
        vars__.push_back(sigma_v);

        // declare and define transformed parameters
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {



            // validate transformed parameters

            // write transformed parameters
            if (include_tparams__) {
            }
            if (!include_gqs__) return;
            // declare and define generated quantities



            // validate generated quantities

            // write generated quantities
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng,params_r_vec,params_i_vec,vars_vec,include_tparams,include_gqs,pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_color";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_r";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_r";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_g";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_g";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_h";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "kappa_h";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_s";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_s";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_v";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_v";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }


        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_r";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_r";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_g";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_g";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_b";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_h";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "kappa_h";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_s";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_s";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu_v";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma_v";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }


        if (!include_gqs__) return;
    }

}; // model

}

typedef model_color_namespace::model_color stan_model;


#endif
