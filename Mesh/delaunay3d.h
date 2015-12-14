#ifndef _DELAUNAY3D_H_
#define _DELAUNAY3D_H_
class MVertex;
class MTetrahedron;
void delaunayTriangulation (const int numThreads, 
			    const int nptsatonce,
			    std::vector<MVertex*> &S, 
			    std::vector<MTetrahedron*> &T);

#endif
