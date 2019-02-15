//
//  minus.h
//  03-extern-C
//
//  Created by dudongge on 2019/1/31.
//  Copyright © 2019 dudongge. All rights reserved.
//

#ifndef minus_h
#define minus_h
//通过使用宏__cplusplus来区分C、C++环境 现在表明是C++环境
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
   int minus(int a, int b);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__SUM_H
