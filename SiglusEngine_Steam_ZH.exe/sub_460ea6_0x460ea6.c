// 函数: sub_460ea6
// 地址: 0x460ea6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t i = 0
*arg3 = 0
int32_t* eax = *(arg1 + 0x2c)

if (eax != 0 && *eax u> 0)
    do
        int32_t* eax_4 = (*(*(*(eax[3] + (i << 2)) + 4) + 0x1c))(arg2)
        *arg3 = eax_4
        
        if (eax_4 != 0)
            (*(*eax_4 + 4))(eax_4)
            return 0
        
        eax = *(arg1 + 0x2c)
        i += 1
    while (i u< *eax)

return 0x88760387
