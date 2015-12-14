#ifndef _DELAUNAY_REFINEMENT_H
#define _DELAUNAY_REFINEMENT_H
#include "SPoint3.h"
#include <vector>
class Tet;
class Vertex;
void delaunayRefinement (const int numThreads, 
			 const int nptsatonce, 
			 std::vector<Vertex*> &S, 
			 std::vector<Tet*> &T,
			 double (*f)(const SPoint3 &p, void *), 
			 void *data); 
#endif
