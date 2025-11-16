// 函数: sub_4dd960
// 地址: 0x4dd960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
void* edi_1 = arg1
void* esi = *(edi_1 + 0x1b0)
int32_t ebx = 0
int32_t result = 0

if (*(edi_1 + 0xe0) != 0 && *(edi_1 + 0xa4) != 0)
    if (*(esi + 0x70) == 0)
        *(esi + 0x70) = (**(edi_1 + 4))(edi_1, 1, *(edi_1 + 0x24) * 0x18)
    
    int32_t ecx_2 = *(edi_1 + 0x24)
    int32_t esi_1 = *(esi + 0x70)
    
    if (ecx_2 s<= 0)
        return result
    
    int32_t var_8_1 = 0
    int32_t* var_c_1 = *(edi_1 + 0xdc) + 0x4c
    
    while (true)
        int16_t* eax_6 = *var_c_1
        
        if (eax_6 == 0)
            return 0
        
        if (*eax_6 == 0)
            return 0
        
        if (eax_6[1] == 0)
            return 0
        
        if (eax_6[8] == 0)
            return 0
        
        if (eax_6[0x10] == 0)
            return 0
        
        if (eax_6[9] == 0)
            return 0
        
        if (eax_6[2] == 0)
            return 0
        
        int32_t* eax_7 = *(edi_1 + 0xa4)
        void* eax_8 = eax_7 + var_8_1
        
        if (*(eax_7 + var_8_1) s< 0)
            return 0
        
        void* ecx_4 = eax_8 + 4
        int32_t i_1 = 5
        int32_t i
        
        do
            int32_t eax_9 = *ecx_4
            *(esi_1 - eax_8 + ecx_4) = eax_9
            
            if (eax_9 != 0)
                result = 1
            
            ecx_4 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        esi_1 += 0x18
        ebx += 1
        var_8_1 += 0x100
        var_c_1 = &var_c_1[0x15]
        
        if (ebx s>= ecx_2)
            return result
        
        edi_1 = arg1

return 0
