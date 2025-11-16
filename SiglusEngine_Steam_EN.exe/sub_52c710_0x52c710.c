// 函数: sub_52c710
// 地址: 0x52c710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const var_4 = arg1
int32_t eax = data_1af4e84
void* const esi = arg1
int32_t edi = *(esi + 0x13b3c)
void* result

if (eax == 0)
    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    result = data_1b8a720
    
    if (result u<= 0x3f)
        arg1 = result
        *(esi + 0x13b3c) = result
        
        if (arg1 u<= 0x3f)
            result = arg1 * 0x3920
            
            if (*(result + &data_f8c790) == 0xffffffff)
                result, arg1 = sub_542980(arg1)
else
    result = eax - 1
    
    if (eax == 1)
        *(esi + 0x13b3c) = result
        
        if (data_f8c790 == 0xffffffff)
            result, arg1 = sub_542980(nullptr)

if (edi != *(esi + 0x13b3c))
    if (data_1311178 == 0)
        data_1606d78 = 1
        data_1606c68 = 1
    
    arg1.b = 0
    result = sub_420350(arg1)
    data_137010c = 1

return result
