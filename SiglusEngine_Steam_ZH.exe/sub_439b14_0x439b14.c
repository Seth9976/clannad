// 函数: sub_439b14
// 地址: 0x439b14
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
int32_t var_c_1 = ecx
int32_t var_8_1 = 2

if (arg1 == 0)
    var_8_1 = 0
else if (arg1 s> 0)
    if (arg1 s<= 4)
        var_8_1 = 1
    else if (arg1 s<= 8)
        var_8_1 = 2
    else if (arg1 s<= 0xc)
        var_8_1 = 3

void*** eax_1 = sub_42cfa1(0x50)
void*** result

if (eax_1 == 0)
    result = nullptr
else
    result = sub_46bee5(eax_1, 0, 0, 0, 0, 1, arg4)

if (result != 0)
    void*** eax_3 = sub_42cfa1(0x24)
    void*** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_46bbbb(eax_3, 0, arg1, 1, 1, 0x200)
    
    result[4] = eax_4
    
    if (eax_4 != 0)
        void*** eax_5
        int32_t ecx_3
        eax_5, ecx_3 = sub_42cfa1(0x40)
        void*** eax_6
        
        if (var_8_1 != 3)
            if (eax_5 == 0)
                eax_6 = nullptr
            else
                eax_6 = sub_46c032(eax_5, var_8_1, arg2, arg4)
        else if (eax_5 == 0)
            eax_6 = nullptr
        else
            int32_t var_20_1 = ecx_3
            int32_t var_24_1 = ecx_3
            var_24_1.q = fconvert.d(fconvert.t(arg3))
            eax_6 = sub_46c067(eax_5, 3, var_24_1, arg4)
        
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
