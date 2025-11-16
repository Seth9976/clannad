// 函数: sub_58a6b0
// 地址: 0x58a6b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_10 = nullptr
void* var_c = nullptr
void* ecx
int32_t* result = sub_58a750(ecx, &var_10, &var_c)
void* esi = var_10

if (esi == 0)
    void* ecx_4 = var_c
    
    if (ecx_4 != 0 && arg2 == 1)
        result = sub_55b400(ecx_4 + 4, arg1, 1)
        
        if (result != 0 && result != arg3)
            return sub_52e3c0(result, arg3, 0, 0xffffffff)
else if (arg2 == 1)
    int32_t eax
    int32_t ecx_2
    eax, ecx_2 = sub_6ae470(arg3, 0)
    int32_t var_1c_1 = ecx_2
    result = sub_55b0d0(esi + 4, arg1)
    
    if (result != 0)
        *result = eax

return result
