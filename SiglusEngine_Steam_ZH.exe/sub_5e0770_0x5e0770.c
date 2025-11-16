// 函数: sub_5e0770
// 地址: 0x5e0770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = 0
int32_t result = (*(arg1 + 0x80) - *(arg1 + 0x7c)) s/ 0x8c

if (result s> 0)
    int32_t ebx_1 = 0
    int32_t esi_2 = 0
    
    do
        void* edx_3 = arg1
        int32_t* eax_3 = *(edx_3 + 0x7c)
        
        if (*(eax_3 + ebx_1) == 1)
            void* esi_3 = data_bac4e8
            void* edi_2 = &eax_3[0xf] + ebx_1
            void* var_c
            int32_t* ecx = &var_c
            var_c = edi_2
            int32_t eax_4 = *(esi_3 + 0x30)
            
            if (&var_c u< eax_4)
                ecx = *(esi_3 + 0x2c)
                edx_3 = arg1
            
            if (&var_c u>= eax_4 || ecx u> &var_c)
                if (eax_4 == *(esi_3 + 0x34))
                    int32_t* var_20_2 = ecx
                    sub_530c10(esi_3 + 0x2c)
                    edx_3 = arg1
                
                void** eax_7 = *(esi_3 + 0x30)
                
                if (eax_7 != 0)
                    *eax_7 = edi_2
            else
                if (eax_4 == *(esi_3 + 0x34))
                    int32_t* var_20_1 = ecx
                    sub_530c10(esi_3 + 0x2c)
                    edx_3 = arg1
                
                int32_t* ecx_2 = *(esi_3 + 0x30)
                
                if (ecx_2 != 0)
                    *ecx_2 = *(*(esi_3 + 0x2c) + ((&var_c - ecx) s>> 2 << 2))
            
            *(esi_3 + 0x30) += 4
            esi_2 = var_10
        
        esi_2 += 1
        ebx_1 += 0x8c
        var_10 = esi_2
        result = (*(edx_3 + 0x80) - *(edx_3 + 0x7c)) s/ 0x8c
    while (esi_2 s< result)

return result
