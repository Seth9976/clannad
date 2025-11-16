// 函数: sub_56f830
// 地址: 0x56f830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    sub_56f4e0(arg1)
    return 0

if (arg2 == 5)
    uint32_t esi = zx.d(arg4.w)
    uint32_t edi_1 = arg4 u>> 0x10
    sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(arg4, edi_1, esi, 0x20efb38), edi_1, esi, 0x20efb70), 
                        edi_1, esi, 0x20efba8), 
                    edi_1, esi, 0x20efbe0), 
                edi_1, esi, 0x20efc18), 
            edi_1, esi, 0x20efc50), 
        edi_1, esi, 0x20efc88)
    return 0

if (arg2 == 0x4e)
    uint32_t eax_2 = zx.d(arg3.w)
    
    if (eax_2 == 0x4f32)
        if (*(arg4 + 8) == 0xffffff9b && (*(arg4 + 0x14) & 2) != 0)
            sub_56f100(*(arg4 + 0xc))
    else if (eax_2 == 0x4f33 && *(arg4 + 8) == 0xfffffffd && data_20efcd8 != 0xffffffff)
        WPARAM eax_6 = sub_4c1810(data_20efcc0, 0x4f33)
        int32_t ecx_2 = data_20efcd8
        
        if (eax_6 != 0xffffffff)
            int32_t var_10_2 = ecx_2
            sub_4a5e00(ecx_2, *(*(ecx_2 * 0x24 + &data_1b8c8a4) + (eax_6 << 2)))
            return 0
        
        int32_t var_10_1 = ecx_2
        sub_4a5e00(ecx_2, 1)
    
    return 0

if (arg2 == 0x111)
    if (zx.d(arg3.w) - 0x4f92 u<= 0x45)
        uint32_t eax_25 = zx.d(*(zx.d(arg3.w) + sub_56a2a0+0x81a))
        
        switch (eax_25)
            case 0
                sub_556200(eax_25, arg2, data_20efcc0, data_20efcd8, 0)
            case 1
                sub_556200(eax_25, arg2, data_20efcc0, data_20efcd8, 1)
            case 2
                int32_t ecx_13 = data_63fe98
                
                if (ecx_13 != 0xffffffff)
                    sub_56f2c0(ecx_13, data_63fe94)
            case 3
                data_1319198 = sub_4c1080(data_20efcc0, 0x4fd7)
    
    return 0

int32_t var_10_3 = 0x2e
int32_t eax
int32_t ecx
return sub_55a820(eax, arg2, ecx, arg3, arg4)
