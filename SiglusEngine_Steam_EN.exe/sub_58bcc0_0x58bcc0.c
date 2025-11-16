// 函数: sub_58bcc0
// 地址: 0x58bcc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char ecx = arg10

if (arg10 u> 8)
    ecx = 8

int32_t result_3 = arg11
uint32_t ecx_1 = zx.d(ecx)
int32_t result = 0xffffff01 << ecx_1.b
arg10.d = ecx_1

if (result_3 s< result)
    result_3 = result
else if (result_3 s> 0xff)
    result_3 = 0xff

if (arg3 != 0 && (arg9 == 0 || result_3 != result))
    int32_t arg_18
    int32_t result_4
    int32_t arg_20
    int32_t result_1
    sub_4d2170(&arg_18, arg4, arg2, &arg_18, &result_4, &arg_20, &result_1)
    int32_t ecx_3 = arg5
    int32_t edx_2 = arg7
    
    if (ecx_3 s> edx_2)
        arg7 = ecx_3
        ecx_3 = edx_2
    
    int32_t result_2 = arg6
    result = arg8
    
    if (result_2 s> result)
        result = result_2
        result_2 = arg8
    
    if (ecx_3 s<= arg_20)
        int32_t edi_2 = arg_18
        
        if (arg7 s>= edi_2 && result_2 s<= result_1 && result s>= result_4)
            if (ecx_3 s< edi_2)
                ecx_3 = edi_2
            
            int32_t edi_3 = arg7
            
            if (edi_3 s> arg_20)
                edi_3 = arg_20
            
            if (result_2 s< result_4)
                result_2 = result_4
            
            if (result s> result_1)
                result = result_1
            
            data_1cd4500 = arg3 + ((arg2 * result_2 + ecx_3) << 2)
            data_1cd44ac = arg4
            int32_t edi_6 = arg9
            data_1cd44b0 = arg2 << 2
            data_1cd44f4 = edi_3 - ecx_3 + 1
            uint32_t ecx_6 = zx.d(arg18)
            data_1cd44fc = (arg2 - (edi_3 - ecx_3 + 1)) << 2
            data_1cd44f8 = result - result_2 + 1
            int32_t edx_5 = data_1cd4328
            data_1cd44a8 = ecx_6
            uint32_t ecx_7 = zx.d(arg17)
            data_1cd44a4 = ecx_7
            data_1cd43c8 = *(edx_5 + ((0xff - ecx_6) << 2))
            int32_t eax_13 = 0xff - ecx_7
            ecx_7.b = arg22
            data_1cd4444 = *(edx_5 + (eax_13 << 2))
            
            if (ecx_7.b != 0)
                data_1cd44b4 = zx.d(arg19)
                data_1cd44b8 = zx.d(arg20)
                data_1cd44bc = zx.d(arg21)
                data_1cd43b0 = *(edx_5 + ((0xff - zx.d(ecx_7.b)) << 2))
            
            uint32_t ecx_9 = zx.d(arg27)
            data_1cd44a0 = ecx_9
            data_1cd44d0 = ecx_9 << 2
            int32_t ecx_10 = arg26
            data_1cd43a4 = *(edx_5 + (ecx_9 << 2))
            
            if (ecx_10 s< 0xffffff01)
                ecx_10 = 0xffffff01
            else if (ecx_10 s> 0xff)
                ecx_10 = 0xff
            
            int32_t edx_6 = arg23
            
            if (edx_6 s< 0xffffff01)
                edx_6 = 0xffffff01
            else if (edx_6 s> 0xff)
                edx_6 = 0xff
            
            int32_t eax_25 = arg24
            arg23 = edx_6
            
            if (eax_25 s>= 0xffffff01)
                if (eax_25 s> 0xff)
                    eax_25 = 0xff
                
                arg24 = eax_25
            else
                arg24 = 0xffffff01
            
            int32_t ebx_1 = arg25
            
            if (ebx_1 s< 0xffffff01)
                ebx_1 = 0xffffff01
            else if (ebx_1 s> 0xff)
                ebx_1 = 0xff
            
            int32_t ecx_16
            int32_t edx_11
            
            if (ecx_10 s< 0)
                int32_t ecx_15 = (arg24 + 0xff) * ecx_10
                arg23 += (edx_6 + 0xff) * ecx_10 s/ 0xff
                int32_t eax_30
                int32_t edx_10
                edx_10:eax_30 = muls.dp.d(0x80808081, ecx_15)
                edx_11 = edx_10 + ecx_15
                ecx_16 = ebx_1 + 0xff
            label_58bf74:
                int32_t edx_16 = edx_11 s>> 7
                arg24 += (edx_16 u>> 0x1f) + edx_16
                ebx_1 += ecx_16 * ecx_10 s/ 0xff
            else if (ecx_10 s> 0)
                int32_t ecx_20 = (0xff - arg24) * ecx_10
                arg23 += (0xff - edx_6) * ecx_10 s/ 0xff
                int32_t eax_35
                int32_t edx_15
                edx_15:eax_35 = muls.dp.d(0x80808081, ecx_20)
                edx_11 = edx_15 + ecx_20
                ecx_16 = 0xff - ebx_1
                goto label_58bf74
            int32_t ecx_23 = arg28
            int32_t eax_43 = arg23
            int32_t edx_20 = arg24
            
            if (ecx_23 == 2)
                eax_43 = neg.d(eax_43)
                edx_20 = neg.d(edx_20)
                arg23 = eax_43
                ebx_1 = neg.d(ebx_1)
                arg24 = edx_20
            
            data_1cd44c0 = eax_43
            data_1cd44c4 = edx_20
            data_1cd44c8 = ebx_1
            int32_t eax_45
            
            if (eax_43 s< 0)
                eax_45 = *(data_1cd4328 + (eax_43 << 2) + 0x3fc)
                ecx_23 = arg28
                data_1cd44c0 = 0
            else
                eax_45 = *(data_1cd4328 + ((0xff - arg23) << 2))
                edi_6 = arg9
                data_1cd44c0 = 0xff
            
            data_1cd4394 = eax_45
            int32_t eax_47
            
            if (edx_20 s< 0)
                eax_47 = *(data_1cd4328 + (edx_20 << 2) + 0x3fc)
                data_1cd44c4 = 0
            else
                eax_47 = *(data_1cd4328 + ((0xff - edx_20) << 2))
                ecx_23 = arg28
                data_1cd44c4 = 0xff
            
            data_1cd438c = eax_47
            
            if (ebx_1 s< 0)
                result = *(data_1cd4328 + (ebx_1 << 2) + 0x3fc)
                data_1cd44c8 = 0
            else
                result = *(data_1cd4328 + ((0xff - ebx_1) << 2))
                ecx_23 = arg28
                data_1cd44c8 = 0xff
            
            data_1cd4384 = result
            
            if (edi_6 != 0)
                int32_t edx_21 = arg14
                data_1cd44e8 = arg16
                data_1cd44e4 = arg10.d
                data_1cd44dc = arg12
                data_1cd449c = arg13
                int32_t eax_55 = ecx_3
                data_1cd44e0 = result_3
                
                if (eax_55 s< edx_21)
                    edx_21 = mods.dp.d(sx.q(edx_21 - eax_55), arg12)
                    eax_55 = arg12
                
                int32_t temp1_2 = mods.dp.d(sx.q(eax_55 - edx_21), arg12)
                int32_t result_5 = result_2
                data_1cd44ec = temp1_2
                data_1cd4498 = temp1_2
                int32_t edx_26 = arg15
                
                if (result_5 s< edx_26)
                    edx_26 = mods.dp.d(sx.q(edx_26 - result_5), arg13)
                    result_5 = arg13
                
                data_1cd44d4 = edi_6
                int32_t temp1_4 = mods.dp.d(sx.q(result_5 - edx_26), arg13)
                data_1cd4494 = temp1_4
                result = arg12 * arg13 + edi_6
                data_1cd44f0 = temp1_4 * arg12 + edi_6
                edx_20 = arg24
                data_1cd44d8 = result
            
            if (arg27 != 0xff)
                if (arg22 != 0)
                    if (arg23 != 0 || edx_20 != 0 || ebx_1 != 0)
                        if (arg17 != 0)
                            if (arg18 != 0)
                                if (edi_6 == 0 || result_3 == 0xff)
                                    if (ecx_23 == 0)
                                        return sub_58b8b0()
                                else if (ecx_23 == 0)
                                    return sub_58ba60()
                            else if (edi_6 == 0 || result_3 == 0xff)
                                if (ecx_23 == 0)
                                    return sub_58b160()
                            else if (ecx_23 == 0)
                                return sub_58b2d0()
                        else if (arg18 != 0)
                            if (edi_6 == 0 || result_3 == 0xff)
                                if (ecx_23 == 0)
                                    return sub_58aaf0()
                            else if (ecx_23 == 0)
                                return sub_58ac20()
                        else if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_5897e0()
                        else if (ecx_23 == 0)
                            return sub_5898e0()
                    else if (arg17 != ebx_1.b)
                        if (arg18 != 0)
                            if (edi_6 == 0 || result_3 == 0xff)
                                if (ecx_23 == 0)
                                    return sub_58a4a0()
                            else if (ecx_23 == 0)
                                return sub_58a610()
                        else if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_589260()
                        else if (ecx_23 == 0)
                            return sub_5893a0()
                    else if (arg18 != ebx_1.b)
                        if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_5886e0()
                        else if (ecx_23 == 0)
                            return sub_5887e0()
                    else if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_587790()
                    else if (ecx_23 == 0)
                        return sub_587850()
                else if (arg23 != 0 || edx_20 != 0 || ebx_1 != 0)
                    if (arg17 != 0)
                        if (arg18 != 0)
                            if (edi_6 == 0 || result_3 == 0xff)
                                if (ecx_23 == 0)
                                    return sub_589dd0()
                            else if (ecx_23 == 0)
                                return sub_589f40()
                        else if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_588c60()
                        else if (ecx_23 == 0)
                            return sub_588da0()
                    else if (arg18 != 0)
                        if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_5881e0()
                        else if (ecx_23 == 0)
                            return sub_5882e0()
                    else if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_587390()
                    else if (ecx_23 == 0)
                        return sub_587450()
                else if (arg17 != ebx_1.b)
                    if (arg18 != 0)
                        if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_587c80()
                        else if (ecx_23 == 0)
                            return sub_587db0()
                    else if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_586f10()
                    else if (ecx_23 == 0)
                        return sub_587010()
                else if (arg18 != ebx_1.b)
                    if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_586a90()
                    else if (ecx_23 == 0)
                        return sub_586b50()
            else if (arg22 != 0)
                if (arg23 != 0 || edx_20 != 0 || ebx_1 != 0)
                    if (arg17 != 0)
                        if (arg18 != 0)
                            if (edi_6 == 0 || result_3 == 0xff)
                                if (ecx_23 == 0)
                                    return sub_58b4f0()
                            else if (ecx_23 == 0)
                                return sub_58b660()
                        else if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_58adf0()
                        else if (ecx_23 == 0)
                            return sub_58af40()
                    else if (arg18 != 0)
                        if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_58a820()
                        else if (ecx_23 == 0)
                            return sub_58a920()
                    else if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_589580()
                    else if (ecx_23 == 0)
                        return sub_589640()
                else if (arg17 != ebx_1.b)
                    if (arg18 != 0)
                        if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_58a150()
                        else if (ecx_23 == 0)
                            return sub_58a290()
                    else if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_588f80()
                    else if (ecx_23 == 0)
                        return sub_589080()
                else if (arg18 != ebx_1.b)
                    if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_588480()
                    else if (ecx_23 == 0)
                        return sub_588540()
                else if (edi_6 == 0 || result_3 == 0xff)
                    if (ecx_23 == 0)
                        return sub_5875b0()
                else if (ecx_23 == 0)
                    return sub_587630()
            else if (arg23 != 0 || edx_20 != 0 || ebx_1 != 0)
                if (arg17 != 0)
                    if (arg18 != 0)
                        if (edi_6 == 0 || result_3 == 0xff)
                            if (ecx_23 == 0)
                                return sub_589a80()
                        else if (ecx_23 == 0)
                            return sub_589bc0()
                    else if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_588980()
                    else if (ecx_23 == 0)
                        return sub_588a80()
                else if (arg18 != 0)
                    if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_587f80()
                    else if (ecx_23 == 0)
                        return sub_588040()
                else if (edi_6 == 0 || result_3 == 0xff)
                    if (ecx_23 == 0)
                        return sub_5871b0()
                else if (ecx_23 == 0)
                    return sub_587230()
            else if (arg17 != ebx_1.b)
                if (arg18 != 0)
                    if (edi_6 == 0 || result_3 == 0xff)
                        if (ecx_23 == 0)
                            return sub_5879b0()
                    else if (ecx_23 == 0)
                        return sub_587ab0()
                else if (edi_6 == 0 || result_3 == 0xff)
                    if (ecx_23 == 0)
                        return sub_586cb0()
                else if (ecx_23 == 0)
                    return sub_586d70()
            else if (arg18 != ebx_1.b)
                if (edi_6 == 0 || result_3 == 0xff)
                    if (ecx_23 == 0)
                        return sub_5868b0()
                else if (ecx_23 == 0)
                    return sub_586930()

return result
