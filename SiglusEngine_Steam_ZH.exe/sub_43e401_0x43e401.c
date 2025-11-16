// 函数: sub_43e401
// 地址: 0x43e401
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t edi
int32_t var_1c = edi

if (esi == 0 || *(esi + 4) != 0xd)
    return nullptr

int32_t eax_1 = *(esi + 0x18) * *(esi + 0x14)
int32_t* eax_3 = sub_745f3f(eax_1 << 4)
void* var_10_1 = eax_3
void*** result

if (eax_3 == 0)
labelid_6:
    result = nullptr
else if (sub_43cb9f(arg1, esi, eax_3) s< 0)
label_43e514:
    result = nullptr
else
    void*** eax_5 = sub_42cfa1(0x50)
    
    if (eax_5 == 0)
        result = nullptr
    else
        result = sub_46bee5(eax_5, 0, 0, 0, 0, 1, esi + 0x30)
    
    if (result == 0)
    label_43e514_1:
        result = nullptr
    else
        int32_t eax_8
        
        if (*(esi + 0x10) != 0)
            eax_8 = (*(**(esi + 0x10) + 4))()
            result[4] = eax_8
        
        if (*(esi + 0x10) != 0 && eax_8 == 0)
        label_43e514_2:
            result = nullptr
        else
            int32_t var_8_1 = 0
            void* edi_1 = &result[8]
            
            if (eax_1 u> 0)
                arg2 = var_10_1
                
                do
                    void*** eax_10 = sub_42cfa1(0x14)
                    void*** eax_11
                    
                    if (eax_10 == 0)
                        eax_11 = nullptr
                    else
                        eax_11 = sub_46b602(eax_10, 0, 0, "Value")
                    
                    *edi_1 = eax_11
                    
                    if (eax_11 == 0)
                        goto label_43e514_2
                    
                    void*** eax_12 = sub_42cfa1(0x40)
                    void*** eax_13
                    
                    if (eax_12 == 0)
                        eax_13 = nullptr
                    else
                        eax_13 = sub_46bfe6(eax_12, arg2, esi + 0x30)
                    
                    *(*edi_1 + 8) = eax_13
                    
                    if (eax_13 == 0)
                        goto label_43e514_2
                    
                    arg2 += 0x10
                    edi_1 = *edi_1 + 0xc
                    var_8_1 += 1
                while (var_8_1 u< eax_1)
            
            sub_4381dc(result)

j__free(var_10_1)
return result
