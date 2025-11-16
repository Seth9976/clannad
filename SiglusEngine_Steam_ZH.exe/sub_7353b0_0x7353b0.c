// 函数: sub_7353b0
// 地址: 0x7353b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t i = 0
void* var_30 = ebx
int32_t i_1 = 0
void* edx = *(ebx + 0x19c)
int32_t ecx = *(ebx + 0x124)
void* result = *(ebx + 0xc4)

if (*(ebx + 0x24) s> 0)
    int32_t* ecx_2 = result + 0xc
    int32_t* var_10_1 = ecx_2
    
    do
        int32_t j_4 = divs.dp.d(sx.q(ecx_2[7] * *ecx_2), *(ebx + 0x124))
        result = *(*(edx + 0x38) + (i << 2))
        void* result_1 = result
        void* ebx_1 = *(*(edx + 0x3c) + (i << 2))
        int32_t edi = *(edx + (i << 2) + 8)
        int32_t j_3 = (ecx + 2) * j_4
        
        if (j_3 s> 0)
            void* ecx_5 = ebx_1
            void* eax_4 = result - ebx_1
            void* var_1c_1 = eax_4
            int32_t j
            
            do
                result = *(edi - ebx_1 + ecx_5)
                ecx_5 += 4
                *(ecx_5 - 4) = result
                *(eax_4 + ecx_5 - 4) = result
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        int32_t j_5 = j_4 * 2
        
        if (j_5 s> 0)
            int32_t* ecx_6 = ebx_1 + ((j_4 * ecx) << 2)
            void* edx_6 = edi + (((ecx - 2) * j_4) << 2)
            int32_t j_1
            
            do
                edx_6 += 4
                *(ebx_1 - edi + edx_6 - 4) = *(ecx_6 + edi - ebx_1)
                ecx_6 = &ecx_6[1]
                result = *(edx_6 - 4)
                ecx_6[-1] = result
                j_1 = j_5
                j_5 -= 1
            while (j_1 != 1)
        
        if (j_4 s> 0)
            int32_t* result_2 = result_1
            result = result_2 - (j_4 << 2)
            int32_t j_2
            
            do
                result += 4
                *(result - 4) = *result_2
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
        
        ebx = var_30
        i = i_1 + 1
        ecx_2 = &var_10_1[0x16]
        i_1 = i
        var_10_1 = ecx_2
    while (i s< *(ebx + 0x24))

return result
