// 函数: sub_4d67f8
// 地址: 0x4d67f8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = *(arg1 + 0xf4)
int32_t var_c = *(arg1 + 0xf0)
int32_t var_8 = *(arg1 + 0xf8)
void* result = arg2

for (int32_t i = 0; i u< 3; i += 1)
    void* ecx = (&var_10)[i]
    
    if (ecx != 0)
        result = sub_4d2a05(ecx, arg2)
        
        if (*(result + 0x10) != 0xffffffff)
            break

return result
