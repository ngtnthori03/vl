

#include <stdio.h>

struct vl {
  void* value;
  struct vl* vls;

  enum vl_trait {
    VL__META = 0,
    VL__RAW = 1,
    VL__INTEGER = (1 << 1),
    

    vl_NONE = -1
  };

  struct vl (*vl_eval)(struct vl*);
  
};

int main(int argc. char const* args[]) {


  
  return 0;
}
