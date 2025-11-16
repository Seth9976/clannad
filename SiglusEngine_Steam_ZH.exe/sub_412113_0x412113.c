// 函数: sub_412113
// 地址: 0x412113
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg5
int32_t edi
int32_t var_28 = edi
int32_t edi_1 = 0
int32_t result = 0
int32_t var_10 = ebx
int32_t var_c = 0
arg5 = 0

if (*(arg1 + 0x260) u> 0)
    do
        void* eax_2 = *(arg1 + 0x25c) + edi_1
        void var_1c
        int32_t result_1 =
            sub_411b05(&var_1c, arg2, arg3, ebx, arg6, *(eax_2 + 4), *(eax_2 + 8), *(arg1 + 0x24c))
        result = result_1
        
        if (result_1 s< 0)
            goto label_4121c5
        
        arg5 += 1
        edi_1 += 0x14
    while (arg5 u< *(arg1 + 0x260))

uint32_t i = 0
int32_t ecx_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        ecx_1 += 1
        *(arg4 + (i << 2)) = 0xffff
        i = zx.d(ecx_1.w)
    while (i u< *(arg1 + 0x264))

uint32_t i_1 = 0
int32_t ebx_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        int32_t ecx_3 = *(arg3 + (i_1 << 2))
        
        if (ecx_3 != 0xffff)
            *(arg4 + (ecx_3 << 2)) = i_1
        
        ebx_1 += 1
        i_1 = zx.d(ebx_1.w)
    while (i_1 u< *(arg1 + 0x264))

label_4121c5:
j__free(var_c)
return result
