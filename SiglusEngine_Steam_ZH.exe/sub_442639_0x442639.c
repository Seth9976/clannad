// 函数: sub_442639
// 地址: 0x442639
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t edi
int32_t var_10 = edi

if (arg4 u> 0)
    int32_t* edi_1 = arg1
    int32_t* ebx_1 = arg3
    
    do
        arg1 = nullptr
        
        if (*ebx_1 != 0)
            arg1 = 0xffffffff
        
        int32_t result = (*(*edi_1 + 0x188))(edi_1, arg2 + esi, &arg1, 1)
        
        if (result s< 0)
            return result
        
        ebx_1 = &ebx_1[1]
        esi += 1
    while (esi u< arg4)

return 0
