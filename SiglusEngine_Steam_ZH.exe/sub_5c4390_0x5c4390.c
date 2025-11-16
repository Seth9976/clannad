// 函数: sub_5c4390
// 地址: 0x5c4390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* result = arg2
void* var_8_1 = arg1

if (result s< arg3)
    int32_t ebx_1 = result * 0x118
    void* i_1 = arg3 - result
    void* i
    
    do
        result = *(arg1 + 0xa4) + ebx_1
        void** ecx = &result[0x28]
        __builtin_memset(&result[0x2e], 0, 0x20)
        result[0x36] = 0xffffffff
        result[0x37] = 0xffffffff
        __builtin_memset(&result[0x38], 0, 0x24)
        result[0x41] = 0xffffffff
        result[0x42] = 0xffffffff
        result[0x43] = 0
        bool cond:1_1 = ecx[5] u< 8
        ecx[4] = 0
        
        if (not(cond:1_1))
            ecx = *ecx
        
        *ecx = nullptr
        result[0x44] = 0
        int32_t* esi_1 = result[0x45]
        result[0x45] = 0
        
        if (esi_1 != 0)
            result = &esi_1[1]
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1))
                (*(*esi_1 + 4))()
                result = &esi_1[2]
                bool cond:2_1 = *result != 1
                *result
                *result -= 1
                
                if (not(cond:2_1))
                    result = (*(*esi_1 + 8))()
        
        arg1 = var_8_1
        ebx_1 += 0x118
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
