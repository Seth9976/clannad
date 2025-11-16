// 函数: sub_584980
// 地址: 0x584980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char ecx = arg14

if (arg14 u> 8)
    ecx = 8

uint32_t eax = zx.d(ecx)
int32_t edx = 0xffffff01 << eax.b
void* result = 0xff
int32_t ecx_2 = arg15

if (ecx_2 s>= edx)
    if (ecx_2 s> 0xff)
        ecx_2 = 0xff
    
    arg15 = ecx_2
else
    ecx_2 = edx
    arg15 = edx

if (arg5 != 0 && arg3 != 0 && arg31 != 0 && (arg13 == 0 || ecx_2 != edx))
    int32_t arg_28
    int32_t arg_2c
    void* result_2
    int32_t arg_34
    result = sub_4d2170(&arg_28, arg4, arg2, &arg_28, &arg_2c, &result_2, &arg_34)
    int32_t edx_3 = arg11 - arg8
    int32_t ebx_2 = arg12 - arg9
    arg11 = edx_3
    arg12 = ebx_2
    
    if (edx_3 s<= result_2)
        int32_t ecx_4 = arg_34
        
        if (ebx_2 s<= ecx_4)
            void* result_3 = arg6
            void* result_1
            
            if (edx_3 s>= 0)
                result_1 = nullptr
            else
                result = neg.d(edx_3)
                result_3 -= result
                result_1 = result
                edx_3 = 0
                arg11 = 0
            
            void* esi_1 = arg7
            
            if (ebx_2 s>= 0)
                arg14.d = 0
            else
                result = neg.d(ebx_2)
                esi_1 -= result
                arg14.d = result
                ebx_2 = 0
                arg12 = 0
            
            if (result_3 s> 0 && esi_1 s> 0)
                int32_t eax_2 = arg_28
                
                if (eax_2 s> edx_3)
                    int32_t eax_3 = eax_2 - edx_3
                    edx_3 = arg_28
                    result_1 += eax_3
                    result_3 -= eax_3
                    arg11 = edx_3
                
                int32_t eax_4 = arg_2c
                
                if (eax_4 s> ebx_2)
                    int32_t eax_5 = eax_4 - ebx_2
                    ebx_2 = arg_2c
                    arg14.d += eax_5
                    esi_1 -= eax_5
                    arg12 = ebx_2
                
                result = result_2
                
                if (result s>= edx_3 && ecx_4 s>= ebx_2)
                    result = result - edx_3 + 1
                    
                    if (result s< result_3)
                        result_3 = result
                    
                    if (ecx_4 - ebx_2 + 1 s< esi_1)
                        esi_1 = ecx_4 - ebx_2 + 1
                    
                    if (result_3 s> 0 && esi_1 s> 0)
                        data_1cd43cc = esi_1
                        int32_t esi_2 = data_1cd4328
                        data_1cd43d0 = result_3
                        data_1cd43dc = arg5 + ((arg14.d * arg6 + result_1) << 2)
                        data_1cd43e8 = arg3 + ((ebx_2 * arg2 + edx_3) << 2)
                        data_1cd43e0 = arg4
                        data_1cd43d4 = arg7
                        int32_t eax_17 = result_3 << 2
                        data_1cd43d8 = (arg6 << 2) - eax_17
                        uint32_t ecx_11 = zx.d(arg22.b)
                        data_1cd43e4 = (arg2 << 2) - eax_17
                        data_1cd43c4 = ecx_11
                        data_1cd43c8 = *(esi_2 + ((0xff - ecx_11) << 2))
                        data_1cd43c0 = (0xff - zx.d(arg21.b)) << 2
                        char ecx_14 = arg26.b
                        
                        if (ecx_14 != 0)
                            data_1cd43bc = zx.d(arg23)
                            data_1cd43b8 = zx.d(arg24)
                            data_1cd43b4 = zx.d(arg25)
                            data_1cd43b0 = *(esi_2 + ((0xff - zx.d(ecx_14)) << 2))
                        
                        uint32_t ecx_16 = zx.d(arg31)
                        data_1cd43ac = ecx_16 << 2
                        data_1cd43a8 = 0xff - ecx_16
                        data_1cd43a4 = *(esi_2 + (ecx_16 << 2))
                        int32_t eax_35 = arg30
                        
                        if (eax_35 s< 0xffffff01)
                            eax_35 = 0xffffff01
                        else if (eax_35 s> 0xff)
                            eax_35 = 0xff
                        
                        int32_t ebx_5 = arg27
                        
                        if (ebx_5 s< 0xffffff01)
                            ebx_5 = 0xffffff01
                        else if (ebx_5 s> 0xff)
                            ebx_5 = 0xff
                        
                        int32_t edi_1 = arg28
                        
                        if (edi_1 s< 0xffffff01)
                            edi_1 = 0xffffff01
                        else if (edi_1 s> 0xff)
                            edi_1 = 0xff
                        
                        int32_t esi_3 = arg29
                        
                        if (esi_3 s< 0xffffff01)
                            esi_3 = 0xffffff01
                        else if (esi_3 s> 0xff)
                            esi_3 = 0xff
                        
                        int32_t ecx_21
                        int32_t edx_12
                        
                        if (eax_35 s< 0)
                            int32_t ecx_20 = (edi_1 + 0xff) * eax_35
                            ebx_5 += (ebx_5 + 0xff) * eax_35 s/ 0xff
                            int32_t eax_40
                            int32_t edx_11
                            edx_11:eax_40 = muls.dp.d(0x80808081, ecx_20)
                            edx_12 = edx_11 + ecx_20
                            ecx_21 = esi_3 + 0xff
                        label_584ccb:
                            int32_t edx_17 = edx_12 s>> 7
                            edi_1 += (edx_17 u>> 0x1f) + edx_17
                            esi_3 += ecx_21 * eax_35 s/ 0xff
                        else if (eax_35 s> 0)
                            int32_t ecx_25 = (0xff - edi_1) * eax_35
                            ebx_5 += (0xff - ebx_5) * eax_35 s/ 0xff
                            int32_t eax_45
                            int32_t edx_16
                            edx_16:eax_45 = muls.dp.d(0x80808081, ecx_25)
                            edx_12 = edx_16 + ecx_25
                            ecx_21 = 0xff - esi_3
                            goto label_584ccb
                        
                        if (arg32 == 2)
                            ebx_5 = neg.d(ebx_5)
                            edi_1 = neg.d(edi_1)
                            esi_3 = neg.d(esi_3)
                        
                        int32_t ecx_27 = data_1cd4328
                        data_1cd43a0 = ebx_5
                        data_1cd439c = edi_1
                        data_1cd4398 = esi_3
                        int32_t eax_54
                        
                        if (ebx_5 s< 0)
                            eax_54 = *(ecx_27 + (ebx_5 << 2) + 0x3fc)
                            data_1cd4390 = 0
                        else
                            eax_54 = *(ecx_27 + ((0xff - ebx_5) << 2))
                            data_1cd4390 = 0xff
                        
                        data_1cd4394 = eax_54
                        int32_t eax_56
                        
                        if (edi_1 s< 0)
                            eax_56 = *(ecx_27 + (edi_1 << 2) + 0x3fc)
                            data_1cd4388 = 0
                        else
                            eax_56 = *(ecx_27 + ((0xff - edi_1) << 2))
                            data_1cd4388 = 0xff
                        
                        data_1cd438c = eax_56
                        int32_t eax_57
                        
                        if (esi_3 s< 0)
                            eax_57 = *(ecx_27 + (esi_3 << 2) + 0x3fc)
                            data_1cd4380 = 0
                        else
                            eax_57 = *(ecx_27 + ((0xff - esi_3) << 2))
                            data_1cd4380 = 0xff
                        
                        data_1cd4384 = eax_57
                        int32_t eax_58 = arg13
                        
                        if (eax_58 != 0)
                            int32_t edx_22 = arg18
                            data_1cd437c = eax_58
                            data_1cd4378 = eax
                            data_1cd4374 = arg15
                            data_1cd4370 = arg16
                            data_1cd436c = arg17
                            data_1cd4364 = arg19
                            int32_t eax_64 = arg11
                            data_1cd4360 = arg20
                            data_1cd4368 = edx_22
                            
                            if (eax_64 s< edx_22)
                                edx_22 = mods.dp.d(sx.q(edx_22 - eax_64), arg16)
                                eax_64 = arg16
                            
                            int32_t eax_69 = arg12
                            data_1cd435c = mods.dp.d(sx.q(eax_64 - edx_22), arg16)
                            int32_t edx_27 = arg19
                            
                            if (eax_69 s< edx_27)
                                edx_27 = mods.dp.d(sx.q(edx_27 - eax_69), arg17)
                                eax_69 = arg17
                            
                            int32_t temp1_4 = mods.dp.d(sx.q(eax_69 - edx_27), arg17)
                            int32_t eax_74 = data_1cd435c
                            data_1cd4358 = temp1_4
                            data_1cd4354 = eax_74
                            eax_58 = arg13
                            data_1cd4350 = temp1_4 * arg16 + eax_58
                            data_1cd434c = arg16 * arg17 + eax_58
                        
                        return sub_582330(eax_58, eax_58, arg10, arg15, arg21, arg22, arg26, ebx_5, 
                            edi_1, esi_3, arg31.d, arg32)

return result
