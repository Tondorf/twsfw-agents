#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct twsfw_vec {
	float x; 
	float y;
	float z;
};

struct twsfw_agent {
	struct twsfw_vec r;
	struct twsfw_vec u;
	float v;
	float a;
	int32_t hp;
};

struct twsfw_missile {
	struct twsfw_vec r;
	struct twsfw_vec u;
	float v;
};

struct twsfw_world {
	float restitution;
	float agent_radius;
	float missile_acceleration;
};

float twsfw_agent_act(struct twsfw_agent *agents,
                      int32_t n_agents,
                      const struct twsfw_missile *missiles,
                      int32_t n_missiles,
                      const struct twsfw_world *world,
                      int32_t id,
                      int32_t *action);

#ifdef __cplusplus
} // extern "C"
#endif
