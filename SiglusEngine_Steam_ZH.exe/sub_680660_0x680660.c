// 函数: sub_680660
// 地址: 0x680660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t var_8_1 = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2 - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg4 s>= arg2)
    int32_t eax_11 = *arg5
    *(arg3 + (arg2 << 2)) = eax_11
    return eax_11

int32_t ecx_1

do
    int32_t* ebx_1 = arg3 + (esi_1 << 2)
    ecx_1 = var_8_1
    
    if (arg6(ebx_1, arg5) == 0)
        break
    
    *(arg3 + (ecx_1 << 2)) = *ebx_1
    ecx_1 = esi_1
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(esi_1 - 1)
    var_8_1 = ecx_1
    esi_1 = (eax_6 - edx_1) s>> 1
while (arg4 s< ecx_1)

int32_t eax_9 = *arg5
*(arg3 + (ecx_1 << 2)) = eax_9
return eax_9
