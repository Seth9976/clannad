// 函数: sub_40db19
// 地址: 0x40db19
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
int32_t* i_2 = nullptr
int32_t* ebx = &arg4[modu.dp.d(0:arg1, arg5)]
int32_t* i = *ebx
arg5 = arg6

for (; i != 0; i = i[4])
    if (i[1] == arg2 && *i == arg1)
        arg5 = i[3]
        break
    
    i_2 = i

int32_t* i_3 = i
int32_t* i_4 = i_2

if (i != 0)
    int32_t* i_1 = i[4]
    arg4 = i
    
    for (; i_1 != 0; i_1 = i_1[4])
        if (i_1[1] == arg2 && *i_1 == arg1)
            float var_c_1 =
                fconvert.s(sub_40d989(*i_3, i_3[1], i_3[2], arg2, arg1, arg3, arg7, arg8))
            long double st0_2 = sub_40d989(*i_1, i_1[1], i_1[2], arg2, arg1, arg3, arg7, arg8)
            long double temp3_1 = fconvert.t(var_c_1)
            st0_2 - temp3_1
            
            if ((((st0_2 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(st0_2, temp3_1) ? 1 : 0) << 0xa
                    | (st0_2 == temp3_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                i_4 = arg4
                i_3 = i_1
                arg5 = i_1[3]
        
        arg4 = i_1

if (arg5 != arg6)
    if (i_4 == 0)
        *ebx = i_3[4]
    else
        i_4[4] = i_3[4]

return arg5
