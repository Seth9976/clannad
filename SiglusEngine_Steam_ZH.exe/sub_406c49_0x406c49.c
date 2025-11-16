// 函数: sub_406c49
// 地址: 0x406c49
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg10
int32_t edi
int32_t var_4e4 = edi
int32_t edi_1 = arg4
int32_t var_c0
sub_4164f8(&var_c0)
int32_t* var_8 = nullptr
arg10 = nullptr
int32_t* var_c = nullptr
int32_t* var_10 = nullptr
int32_t result

if (arg1 != 0 && arg2 != 0 && arg3 != 0 && arg13 != 0)
    int32_t eax_1
    eax_1.b = edi_1 == 0xfffffffd
    int32_t arg_14
    int32_t eax_2
    eax_2.b = arg_14 == 0xfffffffd
    int32_t arg_18
    int32_t eax_3
    eax_3.b = arg_18 == 0xfffffffd
    void* arg_1c
    int32_t eax_4
    eax_4.b = arg_1c == 0xfffffffd
    int32_t arg_24
    int32_t eax_5
    eax_5.b = arg_24 == 0xfffffffd
    void var_dc
    
    if (esi == 0 && arg12 == 0xffffffff)
        esi = &var_dc
    int32_t result_1 = sub_41939b(&var_c0, arg2, arg3, esi, 1)
    
    if (result_1 s>= 0)
        if (arg12 == 0xffffffff)
            arg12 = *(esi + 0x14)
        
        void* i_5
        void* i = i_5
        arg3 = 1
        
        for (; i != 0; i = *(i + 0x4c))
            arg3 += 1
        
        arg2 = 1
        
        if (arg12 != 5)
        label_406d4c:
            
            if (arg_1c == 0xfffffffd)
                arg_1c = arg3
            
            int32_t var_b4
            
            if (edi_1 == 0xfffffffe || edi_1 == 0xfffffffd || var_b4 s< 0)
                arg4 = var_b4
            else if (edi_1 == 0 || edi_1 == 0xffffffff)
                arg4 = 1
                
                if (var_b4 u> 1)
                    do
                        arg4 <<= 1
                    while (arg4 u< var_b4)
            
            int32_t ecx_2 = arg_14
            int32_t var_b0
            
            if (ecx_2 == 0xfffffffe || ecx_2 == 0xfffffffd || var_b0 s< 0)
                arg_14 = var_b0
            else if (ecx_2 == 0 || ecx_2 == 0xffffffff)
                arg_14 = 1
                
                if (var_b0 u> 1)
                    do
                        arg_14 <<= 1
                    while (arg_14 u< var_b0)
            
            int32_t ecx_3 = arg_18
            int32_t var_ac
            
            if (ecx_3 == 0xfffffffe || ecx_3 == 0xfffffffd || var_ac s< 0)
                arg_18 = var_ac
            else if (ecx_3 == 0 || ecx_3 == 0xffffffff)
                arg_18 = 1
                
                if (var_ac u> 1)
                    do
                        arg_18 <<= 1
                    while (arg_18 u< var_ac)
            
            if (arg7 == 0xffffffff)
                arg7 = 0x80004
            
            if (arg8 == 0xffffffff)
                arg8 = 5
            
            if (arg12 == 5)
                arg7 |= 0x70000
                arg8 |= 0x70000
            
            uint32_t eax_12
            
            if (arg7.b != 1)
                eax_12 = zx.d(arg8.b)
            
            int32_t var_18_1
            
            if (arg7.b == 1 || eax_12 == 2 || eax_12 == 5)
                var_18_1 = 1
            else
                var_18_1 = 0
            
            void var_4dc
            int32_t var_b8
            int32_t i_1
            
            if (var_b8 == 0)
                i_1 = __builtin_memset(&var_4dc, 0xffffffff, 0x400)
            else
                for (i_1 = 0; i_1 u< 0x100; i_1 += 1)
                    int32_t esi_4 = *(&var_4dc + var_b8 - &var_4dc + (i_1 << 2))
                    int32_t edi_6 =
                        esi_4 - (zx.d(arg9:2.b) | zx.d(arg9.b) << 0x10 | (arg9 & 0xff00ff00))
                    int32_t edi_7 = neg.d(edi_6)
                    *(&var_4dc + (i_1 << 2)) = sbb.d(edi_7, edi_7, edi_6 != 0) & esi_4
                
                arg9 = 0
                
                if (arg_24 != 0x29 && var_c0 == 0x29)
                    int32_t eax_16 = 0
                    i_1 = 0xffffff00
                    
                    while (*(&var_4dc + (eax_16 << 2))
                            == (((eax_16 | 0xffffff00) << 8 | eax_16) << 8 | eax_16))
                        eax_16 += 1
                        
                        if (eax_16 u>= 0x100)
                            break
                    
                    if (eax_16 != 0x100)
                        int32_t var_60_1 = 0xff
                        int32_t var_6c = 0
                        int32_t var_68_1 = 0x55
                        int32_t var_64_1 = 0xaa
                        int32_t var_58 = 0
                        int32_t var_54
                        __builtin_memcpy(&var_54, 
                            "\x24\x00\x00\x00\x49\x00\x00\x00\x6d\x00\x00\x00\x92\x00\x00\x00\xb6\x00\x"
                        "00\x00\xdb\x00\x00\x00\xff\x00\x00\x00", 
                            0x1c)
                        int32_t i_2
                        
                        for (i_2 = 0; i_2 u< 0x100; i_2 += 1)
                            if (*(&var_4dc + (i_2 << 2)) != ((((&var_6c)[i_2 & 3] | 0xffffff00) << 8
                                    | (&var_58)[i_2 u>> 2 & 7]) << 8 | (&var_58)[i_2 u>> 5]))
                                break
                        
                        if (i_2 == 0x100)
                            var_c0 = 0x1b
                    else
                        var_c0 = 0x32
            
            if (arg_24 == 0 || arg_24 == 0xfffffffd)
                int32_t esi_16 = var_c0
                
                if (arg9 != 0)
                    void* eax_17 = sub_405eea(esi_16)
                    i_1 = *(eax_17 + 4)
                    
                    if ((i_1 == 0 || i_1 == 1 || i_1 == 2) && *(eax_17 + 0x10) == 0)
                        int32_t var_5c
                        int32_t* var_4ec_3 = &var_5c
                        char var_4f0_2 = arg12.b
                        __builtin_memcpy(&var_5c, eax_17, 0x24)
                        var_5c = 0
                        int32_t var_4c_1 = 1
                        int32_t eax_18
                        int32_t* entry_ebx
                        eax_18, i_1 = sub_405f8c(nullptr, arg5, var_4f0_2, var_4ec_3, entry_ebx)
                        esi_16 = eax_18
                        
                        if (esi_16 == 0)
                            esi_16 = var_c0
                
                int32_t eax_19 = sub_40608a(esi_16)
                arg_24 = eax_19
                
                if (arg6 != 3 && eax_19 == 0x14)
                    arg_24 = 0x16
            
            if (arg11 != 0)
                i_1 = __builtin_memcpy(arg11, &var_4dc, 0x400)
                
                if (var_b8 != 0)
                    goto label_40705e
                
                goto label_407013
            
        label_407013:
            
            if (eax_5 == 0 || (arg_24 != 0x28 && arg_24 != 0x29))
                if (arg_24 != 0x28)
                    if (arg_24 == 0x29)
                        arg_24 = 0x16
                        
                        for (int32_t i_3 = 0; i_3 u< 0x100; i_3 += 1)
                            void var_4d9
                            
                            if (*(&var_4d9 + (i_3 << 2)) != 0xff)
                                goto label_407054
                    
                    goto label_40705e
                
            label_407054:
                arg_24 = 0x15
            label_40705e:
                int32_t var_14_1
                
                if (arg6 == 0)
                    var_14_1 = 1
                
                if (arg6 != 0 || (arg5:1.b & 2) != 0)
                    var_14_1 = 0
                
                int32_t eax_20 = arg_18
                int32_t* esi_18 = arg4
                int32_t ebx = arg_14
                void* eax_21 = arg_1c
                int32_t eax_22 = arg_24
                result = sub_40626f(i_1, arg1, esi_18, &arg4, &arg_14, &arg_18, &arg_1c, arg5, 
                    &arg_24, arg6, arg12)
                
                if (result s>= 0)
                    if ((eax_1 == 0 || esi_18 == arg4) && (eax_2 == 0 || ebx == arg_14)
                            && (eax_3 == 0 || eax_20 == arg_18))
                        void* edx_12 = arg_1c
                        
                        if (eax_4 == 0 || eax_21 == edx_12)
                            int32_t ebx_1 = arg_24
                            
                            if (eax_5 == 0 || eax_22 == ebx_1)
                                if (arg12 == 3)
                                    result = (*(*arg1 + 0x5c))(arg1, arg4, arg_14, edx_12, 
                                        arg5 & 0xffe07fff, ebx_1, arg6, &var_c, 0)
                                else if (arg12 == 4)
                                    result = (*(*arg1 + 0x60))(arg1, arg4, arg_14, arg_18, edx_12, 
                                        arg5 & 0xffe07fff, ebx_1, arg6, &var_c, 0)
                                else if (arg12 == 5)
                                    result = (*(*arg1 + 0x64))(arg1, arg4, edx_12, 
                                        arg5 & 0xffe07fff, ebx_1, arg6, &var_c, 0)
                                
                                if (result s>= 0)
                                    int32_t* ebx_2
                                    
                                    if (var_14_1 == 0)
                                        ebx_2 = var_c
                                    label_407200:
                                        arg4 = 0
                                        int32_t* esi_22 = &var_c0
                                        arg_14 = &var_c0
                                        
                                        if (arg2 u> 0)
                                            bool cond:18_1
                                            
                                            do
                                                arg_24 = 0
                                                
                                                if (arg3 u> 0)
                                                    while (arg_24 u< arg_1c)
                                                        if (arg12 == 3)
                                                            result = (*(*ebx_2 + 0x48))(ebx_2, 
                                                                arg_24, &arg10)
                                                        else if (arg12 == 4)
                                                            result = (*(*ebx_2 + 0x48))(ebx_2, 
                                                                arg_24, &var_8)
                                                        else if (arg12 == 5)
                                                            result = (*(*ebx_2 + 0x48))(ebx_2, 
                                                                arg4, arg_24, &arg10)
                                                        
                                                        if (result s< 0)
                                                            goto label_40743a
                                                        
                                                        if (arg12 == 3)
                                                            result = sub_4060ab(arg10, arg11, 
                                                                nullptr, esi_22[1], *esi_22, 
                                                                esi_22[0xc], &var_4dc, &esi_22[6], 
                                                                arg7, arg9)
                                                        else if (arg12 == 4)
                                                            result = sub_406193(var_8, arg11, 0, 
                                                                esi_22[1], *esi_22, esi_22[0xc], 
                                                                esi_22[0xd], &var_4dc, &esi_22[6], 
                                                                arg7, arg9)
                                                        else if (arg12 == 5)
                                                            result = sub_4060ab(arg10, arg11, 
                                                                nullptr, esi_22[1], *esi_22, 
                                                                esi_22[0xc], &var_4dc, &esi_22[6], 
                                                                arg7, arg9)
                                                        
                                                        if (result s< 0)
                                                            goto label_40743a
                                                        
                                                        int32_t* eax_56 = var_8
                                                        
                                                        if (eax_56 != 0)
                                                            (*(*eax_56 + 8))(eax_56)
                                                            var_8 = nullptr
                                                        
                                                        int32_t* eax_57 = arg10
                                                        
                                                        if (eax_57 != 0)
                                                            (*(*eax_57 + 8))(eax_57)
                                                            arg10 = nullptr
                                                        
                                                        arg_24 += 1
                                                        
                                                        if (arg_24 u>= arg3)
                                                            break
                                                        
                                                        esi_22 = esi_22[0x13]
                                                
                                                if (var_18_1 == 0 && arg_24 u< arg_1c)
                                                    do
                                                        if (arg12 == 3)
                                                            result = (*(*ebx_2 + 0x48))(ebx_2, 
                                                                arg_24, &arg10)
                                                        else if (arg12 == 4)
                                                            result = (*(*ebx_2 + 0x48))(ebx_2, 
                                                                arg_24, &var_8)
                                                        else if (arg12 == 5)
                                                            result = (*(*ebx_2 + 0x48))(ebx_2, 
                                                                arg4, arg_24, &arg10)
                                                        
                                                        if (result s< 0)
                                                            goto label_40743a
                                                        
                                                        if (arg12 == 3)
                                                            result = sub_4060ab(arg10, arg11, 
                                                                nullptr, esi_22[1], *esi_22, 
                                                                esi_22[0xc], &var_4dc, &esi_22[6], 
                                                                arg7, arg9)
                                                        else if (arg12 == 4)
                                                            result = sub_406193(var_8, arg11, 0, 
                                                                esi_22[1], *esi_22, esi_22[0xc], 
                                                                esi_22[0xd], &var_4dc, &esi_22[6], 
                                                                arg7, arg9)
                                                        else if (arg12 == 5)
                                                            result = sub_4060ab(arg10, arg11, 
                                                                nullptr, esi_22[1], *esi_22, 
                                                                esi_22[0xc], &var_4dc, &esi_22[6], 
                                                                arg7, arg9)
                                                        
                                                        if (result s< 0)
                                                            goto label_40743a
                                                        
                                                        int32_t* eax_74 = var_8
                                                        
                                                        if (eax_74 != 0)
                                                            (*(*eax_74 + 8))(eax_74)
                                                            var_8 = nullptr
                                                        
                                                        int32_t* eax_75 = arg10
                                                        
                                                        if (eax_75 != 0)
                                                            (*(*eax_75 + 8))(eax_75)
                                                            arg10 = nullptr
                                                        
                                                        arg_24 += 1
                                                    while (arg_24 u< arg_1c)
                                                
                                                esi_22 = *(arg_14 + 0x50)
                                                arg4 += 1
                                                cond:18_1 = arg4 u< arg2
                                                arg_14 = esi_22
                                            while (cond:18_1)
                                        
                                        if (var_18_1 == 0 || arg3 u>= arg_1c)
                                        label_407411:
                                            
                                            if (var_14_1 == 0)
                                            label_40742c:
                                                int32_t* ecx_19 = var_c
                                                var_c = nullptr
                                                *arg13 = ecx_19
                                                result = 0
                                            else
                                                result = (*(*arg1 + 0x7c))(arg1, var_10, var_c)
                                                
                                                if (result s>= 0)
                                                    goto label_40742c
                                        else
                                            result = sub_406957(ebx_2, &var_4dc, arg3 - 1, arg8)
                                            
                                            if (result s>= 0)
                                                goto label_407411
                                    else
                                        if (arg12 == 3)
                                            result = (*(*arg1 + 0x5c))(arg1, arg4, arg_14, arg_1c, 
                                                0, ebx_1, 2, &var_10, 0)
                                        else if (arg12 == 4)
                                            result = (*(*arg1 + 0x60))(arg1, arg4, arg_14, arg_18, 
                                                arg_1c, 0, ebx_1, 2, &var_10, 0)
                                        else if (arg12 == 5)
                                            result = (*(*arg1 + 0x64))(arg1, arg4, arg_1c, 0, 
                                                ebx_1, 2, &var_10, 0)
                                        
                                        if (result s>= 0)
                                            ebx_2 = var_10
                                            goto label_407200
                            else
                                result = 0x8876086a
                        else
                            result = 0x8876086a
                    else
                        result = 0x8876086a
            else
                result = 0x8876086c
            
        label_40743a:
            int32_t* eax_86 = var_8
            
            if (eax_86 != 0)
                (*(*eax_86 + 8))(eax_86)
                var_8 = nullptr
            
            int32_t* eax_87 = arg10
            
            if (eax_87 != 0)
                (*(*eax_87 + 8))(eax_87)
                arg10 = nullptr
            
            int32_t* eax_88 = var_c
            
            if (eax_88 != 0)
                (*(*eax_88 + 8))(eax_88)
                var_c = nullptr
            
            int32_t* eax_89 = var_10
            
            if (eax_89 != 0)
                (*(*eax_89 + 8))(eax_89)
                var_10 = nullptr
        else
            void* i_6
            void* i_4 = i_6
            
            if (i_4 == 0)
                result = 0x80004005
            else
                do
                    i_4 = *(i_4 + 0x50)
                    arg2 += 1
                while (i_4 != 0)
                
                if (arg2 == 6)
                    goto label_406d4c
                
                result = 0x80004005
    else
        result = result_1
else
    result = 0x8876086c

sub_416511(&var_c0)
return result
