// 函数: sub_497730
// 地址: 0x497730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* edi_1 = arg1[0x6e]

if (*(edi_1 + 0x14) != 0)
    return 2

int32_t result = (*(arg1[0x6f] + 4))(arg1)

if (result == 1)
    if (*(edi_1 + 0x18) != 0)
        sub_4972e0(arg1)
        *(edi_1 + 0x18) = 0
        return result
    
    if (*(edi_1 + 0x10) == 0)
        void* eax_14 = *arg1
        *(eax_14 + 0x14) = 0x23
        (*eax_14)(arg1)
    
    sub_4976f0(arg1)
else if (result == 2)
    bool cond:0_1 = *(edi_1 + 0x18) == 0
    *(edi_1 + 0x14) = 1
    
    if (cond:0_1)
        int32_t eax_9 = arg1[0x25]
        
        if (arg1[0x27] s> eax_9)
            arg1[0x27] = eax_9
    else if (*(arg1[0x6f] + 0x10) != 0)
        void* eax_7 = *arg1
        *(eax_7 + 0x14) = 0x3b
        (*eax_7)(arg1)

return result
