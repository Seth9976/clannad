// 函数: sub_54dd00
// 地址: 0x54dd00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 u> 0x110)
    if (arg2 != 0x111)
        if (arg2 != 0x214)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        int32_t eax_10 = GetSystemMetrics(SM_CYMAXTRACK)
        int32_t eax_11 = GetSystemMetrics(SM_CXMAXTRACK)
        int32_t eax_15 = data_20c22cc - data_20c22c4
        sub_4c0c40(eax_15, arg4, arg3, eax_15, data_20c22d0 - data_20c22c8, eax_11, eax_10)
    else if (zx.d(arg3.w) - 0x4f4f u<= 0xca)
        switch (arg3.w)
            case 0x4f4f
                sub_54dc40()
            case 0x4f50
                void var_28
                sub_4cfd70(&var_28, &data_6201e8)
                int32_t* edi_3 = data_20c2460
                int32_t i = 0
                
                if (data_1321eb8 s> 0)
                    int32_t ecx_14 = data_1333e3c
                    
                    do
                        int32_t eax_20 = *edi_3
                        
                        if (eax_20 != 0xffffffff && eax_20 != 0)
                            *edi_3 = 0
                            
                            if (ecx_14 != 0)
                                ecx_14(2, &var_28, i, i, data_20c22c0, 0x4f32)
                                ecx_14 = data_1333e3c
                        
                        i += 1
                        edi_3 = &edi_3[1]
                    while (i s< data_1321eb8)
            case 0x4f51
                sub_54d5d0(1, 1)
            case 0x4f52
                sub_54d5d0(nullptr, 0)
            case 0x4fa6
                sub_54d5d0(1, 0)
            case 0x5019
                sub_54d780()
else if (arg2 == 0x110)
    data_20c22c0 = arg1
    sub_54d9c0()
else if (arg2 == 5)
    uint32_t edi_2 = arg4 u>> 0x10
    uint32_t esi_1 = zx.d(arg4.w)
    sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(arg2, edi_2, esi_1, 0x20c22d4), edi_2, esi_1, 
                            0x20c230c), 
                        edi_2, esi_1, 0x20c2344), 
                    edi_2, esi_1, 0x20c237c), 
                edi_2, esi_1, 0x20c23b4), 
            edi_2, esi_1, 0x20c23ec), 
        edi_2, esi_1, 0x20c2424)
    SendDlgItemMessageA(data_20c22c0, 0xc350, 5, arg3, arg4)
else
    if (arg2 != 0x10)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_54dc40()

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
