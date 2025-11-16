// 函数: sub_5b3f70
// 地址: 0x5b3f70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* var_10 = ebx
int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x2e8ba2e9, *(ebx + 0xa8) - *(ebx + 0xa4))
int32_t edx_3 = edx_2 s>> 8
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3
int32_t i_2 = i_1

if (i_1 s> 0)
    int32_t ecx = 0
    int32_t var_8_1 = 0
    int32_t i
    
    do
        void* ebx_2 = *(ebx + 0xa4) + ecx
        int32_t ecx_2 = *(ebx_2 + 0x148) - *(ebx_2 + 0x144)
        int32_t edx_4
        edx_4:result = muls.dp.d(0xba506bb7, ecx_2)
        int32_t j_1 = ecx_2 s/ 0x15fc
        
        if (j_1 s> 0)
            int32_t esi_2 = 0
            int32_t j
            
            do
                result = sub_5e4fc0(*(ebx_2 + 0x144) + esi_2)
                esi_2 += 0x15fc
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
        
        ebx = var_10
        ecx = var_8_1 + 0x580
        i = i_1
        i_1 -= 1
        var_8_1 = ecx
        i_2 = i_1
    while (i != 1)

return result
