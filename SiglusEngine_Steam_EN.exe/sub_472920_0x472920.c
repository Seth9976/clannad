// 函数: sub_472920
// 地址: 0x472920
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
bool cond:0 = *arg1 != 0
*arg2 = 0

if (cond:0)
    *arg1 = 0
else
    arg1[3] += zx.d(arg1[4].b) * data_1b14a28

uint32_t edx = arg1[1]

if (edx == 0)
    arg1[1] = edx
    return 

int32_t ecx = arg1[3]
int32_t ebx = arg1[2]

if (ecx u<= ebx)
    return 

var_8 = nullptr
int32_t eax_3 = sx.d(arg1[6].w)
int32_t eax_4 = sub_471cc0(eax_3, edx, ecx - ebx, 0xff, eax_3, 0, 1, &arg1[3], &var_8)

if (eax_4 == 0)
    arg1[1] = eax_4
    return 

*arg2 = var_8
