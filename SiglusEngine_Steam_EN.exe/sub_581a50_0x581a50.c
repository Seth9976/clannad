// 函数: sub_581a50
// 地址: 0x581a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg4
int32_t edi = 0
void* var_10 = nullptr
int32_t* esi = arg2
int32_t var_c = 0
int32_t var_8 = 0

if (i_1 s<= 0)
    return 

void* ecx_2
int32_t i

do
    char* ecx = *esi
    esi = &esi[1]
    uint32_t edx = zx.d(ecx[3])
    edi += edx
    var_8 += zx.d(*ecx) * edx
    var_c += zx.d(ecx[1]) * edx
    ecx_2 = var_10 + zx.d(ecx[2]) * edx
    var_10 = ecx_2
    i = i_1
    i_1 -= 1
while (i != 1)

if (edi == 0)
    return 

*arg3 = (divs.dp.d(sx.q(var_8), edi)).b
arg3[1] = (divs.dp.d(sx.q(var_c), edi)).b
arg3[2] = (divs.dp.d(sx.q(ecx_2), edi)).b

if (arg5 != 0)
    *arg5 = 1
