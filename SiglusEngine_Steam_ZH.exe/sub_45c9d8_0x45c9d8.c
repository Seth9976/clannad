// 函数: sub_45c9d8
// 地址: 0x45c9d8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t var_78 = 0

if ((arg3 == 0 && esi != 0) || (arg6 & 0xfffdfa80) != 0)
    return 0x8876086c

int16_t* edx_2 = arg6 & 0x20000

if (esi == 0xffffffff)
    esi = 0
    
    if (arg8 != 0)
        if (*arg3 != 0)
            do
                esi += 1
            while (*(arg3 + (esi << 1)) != 0)
    else if (*arg3 != 0)
        do
            esi += 1
        while (arg3[esi] != 0)

int32_t edi
int32_t var_b8_1 = edi
int32_t var_10_1 = 0
arg4 = 0
int32_t result
uint32_t var_64
uint32_t var_60
int32_t var_34
int32_t var_28
uint32_t var_20
int32_t var_1c
int32_t result_1

if (esi == 0)
label_45d7f4:
    
    if (arg9 != 0)
        result_1 = sub_45af53(arg1 + 0x528, arg4, 1)
        
        if (result_1 s>= 0)
            result_1 = sub_45af53(arg1 + 0x560, arg4, 1)
            
            if (result_1 s>= 0)
                int32_t* esi_43 = arg5
                int32_t ecx_124 = arg6 u>> 5 & 1
                var_1c = 0
                int32_t var_3c = 0
                *(arg1 + 0x578) = 0
                int32_t var_18_5 = 0x7fffffff
                int32_t var_14_11 = 0x7fffffff
                int32_t var_24_3 = 0
                
                if ((arg6.b & 0x10) == 0)
                label_45d883:
                    
                    if (esi_43 != 0 && (arg6.w & 0x52c) == 0)
                        var_14_11 = esi_43[3] - esi_43[1]
                else if (esi_43 != 0)
                    int32_t edx_57 = *esi_43
                    int32_t eax_193 = esi_43[2]
                    
                    if (edx_57 s< eax_193 && ecx_124 == 0)
                        var_18_5 = eax_193 - edx_57
                        var_24_3 = 1
                    
                    goto label_45d883
                
                var_28 = 0
                var_34 = 0
                arg3 = nullptr
                arg8 = 0
                
                if (var_10_1 s> 0)
                    while (true)
                        int32_t ecx_126 = arg8 << 4
                        void* eax_198 = *(arg1 + 0x508) + ecx_126
                        int32_t esi_44 = *(eax_198 + 8)
                        int32_t var_7c_1 = ecx_126
                        int32_t var_40_2 = *(eax_198 + 0x18)
                        
                        if ((*(eax_198 + 0xc) & 1) != 0 && ecx_124 == 0)
                            *(*(arg1 + 0x558) + (esi_44 << 2)) = 0
                            int32_t edx_58
                            edx_58.w = *(arg1 + 0x78)
                            *(*(arg1 + 0x548) + (esi_44 << 1)) = edx_58.w
                        
                        char eax_202 = (*(ecx_126 + *(arg1 + 0x508) + 0xc)).b
                        
                        if ((eax_202 & 2) != 0 && ecx_124 == 0)
                            *(*(arg1 + 0x558) + (esi_44 << 2)) = 0
                            ecx_126.w = *(arg1 + 0x78)
                            *(*(arg1 + 0x548) + (esi_44 << 1)) = ecx_126.w
                            result_1 = sub_45bf9c(arg1, var_28, var_40_2, var_34, arg8 + 1, edx_2, 
                                &var_1c, &var_3c)
                            
                            if (result_1 s< 0)
                                goto label_45e057_2
                            
                            arg3 = nullptr
                            var_28 = var_40_2
                            var_34 = arg8 + 1
                        else if ((eax_202 & 4) == 0 || (arg6.b & 0x40) == 0)
                            if (var_24_3 != 0 && arg3 s> 0)
                                void* eax_221 = *(arg1 + 0x510) + arg8 * 0xc
                                
                                if (*(eax_221 + 8) + *(eax_221 + 4) + arg3 + *eax_221 s> var_18_5)
                                    result_1 = sub_45bf9c(arg1, var_28, esi_44, var_34, arg8, 
                                        edx_2, &var_1c, &var_3c)
                                    
                                    if (result_1 s< 0)
                                        goto label_45e057_2
                                    
                                    arg3 = nullptr
                                    ecx_126 = var_7c_1
                                    var_28 = esi_44
                                    var_34 = arg8
                            
                            int32_t eax_224 = esi_44
                            int32_t var_30_3 = eax_224
                            
                            if (esi_44 s< var_40_2)
                                int32_t edx_70 = var_40_2 - esi_44
                                int32_t var_2c_4 = edx_70
                                
                                do
                                    int32_t edi_61 = *(ecx_126 + *(arg1 + 0x508) + 0xc) & 8
                                    int32_t edi_62 = *(arg1 + 0x558)
                                    int32_t eax_226
                                    
                                    if (edi_61 == 0)
                                        eax_226 = *(edi_62 + (eax_224 << 2))
                                    else
                                        eax_226 = *(edi_62 + ((esi_44 + edx_70) << 2) - 4)
                                    
                                    if (var_24_3 != 0 && &arg3[eax_226] s> var_18_5)
                                        if (edi_61 != 0)
                                            int32_t eax_228 = var_30_3 - esi_44
                                            int32_t edi_65 = eax_228 + arg4
                                            arg3 = eax_228
                                            result = sub_45af53(arg1 + 0x550, edi_65, 1)
                                            
                                            if (result s< 0)
                                                return result
                                            
                                            result = sub_45af53(arg1 + 0x558, edi_65, 1)
                                            
                                            if (result s< 0)
                                                return result
                                            
                                            int32_t** edi_66 = arg1 + 0x568
                                            result = sub_45adb5(edi_66, edi_65, 1)
                                            
                                            if (result s< 0)
                                                return result
                                            
                                            if (arg3 s> 0)
                                                int32_t eax_229 = arg4
                                                void* var_50_1 = eax_229 << 3
                                                void* eax_231 = var_40_2 - arg3
                                                int32_t ecx_145 = eax_229 << 2
                                                int32_t var_c_7 = eax_231 << 2
                                                int32_t var_54_1 = ecx_145
                                                int32_t* var_8_10 = eax_231 << 3
                                                char* i_8 = arg3
                                                char* i
                                                
                                                do
                                                    int32_t eax_234 = *(arg1 + 0x550)
                                                    *(ecx_145 + eax_234) = *(var_c_7 + eax_234)
                                                    int32_t eax_235 = *(arg1 + 0x558)
                                                    int32_t edx_76 = *(var_c_7 + eax_235)
                                                    var_c_7 += 4
                                                    *(ecx_145 + eax_235) = edx_76
                                                    int32_t* eax_236 = *edi_66
                                                    int32_t* edx_77 = var_50_1
                                                    *(edx_77 + eax_236) = *(var_8_10 + eax_236)
                                                    int32_t ecx_149 = *(var_8_10 + eax_236 + 4)
                                                    var_8_10 = &var_8_10[2]
                                                    *(edx_77 + eax_236 + 4) = ecx_149
                                                    ecx_145 = var_54_1 + 4
                                                    i = i_8
                                                    i_8 -= 1
                                                    var_54_1 = ecx_145
                                                    var_50_1 = &edx_77[2]
                                                while (i != 1)
                                            
                                            int32_t ecx_151 = var_40_2
                                            
                                            if (ecx_151 s> var_30_3)
                                                void* eax_238 = ecx_151 - arg3
                                                int32_t var_8_11 = eax_238 << 3
                                                int32_t edx_82 = eax_238 << 2
                                                
                                                while (true)
                                                    int32_t* eax_239 = *(arg1 + 0x550)
                                                    var_8_11 -= 8
                                                    ecx_151 -= 1
                                                    eax_239[ecx_151] = *(eax_239 + edx_82 - 4)
                                                    int32_t* eax_240 = *(arg1 + 0x558)
                                                    eax_240[ecx_151] = *(eax_240 + edx_82 - 4)
                                                    edi_66 = arg1 + 0x568
                                                    int32_t* eax_241 = *edi_66
                                                    eax_241[ecx_151 * 2] = *(eax_241 + var_8_11)
                                                    eax_241[ecx_151 * 2 + 1] =
                                                        *(eax_241 + var_8_11 + 4)
                                                    
                                                    if (ecx_151 s<= var_30_3)
                                                        break
                                                    
                                                    edx_82 -= 4
                                            
                                            char* i_14 = arg3
                                            
                                            if (i_14 s> 0)
                                                int32_t var_50_2 = esi_44 << 3
                                                int32_t eax_244 = arg4
                                                arg3 = eax_244 << 3
                                                int32_t esi_49 = esi_44 << 2
                                                int32_t var_38_4 = esi_49
                                                int32_t ecx_155 = eax_244 << 2
                                                char* i_7 = i_14
                                                char* i_1
                                                
                                                do
                                                    int32_t* eax_245 = *(arg1 + 0x550)
                                                    *(eax_245 + esi_49) = *(eax_245 + ecx_155)
                                                    int32_t* eax_246 = *(arg1 + 0x558)
                                                    *(eax_246 + esi_49) = *(eax_246 + ecx_155)
                                                    int32_t* eax_247 = *edi_66
                                                    *(eax_247 + var_50_2) = *(eax_247 + arg3)
                                                    int32_t esi_52 = *(eax_247 + arg3 + 4)
                                                    arg3 = &arg3[8]
                                                    *(eax_247 + var_50_2 + 4) = esi_52
                                                    esi_49 = var_38_4 + 4
                                                    ecx_155 += 4
                                                    i_1 = i_7
                                                    i_7 -= 1
                                                    var_38_4 = esi_49
                                                    var_50_2 += 8
                                                while (i_1 != 1)
                                            
                                            esi_44 = var_30_3
                                        
                                        result_1 = sub_45bf9c(arg1, var_28, var_30_3, var_34, 
                                            arg8 + 1, edx_2, &var_1c, &var_3c)
                                        
                                        if (result_1 s< 0)
                                            goto label_45e057_2
                                        
                                        arg3 = nullptr
                                        edx_70 = var_2c_4
                                        ecx_126 = var_7c_1
                                        var_28 = var_30_3
                                        var_34 = arg8
                                    
                                    arg3 = &arg3[eax_226]
                                    eax_224 = var_30_3 + 1
                                    edx_70 -= 1
                                    var_30_3 = eax_224
                                    var_2c_4 = edx_70
                                while (eax_224 s< var_40_2)
                        else
                            if (var_24_3 != 0 && arg3 s>= var_18_5)
                                result_1 = sub_45bf9c(arg1, var_28, esi_44, var_34, arg8, edx_2, 
                                    &var_1c, &var_3c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                arg3 = nullptr
                                var_28 = esi_44
                                var_34 = arg8
                            
                            int32_t ecx_130 = *(arg1 + 0x44) << 3
                            int32_t ecx_131 = ecx_130 - mods.dp.d(sx.q(arg3), ecx_130)
                            void* var_8_9 = ecx_131
                            
                            if (var_24_3 != 0 && &arg3[ecx_131] s> var_18_5)
                                var_8_9 = var_18_5 - arg3
                            
                            void** eax_216 = esi_44 << 2
                            *(eax_216 + *(arg1 + 0x558)) = var_8_9
                            char* edi_58
                            edi_58.w = *(arg1 + 0x78)
                            int32_t edx_62 = esi_44 * 2
                            *(edx_62 + *(arg1 + 0x548)) = edi_58.w
                            result_1 = sub_45c417(arg1, edx_62 + *(arg1 + 0x548), 1, 
                                eax_216 + *(arg1 + 0x550))
                            
                            if (result_1 s< 0)
                                goto label_45e057_2
                            
                            arg3 += var_8_9
                        
                        if (var_3c s<= var_14_11)
                            arg8 += 1
                            
                            if (arg8 s< var_10_1)
                                continue
                        
                        if (arg3 s> 0)
                            result_1 = sub_45bf9c(arg1, var_28, arg4, var_34, var_10_1, edx_2, 
                                &var_1c, &var_3c)
                            
                            if (result_1 s< 0)
                                goto label_45e057_2
                        
                        esi_43 = arg5
                        break
                
                int32_t eax_269
                int32_t ecx_159
                int32_t edi_68
                
                if (esi_43 == 0)
                    eax_269 = var_3c
                    ecx_159 = 0
                    edi_68 = 0
                    arg8 = 0
                else
                    if (edx_2 != 0)
                        arg6 ^= 2
                    
                    if ((arg6.b & 1) != 0)
                        int32_t eax_260
                        int32_t edx_96
                        edx_96:eax_260 = sx.q(esi_43[2] - var_1c + *esi_43)
                        edi_68 = (eax_260 - edx_96) s>> 1
                    else if ((arg6.b & 2) == 0)
                        edi_68 = *esi_43
                    else
                        edi_68 = esi_43[2] - var_1c
                    
                    arg8 = edi_68
                    
                    if ((arg6.b & 4) != 0)
                        int32_t eax_265
                        int32_t edx_97
                        edx_97:eax_265 = sx.q(esi_43[3] + esi_43[1] - var_3c)
                        ecx_159 = (eax_265 - edx_97) s>> 1
                    else if ((arg6.b & 8) == 0)
                        ecx_159 = esi_43[1]
                    else
                        ecx_159 = esi_43[3] - var_3c
                    
                    eax_269 = ecx_159 - esi_43[1] + var_3c
                
                arg3 = ecx_159
                *arg9 = eax_269
                
                if ((arg6:1.b & 4) == 0)
                    if (arg2 != 0)
                        goto label_45de2b
                    
                    if (*(arg1 + 0xc) == 0)
                        result_1 = sub_407915(*(arg1 + 8), arg1 + 0xc)
                    
                    if (*(arg1 + 0xc) != 0 || result_1 s>= 0)
                        int32_t* eax_274 = *(arg1 + 0xc)
                        arg2 = eax_274
                        result_1 = (*(*eax_274 + 0x20))(eax_274, 0x30)
                        
                        if (result_1 s>= 0)
                            ecx_159 = arg3
                            edi_68 = arg8
                            var_78 = 1
                        label_45de2b:
                            float var_80_1 = fconvert.s(float.t(0))
                            float var_68 = fconvert.s(float.t(0))
                            
                            if ((arg6:1.b & 1) != 0)
                                esi_43 = nullptr
                                arg5 = nullptr
                            
                            int32_t eax_276 = 0
                            int32_t var_8_12 = 0
                            
                            if (esi_43 != 0)
                                int32_t edi_71 = *(arg1 + 0x30)
                                
                                if (edi_71 != 0)
                                    int32_t edx_99 = esi_43[1]
                                    
                                    if (edx_99 s> ecx_159)
                                        eax_276 = divs.dp.d(sx.q(edx_99 - ecx_159), edi_71)
                                        ecx_159 += eax_276 * edi_71
                                        var_8_12 = eax_276
                                        arg3 = ecx_159
                            
                            if (eax_276 u>= *(arg1 + 0x578))
                            label_45e046:
                                result_1 = 0
                            else
                                int32_t edi_73 = eax_276 * 0xc
                                arg4 = edi_73
                                
                                while (true)
                                    if (esi_43 != 0 && ecx_159 s>= esi_43[3])
                                        goto label_45e046
                                    
                                    int32_t eax_285
                                    
                                    if ((arg6.b & 1) == 0)
                                        eax_285 = edi_68
                                        
                                        if ((arg6.b & 2) != 0)
                                            eax_285 =
                                                eax_285 - *(*(arg1 + 0x57c) + edi_73 + 8) + var_1c
                                    else
                                        int32_t eax_282
                                        int32_t edx_103
                                        edx_103:eax_282 =
                                            sx.q(var_1c - *(*(arg1 + 0x57c) + edi_73 + 8))
                                        eax_285 = ((eax_282 - edx_103) s>> 1) + edi_68
                                    
                                    int32_t* eax_288 = *(arg1 + 0x57c) + edi_73
                                    int32_t* ecx_165 = *eax_288
                                    arg9 = ecx_165
                                    
                                    if (ecx_165 u< eax_288[1])
                                        while (true)
                                            int32_t edx_105 = arg9 << 2
                                            int32_t* ecx_166 = *(edx_105 + *(arg1 + 0x550))
                                            
                                            if (*ecx_166 != 0xffffffff)
                                                int32_t edi_74 = *(arg1 + 0x568) + (arg9 << 3)
                                                void* edx_107 =
                                                    sx.d(*(ecx_166 + 0xe)) + *(edi_74 + 4)
                                                uint32_t edi_75 = zx.d(*(ecx_166 + 0xa))
                                                int32_t eax_294 = sx.d(ecx_166[3].w)
                                                    + *(*(arg1 + 0x560) + edx_105) + *edi_74
                                                    + eax_285
                                                var_64 = zx.d(ecx_166[1].w)
                                                var_60 = zx.d(*(ecx_166 + 6))
                                                uint32_t esi_58 = zx.d(ecx_166[2].w)
                                                void* edx_108 = edx_107 + arg3
                                                uint32_t var_5c_1 = esi_58
                                                uint32_t var_58_1 = edi_75
                                                uint32_t edi_76 = edi_75 - var_60
                                                var_20 = esi_58 - var_64
                                                esi_43 = arg5
                                                float var_70 =
                                                    fconvert.s(float.t(var_20) * fconvert.t(0.5f))
                                                float var_6c_1 =
                                                    fconvert.s(float.t(edi_76) * fconvert.t(0.5f))
                                                float var_88 = fconvert.s(float.t(eax_294)
                                                    + fconvert.t(var_70))
                                                float var_84_1 = fconvert.s(float.t(edx_108)
                                                    + fconvert.t(var_6c_1))
                                                
                                                if (esi_43 != 0)
                                                    int32_t edi_77 = *esi_43
                                                    
                                                    if (eax_294 s< edi_77)
                                                        int32_t edi_78 = edi_77 - eax_294
                                                        var_64 += edi_78
                                                        var_70 = fconvert.s(fconvert.t(var_70)
                                                            - float.t(edi_78))
                                                    
                                                    int32_t esi_60 = esi_43[2]
                                                    
                                                    if (var_20 + eax_294 s> esi_60)
                                                        var_5c_1 += esi_60 - var_20 - eax_294
                                                    
                                                    if (edx_108 s< arg5[1])
                                                        void* esi_64 = arg5[1] - edx_108
                                                        var_60 += esi_64
                                                        float var_6c_2 = fconvert.s(
                                                            fconvert.t(var_6c_1) - float.t(esi_64))
                                                    
                                                    int32_t eax_296 = arg5[3]
                                                    
                                                    if (edi_76 + edx_108 s> eax_296)
                                                        var_58_1 += eax_296 - edi_76 - edx_108
                                                    
                                                    esi_43 = arg5
                                                
                                                if (var_64 s< var_5c_1 && var_60 s< var_58_1)
                                                    result_1 = (*(*arg2 + 0x24))(arg2, *ecx_166, 
                                                        &var_64, &var_70, &var_88, arg7)
                                                    
                                                    if (result_1 s< 0)
                                                        break
                                            
                                            arg9 += 1
                                            
                                            if (arg9 u>= *(arg4 + *(arg1 + 0x57c) + 4))
                                                goto label_45e02d
                                        
                                        break
                                    
                                label_45e02d:
                                    arg3 = &arg3[*(arg1 + 0x30)]
                                    var_8_12 += 1
                                    arg4 += 0xc
                                    
                                    if (var_8_12 u>= *(arg1 + 0x578))
                                        goto label_45e046
                                    
                                    edi_73 = arg4
                                    ecx_159 = arg3
                            
                            if (var_78 != 0)
                                (*(*arg2 + 0x2c))(arg2)
                else
                    if (esi_43 != 0)
                        int32_t eax_270 = var_1c
                        *esi_43 = edi_68
                        int32_t eax_271 = var_3c
                        esi_43[1] = ecx_159
                        esi_43[2] = edi_68 + eax_270
                        esi_43[3] = ecx_159 + eax_271
                    
                    result_1 = 0
        
    labelid_4:
        result = result_1
    else
        result = 0
else if (data_b9730c == 0)
    if (arg8 == 0 || data_b95af8 != 0)
        goto label_45d141
    
    int32_t cbMultiByte = WideCharToMultiByte(0, 0, arg3, esi, nullptr, 0, nullptr, nullptr)
    result_1 = sub_45aed6(arg1 + 0x518, cbMultiByte, 1)
    
    if (result_1 s< 0)
    labelid_4:
        result = result_1
    else
        WideCharToMultiByte(0, 0, arg3, esi, *(arg1 + 0x518), cbMultiByte, nullptr, nullptr)
        esi = cbMultiByte
        arg8 = 0
        arg3 = *(arg1 + 0x518)
    label_45d141:
        result_1 = sub_45afd3(arg1 + 0x548, esi, 1)
        
        if (result_1 s< 0)
        labelid_4:
            result = result_1
        else
            result_1 = sub_45af53(arg1 + 0x528, esi, 1)
            
            if (result_1 s< 0)
            labelid_4:
                result = result_1
            else
                result_1 = sub_45aed6(arg1 + 0x530, esi, 1)
                
                if (result_1 s< 0)
                labelid_4:
                    result = result_1
                else
                    result_1 = sub_45af53(arg1 + 0x558, esi, 1)
                    
                    if (result_1 s< 0)
                    labelid_4:
                        result = result_1
                    else
                        __builtin_memset(__builtin_memset(*(arg1 + 0x530), 0, esi u>> 2 << 2), 0, 
                            esi & 3)
                        **(arg1 + 0x530) = (((edx_2 == 0) - 1) & 0xc0) - 0x80
                        int32_t var_ac
                        __builtin_memset(&var_ac, 0, 0x24)
                        int32_t var_a4_1 = *(arg1 + 0x528)
                        int32_t var_a0_1 = *(arg1 + 0x558)
                        bool* var_98_1 = *(arg1 + 0x530)
                        int32_t var_94_1 = *(arg1 + 0x548)
                        enum GET_CHARACTER_PLACEMENT_FLAGS dwFlags =
                            (*(arg1 + 0x6c) & 0x13a) | 0x80000
                        int32_t* lpResults = &var_ac
                        uint8_t* lpString = arg3
                        var_ac = 0x24
                        HDC hdc = *(arg1 + 0x10)
                        
                        if (arg8 != 0)
                            GetCharacterPlacementW(hdc, lpString, esi, 0, lpResults, dwFlags)
                        else
                            GetCharacterPlacementA(hdc, lpString, esi, 0, lpResults, dwFlags)
                        
                        arg4 = esi
                        result = sub_45adb5(arg1 + 0x568, esi, 1)
                        
                        if (result s>= 0)
                            int32_t esi_9 = arg4
                            __builtin_memset(*(arg1 + 0x568), 0, esi_9 * 8)
                            result = sub_45afd3(arg1 + 0x520, esi_9, 1)
                            
                            if (result s>= 0)
                                int32_t eax_112 = 0
                                
                                if (esi_9 s> 0)
                                    do
                                        void* ecx_63 = *(*(arg1 + 0x528) + (eax_112 << 2))
                                        int16_t ecx_64
                                        
                                        if (arg8 == 0)
                                            ecx_64 = sx.w(*(ecx_63 + arg3))
                                        else
                                            ecx_64 = *(arg3 + (ecx_63 << 1))
                                        
                                        *(*(arg1 + 0x520) + (eax_112 << 1)) = ecx_64
                                        eax_112 += 1
                                    while (eax_112 s< esi_9)
                                
                                char* edi_33 = nullptr
                                int32_t var_c_4 = 0
                                
                                if (esi_9 s> 0)
                                    arg3 = nullptr
                                    
                                    while (true)
                                        result = sub_45ae35(arg1 + 0x508, var_10_1 + 1, 0)
                                        
                                        if (result s< 0)
                                            return result
                                        
                                        char* eax_115 = arg3
                                        *(eax_115 + *(arg1 + 0x508)) = 0
                                        *(eax_115 + *(arg1 + 0x508) + 4) =
                                            *(*(arg1 + 0x528) + (edi_33 << 2))
                                        *(eax_115 + *(arg1 + 0x508) + 8) = edi_33
                                        *(eax_115 + *(arg1 + 0x508) + 0xc) = 0
                                        uint32_t ecx_72 = zx.d(*(*(arg1 + 0x520) + (edi_33 << 1)))
                                        
                                        if (ecx_72.w == 0x20)
                                        label_45d48d:
                                            
                                            if (&edi_33[1] s>= arg4)
                                                eax_115 = arg3
                                            else
                                                void* ecx_91 = &edi_33[1]
                                                int16_t* eax_142 =
                                                    *(arg1 + 0x520) + (edi_33 << 1) + 2
                                                
                                                while (*eax_142 == 0x20)
                                                    edi_33 = &edi_33[1]
                                                    eax_142 = &eax_142[1]
                                                    ecx_91 += 1
                                                    
                                                    if (ecx_91 s>= arg4)
                                                        break
                                                
                                                eax_115 = arg3
                                        else if (ecx_72.w == 0xd)
                                            void* ecx_74 = &eax_115[*(arg1 + 0x508) + 0xc]
                                            *ecx_74 |= 1
                                        else if (ecx_72.w == 0xa)
                                            void* ecx_76 = &eax_115[*(arg1 + 0x508) + 0xc]
                                            *ecx_76 |= 2
                                        else if (ecx_72.w != 9)
                                            if (edi_33[*(arg1 + 0x530)] == 2)
                                                if (&edi_33[1] s< arg4)
                                                    arg8 = &edi_33[1]
                                                    
                                                    while (edi_33[*(arg1 + 0x530) + 1] == 2)
                                                        if (sub_75a2ad(
                                                                *(*(arg1 + 0x520) + (edi_33 << 1) + 2))
                                                                == 0)
                                                            edi_33 = &edi_33[1]
                                                            arg8 += 1
                                                            
                                                            if (arg8 s< arg4)
                                                                eax_115 = arg3
                                                                continue
                                                        
                                                        eax_115 = arg3
                                                        break
                                                
                                                void* eax_120 = &eax_115[*(arg1 + 0x508) + 0xc]
                                                *eax_120 |= 8
                                                var_c_4 = 1
                                                goto label_45d48d
                                            
                                            if (sub_75a277(ecx_72.w) != 0)
                                                if (&edi_33[1] s< arg4)
                                                    void* var_8_5 = &edi_33[1]
                                                    
                                                    do
                                                        uint32_t eax_124 = zx.d(
                                                            *(*(arg1 + 0x520) + (edi_33 << 1) + 2))
                                                        
                                                        if (sub_75a277(eax_124.w) == 0
                                                                && sub_75a28b(eax_124.w) == 0
                                                                && eax_124.w != 0x5f)
                                                            break
                                                        
                                                        edi_33 = &edi_33[1]
                                                        var_8_5 += 1
                                                    while (var_8_5 s< arg4)
                                                
                                                goto label_45d48d
                                            
                                            if (sub_75a28b(ecx_72.w) != 0)
                                                if (&edi_33[1] s< arg4)
                                                    arg8 = &edi_33[1]
                                                    
                                                    do
                                                        if (sub_75a28b(
                                                                *(*(arg1 + 0x520) + (edi_33 << 1) + 2))
                                                                == 0)
                                                            break
                                                        
                                                        edi_33 = &edi_33[1]
                                                        arg8 += 1
                                                    while (arg8 s< arg4)
                                                
                                                goto label_45d48d
                                            
                                            if (sub_75a29c(ecx_72.w) != 0)
                                                if (&edi_33[1] s< arg4)
                                                    arg8 = &edi_33[1]
                                                    
                                                    do
                                                        if (sub_75a29c(
                                                                *(*(arg1 + 0x520) + (edi_33 << 1) + 2))
                                                                == 0)
                                                            break
                                                        
                                                        edi_33 = &edi_33[1]
                                                        arg8 += 1
                                                    while (arg8 s< arg4)
                                                
                                                goto label_45d48d
                                            
                                            eax_115 = arg3
                                        else
                                            void* ecx_78 = &eax_115[*(arg1 + 0x508) + 0xc]
                                            *ecx_78 |= 4
                                        
                                        edi_33 = &edi_33[1]
                                        var_10_1 += 1
                                        arg3 = &eax_115[0x10]
                                        
                                        if (edi_33 s>= arg4)
                                            break
                                    
                                    esi_9 = arg4
                                
                                result = sub_45ae35(arg1 + 0x508, var_10_1 + 1, 0)
                                
                                if (result s>= 0)
                                    *((var_10_1 << 4) + *(arg1 + 0x508) + 8) = esi_9
                                    
                                    if (var_c_4 != 0)
                                        arg3 = nullptr
                                        
                                        if (var_10_1 s> 0)
                                            do
                                                char* edx_31 = arg3
                                                
                                                if (edx_31 s< var_10_1)
                                                    char* eax_151 =
                                                        (edx_31 << 4) + *(arg1 + 0x508) + 0xc
                                                    
                                                    while ((*eax_151 & 8) == 0)
                                                        edx_31 = &edx_31[1]
                                                        eax_151 = &eax_151[0x10]
                                                        arg3 = edx_31
                                                        
                                                        if (edx_31 s>= var_10_1)
                                                            break
                                                
                                                char* var_8_6 = edx_31
                                                
                                                if (edx_31 s>= var_10_1)
                                                    break
                                                
                                                int32_t eax_152 = *(arg1 + 0x508)
                                                int32_t ecx_97 = edx_31 << 4
                                                char* ecx_98 = ecx_97 + eax_152 + 0xc
                                                
                                                while ((*ecx_98 & 8) != 0)
                                                    edx_31 = &edx_31[1]
                                                    ecx_98 = &ecx_98[0x10]
                                                    arg3 = edx_31
                                                    
                                                    if (edx_31 s>= var_10_1)
                                                        break
                                                
                                                if (var_8_6 s< edx_31)
                                                    void* ecx_100 = *(ecx_97 + eax_152 + 8)
                                                    int32_t esi_12 = arg3 << 4
                                                    int32_t edi_35 = *(esi_12 + eax_152 + 8)
                                                    int32_t eax_155
                                                    int32_t edx_32
                                                    edx_32:eax_155 = sx.q(edi_35 - ecx_100)
                                                    uint32_t eax_157 = (eax_155 - edx_32) s>> 1
                                                    arg8 = ecx_97
                                                    void* i_12 = arg3 - var_8_6
                                                    void* i_10 = i_12
                                                    void* i_2
                                                    
                                                    do
                                                        int32_t edx_33 = arg8
                                                        arg8 += 0x10
                                                        void* edx_34 = edx_33 + *(arg1 + 0x508)
                                                        i_2 = i_10
                                                        i_10 -= 1
                                                        *(edx_34 + 8) =
                                                            edi_35 - *(edx_34 + 0x18) + ecx_100
                                                    while (i_2 != 1)
                                                    int32_t eax_165
                                                    int32_t edx_35
                                                    edx_35:eax_165 = sx.q(i_12)
                                                    int32_t i_13 = (eax_165 - edx_35) s>> 1
                                                    
                                                    if (i_13 s> 0)
                                                        arg8 = ecx_97
                                                        var_20 = esi_12 - 0x10
                                                        int32_t i_11 = i_13
                                                        int32_t i_3
                                                        
                                                        do
                                                            int32_t eax_167 = *(arg1 + 0x508)
                                                            uint32_t* esi_15 = arg8 + eax_167
                                                            var_64 = *esi_15
                                                            uint32_t* edi_36 = &var_60
                                                            uint32_t* esi_16 = &esi_15[1]
                                                            *edi_36 = *esi_16
                                                            void* edi_37 = &edi_36[1]
                                                            void* esi_17 = &esi_16[1]
                                                            *edi_37 = *esi_17
                                                            *(edi_37 + 4) = *(esi_17 + 4)
                                                            int32_t* edi_41 = arg8 + eax_167
                                                            int32_t* esi_21 = var_20 + eax_167
                                                            *edi_41 = *esi_21
                                                            void* edi_42 = &edi_41[1]
                                                            void* esi_22 = &esi_21[1]
                                                            *edi_42 = *esi_22
                                                            void* edi_43 = edi_42 + 4
                                                            void* esi_23 = esi_22 + 4
                                                            arg8 += 0x10
                                                            *edi_43 = *esi_23
                                                            *(edi_43 + 4) = *(esi_23 + 4)
                                                            int32_t* edi_47 =
                                                                *(arg1 + 0x508) + var_20
                                                            var_20 -= 0x10
                                                            i_3 = i_11
                                                            i_11 -= 1
                                                            *edi_47 = var_64
                                                            float* edi_48 = &edi_47[1]
                                                            float* esi_26 = &var_60
                                                            *edi_48 = *esi_26
                                                            int32_t* edi_49 = &edi_48[1]
                                                            void* esi_27 = &esi_26[1]
                                                            *edi_49 = *esi_27
                                                            edi_49[1] = *(esi_27 + 4)
                                                        while (i_3 != 1)
                                                    
                                                    if (eax_157 s> 0)
                                                        arg8 = ecx_100 << 2
                                                        void* esi_30 = ecx_100 * 2
                                                        void* var_8_7 = esi_30
                                                        void* var_c_5 = (edi_35 << 2) + 0xfffffffc
                                                        int16_t* edi_52 = edi_35 * 2 - 2
                                                        var_20 = eax_157
                                                        uint32_t i_4
                                                        
                                                        do
                                                            int32_t edx_39 = *(arg1 + 0x548)
                                                            int16_t* esi_31 = esi_30 + edx_39
                                                            edx_39.w = *(edi_52 + edx_39)
                                                            void* ecx_101
                                                            ecx_101.w = *esi_31
                                                            *esi_31 = edx_39.w
                                                            *(edi_52 + *(arg1 + 0x548)) = ecx_101.w
                                                            int32_t ecx_102 = arg8
                                                            arg8 += 4
                                                            int32_t edx_40 = *(arg1 + 0x558)
                                                            int32_t* esi_32 = ecx_102 + edx_40
                                                            int32_t ecx_103 = *esi_32
                                                            *esi_32 = *(var_c_5 + edx_40)
                                                            esi_30 = var_8_7 + 2
                                                            *(var_c_5 + *(arg1 + 0x558)) = ecx_103
                                                            edi_52 -= 2
                                                            i_4 = var_20
                                                            var_20 -= 1
                                                            var_8_7 = esi_30
                                                            var_c_5 -= 4
                                                        while (i_4 != 1)
                                                    
                                                    int32_t eax_175 = ecx_97
                                                    int32_t var_18_4 = eax_175
                                                    void* i_9 = i_12
                                                    void* i_5
                                                    
                                                    do
                                                        void* eax_176 = eax_175 + *(arg1 + 0x508)
                                                        int32_t esi_35 = *(eax_176 + 0x18)
                                                        int32_t ecx_107 = *(eax_176 + 8)
                                                        int32_t eax_179
                                                        int32_t edx_43
                                                        edx_43:eax_179 = sx.q(esi_35 - ecx_107)
                                                        uint32_t eax_181 = (eax_179 - edx_43) s>> 1
                                                        
                                                        if (eax_181 s> 0)
                                                            arg8 = ecx_107 * 2
                                                            int32_t var_8_8 = ecx_107 << 2
                                                            void* var_c_6 =
                                                                (esi_35 << 2) + 0xfffffffc
                                                            int16_t* edi_54 = esi_35 * 2 - 2
                                                            var_20 = eax_181
                                                            uint32_t j
                                                            
                                                            do
                                                                int32_t ecx_110 = arg8
                                                                arg8 += 2
                                                                int32_t edx_46 = *(arg1 + 0x548)
                                                                int16_t* esi_36 = ecx_110 + edx_46
                                                                edx_46.w = *(edi_54 + edx_46)
                                                                ecx_110.w = *esi_36
                                                                *esi_36 = edx_46.w
                                                                *(edi_54 + *(arg1 + 0x548)) = ecx_110.w
                                                                int32_t ecx_111 = var_8_8
                                                                var_8_8 += 4
                                                                int32_t edx_47 = *(arg1 + 0x558)
                                                                int32_t* esi_37 = ecx_111 + edx_47
                                                                int32_t ecx_112 = *esi_37
                                                                *esi_37 = *(var_c_6 + edx_47)
                                                                *(var_c_6 + *(arg1 + 0x558)) = ecx_112
                                                                edi_54 -= 2
                                                                j = var_20
                                                                var_20 -= 1
                                                                var_c_6 -= 4
                                                            while (j != 1)
                                                        
                                                        eax_175 = var_18_4 + 0x10
                                                        i_5 = i_9
                                                        i_9 -= 1
                                                        var_18_4 = eax_175
                                                    while (i_5 != 1)
                                            while (arg3 s< var_10_1)
                                    
                                    result = sub_45b052(arg1 + 0x510, var_10_1, 1)
                                    
                                    if (result s>= 0)
                                        if (var_10_1 s> 0)
                                            int32_t* eax_188 = nullptr
                                            arg3 = nullptr
                                            arg8 = var_10_1
                                            int32_t i_6
                                            
                                            do
                                                *(eax_188 + *(arg1 + 0x510)) = 0
                                                *(eax_188 + *(arg1 + 0x510) + 4) = 0
                                                *(eax_188 + *(arg1 + 0x510) + 8) = 0
                                                void* ecx_117 = *(arg1 + 0x508) + arg3
                                                int32_t edx_54 = *(ecx_117 + 0x18)
                                                
                                                for (int32_t j_1 = *(ecx_117 + 8); j_1 s< edx_54; 
                                                        j_1 += 1)
                                                    void* edx_56 = eax_188 + *(arg1 + 0x510) + 4
                                                    *edx_56 += *(*(arg1 + 0x558) + (j_1 << 2))
                                                
                                                arg3 = &arg3[0x10]
                                                eax_188 = &eax_188[3]
                                                i_6 = arg8
                                                arg8 -= 1
                                            while (i_6 != 1)
                                        
                                        result = sub_45af53(arg1 + 0x550, arg4, 1)
                                        
                                        if (result s>= 0)
                                            result_1 = sub_45c417(arg1, *(arg1 + 0x548), arg4, 
                                                *(arg1 + 0x550))
                                            
                                            if (result_1 s>= 0)
                                                goto label_45d7f4
                                            
                                        label_45e057:
                                            result = result_1
else
    if (arg8 != 0)
        goto label_45cabc
    
    int32_t cchWideChar = MultiByteToWideChar(0, 0, arg3, esi, nullptr, 0)
    result_1 = sub_45afd3(arg1 + 0x520, cchWideChar, 1)
    
    if (result_1 s< 0)
    label_45e057_1:
        result = result_1
    else
        MultiByteToWideChar(0, 0, arg3, esi, *(arg1 + 0x520), cchWideChar)
        esi = cchWideChar
        arg3 = *(arg1 + 0x520)
    label_45cabc:
        *(arg1 + 0x84) = 0
        *(arg1 + 0x88) = 0
        result_1 = data_b97334(0xb97350, arg1 + 0x88, arg1 + 0x84)
        
        if (result_1 s>= 0)
            if (edx_2 != 0)
                *(arg1 + 0x84) = (*(arg1 + 0x84) & 0xffe1) | 1
            
            int32_t eax_6
            int32_t edx_4
            edx_4:eax_6 = sx.q(esi * 3)
            arg8 = ((eax_6 - edx_4) s>> 1) + 0x10
            int32_t eax_10 = esi + 1
            
            while (true)
                result_1 = sub_45adb5(arg1 + 0x500, eax_10, 1)
                
                if (result_1 s< 0)
                    goto label_45e057_2
                
                result_1 = data_b97310(arg3, esi, *(arg1 + 0x504), arg1 + 0x88, arg1 + 0x84, 
                    *(arg1 + 0x500), &var_20)
                
                if (result_1 s>= 0)
                    result_1 = sub_45aed6(arg1 + 0x538, esi, 1)
                    
                    if (result_1 s< 0)
                        goto label_45e057_2
                    
                    int32_t var_18_1 = 0
                    
                    if (var_20 s> 0)
                        do
                            int32_t eax_18 = *(arg1 + 0x500)
                            int32_t ecx_7 = var_18_1 << 3
                            int32_t edi_6 = *(ecx_7 + eax_18 + 8)
                            char* edx_5 = *(ecx_7 + eax_18)
                            result_1 = data_b9731c(&arg3[edx_5 << 1], edi_6 - edx_5, 
                                eax_18 + ecx_7 + 4, *(arg1 + 0x538) + edx_5)
                            
                            if (result_1 s< 0)
                                goto label_45e057_2
                            
                            char* eax_25 = edx_5
                            
                            if (edx_5 s< edi_6)
                                do
                                    if (eax_25 == edx_5 || (eax_25[*(arg1 + 0x538)] & 8) != 0)
                                        var_10_1 += 1
                                    
                                    eax_25 = &eax_25[1]
                                while (eax_25 s< edi_6)
                            
                            var_18_1 += 1
                        while (var_18_1 s< var_20)
                    
                    result_1 = sub_45ae35(arg1 + 0x508, var_10_1 + 1, 1)
                    
                    if (result_1 s< 0)
                        goto label_45e057_2
                    
                    int32_t edx_7 = 0
                    var_10_1 = 0
                    int32_t var_c_1 = 0
                    
                    if (var_20 s> 0)
                        do
                            int32_t* eax_31 = *(arg1 + 0x500) + (edx_7 << 3)
                            char* ecx_10 = *eax_31
                            int32_t eax_32 = eax_31[2]
                            char* edi_9 = ecx_10
                            char* var_8_2 = edi_9
                            
                            if (ecx_10 s< eax_32)
                                int32_t ecx_12 = var_10_1 << 4
                                
                                do
                                    if (edi_9 == ecx_10 || (edi_9[*(arg1 + 0x538)] & 8) != 0)
                                        *(ecx_12 + *(arg1 + 0x508)) = edx_7
                                        *(ecx_12 + *(arg1 + 0x508) + 4) = var_8_2
                                        *(ecx_12 + *(arg1 + 0x508) + 0xc) = 0
                                        void* edx_9 = &arg3[var_8_2 << 1]
                                        
                                        if (*edx_9 == 0xd)
                                            int32_t* edi_15 = ecx_12 + *(arg1 + 0x508) + 0xc
                                            *edi_15 |= 1
                                        
                                        if (*edx_9 == 0xa)
                                            int32_t* edi_17 = ecx_12 + *(arg1 + 0x508) + 0xc
                                            *edi_17 |= 2
                                        
                                        if (*edx_9 == 9)
                                            int32_t* edx_11 = ecx_12 + *(arg1 + 0x508) + 0xc
                                            *edx_11 |= 4
                                        
                                        edx_7 = var_c_1
                                        
                                        if ((*(*(arg1 + 0x500) + (edx_7 << 3) + 5) & 8) != 0)
                                            int32_t* eax_36 = ecx_12 + *(arg1 + 0x508) + 0xc
                                            *eax_36 |= 8
                                        
                                        var_10_1 += 1
                                        ecx_12 += 0x10
                                    
                                    edi_9 = &var_8_2[1]
                                    var_8_2 = edi_9
                                while (edi_9 s< eax_32)
                            
                            edx_7 += 1
                            var_c_1 = edx_7
                        while (edx_7 s< var_20)
                    
                    int32_t eax_38 = var_10_1 << 4
                    *(eax_38 + *(arg1 + 0x508) + 4) = esi
                    result_1 = sub_45aed6(arg1 + 0x538, esi, 1)
                    
                    if (result_1 s< 0)
                        goto label_45e057_2
                    
                    result_1 = sub_45afd3(arg1 + 0x540, esi, 1)
                    
                    if (result_1 s< 0)
                        goto label_45e057_2
                    
                    result_1 = sub_45b052(arg1 + 0x510, var_10_1, 1)
                    
                    if (result_1 s< 0)
                        goto label_45e057_2
                    
                    int32_t esi_1 = arg4
                    int32_t var_40_1 = 0
                    
                    if (var_10_1 s> 0)
                        int32_t* var_18_2 = nullptr
                        int32_t var_24_1 = 0
                        
                        do
                            int32_t* eax_43 = *(arg1 + 0x508) + var_24_1
                            void* edx_12 = eax_43[1]
                            int32_t ecx_18 = *eax_43
                            int32_t edx_13 = eax_43[5]
                            eax_43[2] = esi_1
                            int32_t eax_44
                            eax_44.b = ecx_18 == 0
                            var_1c = eax_44
                            int32_t var_48
                            int32_t eax_54
                            
                            while (true)
                                result_1 = sub_45afd3(arg1 + 0x548, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                result_1 = sub_45afd3(arg1 + 0x570, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                void* ecx_24 = edx_12 * 2
                                eax_54 = data_b97314(*(arg1 + 0x10), arg1 + 0x70, ecx_24 + arg3, 
                                    edx_13 - edx_12, *(arg1 + 0x54c) - esi_1, 
                                    *(arg1 + 0x500) + (ecx_18 << 3) + 4, 
                                    *(arg1 + 0x548) + (esi_1 << 1), *(arg1 + 0x540) + ecx_24, 
                                    *(arg1 + 0x570) + (esi_1 << 1), &var_48)
                                
                                if (eax_54 != 0x8007000e)
                                    break
                                
                                arg8 = *(arg1 + 0x54c) << 1
                            
                            int32_t edx_20 = 0
                            int32_t eax_60
                            
                            if (eax_54 s>= 0)
                                if (var_48 s> 0)
                                    int16_t* eax_58 = *(arg1 + 0x548) + (esi_1 << 1)
                                    
                                    while (*eax_58 != *(arg1 + 0x7a))
                                        edx_20 += 1
                                        eax_58 = &eax_58[1]
                                        
                                        if (edx_20 s>= var_48)
                                            break
                                
                                eax_60.b = edx_20 s< var_48
                            
                            if (eax_54 s< 0 || eax_60 != 0)
                                arg4 = 0
                                var_28 = 0
                                var_34 = 0
                                int32_t var_c_3 = 0
                                result_1 = sub_45c5a3(arg1, &arg3[edx_12 << 1], edx_13 - edx_12, 
                                    edx_2, &arg4, &var_28, &var_34)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                int32_t eax_85 = arg4 + esi_1
                                
                                if (arg8 s< eax_85)
                                    arg8 = eax_85
                                
                                result_1 = sub_45afd3(arg1 + 0x548, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                result_1 = sub_45af53(arg1 + 0x558, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                result_1 = sub_45adb5(arg1 + 0x568, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                result_1 = sub_45af53(arg1 + 0x550, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                int32_t eax_90 = 0
                                int32_t var_30_2 = 0
                                
                                if (arg4 u> 0)
                                    int32_t edx_23 = esi_1 << 3
                                    int32_t* edi_26 = esi_1 << 2
                                    int32_t esi_2 = esi_1 * 2
                                    int32_t var_8_4 = var_28
                                    var_28 = esi_2
                                    bool cond:53_1
                                    
                                    do
                                        *(esi_2 + *(arg1 + 0x548)) = 0xffff
                                        *(edi_26 + *(arg1 + 0x550)) = var_8_4
                                        var_8_4 += 0x10
                                        int32_t eax_91 = var_34 + (eax_90 << 2)
                                        *(edi_26 + *(arg1 + 0x558)) = *eax_91
                                        *(edx_23 + *(arg1 + 0x568)) = 0
                                        *(*(arg1 + 0x568) + edx_23 + 4) = 0
                                        var_c_3 += *eax_91
                                        eax_90 = var_30_2 + 1
                                        esi_2 = var_28 + 2
                                        edx_23 += 8
                                        edi_26 = &edi_26[1]
                                        cond:53_1 = eax_90 u< arg4
                                        var_30_2 = eax_90
                                        var_28 = esi_2
                                    while (cond:53_1)
                                
                                *(var_18_2 + *(arg1 + 0x510)) = 0
                                *(*(arg1 + 0x510) + var_18_2 + 4) = var_c_3
                                *(*(arg1 + 0x510) + var_18_2 + 8) = 0
                                esi_1 = eax_85
                                arg4 = esi_1
                            else
                                result_1 = sub_45af53(arg1 + 0x558, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                result_1 = sub_45adb5(arg1 + 0x568, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                result_1 = sub_45af53(arg1 + 0x550, arg8, var_1c)
                                
                                if (result_1 s< 0)
                                    goto label_45e057_2
                                
                                int32_t eax_74 = data_b97318(*(arg1 + 0x10), arg1 + 0x70, 
                                    *(arg1 + 0x548) + (esi_1 << 1), var_48, 
                                    *(arg1 + 0x570) + (esi_1 << 1), 
                                    *(arg1 + 0x500) + (ecx_18 << 3) + 4, 
                                    *(arg1 + 0x558) + (esi_1 << 2), *(arg1 + 0x568) + (esi_1 << 3), 
                                    var_18_2 + *(arg1 + 0x510))
                                
                                if (eax_74 s>= 0)
                                    result_1 = sub_45c417(arg1, *(arg1 + 0x548) + (esi_1 << 1), 
                                        var_48, *(arg1 + 0x550) + (esi_1 << 2))
                                    
                                    if (result_1 s< 0)
                                        goto label_45e057_2
                                    
                                    esi_1 += var_48
                                    arg4 = esi_1
                            
                            var_40_1 += 1
                            var_24_1 += 0x10
                            var_18_2 = &var_18_2[3]
                        while (var_40_1 s< var_10_1)
                    
                    *(eax_38 + *(arg1 + 0x508) + 8) = esi_1
                    break
                
                if (result_1 != 0x8007000e)
                    goto label_45e057_2
                
                eax_10 = *(arg1 + 0x504) * 2
            
            goto label_45d7f4
        
    label_45e057_2:
        result = result_1
return result
