// 函数: sub_4c8ad0
// 地址: 0x4c8ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4

if (ebx != 0)
    ebx = 1

*arg9 = zx.d(*arg3)
*arg10 = zx.d(*(arg3 + 1))
*arg11 = zx.d(*(arg3 + 3))
bool cond:1 = *arg5 != 0
void* var_8 = nullptr

if (cond:1)
    ebx = 0

arg9 = nullptr
BOOL eax_5

if (arg12 != 0)
    eax_5 = sub_4bb5f0(&var_8, 0 - 5 + arg2, &arg3[5], &var_8, &arg9, arg12)
else
    eax_5 = sub_4bb540(&arg9, &var_8, &arg3[5], &arg9)

void* ebx_1 = var_8
sub_4d6560(eax_5, eax_5, ebx_1, arg8)

if (ebx != 0)
    uint32_t* eax_7 = arg9
    *arg5 = ebx_1
    *arg6 = eax_7
    
    if (arg7 != 0)
        *arg7 = eax_5
    
    return *arg10 * *arg11

uint32_t* ebx_2 = arg9
void* esi_4 = ebx_2 + 2 + (zx.d(*ebx_2) << 2)
int32_t i_2 = *arg10 * *arg11

if (*arg5 == 0)
    int32_t eax_15 = i_2 << 2
    sub_4d6960(eax_15, arg6, arg5, eax_15, arg8)

uint32_t* ecx_5 = *arg6

if (i_2 s> 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        uint32_t eax_17 = zx.d(*esi_4)
        ecx_5 = &ecx_5[1]
        esi_4 += 1
        ecx_5[-1] = *(ebx_2 + 2 + (eax_17 << 2))
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_4d6c40(&var_8, &arg9)

if (arg7 != 0)
    *arg7 = i_2 << 2

return i_2 << 2
