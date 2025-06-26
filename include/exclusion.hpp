#ifndef EXCLUSION_HPP
#define EXCLUSION_HPP

#include "jobs.hpp"

namespace NP {

    template<class Time>
	class TaskExclusionGroup { 
        private:
        std::vector<unsigned long> task_ids;
        std::vector<unsigned long> job_ids;



        public:
        TaskExclusionGroup() {

        }

    };
}


#endif