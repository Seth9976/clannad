// 函数: sub_421830
// 地址: 0x421830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void** esi = arg7
int32_t ecx_2 = ((arg8 + 2) * (arg8 + 2)) << 2
esi[3] = arg9
int32_t arg_1c
esi[4] = arg_1c
int32_t eax_2 = arg10
*esi = (ecx_2 << 1) + 0x2c
esi[1] = arg8 + 2
esi[2] = arg8 + 2

if (arg2 != 0)
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(eax_2)
    eax_2 = (eax_3 - edx) s>> 1

bool cond:0 = data_13740ac != 0
esi[5] = eax_2
esi[6] = arg11
esi[7] = arg14
char arg_34
int32_t eax_6
eax_6.b = arg_34
esi[8].b = eax_6.b
eax_6.b = cond:0
esi[9] = ecx_2
esi[0xa].b = eax_6.b
*(esi + 0x29) = 0
void* edx_2

if (eax_6.b == 0)
    edx_2 = nullptr
else
    edx_2 = &esi[0xb + (arg8 + 2) * (arg8 + 2)]

if (arg3 == 0)
    uint32_t eax_10 = zx.d(arg4)
    sub_4c7f10(eax_10, edx_2, &esi[0xb], arg8 + 2, arg8 + 2, eax_10, 0, 0, arg12, arg13, arg12, 
        arg13, 1)
    return (ecx_2 << 1) + 0x2c + esi

char* ecx_5

if (arg3 == 1)
    ecx_5 = arg12
    
    if (data_108fec0 == 0)
        ecx_5 = nullptr
    
    goto label_4218fd

if (arg3 == 2)
    ecx_5 = arg12
label_4218fd:
    char* var_18_1 = &arg_34
    int32_t* var_1c_2 = &arg7
    sub_41f460(arg13, edx_2, &esi[0xb], arg8 + 2, arg8 + 2, arg5, arg8, arg6, nullptr, nullptr, 
        ecx_5, arg13, ecx_5.b, arg13, 1, 0xffffffff, &arg_1c, &arg9)
    
    if (arg3 == 1)
        *(esi + 0x29) = 1

return (ecx_2 << 1) + 0x2c + esi
