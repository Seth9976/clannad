// 函数: sub_5ef9c0
// 地址: 0x5ef9c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char ecx = 0
int32_t* var_10 = nullptr
int32_t eax = *(arg1 + 0x1ac)
void var_14

if (eax == 2 || eax == 8 || eax == 0xb || eax == 0xa || eax == 9)
    int32_t* eax_7 = *(arg1 + 0x1568)
    int32_t esi_1 = arg2
    char var_9_1
    int32_t* eax_8
    
    if (eax_7 != 0)
        eax_8 = sub_54d980(eax_7, &var_14, esi_1)
        ecx = 1
        var_9_1 = 1
    
    if (eax_7 == 0 || *eax_8 == 0)
        var_9_1 = 0
    
    if ((ecx & 1) != 0)
        if (var_10 != 0)
            bool cond:0_1 = var_10[1] != 1
            var_10[1]
            var_10[1] -= 1
            
            if (not(cond:0_1))
                (*(*var_10 + 4))()
                bool cond:2_1 = var_10[2] != 1
                var_10[2]
                var_10[2] -= 1
                
                if (not(cond:2_1))
                    (*(*var_10 + 8))()
        
        esi_1 = arg2
    
    if (var_9_1 != 0)
        int32_t result = *(*sub_54d980(*(arg1 + 0x1568), &var_14, esi_1) + 0x18)
        
        if (var_10 != 0)
            bool cond:1_1 = var_10[1] != 1
            var_10[1]
            var_10[1] -= 1
            
            if (not(cond:1_1))
                (*(*var_10 + 4))()
                int32_t ebx_1 = var_10[2]
                var_10[2] -= 1
                
                if (ebx_1 == 1)
                    (*(*var_10 + 8))()
        
        return result
else
    if (eax == 0xc)
        return *(arg1 + 0x270)
    
    if (eax == 6)
        int32_t ebx
        ebx.b = *sub_5f3150(*(arg1 + 0x1580), &var_14) != 0
        sub_54b010(&var_14)
        
        if (ebx.b != 0)
            void* eax_4 = *sub_5f3150(*(arg1 + 0x1580), &var_14)
            int64_t xmm0 = *(eax_4 + 0x10)
            int32_t var_18 = *(eax_4 + 0x18)
            sub_54b010(&var_14)
            return int.d(fconvert.t(xmm0:4.d))
return 0
