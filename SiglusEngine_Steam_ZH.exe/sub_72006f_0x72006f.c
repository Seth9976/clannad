// 函数: sub_72006f
// 地址: 0x72006f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg6 = rol.b(*arg6, 1)
char temp2 = *arg6
*arg6 += arg6.b

if (temp2 s< neg.b(arg6.b))
    arg3 = arg6

*(arg1 + 0x24) = arg3
int32_t result = *(arg1 + 0x18)

if (result s<= *(arg1 + 0x20) && result s< *(arg1 + 4))
    result = *(arg1 + 0x1c)
    
    if (result s<= *(arg1 + 0x24) && result s< arg5)
        int32_t ecx_1 = *(arg1 + 0x8c)
        char ebx = 0
        
        if (ecx_1 == 0 || *(arg1 + 0x90) s<= 0 || *(arg1 + 0x94) s<= 0)
            goto label_72011a
        
        ebx = 1
        
        if (*(arg1 + 0xa1) u> 8)
            *(arg1 + 0xa1) = 8
        
        ecx_1.b = *(arg1 + 0xa1)
        result = 0xffffff01 << ecx_1.b
        int32_t ecx_2 = *(arg1 + 0xa4)
        
        if (ecx_2 s< result)
            *(arg1 + 0xa4) = result
        else if (ecx_2 s> 0xff)
            *(arg1 + 0xa4) = 0xff
        
        if (*(arg1 + 0xa4) != result)
            ecx_1 = *(arg1 + 0x8c)
        label_72011a:
            
            if (arg2 != 0)
                int32_t eax = *(arg1 + 0x80)
                
                if (eax s< 0xffffb1e0)
                    *(arg1 + 0x80) = 0xffffb1e0
                else if (eax s> 0x4e20)
                    *(arg1 + 0x80) = 0x4e20
                
                int32_t eax_1 = *(arg1 + 0x84)
                
                if (eax_1 s< 0xffffb1e0)
                    *(arg1 + 0x84) = 0xffffb1e0
                else if (eax_1 s> 0x4e20)
                    *(arg1 + 0x84) = 0x4e20
                
                int32_t temp1_1 = mods.dp.d(sx.q(*(arg1 + 0x88)), 0xe10)
                *(arg1 + 0x88) = temp1_1
                
                if (temp1_1 s< 0)
                    *(arg1 + 0x88) = temp1_1 + 0xe10
            
            if (*(arg1 + 0xc5) != 0)
                if (ebx != 0)
                    *(arg1 + 0x15c) = *(arg1 + 0x90)
                    *(arg1 + 0x160) = *(arg1 + 0x94)
                    *(arg1 + 0x164) = zx.d(*(arg1 + 0xa0))
                    *(arg1 + 0x168) = zx.d(*(arg1 + 0xa1))
                    *(arg1 + 0x16c) = *(arg1 + 0xa4)
                    int32_t eax_9 = *(arg1 + 0x94)
                    *(arg1 + 0x158) = ecx_1
                    int32_t ecx_3 = *(arg1 + 0x90)
                    *(arg1 + 0x188) = ecx_3
                    *(arg1 + 0x18c) = eax_9 * ecx_3
                
                result.b = *(arg1 + 0x78)
                uint32_t ecx_4 = zx.d(result.b)
                *(arg4 - 2) = result.b
                *(arg1 + 0xfc) = ecx_4 << 2
                *(arg1 + 0x100) = *((ecx_4 << 2) + &data_4e3da80)
                int32_t eax_12 = *(arg1 + 0x7c)
                *(arg1 + 0x104) = ecx_4
                
                if (eax_12 s< 0xffffff01)
                    *(arg1 + 0x7c) = 0xffffff01
                else if (eax_12 s> 0xff)
                    *(arg1 + 0x7c) = 0xff
                
                int32_t eax_13 = *(arg1 + 0xac)
                
                if (eax_13 s< 0xffffff01)
                    *(arg1 + 0xac) = 0xffffff01
                else if (eax_13 s> 0xff)
                    *(arg1 + 0xac) = 0xff
                
                int32_t eax_14 = *(arg1 + 0xb0)
                
                if (eax_14 s< 0xffffff01)
                    *(arg1 + 0xb0) = 0xffffff01
                else if (eax_14 s> 0xff)
                    *(arg1 + 0xb0) = 0xff
                
                int32_t eax_15 = *(arg1 + 0xb4)
                
                if (eax_15 s< 0xffffff01)
                    *(arg1 + 0xb4) = 0xffffff01
                else if (eax_15 s> 0xff)
                    *(arg1 + 0xb4) = 0xff
                
                int32_t ebx_1 = *(arg1 + 0x7c)
                int32_t eax_26
                
                if (ebx_1 s< 0)
                    int32_t esi = *(arg1 + 0xac)
                    int32_t esi_1 = *(arg1 + 0xb0)
                    *(arg1 + 0x114) = (esi + 0xff) * ebx_1 s/ 0xff + esi
                    int32_t esi_2 = *(arg1 + 0xb4)
                    *(arg1 + 0x118) = (esi_1 + 0xff) * ebx_1 s/ 0xff + esi_1
                    eax_26 = (esi_2 + 0xff) * ebx_1 s/ 0xff + esi_2
                else if (ebx_1 s<= 0)
                    *(arg1 + 0x114) = *(arg1 + 0xac)
                    *(arg1 + 0x118) = *(arg1 + 0xb0)
                    eax_26 = *(arg1 + 0xb4)
                else
                    int32_t esi_3 = *(arg1 + 0xac)
                    int32_t esi_4 = *(arg1 + 0xb0)
                    *(arg1 + 0x114) = (0xff - esi_3) * ebx_1 s/ 0xff + esi_3
                    int32_t esi_5 = *(arg1 + 0xb4)
                    *(arg1 + 0x118) = (0xff - esi_4) * ebx_1 s/ 0xff + esi_4
                    eax_26 = (0xff - esi_5) * ebx_1 s/ 0xff + esi_5
                
                bool cond:2_1 = arg4[-2] != 2
                *(arg1 + 0x11c) = eax_26
                
                if (not(cond:2_1))
                    *(arg1 + 0x114) = neg.d(*(arg1 + 0x114))
                    *(arg1 + 0x118) = neg.d(*(arg1 + 0x118))
                    *(arg1 + 0x11c) = neg.d(*(arg1 + 0x11c))
                
                int32_t eax_49 = *(arg1 + 0x114)
                int32_t eax_51
                
                if (eax_49 s< 0)
                    eax_51 = *((eax_49 << 2) + &data_4e3de7c)
                    *(arg1 + 0x120) = 0
                else
                    eax_51 = *(&data_4e3de7c - (eax_49 << 2))
                    *(arg1 + 0x120) = 0xff
                
                *(arg1 + 0x12c) = eax_51
                int32_t eax_52 = *(arg1 + 0x118)
                int32_t eax_54
                
                if (eax_52 s< 0)
                    eax_54 = *((eax_52 << 2) + &data_4e3de7c)
                    *(arg1 + 0x124) = 0
                else
                    eax_54 = *(&data_4e3de7c - (eax_52 << 2))
                    *(arg1 + 0x124) = 0xff
                
                int32_t ebx_2 = *(arg1 + 0x11c)
                *(arg1 + 0x130) = eax_54
                int32_t eax_56
                
                if (ebx_2 s< 0)
                    eax_56 = *((ebx_2 << 2) + &data_4e3de7c)
                    *(arg1 + 0x128) = 0
                else
                    eax_56 = *(&data_4e3de7c - (ebx_2 << 2))
                    *(arg1 + 0x128) = 0xff
                
                *(arg1 + 0x134) = eax_56
                *(arg1 + 0x138) = zx.d(*(arg1 + 0xa8))
                *(arg1 + 0x13c) = zx.d(*(arg1 + 0xa9))
                *(arg1 + 0x140) = zx.d(*(arg1 + 0xaa))
                uint32_t eax_59
                eax_59.b = *(arg1 + 0xab)
                *(arg4 - 1) = eax_59.b
                int32_t ecx_26 = arg4[-2]
                *(arg1 + 0x144) = *(&data_4e3de7c - (zx.d(eax_59.b) << 2))
                int32_t eax_61
                eax_61.b = *(arg1 + 0x7a)
                *(arg4 - 3) = eax_61.b
                void* edx_20
                edx_20.b = *(arg1 + 0x79)
                *(arg1 + 0x148) = *(&data_4e3de7c - (zx.d(eax_61.b) << 2))
                *(arg1 + 0x14c) = (0xff - zx.d(edx_20.b)) << 2
                
                if (ecx_26 == 4)
                    *(arg1 + 0x190) = *(arg1 + 0xb8)
                    *(arg1 + 0x194) = *(arg1 + 0xbc)
                    *(arg1 + 0x198) = *(arg1 + 0xc0)
                
                result.b = *(arg1 + 0x50) != 0
                bool cond:3_1 = *(arg4 - 2) != 0xff
                *(arg1 + 0x19c) = result.b
                result.b = cond:3_1
                bool cond:4_1 = *(arg1 + 0x114) != 0
                *(arg1 + 0x19d) = result.b
                
                if (cond:4_1 || *(arg1 + 0x118) != 0 || ebx_2 != 0)
                    result.b = 1
                else
                    result.b = 0
                
                bool cond:5_1 = *(arg4 - 1) != 0
                *(arg1 + 0x19e) = result.b
                result.b = cond:5_1
                bool cond:6_1 = *(arg4 - 3) != 0
                *(arg1 + 0x19f) = result.b
                result.b = cond:6_1
                *(arg1 + 0x1a0) = result.b
                result.b = edx_20.b != 0
                bool cond:8_1 = *(arg1 + 0x8c) == 0
                *(arg1 + 0x1a1) = result.b
                
                if (cond:8_1 || *(arg1 + 0xa4) == 0xff)
                    result.b = 0
                else
                    result.b = 1
                
                *(arg1 + 0x1a2) = result.b
                
                if (ecx_26 s>= 0 && ecx_26 s<= 6)
                    *(arg1 + 0x1a4) = ecx_26
                    result.b = 1
                    *(arg1 + 0x1a8) = 1
                    *arg4
                    return result
                
                *(arg1 + 0x1a4) = 0
                *(arg1 + 0x1a8) = 1
            
            result.b = 1
            *arg4
            return result

result.b = 0
*arg4
return result
