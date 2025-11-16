// 函数: sub_4480a6
// 地址: 0x4480a6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t i = 0
int32_t result = 0

if (*(arg2 + 6) u> 0)
    int32_t edi
    int32_t var_14_1 = edi
    
    do
        int32_t* eax = *(arg1 + 0xc)
        result = (*(*eax + 0x104))(eax, i, 0)
        
        if (result s< 0)
            break
        
        for (void* j = 0x1c; j u< 0x16c; j += 0x1c)
            void* eax_1 = *(j + &data_ac2fe0)
            int32_t var_8_1
            
            if (eax_1 == 0)
                var_8_1 = 0
            else
                var_8_1 = *(eax_1 + 4)
            
            int32_t* eax_3 = *(arg1 + 0xc)
            result = (*(*eax_3 + 0x114))(eax_3, i, *(j + 0xac2fdc) & 0xffffff, var_8_1)
            
            if (result s< 0)
                return result
        
        i += 1
    while (i u< zx.d(*(arg2 + 6)))

return result
