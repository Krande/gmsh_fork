
Geometry.HideCompounds = 0; // show underlying STL

Mesh.RemeshAlgorithm=1; //(0) nosplit (1) automatic (2) split metis

Mesh.CharacteristicLengthFactor=0.2;

Merge "skull.stl";

Compound Surface(200)={1};

Physical Surface (501)={200};
