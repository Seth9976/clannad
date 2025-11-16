// 函数: sub_574400
// 地址: 0x574400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
LRESULT eax = *arg2

if (eax != *(arg1 + 0xbc))
    if (eax != *(arg1 + 0x14c))
        if (eax == *(arg1 + 0x7b4))
            int32_t var_14_1 = 1
            sub_574560(arg1 + 0x7b0, arg1, arg2)
            LRESULT eax_7
            eax_7.b = 1
            return eax_7
        
        if (eax == *(arg1 + 0xae8))
            int32_t var_14_2 = 1
            sub_574560(arg1 + 0xae4, arg1, arg2)
            LRESULT eax_9
            eax_9.b = 1
            return eax_9
        
        if (eax == *(arg1 + 0xe1c))
            int32_t var_14_3 = 1
            sub_574560(arg1 + 0xe18, arg1, arg2)
            LRESULT eax_11
            eax_11.b = 1
            return eax_11
        
        if (eax == *(arg1 + 0x1484))
            int32_t var_14_4 = 1
            sub_574560(arg1 + 0x1480, arg1, arg2)
            LRESULT eax_13
            eax_13.b = 1
            return eax_13
        
        if (eax == *(arg1 + 0x1e20))
            int32_t var_14_5 = 1
            sub_574560(arg1 + 0x1e1c, arg1, arg2)
            LRESULT eax_15
            eax_15.b = 1
            return eax_15
        
        if (eax == *(arg1 + 0x2488))
            int32_t var_14_6 = 1
            sub_574560(arg1 + 0x2484, arg1, arg2)
    else
        eax = arg2[2]
        
        if (eax == 0xfffffffd)
            sub_577be0(arg1, arg1 + 0x148, 0)
            LRESULT eax_3
            eax_3.b = 1
            return eax_3
        
        if (eax == 0xffffff41)
            sub_577ca0(arg1, arg1 + 0x148, arg2[3], arg2[4], &arg2[0xb], 0)
            int32_t** eax_5
            eax_5.b = 1
            return eax_5
else if (arg2[2] == 0xfffffe3d && (arg2[0x10].b & 2) != 0)
    *(arg1 + 0x36a0) = arg2[0xf]
    sub_577320(arg1)
    int32_t eax_2
    eax_2.b = 1
    return eax_2

eax.b = 1
return eax
