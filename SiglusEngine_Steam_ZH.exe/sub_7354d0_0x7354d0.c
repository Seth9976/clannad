// 函数: sub_7354d0
// 地址: 0x7354d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* edi = *(arg1 + 0x19c)
int32_t result = *(arg1 + 0x124)
void* var_18 = edi
int32_t result_1 = result
int32_t i_1 = 0

if (*(arg1 + 0x24) s> 0)
    int32_t* ecx_1 = *(arg1 + 0xc4) + 0xc
    int32_t* var_14_1 = ecx_1
    void* ebx_1 = arg1
    
    do
        result = divs.dp.d(sx.q(ecx_1[7] * *ecx_1), *(ebx_1 + 0x124))
        int32_t var_c_1 = result
        void* ecx_4 = *(*(edi + 0x3c) + (i << 2))
        
        if (result s> 0)
            void* edi_1 = ecx_4 + (((result_1 + 2) * result) << 2)
            void* esi_1 = ecx_4 - (result << 2)
            void* edx_3 = *(*(edi + 0x38) + (i << 2)) - ecx_4
            void* ebx_3 = ecx_4 + (((result_1 + 1) * result) << 2)
            int32_t j
            
            do
                j = var_c_1
                var_c_1 -= 1
                ebx_3 += 4
                esi_1 += 4
                *(edx_3 + esi_1 - 4) = *(edx_3 + ebx_3 - 4)
                ecx_4 += 4
                edi_1 += 4
                *(esi_1 - 4) = *(ebx_3 - 4)
                *(edx_3 + edi_1 - 4) = *(edx_3 + ecx_4 - 4)
                result = *(ecx_4 - 4)
                *(edi_1 - 4) = result
            while (j != 1)
            i = i_1
            edi = var_18
        
        ebx_1 = arg1
        i += 1
        ecx_1 = &var_14_1[0x16]
        i_1 = i
        var_14_1 = ecx_1
    while (i s< *(ebx_1 + 0x24))

return result
