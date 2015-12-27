#include "decision.hpp"

#include <iostream>

using namespace std;

int branch0(const vector<int> &attrs);
int branch1(const vector<int> &attrs);
int branch320(const vector<int> &attrs);
int branch2(const vector<int> &attrs);
int branch53(const vector<int> &attrs);
int branch321(const vector<int> &attrs);
int branch540(const vector<int> &attrs);
int branch3(const vector<int> &attrs);
int branch14(const vector<int> &attrs);
int branch54(const vector<int> &attrs);
int branch153(const vector<int> &attrs);
int branch322(const vector<int> &attrs);
int branch421(const vector<int> &attrs);
int branch541(const vector<int> &attrs);
int branch616(const vector<int> &attrs);
int branch4(const vector<int> &attrs);
int branch15(const vector<int> &attrs);
int branch30(const vector<int> &attrs);
int branch55(const vector<int> &attrs);
int branch134(const vector<int> &attrs);
int branch154(const vector<int> &attrs);
int branch213(const vector<int> &attrs);
int branch323(const vector<int> &attrs);
int branch354(const vector<int> &attrs);
int branch422(const vector<int> &attrs);
int branch461(const vector<int> &attrs);
int branch542(const vector<int> &attrs);
int branch573(const vector<int> &attrs);
int branch617(const vector<int> &attrs);
int branch636(const vector<int> &attrs);
int branch19(const vector<int> &attrs);
int branch34(const vector<int> &attrs);
int branch56(const vector<int> &attrs);
int branch127(const vector<int> &attrs);
int branch135(const vector<int> &attrs);
int branch155(const vector<int> &attrs);
int branch178(const vector<int> &attrs);
int branch214(const vector<int> &attrs);
int branch249(const vector<int> &attrs);
int branch324(const vector<int> &attrs);
int branch347(const vector<int> &attrs);
int branch355(const vector<int> &attrs);
int branch390(const vector<int> &attrs);
int branch426(const vector<int> &attrs);
int branch462(const vector<int> &attrs);
int branch505(const vector<int> &attrs);
int branch543(const vector<int> &attrs);
int branch558(const vector<int> &attrs);
int branch574(const vector<int> &attrs);
int branch597(const vector<int> &attrs);
int branch618(const vector<int> &attrs);
int branch637(const vector<int> &attrs);
int branch656(const vector<int> &attrs);
int branch23(const vector<int> &attrs);
int branch38(const vector<int> &attrs);
int branch57(const vector<int> &attrs);
int branch72(const vector<int> &attrs);
int branch136(const vector<int> &attrs);
int branch156(const vector<int> &attrs);
int branch163(const vector<int> &attrs);
int branch179(const vector<int> &attrs);
int branch206(const vector<int> &attrs);
int branch215(const vector<int> &attrs);
int branch234(const vector<int> &attrs);
int branch250(const vector<int> &attrs);
int branch313(const vector<int> &attrs);
int branch325(const vector<int> &attrs);
int branch356(const vector<int> &attrs);
int branch379(const vector<int> &attrs);
int branch394(const vector<int> &attrs);
int branch427(const vector<int> &attrs);
int branch463(const vector<int> &attrs);
int branch486(const vector<int> &attrs);
int branch506(const vector<int> &attrs);
int branch544(const vector<int> &attrs);
int branch551(const vector<int> &attrs);
int branch562(const vector<int> &attrs);
int branch575(const vector<int> &attrs);
int branch582(const vector<int> &attrs);
int branch598(const vector<int> &attrs);
int branch605(const vector<int> &attrs);
int branch619(const vector<int> &attrs);
int branch626(const vector<int> &attrs);
int branch641(const vector<int> &attrs);
int branch657(const vector<int> &attrs);
int branch676(const vector<int> &attrs);
int branch42(const vector<int> &attrs);
int branch58(const vector<int> &attrs);
int branch65(const vector<int> &attrs);
int branch76(const vector<int> &attrs);
int branch137(const vector<int> &attrs);
int branch164(const vector<int> &attrs);
int branch171(const vector<int> &attrs);
int branch183(const vector<int> &attrs);
int branch216(const vector<int> &attrs);
int branch227(const vector<int> &attrs);
int branch235(const vector<int> &attrs);
int branch242(const vector<int> &attrs);
int branch251(const vector<int> &attrs);
int branch270(const vector<int> &attrs);
int branch326(const vector<int> &attrs);
int branch357(const vector<int> &attrs);
int branch383(const vector<int> &attrs);
int branch395(const vector<int> &attrs);
int branch406(const vector<int> &attrs);
int branch428(const vector<int> &attrs);
int branch451(const vector<int> &attrs);
int branch464(const vector<int> &attrs);
int branch471(const vector<int> &attrs);
int branch487(const vector<int> &attrs);
int branch507(const vector<int> &attrs);
int branch526(const vector<int> &attrs);
int branch566(const vector<int> &attrs);
int branch583(const vector<int> &attrs);
int branch590(const vector<int> &attrs);
int branch606(const vector<int> &attrs);
int branch645(const vector<int> &attrs);
int branch658(const vector<int> &attrs);
int branch665(const vector<int> &attrs);
int branch677(const vector<int> &attrs);
int branch704(const vector<int> &attrs);
int branch46(const vector<int> &attrs);
int branch77(const vector<int> &attrs);
int branch84(const vector<int> &attrs);
int branch184(const vector<int> &attrs);
int branch220(const vector<int> &attrs);
int branch252(const vector<int> &attrs);
int branch259(const vector<int> &attrs);
int branch271(const vector<int> &attrs);
int branch286(const vector<int> &attrs);
int branch327(const vector<int> &attrs);
int branch358(const vector<int> &attrs);
int branch399(const vector<int> &attrs);
int branch407(const vector<int> &attrs);
int branch414(const vector<int> &attrs);
int branch429(const vector<int> &attrs);
int branch475(const vector<int> &attrs);
int branch491(const vector<int> &attrs);
int branch508(const vector<int> &attrs);
int branch530(const vector<int> &attrs);
int branch649(const vector<int> &attrs);
int branch666(const vector<int> &attrs);
int branch678(const vector<int> &attrs);
int branch685(const vector<int> &attrs);
int branch85(const vector<int> &attrs);
int branch108(const vector<int> &attrs);
int branch188(const vector<int> &attrs);
int branch260(const vector<int> &attrs);
int branch272(const vector<int> &attrs);
int branch279(const vector<int> &attrs);
int branch287(const vector<int> &attrs);
int branch298(const vector<int> &attrs);
int branch328(const vector<int> &attrs);
int branch359(const vector<int> &attrs);
int branch433(const vector<int> &attrs);
int branch476(const vector<int> &attrs);
int branch495(const vector<int> &attrs);
int branch509(const vector<int> &attrs);
int branch516(const vector<int> &attrs);
int branch689(const vector<int> &attrs);
int branch86(const vector<int> &attrs);
int branch112(const vector<int> &attrs);
int branch192(const vector<int> &attrs);
int branch291(const vector<int> &attrs);
int branch299(const vector<int> &attrs);
int branch306(const vector<int> &attrs);
int branch360(const vector<int> &attrs);
int branch434(const vector<int> &attrs);
int branch693(const vector<int> &attrs);
int branch87(const vector<int> &attrs);
int branch116(const vector<int> &attrs);
int branch196(const vector<int> &attrs);
int branch435(const vector<int> &attrs);
int branch697(const vector<int> &attrs);
int branch88(const vector<int> &attrs);
int branch120(const vector<int> &attrs);
int branch92(const vector<int> &attrs);


int decision(const vector<int> &attrs) {
  return branch0(attrs);
}

void decision(const vector<vector<int>> &attr_list) {
  for(auto &attrs : attr_list) {
    cout << branch0(attrs) << endl;
  }
}

int branch0(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch1(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch320(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch2(const vector<int> &attrs) {
  if(attrs[3] >= 42) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch53(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch321(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch540(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch3(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch14(const vector<int> &attrs) {
  if(attrs[1] >= 30) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch54(const vector<int> &attrs) {
  if(attrs[10] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch153(const vector<int> &attrs) {
  if(attrs[2] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch322(const vector<int> &attrs) {
  if(attrs[4] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch421(const vector<int> &attrs) {
  if(attrs[2] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch541(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch616(const vector<int> &attrs) {
  if(attrs[3] >= 78) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch4(const vector<int> &attrs) {
  if(attrs[13] >= 2) {
    return 2;
  } else {
    return 1;
  }
}

int branch15(const vector<int> &attrs) {
  if(attrs[6] >= 4) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch30(const vector<int> &attrs) {
  if(attrs[3] >= 49) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch55(const vector<int> &attrs) {
  if(attrs[9] >= 26) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch134(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch154(const vector<int> &attrs) {
  if(attrs[5] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch213(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch323(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch354(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch422(const vector<int> &attrs) {
  if(attrs[4] >= 5) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch461(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch542(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch573(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch617(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch636(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch19(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch34(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch56(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch127(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return 1;
  } else {
    return 2;
  }
}

int branch135(const vector<int> &attrs) {
  if(attrs[9] >= 27) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch155(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch178(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch214(const vector<int> &attrs) {
  if(attrs[2] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch249(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch324(const vector<int> &attrs) {
  if(attrs[13] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch347(const vector<int> &attrs) {
  return 1;
}

int branch355(const vector<int> &attrs) {
  if(attrs[9] >= 32) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch390(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch426(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch462(const vector<int> &attrs) {
  if(attrs[11] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch505(const vector<int> &attrs) {
  if(attrs[3] >= 10) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch543(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch558(const vector<int> &attrs) {
  if(attrs[3] >= 29) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch574(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch597(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch618(const vector<int> &attrs) {
  if(attrs[9] >= 31) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch637(const vector<int> &attrs) {
  if(attrs[3] >= 113) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch656(const vector<int> &attrs) {
  if(attrs[3] >= 78) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch23(const vector<int> &attrs) {
  return 1;
}

int branch38(const vector<int> &attrs) {
  if(attrs[3] >= 49) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch57(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch72(const vector<int> &attrs) {
  if(attrs[3] >= 66) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch136(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch156(const vector<int> &attrs) {
  return 1;
}

int branch163(const vector<int> &attrs) {
  if(attrs[3] >= 16) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch179(const vector<int> &attrs) {
  if(attrs[3] >= 85) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch206(const vector<int> &attrs) {
  return 1;
}

int branch215(const vector<int> &attrs) {
  if(attrs[3] >= 26) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch234(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch250(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch313(const vector<int> &attrs) {
  return 1;
}

int branch325(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch356(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch379(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch394(const vector<int> &attrs) {
  if(attrs[3] >= 14) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch427(const vector<int> &attrs) {
  if(attrs[3] >= 16) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch463(const vector<int> &attrs) {
  if(attrs[15] >= 1) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch486(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch506(const vector<int> &attrs) {
  if(attrs[9] >= 34) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch544(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return 1;
  } else {
    return 2;
  }
}

int branch551(const vector<int> &attrs) {
  return 1;
}

int branch562(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch575(const vector<int> &attrs) {
  return 1;
}

int branch582(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch598(const vector<int> &attrs) {
  return 1;
}

int branch605(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch619(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return 1;
  } else {
    return 2;
  }
}

int branch626(const vector<int> &attrs) {
  return 1;
}

int branch641(const vector<int> &attrs) {
  if(attrs[1] >= 30) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch657(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch676(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch42(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch58(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return 1;
  } else {
    return 2;
  }
}

int branch65(const vector<int> &attrs) {
  return 1;
}

int branch76(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch137(const vector<int> &attrs) {
  return 1;
}

int branch164(const vector<int> &attrs) {
  return 1;
}

int branch171(const vector<int> &attrs) {
  return 1;
}

int branch183(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch216(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch227(const vector<int> &attrs) {
  return 1;
}

int branch235(const vector<int> &attrs) {
  return 1;
}

int branch242(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return 1;
  } else {
    return 2;
  }
}

int branch251(const vector<int> &attrs) {
  if(attrs[9] >= 29) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch270(const vector<int> &attrs) {
  if(attrs[2] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch326(const vector<int> &attrs) {
  if(attrs[7] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch357(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch383(const vector<int> &attrs) {
  if(attrs[9] >= 32) {
    return 2;
  } else {
    return 1;
  }
}

int branch395(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch406(const vector<int> &attrs) {
  if(attrs[8] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch428(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch451(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return 1;
  } else {
    return 2;
  }
}

int branch464(const vector<int> &attrs) {
  return 1;
}

int branch471(const vector<int> &attrs) {
  if(attrs[4] >= 5) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch487(const vector<int> &attrs) {
  if(attrs[1] >= 30) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch507(const vector<int> &attrs) {
  if(attrs[3] >= 10) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch526(const vector<int> &attrs) {
  if(attrs[3] >= 48) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch566(const vector<int> &attrs) {
  return 1;
}

int branch583(const vector<int> &attrs) {
  if(attrs[1] >= 24) {
    return 2;
  } else {
    return 1;
  }
}

int branch590(const vector<int> &attrs) {
  if(attrs[1] >= 24) {
    return 1;
  } else {
    return 2;
  }
}

int branch606(const vector<int> &attrs) {
  if(attrs[1] >= 18) {
    return 1;
  } else {
    return 2;
  }
}

int branch645(const vector<int> &attrs) {
  if(attrs[8] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch658(const vector<int> &attrs) {
  return 1;
}

int branch665(const vector<int> &attrs) {
  if(attrs[3] >= 52) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch677(const vector<int> &attrs) {
  if(attrs[3] >= 76) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch704(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return 1;
  } else {
    return 2;
  }
}

int branch46(const vector<int> &attrs) {
  return 1;
}

int branch77(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return 1;
  } else {
    return 2;
  }
}

int branch84(const vector<int> &attrs) {
  if(attrs[9] >= 32) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch184(const vector<int> &attrs) {
  if(attrs[3] >= 85) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch220(const vector<int> &attrs) {
  return 1;
}

int branch252(const vector<int> &attrs) {
  if(attrs[2] >= 4) {
    return 1;
  } else {
    return 2;
  }
}

int branch259(const vector<int> &attrs) {
  if(attrs[3] >= 18) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch271(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch286(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch327(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch358(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch399(const vector<int> &attrs) {
  return 1;
}

int branch407(const vector<int> &attrs) {
  return 1;
}

int branch414(const vector<int> &attrs) {
  return 1;
}

int branch429(const vector<int> &attrs) {
  if(attrs[7] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch475(const vector<int> &attrs) {
  if(attrs[9] >= 35) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch491(const vector<int> &attrs) {
  if(attrs[3] >= 27) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch508(const vector<int> &attrs) {
  if(attrs[9] >= 33) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch530(const vector<int> &attrs) {
  if(attrs[0] >= 4) {
    return 2;
  } else {
    return 1;
  }
}

int branch649(const vector<int> &attrs) {
  return 1;
}

int branch666(const vector<int> &attrs) {
  return 1;
}

int branch678(const vector<int> &attrs) {
  return 1;
}

int branch685(const vector<int> &attrs) {
  if(attrs[9] >= 57) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch85(const vector<int> &attrs) {
  if(attrs[7] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch108(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return 2;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch188(const vector<int> &attrs) {
  if(attrs[9] >= 42) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch260(const vector<int> &attrs) {
  return 1;
}

int branch272(const vector<int> &attrs) {
  return 1;
}

int branch279(const vector<int> &attrs) {
  return 1;
}

int branch287(const vector<int> &attrs) {
  if(attrs[3] >= 75) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch298(const vector<int> &attrs) {
  if(attrs[5] >= 5) {
    return branch#{left_id}(attrs);
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch328(const vector<int> &attrs) {
  if(attrs[5] >= 5) {
    return 2;
  } else {
    return 1;
  }
}

int branch359(const vector<int> &attrs) {
  if(attrs[2] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch433(const vector<int> &attrs) {
  if(attrs[22] >= 1) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch476(const vector<int> &attrs) {
  if(attrs[4] >= 5) {
    return 2;
  } else {
    return 1;
  }
}

int branch495(const vector<int> &attrs) {
  return 1;
}

int branch509(const vector<int> &attrs) {
  return 1;
}

int branch516(const vector<int> &attrs) {
  return 1;
}

int branch689(const vector<int> &attrs) {
  if(attrs[3] >= 76) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch86(const vector<int> &attrs) {
  if(attrs[9] >= 27) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch112(const vector<int> &attrs) {
  if(attrs[2] >= 3) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch192(const vector<int> &attrs) {
  if(attrs[19] >= 1) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch291(const vector<int> &attrs) {
  return 1;
}

int branch299(const vector<int> &attrs) {
  return 1;
}

int branch306(const vector<int> &attrs) {
  if(attrs[0] >= 3) {
    return 2;
  } else {
    return 1;
  }
}

int branch360(const vector<int> &attrs) {
  return 1;
}

int branch434(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch693(const vector<int> &attrs) {
  if(attrs[9] >= 55) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch87(const vector<int> &attrs) {
  if(attrs[0] >= 2) {
    return branch#{left_id}(attrs);
  } else {
    return 1;
  }
}

int branch116(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch196(const vector<int> &attrs) {
  return 1;
}

int branch435(const vector<int> &attrs) {
  return 1;
}

int branch697(const vector<int> &attrs) {
  if(attrs[3] >= 76) {
    return 2;
  } else {
    return 1;
  }
}

int branch88(const vector<int> &attrs) {
  if(attrs[1] >= 36) {
    return 1;
  } else {
    return branch#{right_id}(attrs);
  }
}

int branch120(const vector<int> &attrs) {
  return 1;
}

int branch92(const vector<int> &attrs) {
  return 1;
}


