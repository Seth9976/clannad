// 函数: sub_72fbe0
// 地址: 0x72fbe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x1c0)
void* var_28 = edi
int32_t* eax = *(edi + 0x18)
int32_t edx = *eax
int32_t edx_1 = eax[1]
int32_t eax_1 = eax[2]
int32_t* result = *(arg1 + 0x5c)
void* result_1 = result

if (arg4 s> 0)
    int32_t* ecx_1 = arg3
    result = arg2 - ecx_1
    arg2 = result
    int32_t i
    
    do
        void* eax_3 = *(result + ecx_1)
        int32_t esi_1 = 0
        int32_t edx_2 = *(edi + 0x30)
        int32_t ecx_4 = edx_2 << 6
        int32_t ebx_2 = *(edi + 0x38) + ecx_4
        int32_t edx_4 = *(edi + 0x34) + ecx_4
        int32_t ebx_4 = *(edi + 0x3c) + ecx_4
        int32_t var_24_1 = edx_4
        arg1 = result_1
        
        if (result_1 != 0)
            void* edi_2 = *ecx_1
            void* j
            
            do
                eax_3 += 3
                edi_2 += 1
                char ebx_6 = (*(edx_4 + (esi_1 << 2)) + zx.d(*(eax_3 - 3)))[edx]
                    + (*(ebx_2 + (esi_1 << 2)) + zx.d(*(eax_3 - 2)))[edx_1]
                char* edx_12 = *(ebx_4 + (esi_1 << 2)) + zx.d(*(eax_3 - 1))
                esi_1 = (esi_1 + 1) & 0xf
                edx_4 = var_24_1
                j = arg1
                arg1 -= 1
                *(edi_2 - 1) = ebx_6 + edx_12[eax_1]
            while (j != 1)
            edi = var_28
        
        ecx_1 = &arg3[1]
        i = arg4
        arg4 -= 1
        *(edi + 0x30) = (edx_2 + 1) & 0xf
        result = arg2
        arg3 = ecx_1
    while (i != 1)

return result
