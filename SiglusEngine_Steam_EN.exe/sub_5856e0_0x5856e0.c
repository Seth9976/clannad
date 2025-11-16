// 函数: sub_5856e0
// 地址: 0x5856e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
void* result_1 = result

if (arg3 != 0 && arg9 != 0 && arg26 != 0 && result != 0 && arg10 != 0 && arg19 != 0 && arg4 != 0
        && arg11 != 0 && arg20 != 0)
    int32_t edx = arg13
    int32_t ecx = arg15
    
    if (edx s> ecx)
        arg15 = edx
        edx = ecx
        arg13 = edx
    
    int32_t esi_1 = arg14
    int32_t edi_1 = arg16
    
    if (esi_1 s> edi_1)
        int32_t eax = esi_1
        esi_1 = edi_1
        edi_1 = eax
    
    int32_t eax_1 = arg5
    
    if (eax_1 s> arg7)
        arg5 = arg7
        arg7 = eax_1
    
    int32_t ecx_2 = arg8
    int32_t ebx_1 = arg6
    
    if (ebx_1 s> ecx_2)
        int32_t eax_2 = ebx_1
        ebx_1 = ecx_2
        ecx_2 = eax_2
        arg8 = ecx_2
    
    int32_t arg_48
    int32_t arg_4c
    int32_t arg_50
    int32_t arg_54
    sub_4d2170(&arg_48, arg4, result_1, &arg_48, &arg_4c, &arg_50, &arg_54)
    int32_t eax_15 = arg19 - 1 + arg17
    int32_t var_38
    int32_t var_30
    int32_t var_24
    int32_t var_1c
    result = sub_58c910(eax_15, arg7 - arg5 + 1, arg15 - edx + 1, arg13, arg15, arg5, arg7, arg17, 
        eax_15, arg_48, arg_50, &var_1c, &var_30, &var_38, &var_24)
    
    if (result != 0)
        int32_t eax_18 = arg20 - 1 + arg18
        int32_t var_34
        int32_t var_2c
        int32_t var_28
        int32_t var_20
        result = sub_58c910(eax_18, ecx_2 - ebx_1 + 1, edi_1 - esi_1 + 1, esi_1, edi_1, ebx_1, 
            arg8, arg18, eax_18, arg_4c, arg_54, &var_20, &var_2c, &var_34, &var_28)
        
        if (result != 0)
            data_1cd4418 = var_1c
            data_1cd4414 = var_20
            data_1cd4410 = var_24
            data_1cd440c = var_28
            int32_t eax_24 = var_2c * arg19
            data_1cd43f4 = edi_1 - esi_1 + 1
            int32_t ebx_3 = data_1cd4328
            data_1cd43ec = ecx_2 - ebx_1 + 1
            data_1cd4408 = arg9 + ((eax_24 + var_30) << 2)
            data_1cd4404 = arg3 + ((var_34 * result_1 + var_38) << 2)
            data_1cd4400 = arg19 << 2
            data_1cd43fc = result_1 << 2
            data_1cd43f8 = arg15 - edx + 1
            data_1cd43f0 = arg7 - arg5 + 1
            uint32_t ecx_13 = zx.d(arg26)
            data_1cd43c8 = *(ebx_3 + ((0xff - zx.d(arg21)) << 2))
            data_1cd43c0 = 0x3fc
            data_1cd43ac = ecx_13 << 2
            data_1cd43a8 = 0xff - ecx_13
            data_1cd43a4 = *(ebx_3 + (ecx_13 << 2))
            int32_t eax_40 = arg25
            
            if (eax_40 s< 0xffffff01)
                eax_40 = 0xffffff01
            else if (eax_40 s> 0xff)
                eax_40 = 0xff
            
            int32_t esi_3 = arg22
            
            if (esi_3 s< 0xffffff01)
                esi_3 = 0xffffff01
            else if (esi_3 s> 0xff)
                esi_3 = 0xff
            
            int32_t ebx_4 = arg23
            
            if (ebx_4 s< 0xffffff01)
                ebx_4 = 0xffffff01
            else if (ebx_4 s> 0xff)
                ebx_4 = 0xff
            
            int32_t edi_3 = arg24
            
            if (edi_3 s< 0xffffff01)
                edi_3 = 0xffffff01
            else if (edi_3 s> 0xff)
                edi_3 = 0xff
            
            int32_t ecx_21
            
            if (eax_40 s< 0)
                esi_3 += (esi_3 + 0xff) * eax_40 s/ 0xff
                ebx_4 += (ebx_4 + 0xff) * eax_40 s/ 0xff
                ecx_21 = edi_3 + 0xff
            label_585a15:
                edi_3 += ecx_21 * eax_40 s/ 0xff
            else if (eax_40 s> 0)
                esi_3 += (0xff - esi_3) * eax_40 s/ 0xff
                ebx_4 += (0xff - ebx_4) * eax_40 s/ 0xff
                ecx_21 = 0xff - edi_3
                goto label_585a15
            int32_t ecx_28 = arg27
            
            if (ecx_28 == 2)
                esi_3 = neg.d(esi_3)
                ebx_4 = neg.d(ebx_4)
                edi_3 = neg.d(edi_3)
            
            data_1cd43a0 = esi_3
            data_1cd439c = ebx_4
            data_1cd4398 = edi_3
            int32_t eax_59
            
            if (esi_3 s< 0)
                eax_59 = *(data_1cd4328 + (esi_3 << 2) + 0x3fc)
                data_1cd4390 = 0
            else
                eax_59 = *(data_1cd4328 + ((0xff - esi_3) << 2))
                ecx_28 = arg27
                data_1cd4390 = 0xff
            
            data_1cd4394 = eax_59
            int32_t eax_62
            
            if (ebx_4 s< 0)
                eax_62 = *(data_1cd4328 + (ebx_4 << 2) + 0x3fc)
                data_1cd4388 = 0
            else
                eax_62 = *(data_1cd4328 + ((0xff - ebx_4) << 2))
                ecx_28 = arg27
                data_1cd4388 = 0xff
            
            data_1cd438c = eax_62
            int32_t eax_64 = data_1cd4328
            
            if (edi_3 s< 0)
                result = *(eax_64 + (edi_3 << 2) + 0x3fc)
                data_1cd4380 = 0
            else
                result = *(eax_64 + ((0xff - edi_3) << 2))
                data_1cd4380 = 0xff
            
            data_1cd4384 = result
            
            if (arg12 != 0)
                if (arg26 != 0xff)
                    if (esi_3 != 0 || ebx_4 != 0 || edi_3 != 0)
                        if (arg21 != 0)
                            switch (ecx_28)
                                case 0
                                    return sub_5cd200()
                                case 1
                                    return sub_5d92a0()
                                case 2
                                    return sub_5e48a0()
                                case 4
                                    return sub_5ed8e0()
                        else
                            switch (ecx_28)
                                case 0
                                    return sub_5c76e0()
                                case 1
                                    return sub_5d27e0()
                                case 2
                                    return sub_5de330()
                                case 4
                                    return sub_5e8bc0()
                    else if (arg21 != ebx_4.b)
                        switch (ecx_28)
                            case 0
                                return sub_5c9f00()
                            case 1
                                return sub_5d5800()
                            case 2
                                return sub_5e1090()
                            case 4
                                return sub_5ed8e0()
                    else
                        switch (ecx_28)
                            case 0
                                return sub_5c4e50()
                            case 1
                                return sub_5cf770()
                            case 2
                                return sub_5db540()
                            case 4
                                return sub_5e8bc0()
                else if (esi_3 != 0 || ebx_4 != 0 || edi_3 != 0)
                    if (arg21 != 0)
                        switch (ecx_28)
                            case 0
                                return sub_5cba10()
                            case 1
                                return sub_5d7810()
                            case 2
                                return sub_5e2f00()
                            case 4
                                return sub_5eb630()
                    else
                        switch (ecx_28)
                            case 0
                                return sub_5c62e0()
                            case 1
                                return sub_5d1170()
                            case 2
                                return sub_5dcdd0()
                            case 4
                                return sub_5e6d20()
                else if (arg21 != ebx_4.b)
                    switch (ecx_28)
                        case 0
                            return sub_5c8b10()
                        case 1
                            return sub_5d41c0()
                        case 2
                            return sub_5dfb60()
                        case 4
                            return sub_5eb630()
                else
                    switch (ecx_28)
                        case 0
                            return sub_5c3ee0()
                        case 1
                            return sub_5ce570()
                        case 2
                            return sub_5da460()
                        case 4
                            return sub_5e6d20()
            else if (arg26 != 0xff)
                if (esi_3 != 0 || ebx_4 != 0 || edi_3 != 0)
                    if (arg21 != 0)
                        switch (ecx_28)
                            case 0
                                return sub_5cc540()
                            case 1
                                return sub_5d8490()
                            case 2
                                return sub_5e3af0()
                            case 4
                                return sub_5ec6c0()
                    else
                        switch (ecx_28)
                            case 0
                                return sub_5c6c00()
                            case 1
                                return sub_5d1bd0()
                            case 2
                                return sub_5dd7a0()
                            case 4
                                return sub_5e7b90()
                else if (arg21 != ebx_4.b)
                    switch (ecx_28)
                        case 0
                            return sub_5c9450()
                        case 1
                            return sub_5d4c10()
                        case 2
                            return sub_5e0520()
                        case 4
                            return sub_5ec6c0()
                else
                    switch (ecx_28)
                        case 0
                            return sub_5c45d0()
                        case 1
                            return sub_5ceda0()
                        case 2
                            return sub_5dac10()
                        case 4
                            return sub_5e7b90()
            else if (esi_3 != 0 || ebx_4 != 0 || edi_3 != 0)
                if (arg21 != 0)
                    switch (ecx_28)
                        case 0
                            return sub_5ca8a0()
                        case 1
                            return sub_5d6370()
                        case 2
                            return sub_5e1b80()
                        case 4
                            return sub_5e9a60()
                else
                    switch (ecx_28)
                        case 0
                            return sub_5c55c0()
                        case 1
                            return sub_5d00e0()
                        case 2
                            return sub_5dbe40()
                        case 4
                            return sub_5e5550()
            else if (arg21 != ebx_4.b)
                switch (ecx_28)
                    case 0
                        return sub_5c7e20()
                    case 1
                        return sub_5d3150()
                    case 2
                        return sub_5dec00()
                    case 4
                        return sub_5e9a60()
            else
                switch (ecx_28)
                    case 0
                        return sub_5c3670()
                    case 1
                        return sub_5cd940()
                    case 2
                        return sub_5d9950()
                    case 4
                        return sub_5e5550()

return result
