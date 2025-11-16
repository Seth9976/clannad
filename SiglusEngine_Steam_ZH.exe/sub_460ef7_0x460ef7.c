// 函数: sub_460ef7
// 地址: 0x460ef7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_10 = edi
*arg3 = 0

if (arg2 == 0 || *arg2 == 0)
    return 0x88760385

int32_t* eax_1 = *(arg1 + 0x2c)

if (eax_1 != 0 && *eax_1 u> 0)
    do
        int32_t* eax_5 = (*(*(*(eax_1[3] + (i << 2)) + 4) + 0x20))(arg2)
        *arg3 = eax_5
        
        if (eax_5 != 0)
            (*(*eax_5 + 4))(eax_5)
            return 0
        
        eax_1 = *(arg1 + 0x2c)
        i += 1
    while (i u< *eax_1)

return 0x88760387
