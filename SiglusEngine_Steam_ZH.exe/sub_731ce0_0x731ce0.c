// 函数: sub_731ce0
// 地址: 0x731ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t temp0 = arg5
arg5 -= 1
void* ecx = *(arg1 + 0x1bc)
void* i_2 = *(arg1 + 0x5c)
int32_t eax_1 = *(arg1 + 0x12c)
int32_t eax_2 = *(ecx + 8)
int32_t eax_3 = *(ecx + 0xc)
int32_t eax_4 = *(ecx + 0x10)
void* result = *(ecx + 0x14)
void* result_1 = result

if (temp0 - 1 s>= 0)
    int32_t* edi_1 = arg4
    int32_t edx = arg3 << 2
    int32_t ebx_2
    
    do
        void* ebx_1 = *edi_1
        edi_1 = &edi_1[1]
        ebx_2 = arg5
        int32_t esi_1 = *(edx + *arg2)
        result = *(edx + arg2[1])
        int32_t ecx_3 = *(edx + arg2[2])
        edx += 4
        
        if (i_2 u> 0)
            void* esi_2 = esi_1 - result
            void* ebx_4 = ebx_1 + 2
            void* ecx_4 = ecx_3 - result
            void* var_24_1 = esi_2
            void* var_28_1 = ecx_4
            void* i_1 = i_2
            void* i
            
            do
                uint32_t ecx_5 = zx.d(*(ecx_4 + result))
                ebx_4 += 3
                uint32_t edi_2 = zx.d(*(esi_2 + result))
                result += 1
                uint32_t esi_3 = zx.d(*(result - 1))
                uint32_t edx_2 = ecx_5 << 2
                *(ebx_4 - 5) = (*(edx_2 + eax_2) + edi_2)[eax_1]
                *(ebx_4 - 4) =
                    *(((*(result_1 + (esi_3 << 2)) + *(edx_2 + eax_4)) s>> 0x10) + edi_2 + eax_1)
                esi_2 = var_24_1
                i = i_1
                i_1 -= 1
                *(ebx_4 - 3) = (*(eax_3 + (esi_3 << 2)) + edi_2)[eax_1]
                ecx_4 = var_28_1
            while (i != 1)
            ebx_2 = arg5
        
        arg5 = ebx_2 - 1
    while (ebx_2 - 1 s>= 0)

return result
