// 函数: sub_4593d6
// 地址: 0x4593d6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x8876086c

arg1[3] = arg2
(*(*arg2 + 4))(arg2)
int32_t* eax_1 = arg1[3]
int32_t result = (*(*eax_1 + 0x18))(eax_1, &arg1[2])

if (result s>= 0)
    int32_t* eax_2 = arg1[3]
    result = (*(*eax_2 + 0x158))(eax_2, 0xac3508, &arg1[4])
    
    if (result s>= 0)
        int32_t* eax_3 = arg1[3]
        int32_t var_150
        (*(*eax_3 + 0x1c))(eax_3, &var_150)
        arg1[0x10] = var_150
        int32_t var_14c
        arg1[0x11] = var_14c
        int32_t var_110
        arg1[0x13] = ((var_110 & &data_4000000) | 0x8000000) u>> 0x1a
        arg1[0x14] = ((var_110 & 0x400) | 0x800) u>> 0xa
        int32_t eax_14
        eax_14.b = (var_110:2.b & 2) != 0
        arg1[0x18] = 1
        arg1[0x15] = eax_14 + 1
        int32_t var_e4
        arg1[0x16] = var_e4
        int32_t var_11c
        arg1[0x17] = var_11c & 0x10
        int32_t* eax_19 = arg1[3]
        void var_20
        (*(*eax_19 + 0x24))(eax_19, &var_20)
        char var_14
        int32_t eax_20
        eax_20.b = var_14
        eax_20.b &= 0xa0
        char temp1_1 = eax_20.b
        eax_20.b = neg.b(eax_20.b)
        arg1[0x12] = sbb.d(eax_20, eax_20, temp1_1 != 0) & 2
        int32_t eax_23 = sub_745f3f(0xd0)
        int32_t* eax_25
        
        if (eax_23 == 0)
            eax_25 = nullptr
        else
            int32_t* eax_24 = eax_23 + zx.d(0x10 - (eax_23.b & 0xf))
            *(eax_24 - 1) = 0x10 - (eax_23.b & 0xf)
            sub_61cdd0(eax_24, 0x40, 3, sub_52e900)
            eax_25 = eax_24
        
        arg1[0x1c] = eax_25
        
        if (eax_25 == 0)
            return 0x8007000e
        
        arg1[0x20] = &eax_25[0x10]
        arg1[0x24] = &eax_25[0x20]
        eax_25[0xe] = fconvert.s(float.t(0))
        int32_t edi
        int32_t var_15c_4 = edi
        eax_25[0xd] = fconvert.s(float.t(0))
        eax_25[0xc] = fconvert.s(float.t(0))
        eax_25[0xb] = fconvert.s(float.t(0))
        eax_25[9] = fconvert.s(float.t(0))
        eax_25[8] = fconvert.s(float.t(0))
        eax_25[7] = fconvert.s(float.t(0))
        eax_25[6] = fconvert.s(float.t(0))
        eax_25[4] = fconvert.s(float.t(0))
        eax_25[3] = fconvert.s(float.t(0))
        eax_25[2] = fconvert.s(float.t(0))
        eax_25[1] = fconvert.s(float.t(0))
        eax_25[0xf] = fconvert.s(float.t(1))
        eax_25[0xa] = fconvert.s(float.t(1))
        eax_25[5] = fconvert.s(float.t(1))
        *eax_25 = fconvert.s(float.t(1))
        float* eax_26 = arg1[0x20]
        eax_26[0xe] = fconvert.s(float.t(0))
        eax_26[0xd] = fconvert.s(float.t(0))
        eax_26[0xc] = fconvert.s(float.t(0))
        eax_26[0xb] = fconvert.s(float.t(0))
        eax_26[9] = fconvert.s(float.t(0))
        eax_26[8] = fconvert.s(float.t(0))
        eax_26[7] = fconvert.s(float.t(0))
        eax_26[6] = fconvert.s(float.t(0))
        eax_26[4] = fconvert.s(float.t(0))
        eax_26[3] = fconvert.s(float.t(0))
        eax_26[2] = fconvert.s(float.t(0))
        eax_26[1] = fconvert.s(float.t(0))
        eax_26[0xf] = fconvert.s(float.t(1))
        eax_26[0xa] = fconvert.s(float.t(1))
        eax_26[5] = fconvert.s(float.t(1))
        *eax_26 = fconvert.s(float.t(1))
        float* eax_27 = arg1[0x24]
        eax_27[0xe] = fconvert.s(float.t(0))
        eax_27[0xd] = fconvert.s(float.t(0))
        eax_27[0xc] = fconvert.s(float.t(0))
        eax_27[0xb] = fconvert.s(float.t(0))
        eax_27[9] = fconvert.s(float.t(0))
        int32_t var_8_1 = 0xbf800000
        eax_27[8] = fconvert.s(float.t(0))
        eax_27[7] = fconvert.s(float.t(0))
        eax_27[6] = fconvert.s(float.t(0))
        eax_27[4] = fconvert.s(float.t(0))
        eax_27[3] = fconvert.s(float.t(0))
        eax_27[2] = fconvert.s(float.t(0))
        eax_27[1] = fconvert.s(float.t(0))
        eax_27[0xf] = fconvert.s(float.t(1))
        eax_27[0xa] = fconvert.s(float.t(1))
        eax_27[5] = fconvert.s(float.t(1))
        *eax_27 = fconvert.s(float.t(1))
        int32_t eax_28 = *arg1
        float var_10_1 = fconvert.s(float.t(0))
        arg1[0x19] = 1
        arg1[0x1a] = 1
        float var_c = fconvert.s(float.t(0))
        arg1[0x25] = var_10_1
        void* edi_2 = &arg1[0x26]
        void* esi_1 = &var_c
        *edi_2 = *esi_1
        *(edi_2 + 4) = *(esi_1 + 4)
        result = (*(eax_28 + 0x34))(arg1)
        
        if (result s>= 0)
            return 0

return result
