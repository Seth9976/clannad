// 函数: sub_620e30
// 地址: 0x620e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1
int32_t result = 0xff
int32_t var_14 = esi
int32_t result_1 = 0xff

if (esi s>= 0)
    void* ebx_1 = data_bac510
    int32_t edx_1 = 0
    int32_t var_c_1 = 0
    int32_t ecx = *(ebx_1 + 0x103f0)
    
    if (ecx s> 0)
        void* ebx_2 = ebx_1 + 0xbc30
        void* var_10_1 = ebx_2
        
        do
            int32_t* ecx_1 = *(ebx_2 - 4)
            int32_t edi_1 = 0
            int32_t ebx_5 = (*ebx_2 - ecx_1) s>> 2
            
            if (ebx_5 s> 0)
                do
                    if (*ecx_1 == esi)
                        esi = var_14
                        result = *(*(data_bac4e4 + 0x160) + (edx_1 << 3) + 4) * result_1 s/ 0xff
                        edx_1 = var_c_1
                        result_1 = result
                    
                    edi_1 += 1
                    ecx_1 = &ecx_1[1]
                while (edi_1 s< ebx_5)
            
            edx_1 += 1
            ebx_2 = var_10_1 + 0x48
            var_c_1 = edx_1
            var_10_1 = ebx_2
        while (edx_1 s< ecx)

return result
