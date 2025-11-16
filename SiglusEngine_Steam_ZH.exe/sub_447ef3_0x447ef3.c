// 函数: sub_447ef3
// 地址: 0x447ef3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
int32_t i = 0

if (*(arg2 + 6) u> 0)
    int32_t ebx_1 = 0x101
    int32_t edi
    int32_t var_18_1 = edi
    
    do
        int32_t* eax = *(arg1 + 0xc)
        result = (*(*eax + 0x104))(eax, ebx_1, 0)
        
        if (result s< 0)
            break
        
        for (void* j = 0x1c; j u< 0x188; j += 0x1c)
            void* eax_1 = *(j + &data_ac2fe0)
            int32_t var_c_1
            
            if (eax_1 == 0)
                var_c_1 = 0
            else
                var_c_1 = *(eax_1 + 4)
            
            int32_t* eax_3 = *(arg1 + 0xc)
            result = (*(*eax_3 + 0x114))(eax_3, ebx_1, *(j + 0xac2fdc) & 0xffffff, var_c_1)
            
            if (result s< 0)
                return result
        
        i += 1
        ebx_1 += 1
    while (i u< zx.d(*(arg2 + 6)))

return result
