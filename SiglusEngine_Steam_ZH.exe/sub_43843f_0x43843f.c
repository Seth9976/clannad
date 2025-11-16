// 函数: sub_43843f
// 地址: 0x43843f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** result = nullptr
int32_t edi
int32_t var_9c = edi
void*** var_c = nullptr
int32_t* var_8 = nullptr
void var_90
sub_47e17a(&var_90)

if (arg2 == 0)
label_4384a3:
    
    if (sub_4813cc(&var_90, arg1[1], *arg1 & 0xc3, var_8, &var_c) s< 0)
        sub_480809(&var_90)
    else
        void*** eax_6 = var_c
        int32_t eax_7 = (*eax_6)[4](eax_6)
        int32_t eax_8 = sub_46b465(data_b97498, eax_7, 1)
        
        if (eax_8 != 0)
            void*** eax_9 = var_c
            int32_t esi_1
            int32_t edi_2
            edi_2, esi_1 = __builtin_memcpy(eax_8, (*eax_9)[3](eax_9), eax_7 u>> 2 << 2)
            __builtin_memcpy(edi_2, esi_1, eax_7 & 3)
            void*** eax_12 = var_c
            
            if (eax_12 != 0)
                (*eax_12)[2](eax_12)
                var_c = nullptr
            
            void*** eax_13 = sub_42cfa1(0x38)
            
            if (eax_13 == 0)
                result = nullptr
            else
                result = sub_46c1db(eax_13, &arg1[8], eax_8, eax_7)
            
            if (result != 0)
                j__free(var_8)
                sub_480809(&var_90)
                return result
            
            sub_480809(&var_90)
        else
            sub_480809(&var_90)
else
    int32_t* eax_1 = sub_745f3f(8)
    
    if (eax_1 == 0)
        var_8 = nullptr
    else
        var_8 = sub_481884(eax_1, arg1, arg1[4])
    
    if (var_8 != 0)
        goto label_4384a3
    
    sub_480809(&var_90)

arg1[0x10] = 1
j__free(var_8)
void*** eax_15 = var_c

if (eax_15 != result)
    (*eax_15)[2](eax_15)

return nullptr
