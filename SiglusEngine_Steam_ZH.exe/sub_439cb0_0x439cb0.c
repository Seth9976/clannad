// 函数: sub_439cb0
// 地址: 0x439cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
int32_t var_8_1 = ecx

if (arg1 == 0)
    return nullptr

void* ebx_1 = &arg1[4]
void*** eax_1 = sub_42cfa1(0x50)
void*** result

if (eax_1 == 0)
    result = nullptr
else
    result = sub_46bee5(eax_1, 0, 0, 0, 0, 1, ebx_1)

if (result != 0)
    void*** eax_3 = sub_42cfa1(0x24)
    void*** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_46bbbb(eax_3, 3, 0xe, 1, 1, 0x200)
    
    result[4] = eax_4
    
    if (eax_4 != 0)
        void*** eax_5 = sub_42cfa1(0x40)
        arg1 = eax_5
        void*** eax_6
        
        if (eax_5 == 0)
            eax_6 = nullptr
        else
            char* edi_1 = *(ebx_1 + 8)
            char* edx_1 = edi_1
            
            do
                eax_5.b = *edx_1
                edx_1 = &edx_1[1]
            while (eax_5.b != 0)
            
            eax_6 = sub_46c09c(arg1, 5, edi_1, edx_1 - &edx_1[1] + 1, ebx_1)
        
        result[8] = eax_6
        
        if (eax_6 != 0)
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

return nullptr
