// 函数: sub_446375
// 地址: 0x446375
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t edi
int32_t var_c = edi

if (arg4 u> 0)
    int32_t* edi_1 = arg3
    
    do
        arg3 = nullptr
        
        if (*edi_1 != 0)
            arg3 = 0xffffffff
        
        int32_t* eax_2 = *(arg1 + 0xc)
        int32_t result = (*(*eax_2 + 0x40))(eax_2, arg2 + esi, &arg3, 1)
        
        if (result s< 0)
            return result
        
        edi_1 = &edi_1[1]
        esi += 1
    while (esi u< arg4)

return 0
