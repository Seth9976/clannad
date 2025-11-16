// 函数: sub_43a449
// 地址: 0x43a449
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t edi
int32_t var_14 = edi
int32_t var_8_1 = arg1
void*** eax = sub_42cfa1(0x50)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46bee5(eax, 0, 0, 0, 0, 1, arg1 + 0x20)

if (result != 0)
    void*** eax_2 = sub_42cfa1(0x24)
    void*** eax_3
    
    if (eax_2 == 0)
        eax_3 = nullptr
    else
        eax_3 = sub_46bbbb(eax_2, 3, 0x14, 1, 1, 0x200)
    
    result[4] = eax_3
    
    if (eax_3 != 0)
        void*** eax_4 = sub_42cfa1(0x40)
        void*** esi_2
        
        if (eax_4 == 0)
            esi_2 = nullptr
        else
            esi_2 = sub_46c032(eax_4, 4, 0, arg1 + 0x20)
        
        if (esi_2 != 0)
            result[8] = esi_2
            
            if (arg2 == 0)
            label_43a4e9:
                void*** eax_7 = sub_42cfa1(0x14)
                void*** eax_8
                
                if (eax_7 == 0)
                    eax_8 = nullptr
                else
                    eax_8 = sub_46b602(eax_7, result[8], 0, "Value")
                
                if (eax_8 != 0)
                    result[8] = eax_8
                    sub_4381dc(result)
                    return result
            else
                int32_t eax_6 = sub_46b5aa(arg2)
                esi_2[6] = eax_6
                
                if (eax_6 != 0)
                    goto label_43a4e9

return nullptr
