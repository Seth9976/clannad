// 函数: sub_7358b0
// 地址: 0x7358b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* (** i)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x50)
arg1[0x67] = i
*i = sub_735650
int32_t ebx_1

if (*(arg1[0x6e] + 8) == 0)
    ebx_1 = arg1[0x49]
else
    if (arg1[0x49] s< 2)
        *(*arg1 + 0x14) = 0x30
        (**arg1)(arg1)
    
    sub_7352f0(arg1)
    ebx_1 = arg1[0x49] + 2

void* (** i_1)(int32_t* arg1, int32_t arg2) = nullptr

if (arg1[9] s> 0)
    void* edi_1 = arg1[0x31] + 0xc
    void* var_c_1 = &i[2]
    
    do
        arg1[0x49]
        int32_t eax_14 = (*(arg1[1] + 8))(arg1, 1, *(edi_1 + 0x18) * *(edi_1 + 0x10), 
            divs.dp.d(sx.q(*(edi_1 + 0x1c) * *edi_1), arg1[0x49]) * ebx_1)
        edi_1 += 0x58
        *var_c_1 = eax_14
        i = i_1 + 1
        var_c_1 += 4
        i_1 = i
    while (i s< arg1[9])

return i
