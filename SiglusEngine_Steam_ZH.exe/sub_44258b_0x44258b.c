// 函数: sub_44258b
// 地址: 0x44258b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg4 == 0)
    return 0x8876086c

*arg4 = 0
*arg1 = arg3
arg1[1] = arg2
arg1[2] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 1
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
data_b972f8 = arg1
int32_t result = sub_42bd0a(arg1[1], 1)

if (result s>= 0)
    sub_43729d(arg1, 0, 0)
    
    if (sub_44128c() != 0)
        arg1[0x10] = 1
    
    result = sub_42f202(arg1[1])
    
    if (result s>= 0)
        if (arg1[0x10] == 0)
            *arg4 = *(arg1[2] + 8)
            *(arg1[2] + 8) = 0
        
        int32_t eax_7 = arg1[0x10]
        int32_t eax_8 = neg.d(eax_7)
        return sbb.d(eax_8, eax_8, eax_7 != 0) & 0x80004005

return result
