// 函数: sub_448129
// 地址: 0x448129
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* edi_1 = *(*(*(arg1 + 0xb0) + (arg2[5] << 2)) + 0x40)
int32_t* var_14_1
void* ecx_3

if (edi_1 == 0)
    var_14_1 = arg2
    ecx_3 = arg1
else
    void* eax_2 = *(arg1 + 0x38)
    int32_t ecx_1 = *(eax_2 + 8)
    
    if (ecx_1 u> 1)
    label_448177:
        
        for (int32_t* i = *(edi_1 + 0x10); i != edi_1; i = i[4])
            void* ecx_4 = *i
            
            if (ecx_4 != 0 && (*(ecx_4 + 0x119) & 1) != 0)
                int32_t result = sub_4426f0(ecx_4, i[1])
                
                if (result s< 0)
                    return result
        
        if ((*(arg1 + 0x119) & 1) == 0)
            return 0
        
        var_14_1 = arg2
        ecx_3 = arg1
    else
        if (ecx_1 == 0)
            return 0
        
        int32_t ecx_2 = *(eax_2 + 0xc)
        
        if (ecx_2 == arg1)
            var_14_1 = arg2
            ecx_3 = arg1
        else
            if (ecx_2 == 0)
                goto label_448177
            
            void** eax_3 = *(edi_1 + 0x10)
            
            while (true)
                if (eax_3 == edi_1)
                    goto label_448177
                
                if (ecx_2 == *eax_3)
                    var_14_1 = eax_3[1]
                    ecx_3 = *eax_3
                    break
                
                eax_3 = eax_3[4]

return sub_4426f0(ecx_3, var_14_1)
