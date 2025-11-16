// 函数: sub_4e4301
// 地址: 0x4e4301
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* result = (*(arg1 + 0x20))(*(arg1 + 0x28), 1, 0x40)

if (result != 0)
    int32_t eax = (*(arg1 + 0x20))(*(arg1 + 0x28), 8, 0x5a0)
    *(result + 0x24) = eax
    
    if (eax != 0)
        int32_t eax_1 = (*(arg1 + 0x20))(*(arg1 + 0x28), 1, arg3)
        *(result + 0x28) = eax_1
        
        if (eax_1 == 0)
            (*(arg1 + 0x24))(*(arg1 + 0x28), *(result + 0x24))
            (*(arg1 + 0x24))(*(arg1 + 0x28), result)
            return nullptr
        
        *result = 0
        *(result + 0x2c) = eax_1 + arg3
        *(result + 0x38) = arg2
        sub_4e4298(result, arg1, nullptr)
        return result
    
    (*(arg1 + 0x24))(*(arg1 + 0x28), result)

return nullptr
