// 函数: sub_47f5fb
// 地址: 0x47f5fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* edx = **arg1
int32_t* eax_2 = *arg2
int32_t edi
int32_t var_10 = edi
int16_t* edi_1

if (0x5f76 != *edx && 0x5f72 != *edx && 0x5f6f != *edx)
    edi_1 = *eax_2

char* result
bool c_3

if (0x5f76 == *edx || 0x5f72 == *edx || 0x5f6f == *edx || 0x5f76 == *edi_1 || 0x5f72 == *edi_1
        || 0x5f6f == *edi_1)
    result = *eax_2
    void* esi_3 = edx
    
    while (true)
        edx.b = *esi_3
        char temp0_1 = *result
        c_3 = edx.b u< temp0_1
        
        if (edx.b != temp0_1)
            break
        
        if (edx.b != 0)
            edx.b = *(esi_3 + 1)
            char temp3_1 = result[1]
            c_3 = edx.b u< temp3_1
            
            if (edx.b != temp3_1)
                break
            
            esi_3 += 2
            result = &result[2]
            
            if (edx.b != 0)
                continue
        
        return nullptr
else
    void* esi = &edi_1[1]
    void* eax_3 = &edx[1]
    
    while (true)
        char ebx_1 = *eax_3
        char temp4_1 = *esi
        bool c_1 = ebx_1 u< temp4_1
        
        if (ebx_1 == temp4_1)
            if (ebx_1 == 0)
                result = nullptr
                break
            
            ebx_1 = *(eax_3 + 1)
            char temp7_1 = *(esi + 1)
            c_1 = ebx_1 u< temp7_1
            
            if (ebx_1 == temp7_1)
                eax_3 += 2
                esi += 2
                
                if (ebx_1 != 0)
                    continue
                
                result = nullptr
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        result = sbb.d(sbb.d(eax_3, eax_3, c_1), 0xffffffff, c_2)
        break
    
    if (result != 0)
        return result
    
    int32_t i = 2
    int16_t* esi_2 = edx
    char* result_1 = result
    char* result_2 = result
    result = nullptr
    c_3 = false
    bool z_3 = result_1 == result_2
    
    while (i != 0)
        char temp10_1 = *esi_2
        char temp11_1 = *edi_1
        c_3 = temp10_1 u< temp11_1
        z_3 = temp10_1 == temp11_1
        esi_2 += 1
        edi_1 += 1
        i -= 1
        
        if (not(z_3))
            break
    
    if (z_3)
        return result

bool c_4 = unimplemented  {sbb eax, eax}
return sbb.d(sbb.d(result, result, c_3), 0xffffffff, c_4)
