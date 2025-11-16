// 函数: sub_720041
// 地址: 0x720041
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

unimplemented  {enter 0x4f89, 0x18}
int32_t ecx = *(arg5 + 0x70)
int32_t entry_ebx
int32_t eax = ecx + entry_ebx

if (eax s> arg4)
    arg4 = eax

int32_t eax_2 = arg3[-4] + *(arg5 + 0x6c)
*(arg5 + 0x1c) = arg4
int32_t esi = *(arg5 + 8)

if (eax_2 s< arg2)
    arg2 = eax_2

int32_t eax_4 = arg3[-5] + ecx
*(arg5 + 0x20) = arg2
int32_t ecx_1 = arg3[-9]
arg2.b = *(arg5 + 0xd0)

if (eax_4 s< ecx_1)
    ecx_1 = eax_4

*(arg5 + 0x24) = ecx_1
int32_t result = *(arg5 + 0x18)

if (result s<= *(arg5 + 0x20) && result s< *(arg5 + 4))
    result = *(arg5 + 0x1c)
    
    if (result s<= *(arg5 + 0x24) && result s< esi)
        int32_t ecx_3 = *(arg5 + 0x8c)
        entry_ebx.b = 0
        
        if (ecx_3 == 0 || *(arg5 + 0x90) s<= 0 || *(arg5 + 0x94) s<= 0)
            goto label_72011a
        
        entry_ebx.b = 1
        
        if (*(arg5 + 0xa1) u> 8)
            *(arg5 + 0xa1) = 8
        
        ecx_3.b = *(arg5 + 0xa1)
        result = 0xffffff01 << ecx_3.b
        int32_t ecx_4 = *(arg5 + 0xa4)
        
        if (ecx_4 s< result)
            *(arg5 + 0xa4) = result
        else if (ecx_4 s> 0xff)
            *(arg5 + 0xa4) = 0xff
        
        if (*(arg5 + 0xa4) != result)
            ecx_3 = *(arg5 + 0x8c)
        label_72011a:
            
            if (arg2.b != 0)
                int32_t eax_5 = *(arg5 + 0x80)
                
                if (eax_5 s< 0xffffb1e0)
                    *(arg5 + 0x80) = 0xffffb1e0
                else if (eax_5 s> 0x4e20)
                    *(arg5 + 0x80) = 0x4e20
                
                int32_t eax_6 = *(arg5 + 0x84)
                
                if (eax_6 s< 0xffffb1e0)
                    *(arg5 + 0x84) = 0xffffb1e0
                else if (eax_6 s> 0x4e20)
                    *(arg5 + 0x84) = 0x4e20
                
                int32_t temp1_1 = mods.dp.d(sx.q(*(arg5 + 0x88)), 0xe10)
                *(arg5 + 0x88) = temp1_1
                
                if (temp1_1 s< 0)
                    *(arg5 + 0x88) = temp1_1 + 0xe10
            
            if (*(arg5 + 0xc5) != 0)
                if (entry_ebx.b != 0)
                    *(arg5 + 0x15c) = *(arg5 + 0x90)
                    *(arg5 + 0x160) = *(arg5 + 0x94)
                    *(arg5 + 0x164) = zx.d(*(arg5 + 0xa0))
                    *(arg5 + 0x168) = zx.d(*(arg5 + 0xa1))
                    *(arg5 + 0x16c) = *(arg5 + 0xa4)
                    int32_t eax_14 = *(arg5 + 0x94)
                    *(arg5 + 0x158) = ecx_3
                    int32_t ecx_5 = *(arg5 + 0x90)
                    *(arg5 + 0x188) = ecx_5
                    *(arg5 + 0x18c) = eax_14 * ecx_5
                
                result.b = *(arg5 + 0x78)
                uint32_t ecx_6 = zx.d(result.b)
                *(arg3 - 2) = result.b
                *(arg5 + 0xfc) = ecx_6 << 2
                *(arg5 + 0x100) = *((ecx_6 << 2) + &data_4e3da80)
                int32_t eax_17 = *(arg5 + 0x7c)
                *(arg5 + 0x104) = ecx_6
                
                if (eax_17 s< 0xffffff01)
                    *(arg5 + 0x7c) = 0xffffff01
                else if (eax_17 s> 0xff)
                    *(arg5 + 0x7c) = 0xff
                
                int32_t eax_18 = *(arg5 + 0xac)
                
                if (eax_18 s< 0xffffff01)
                    *(arg5 + 0xac) = 0xffffff01
                else if (eax_18 s> 0xff)
                    *(arg5 + 0xac) = 0xff
                
                int32_t eax_19 = *(arg5 + 0xb0)
                
                if (eax_19 s< 0xffffff01)
                    *(arg5 + 0xb0) = 0xffffff01
                else if (eax_19 s> 0xff)
                    *(arg5 + 0xb0) = 0xff
                
                int32_t eax_20 = *(arg5 + 0xb4)
                
                if (eax_20 s< 0xffffff01)
                    *(arg5 + 0xb4) = 0xffffff01
                else if (eax_20 s> 0xff)
                    *(arg5 + 0xb4) = 0xff
                
                int32_t ebx = *(arg5 + 0x7c)
                int32_t eax_31
                
                if (ebx s< 0)
                    int32_t esi_1 = *(arg5 + 0xac)
                    int32_t esi_2 = *(arg5 + 0xb0)
                    *(arg5 + 0x114) = (esi_1 + 0xff) * ebx s/ 0xff + esi_1
                    int32_t esi_3 = *(arg5 + 0xb4)
                    *(arg5 + 0x118) = (esi_2 + 0xff) * ebx s/ 0xff + esi_2
                    eax_31 = (esi_3 + 0xff) * ebx s/ 0xff + esi_3
                else if (ebx s<= 0)
                    *(arg5 + 0x114) = *(arg5 + 0xac)
                    *(arg5 + 0x118) = *(arg5 + 0xb0)
                    eax_31 = *(arg5 + 0xb4)
                else
                    int32_t esi_4 = *(arg5 + 0xac)
                    int32_t esi_5 = *(arg5 + 0xb0)
                    *(arg5 + 0x114) = (0xff - esi_4) * ebx s/ 0xff + esi_4
                    int32_t esi_6 = *(arg5 + 0xb4)
                    *(arg5 + 0x118) = (0xff - esi_5) * ebx s/ 0xff + esi_5
                    eax_31 = (0xff - esi_6) * ebx s/ 0xff + esi_6
                
                bool cond:4_1 = arg3[-2] != 2
                *(arg5 + 0x11c) = eax_31
                
                if (not(cond:4_1))
                    *(arg5 + 0x114) = neg.d(*(arg5 + 0x114))
                    *(arg5 + 0x118) = neg.d(*(arg5 + 0x118))
                    *(arg5 + 0x11c) = neg.d(*(arg5 + 0x11c))
                
                int32_t eax_54 = *(arg5 + 0x114)
                int32_t eax_56
                
                if (eax_54 s< 0)
                    eax_56 = *((eax_54 << 2) + &data_4e3de7c)
                    *(arg5 + 0x120) = 0
                else
                    eax_56 = *(&data_4e3de7c - (eax_54 << 2))
                    *(arg5 + 0x120) = 0xff
                
                *(arg5 + 0x12c) = eax_56
                int32_t eax_57 = *(arg5 + 0x118)
                int32_t eax_59
                
                if (eax_57 s< 0)
                    eax_59 = *((eax_57 << 2) + &data_4e3de7c)
                    *(arg5 + 0x124) = 0
                else
                    eax_59 = *(&data_4e3de7c - (eax_57 << 2))
                    *(arg5 + 0x124) = 0xff
                
                int32_t ebx_1 = *(arg5 + 0x11c)
                *(arg5 + 0x130) = eax_59
                int32_t eax_61
                
                if (ebx_1 s< 0)
                    eax_61 = *((ebx_1 << 2) + &data_4e3de7c)
                    *(arg5 + 0x128) = 0
                else
                    eax_61 = *(&data_4e3de7c - (ebx_1 << 2))
                    *(arg5 + 0x128) = 0xff
                
                *(arg5 + 0x134) = eax_61
                *(arg5 + 0x138) = zx.d(*(arg5 + 0xa8))
                *(arg5 + 0x13c) = zx.d(*(arg5 + 0xa9))
                *(arg5 + 0x140) = zx.d(*(arg5 + 0xaa))
                uint32_t eax_64
                eax_64.b = *(arg5 + 0xab)
                *(arg3 - 1) = eax_64.b
                int32_t ecx_28 = arg3[-2]
                *(arg5 + 0x144) = *(&data_4e3de7c - (zx.d(eax_64.b) << 2))
                int32_t eax_66
                eax_66.b = *(arg5 + 0x7a)
                *(arg3 - 3) = eax_66.b
                void* edx_20
                edx_20.b = *(arg5 + 0x79)
                *(arg5 + 0x148) = *(&data_4e3de7c - (zx.d(eax_66.b) << 2))
                *(arg5 + 0x14c) = (0xff - zx.d(edx_20.b)) << 2
                
                if (ecx_28 == 4)
                    *(arg5 + 0x190) = *(arg5 + 0xb8)
                    *(arg5 + 0x194) = *(arg5 + 0xbc)
                    *(arg5 + 0x198) = *(arg5 + 0xc0)
                
                result.b = *(arg5 + 0x50) != 0
                bool cond:5_1 = *(arg3 - 2) != 0xff
                *(arg5 + 0x19c) = result.b
                result.b = cond:5_1
                bool cond:6_1 = *(arg5 + 0x114) != 0
                *(arg5 + 0x19d) = result.b
                
                if (cond:6_1 || *(arg5 + 0x118) != 0 || ebx_1 != 0)
                    result.b = 1
                else
                    result.b = 0
                
                bool cond:7_1 = *(arg3 - 1) != 0
                *(arg5 + 0x19e) = result.b
                result.b = cond:7_1
                bool cond:8_1 = *(arg3 - 3) != 0
                *(arg5 + 0x19f) = result.b
                result.b = cond:8_1
                *(arg5 + 0x1a0) = result.b
                result.b = edx_20.b != 0
                bool cond:10_1 = *(arg5 + 0x8c) == 0
                *(arg5 + 0x1a1) = result.b
                
                if (cond:10_1 || *(arg5 + 0xa4) == 0xff)
                    result.b = 0
                else
                    result.b = 1
                
                *(arg5 + 0x1a2) = result.b
                
                if (ecx_28 s>= 0 && ecx_28 s<= 6)
                    *(arg5 + 0x1a4) = ecx_28
                    result.b = 1
                    *(arg5 + 0x1a8) = 1
                    *arg3
                    return result
                
                *(arg5 + 0x1a4) = 0
                *(arg5 + 0x1a8) = 1
            
            result.b = 1
            *arg3
            return result

result.b = 0
*arg3
return result
