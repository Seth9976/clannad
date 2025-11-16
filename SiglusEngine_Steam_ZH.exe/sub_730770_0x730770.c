// 函数: sub_730770
// 地址: 0x730770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* ebx = arg1
void* ecx_1 = *(ebx + 0x1b8)
arg1 = ecx_1

if (*(ecx_1 + 0x5c) s>= *(ebx + 0x11c))
    int32_t edx_1 = *(ebx + 0xc4)
    int32_t i = 0
    int32_t var_8_1 = edx_1
    
    if (*(ebx + 0x24) s> 0)
        void* esi_1 = ecx_1 + 0xc
        
        do
            (*(esi_1 + 0x28))(ebx, edx_1, *(arg2 + (i << 2)) + ((*(esi_1 + 0x58) * *arg3) << 2), 
                esi_1)
            i += 1
            edx_1 = var_8_1 + 0x58
            esi_1 += 4
            var_8_1 = edx_1
        while (i s< *(ebx + 0x24))
        
        ecx_1 = arg1
    
    *(ecx_1 + 0x5c) = 0

int32_t edi_2 = *(ebx + 0x11c) - *(ecx_1 + 0x5c)

if (edi_2 u> *(ecx_1 + 0x60))
    edi_2 = *(ecx_1 + 0x60)

int32_t ecx_4 = *arg5
int32_t eax_7 = arg6 - ecx_4

if (edi_2 u> eax_7)
    edi_2 = eax_7

(*(*(ebx + 0x1bc) + 4))(ebx, arg1 + 0xc, *(arg1 + 0x5c), arg4 + (ecx_4 << 2), edi_2)
*arg5 += edi_2
*(arg1 + 0x60) -= edi_2
*(arg1 + 0x5c) += edi_2
int32_t* result = *(arg1 + 0x5c)

if (result s>= *(ebx + 0x11c))
    result = arg3
    *result += 1

return result
