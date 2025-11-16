// 函数: sub_732350
// 地址: 0x732350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t temp0 = arg5
arg5 -= 1
void* ecx = *(arg1 + 0x1bc)
int32_t i_2 = *(arg1 + 0x5c)
int32_t eax_1 = *(arg1 + 0x12c)
int32_t eax_2 = *(ecx + 8)
int32_t eax_3 = *(ecx + 0xc)
int32_t eax_4 = *(ecx + 0x10)
void* result = *(ecx + 0x14)
void* result_1 = result

if (temp0 - 1 s>= 0)
    int32_t* edi_1 = arg2
    int32_t edx = arg3 << 2
    int32_t temp1_1
    
    do
        int32_t ebx_1 = *(edx + *edi_1)
        int32_t esi_1 = *(edx + edi_1[2])
        int32_t* edi_2 = arg4
        result = *(edx + edi_1[1])
        int32_t ecx_3 = *(edx + edi_1[3])
        int32_t edx_1 = edx + 4
        edx = edx_1
        arg4 = &edi_2[1]
        edi_1 = arg2
        
        if (i_2 u> 0)
            void* ebx_2 = ebx_1 - result
            void* var_2c_1 = ebx_2
            void* esi_2 = esi_1 - result
            arg1 = *edi_2 + 2
            void* ecx_4 = ecx_3 - result
            void* var_30_1 = esi_2
            int32_t i_1 = i_2
            int32_t i
            
            do
                uint32_t ecx_6 = zx.d(*(esi_2 + result))
                result += 1
                uint32_t ebx_3 = zx.d(*(ebx_2 + result - 1))
                uint32_t edx_3 = zx.d(*(result - 1))
                uint32_t esi_3 = ecx_6 << 2
                *(arg1 - 2) = *(eax_1 - *(esi_3 + eax_2) - ebx_3 + 0xff)
                uint32_t edi_8 = edx_3 << 2
                esi_2 = var_30_1
                *(arg1 - 1) =
                    *(eax_1 - ((*(edi_8 + result_1) + *(esi_3 + eax_4)) s>> 0x10) - ebx_3 + 0xff)
                ebx_2 = var_2c_1
                *arg1 = *(eax_1 - *(edi_8 + eax_3) - ebx_3 + 0xff)
                *(arg1 + 1) = *(ecx_4 + result - 1)
                i = i_1
                i_1 -= 1
                arg1 += 4
            while (i != 1)
            edx = edx_1
            edi_1 = arg2
        
        temp1_1 = arg5
        arg5 -= 1
    while (temp1_1 - 1 s>= 0)

return result
