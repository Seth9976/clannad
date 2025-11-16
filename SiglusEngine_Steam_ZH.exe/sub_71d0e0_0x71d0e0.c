// 函数: sub_71d0e0
// 地址: 0x71d0e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (arg1[0x17] u< arg1[7])
    uint32_t eax_1 = arg1[0x25]
    
    if (eax_1 != 0)
        sub_71d190(&arg1[0x17], eax_1)
    
    eax = arg1[0x17]
    *arg1 = eax
    
    if (eax u< arg1[7])
        int32_t eax_2 = arg1[0x19]
        
        if (eax_2 u> arg1[0xd])
            arg1[0x25] = eax_2
            *(arg1[0x11] + arg1 + 0x48) =
                (modu.dp.d(0:(arg1[0x1a] - arg1[0x18]), arg1[0xb])).w << (arg1[0xc]).b
                | (arg1[0x19].w - arg1[0xd].w - 1)
            int32_t eax_10
            eax_10.b = 1
            arg1[0x11] += 2
            arg1[0x10] += 1
            return eax_10
        
        int32_t eax_3 = arg1[0x10]
        arg1[0x25] = 1
        arg1[0x12].b |= *((eax_3 << 2) + &data_b0c28c)
        *(arg1[0x11] + arg1 + 0x48) = arg1[6][arg1[0x17]]
        arg1[0x11] += 1
        arg1[0x10] += 1
        return 1

eax.b = 0
return eax
