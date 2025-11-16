// 函数: sub_65d220
// 地址: 0x65d220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx = arg2
int32_t var_8_1 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg4 s< ebx)
    do
        int64_t* edi_1 = arg3 + esi_1 * 0xe
        
        if (sub_5cd6f0(edi_1, arg5) == 0)
            break
        
        int64_t* ecx_2 = var_8_1 + ebx * 0xe
        ebx = esi_1
        *ecx_2 = *edi_1
        ecx_2[1].d = edi_1[1].d
        int32_t eax_8
        eax_8.w = *(edi_1 + 0xc)
        *(ecx_2 + 0xc) = eax_8.w
        arg3 = var_8_1
        int32_t eax_10
        int32_t edx_2
        edx_2:eax_10 = sx.q(esi_1 - 1)
        esi_1 = (eax_10 - edx_2) s>> 1
    while (arg4 s< ebx)
    
    arg3 = var_8_1

int64_t* ecx_3 = arg3 + ebx * 0xe
*ecx_3 = *arg5
ecx_3[1].d = *(arg5 + 8)
int32_t result
result.w = arg5[6]
*(ecx_3 + 0xc) = result.w
return result
