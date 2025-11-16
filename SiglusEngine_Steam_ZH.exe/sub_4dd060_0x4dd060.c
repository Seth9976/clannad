// 函数: sub_4dd060
// 地址: 0x4dd060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* esi = *(arg1 + 0x1ac)

if (*(esi + 0x30) != 0)
    goto label_4dd09f

int32_t result = (*(*(arg1 + 0x1b0) + 0xc))(arg1, *(esi + (*(esi + 0x40) << 2) + 0x38))

if (result != 0)
    int32_t eax_3 = *(esi + 0x4c) + 1
    *(esi + 0x30) = 1
    *(esi + 0x4c) = eax_3
label_4dd09f:
    int32_t eax_4 = *(esi + 0x44)
    
    if (eax_4 == 0)
    label_4dd0fe:
        int32_t ecx_6 = *(esi + 0x4c)
        *(esi + 0x48) = *(arg1 + 0x140) - 1
        bool cond:1_1 = ecx_6 != *(arg1 + 0x144)
        *(esi + 0x34) = 0
        
        if (not(cond:1_1))
            sub_4dcf30(arg1)
        
        *(esi + 0x44) = 1
        goto label_4dd145
    
    if (eax_4 == 1)
    label_4dd145:
        result = (*(*(arg1 + 0x1b4) + 4))(arg1, *(esi + (*(esi + 0x40) << 2) + 0x38), esi + 0x34, 
            *(esi + 0x48), arg2, arg3, arg4)
        
        if (*(esi + 0x34) u>= *(esi + 0x48))
            if (*(esi + 0x4c) == 1)
                sub_4dce50(arg1)
            
            int32_t edi_2 = *(arg1 + 0x140)
            *(esi + 0x40) ^= 1
            result = edi_2 + 1
            *(esi + 0x30) = 0
            *(esi + 0x34) = result
            *(esi + 0x48) = edi_2 + 2
            *(esi + 0x44) = 2
    else
        result = eax_4 - 2
        
        if (eax_4 == 2)
            (*(*(arg1 + 0x1b4) + 4))(arg1, *(esi + (*(esi + 0x40) << 2) + 0x38), esi + 0x34, 
                *(esi + 0x48), arg2, arg3, arg4)
            result = *(esi + 0x34)
            
            if (result u>= *(esi + 0x48))
                bool cond:2_1 = *arg3 u>= arg4
                *(esi + 0x44) = 0
                
                if (not(cond:2_1))
                    goto label_4dd0fe

return result
