#include "./abstract_data_types.h"
#include "./geometry_operations.h"

extern SDL_Window* my_window;
extern SDL_Renderer* my_renderer;

extern int game_is_running;

extern Mesh* my_mesh;
extern Obj3D* my_obj;

extern Matrix4 projectionMatrix;
extern Vector4 vector4Null;
extern Vector4 vector4DirectionZ;
extern Vector4 lightDirection;


extern float zNear;
extern float zFar;
extern float fov;
extern float aspectRatio;
extern float fovRad;

extern float inputMoveX;
extern float inputMoveY;
extern float inputMoveZ;
extern float inputRotateX;
extern float inputRotateY;
extern float inputRotateZ;
extern int debugKey1;
extern int debugKey2;
extern int debugKey3;
extern int debugKey4;

extern int slider1;
extern int slider2;
extern int slider3;

extern float renderSpecAmount;
extern float renderSpecLowLimit;
extern float renderShadowLowLimit;