// 函数: sub_41f274
// 地址: 0x41f274
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t i = 0

if (*(arg1 + 0x68) u> 0)
    void* eax_1 = arg2 + 8
    
    do
        float* ecx_2 = 0xfffffff8 - arg2 + eax_1 + *(arg1 + 0x5c) + 0x10
        i += 1
        *(eax_1 - 8) = fconvert.s(fconvert.t(*ecx_2) + fconvert.t(*(eax_1 - 8)))
        *(eax_1 - 4) = fconvert.s(fconvert.t(ecx_2[1]) + fconvert.t(*(eax_1 - 4)))
        *eax_1 = fconvert.s(fconvert.t(ecx_2[2]) + fconvert.t(*eax_1))
        eax_1 += 0x10
        *(eax_1 - 0xc) = fconvert.s(fconvert.t(ecx_2[3]) + fconvert.t(*(eax_1 - 0xc)))
    while (i u< *(arg1 + 0x68))

int32_t ecx_6 = (*(arg1 + 0x68) + 2) << 4
__builtin_memset(__builtin_memset(*(arg1 + 0x5c), 0, ecx_6 u>> 2 << 2), 0, ecx_6 & 3)
return 0
