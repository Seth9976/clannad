// 函数: sub_4716f6
// 地址: 0x4716f6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t edi
int32_t var_c = edi

if (arg2 == 0)
    return 0

void* ecx = arg1[2]
var_8 = nullptr
int32_t* eax_2

if (arg4 u>= *(ecx + 4))
    eax_2 = nullptr
else
    eax_2 = *(*(ecx + 0x10) + (arg4 << 2))

if (eax_2 == 0)
    return 0x80004005

int32_t* eax_3 = sub_49f5fb(ecx, eax_2)
void* ecx_1 = arg1[2]
void* const ecx_3

if (eax_3 u>= *(ecx_1 + 4))
    ecx_3 = nullptr
else
    ecx_3 = *(*(ecx_1 + 0x10) + (eax_3 << 2))

if (ecx_3 == 0)
    return 0x8007000e

*(ecx_3 + 4) |= 0x40
int32_t edx_2 = *(ecx_3 + 4)

if ((edx_2.b & 0x10) != 0 && edx_2.b s>= 0)
    if ((0x200 & edx_2) != 0 && (*(arg1[2] + 0x70) & 0x200) != 0)
        *(ecx_3 + 4) = edx_2 | 0x400
    
    int32_t edx_4 = *(ecx_3 + 4)
    
    if ((0x200 & edx_4) == 0 && (*(arg1[2] + 0x70) & 0x400) != 0)
        *(ecx_3 + 4) = edx_4 | 0x100400

return sub_46f2d5(arg1, arg2, arg3, eax_3, arg5, arg6, arg7, &var_8, arg7, arg8, nullptr)
