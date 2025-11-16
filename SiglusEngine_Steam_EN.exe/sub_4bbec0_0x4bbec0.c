// 函数: sub_4bbec0
// 地址: 0x4bbec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = arg2

if (arg2 == 0)
    *arg11 = arg2
    return 0

arg2.w = arg4
int32_t eax_3 = 0
uint32_t ebx = 0
int32_t result = 0
int32_t var_8 = 0

if (arg2.w != 1)
    if (arg2.w == 2 && arg5 == 0x10)
        int32_t edi_2 = sx.d(*arg3)
        void* esi_3 = &arg3[2]
        int32_t var_14_1 = sx.d(arg3[1])
        int32_t var_18_1 = edi_2
        
        switch (arg6)
            case 0
                int32_t var_1c_1 = 0
                
                if (var_10 s> 0)
                    int32_t ecx_27 = arg8
                    int32_t edx_293 = 0
                    
                    while (true)
                        if (edx_293 != 0)
                            edi_2 = var_14_1
                        
                        if (ebx == 0)
                            if (eax_3 s>= 8)
                                esi_3 += 1
                                eax_3 &= 7
                            
                            ecx_27.b = eax_3.b
                            eax_3 += 3
                            int32_t edx_296 = zx.d(*esi_3) u>> ecx_27.b & 7
                            
                            if (edx_296 s>= 4)
                                if (edx_296 == 4)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_27.b = eax_3.b
                                    uint32_t edx_315 = zx.d(*esi_3) u>> ecx_27.b
                                    eax_3 += 5
                                    ecx_27 = arg8
                                    int32_t edx_316 = edx_315 & 0x1f
                                    
                                    if ((edx_316.b & 0x10) == 0)
                                        edi_2 += edx_316 << 6
                                    else
                                        edi_2 -= (edx_316 & 0xf) << 6
                                else if (edx_296 == 5)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_27.b = eax_3.b
                                    uint32_t edx_321 = zx.d(*esi_3) u>> ecx_27.b
                                    eax_3 += 5
                                    ecx_27 = arg8
                                    int32_t edx_322 = edx_321 & 0x1f
                                    
                                    if ((edx_322.b & 0x10) == 0)
                                        edi_2 += edx_322 << 7
                                    else
                                        edi_2 -= (edx_322 & 0xf) << 7
                                else if (edx_296 != 6)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_27.b = eax_3.b
                                    eax_3 += 1
                                    
                                    if ((zx.d(*esi_3) u>> ecx_27.b & 1) != 0)
                                        edi_2 = 0
                                        ecx_27 = arg8
                                    else
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_27.b = eax_3.b
                                        uint8_t edx_336 = (zx.d(*esi_3) u>> ecx_27.b).b
                                        eax_3 += 8
                                        ecx_27 = arg8
                                        uint32_t edx_337 = zx.d(edx_336)
                                        
                                        if (edx_337.b s>= 0)
                                            edi_2 += edx_337 << 9
                                        else
                                            edi_2 -= (edx_337 & 0x7f) << 9
                                else
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_27.b = eax_3.b
                                    uint32_t edx_327 = zx.d(*esi_3) u>> ecx_27.b
                                    eax_3 += 5
                                    ecx_27 = arg8
                                    int32_t edx_328 = edx_327 & 0x1f
                                    
                                    if ((edx_328.b & 0x10) == 0)
                                        edi_2 += edx_328 << 8
                                    else
                                        edi_2 -= (edx_328 & 0xf) << 8
                            else if (edx_296 == 0)
                                if (arg7 != edx_296)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_27.b = eax_3.b
                                    eax_3 += 1
                                    ebx = zx.d(*esi_3) u>> ecx_27.b & 1
                                    
                                    if (ebx == 1)
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_27.b = eax_3.b
                                        eax_3 += 2
                                        ebx = zx.d(*esi_3) u>> ecx_27.b & 3
                                        
                                        if (ebx == 3)
                                            if (eax_3 s>= 8)
                                                esi_3 += 1
                                                eax_3 &= 7
                                            
                                            ecx_27.b = eax_3.b
                                            ebx = zx.d((zx.d(*esi_3) u>> ecx_27.b).b)
                                            eax_3 += 8
                                
                                ecx_27 = arg8
                            else if (edx_296 == 1)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_27.b = eax_3.b
                                uint32_t edx_298 = zx.d(*esi_3) u>> ecx_27.b
                                eax_3 += 5
                                ecx_27 = arg8
                                int32_t edx_299 = edx_298 & 0x1f
                                
                                if ((edx_299.b & 0x10) == 0)
                                    edi_2 += edx_299 << 3
                                else
                                    edi_2 -= (edx_299 & 0xf) << 3
                            else if (edx_296 != 2)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_27.b = eax_3.b
                                uint32_t edx_309 = zx.d(*esi_3) u>> ecx_27.b
                                eax_3 += 5
                                ecx_27 = arg8
                                int32_t edx_310 = edx_309 & 0x1f
                                
                                if ((edx_310.b & 0x10) == 0)
                                    edi_2 += edx_310 << 5
                                else
                                    edi_2 -= (edx_310 & 0xf) << 5
                            else
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_27.b = eax_3.b
                                uint32_t edx_303 = zx.d(*esi_3) u>> ecx_27.b
                                eax_3 += 5
                                ecx_27 = arg8
                                int32_t edx_304 = edx_303 & 0x1f
                                
                                if ((edx_304.b & 0x10) == 0)
                                    edi_2 += edx_304 << 4
                                else
                                    edi_2 -= (edx_304 & 0xf) << 4
                            
                            edx_293 = var_8
                        else
                            ebx -= 1
                        
                        if (var_1c_1 s>= ecx_27)
                            if (result s>= arg9)
                                break
                            
                            *arg10 = edi_2.w
                            result += 1
                            arg10 += 2
                            ecx_27 = arg8
                        
                        if (edx_293 == 0)
                            var_18_1 = edi_2
                        else
                            var_14_1 = edi_2
                        
                        edx_293 ^= 1
                        var_8 = edx_293
                        bool cond:6_1 = var_1c_1 + 1 s< var_10
                        var_1c_1 += 1
                        edi_2 = var_18_1
                        
                        if (not(cond:6_1))
                            *arg11 = result
                            return result
            case 1
                int32_t var_1c_2 = 0
                
                if (var_10 s> 0)
                    int32_t ecx_32 = arg8
                    int32_t edx_341 = 0
                    
                    while (true)
                        if (edx_341 != 0)
                            edi_2 = var_14_1
                        
                        if (ebx == 0)
                            if (eax_3 s>= 8)
                                esi_3 += 1
                                eax_3 &= 7
                            
                            ecx_32.b = eax_3.b
                            eax_3 += 3
                            int32_t edx_344 = zx.d(*esi_3) u>> ecx_32.b & 7
                            
                            if (edx_344 s>= 4)
                                if (edx_344 == 4)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_32.b = eax_3.b
                                    uint32_t edx_364 = zx.d(*esi_3) u>> ecx_32.b
                                    eax_3 += 4
                                    ecx_32 = arg8
                                    int32_t edx_365 = edx_364 & 0xf
                                    
                                    if ((edx_365.b & 8) == 0)
                                        edi_2 += edx_365 << 7
                                    else
                                        edi_2 -= (edx_365 & 7) << 7
                                else if (edx_344 == 5)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_32.b = eax_3.b
                                    uint32_t edx_370 = zx.d(*esi_3) u>> ecx_32.b
                                    eax_3 += 4
                                    ecx_32 = arg8
                                    int32_t edx_371 = edx_370 & 0xf
                                    
                                    if ((edx_371.b & 8) == 0)
                                        edi_2 += edx_371 << 8
                                    else
                                        edi_2 -= (edx_371 & 7) << 8
                                else if (edx_344 != 6)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_32.b = eax_3.b
                                    eax_3 += 1
                                    
                                    if ((zx.d(*esi_3) u>> ecx_32.b & 1) != 0)
                                        edi_2 = 0
                                        ecx_32 = arg8
                                    else
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_32.b = eax_3.b
                                        uint32_t edx_385 = zx.d(*esi_3) u>> ecx_32.b
                                        eax_3 += 7
                                        ecx_32 = arg8
                                        int32_t edx_386 = edx_385 & 0x7f
                                        
                                        if ((edx_386.b & 0x40) == 0)
                                            edi_2 += edx_386 << 0xa
                                        else
                                            edi_2 -= (edx_386 & 0x3f) << 0xa
                                else
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_32.b = eax_3.b
                                    uint32_t edx_376 = zx.d(*esi_3) u>> ecx_32.b
                                    eax_3 += 4
                                    ecx_32 = arg8
                                    int32_t edx_377 = edx_376 & 0xf
                                    
                                    if ((edx_377.b & 8) == 0)
                                        edi_2 += edx_377 << 9
                                    else
                                        edi_2 -= (edx_377 & 7) << 9
                            else if (edx_344 == 0)
                                if (arg7 != edx_344)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_32.b = eax_3.b
                                    eax_3 += 1
                                    ebx = zx.d(*esi_3) u>> ecx_32.b & 1
                                    
                                    if (ebx == 1)
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_32.b = eax_3.b
                                        eax_3 += 2
                                        ebx = zx.d(*esi_3) u>> ecx_32.b & 3
                                        
                                        if (ebx == 3)
                                            if (eax_3 s>= 8)
                                                esi_3 += 1
                                                eax_3 &= 7
                                            
                                            ecx_32.b = eax_3.b
                                            ebx = zx.d((zx.d(*esi_3) u>> ecx_32.b).b)
                                            eax_3 += 8
                                
                                ecx_32 = arg8
                            else if (edx_344 == 1)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_32.b = eax_3.b
                                uint32_t edx_346 = zx.d(*esi_3) u>> ecx_32.b
                                eax_3 += 4
                                ecx_32 = arg8
                                int32_t edx_347 = edx_346 & 0xf
                                
                                if ((edx_347.b & 8) == 0)
                                    edi_2 += edx_347 << 4
                                else
                                    edi_2 -= (edx_347 & 7) << 4
                            else if (edx_344 != 2)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_32.b = eax_3.b
                                uint32_t edx_358 = zx.d(*esi_3) u>> ecx_32.b
                                eax_3 += 4
                                ecx_32 = arg8
                                int32_t edx_359 = edx_358 & 0xf
                                
                                if ((edx_359.b & 8) == 0)
                                    edi_2 += edx_359 << 6
                                else
                                    edi_2 -= (edx_359 & 7) << 6
                            else
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_32.b = eax_3.b
                                uint32_t edx_352 = zx.d(*esi_3) u>> ecx_32.b
                                eax_3 += 4
                                ecx_32 = arg8
                                int32_t edx_353 = edx_352 & 0xf
                                
                                if ((edx_353.b & 8) == 0)
                                    edi_2 += edx_353 << 5
                                else
                                    edi_2 -= (edx_353 & 7) << 5
                            
                            edx_341 = var_8
                        else
                            ebx -= 1
                        
                        if (var_1c_2 s>= ecx_32)
                            if (result s>= arg9)
                                break
                            
                            *arg10 = edi_2.w
                            result += 1
                            arg10 += 2
                            ecx_32 = arg8
                        
                        if (edx_341 == 0)
                            var_18_1 = edi_2
                        else
                            var_14_1 = edi_2
                        
                        edx_341 ^= 1
                        var_8 = edx_341
                        bool cond:9_1 = var_1c_2 + 1 s< var_10
                        var_1c_2 += 1
                        edi_2 = var_18_1
                        
                        if (not(cond:9_1))
                            *arg11 = result
                            return result
            case 2
                int32_t var_1c_3 = 0
                
                if (var_10 s> 0)
                    int32_t ecx_37 = arg8
                    int32_t edx_390 = 0
                    
                    while (true)
                        if (edx_390 != 0)
                            edi_2 = var_14_1
                        
                        if (ebx == 0)
                            if (eax_3 s>= 8)
                                esi_3 += 1
                                eax_3 &= 7
                            
                            ecx_37.b = eax_3.b
                            eax_3 += 3
                            int32_t edx_393 = zx.d(*esi_3) u>> ecx_37.b & 7
                            
                            if (edx_393 s>= 4)
                                if (edx_393 == 4)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_37.b = eax_3.b
                                    uint32_t edx_413 = zx.d(*esi_3) u>> ecx_37.b
                                    eax_3 += 3
                                    ecx_37 = arg8
                                    int32_t edx_414 = edx_413 & 7
                                    
                                    if ((edx_414.b & 4) == 0)
                                        edi_2 += edx_414 << 8
                                    else
                                        edi_2 -= (edx_414 & 3) << 8
                                else if (edx_393 == 5)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_37.b = eax_3.b
                                    uint32_t edx_419 = zx.d(*esi_3) u>> ecx_37.b
                                    eax_3 += 3
                                    ecx_37 = arg8
                                    int32_t edx_420 = edx_419 & 7
                                    
                                    if ((edx_420.b & 4) == 0)
                                        edi_2 += edx_420 << 9
                                    else
                                        edi_2 -= (edx_420 & 3) << 9
                                else if (edx_393 != 6)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_37.b = eax_3.b
                                    eax_3 += 1
                                    
                                    if ((zx.d(*esi_3) u>> ecx_37.b & 1) != 0)
                                        edi_2 = 0
                                        ecx_37 = arg8
                                    else
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_37.b = eax_3.b
                                        uint32_t edx_434 = zx.d(*esi_3) u>> ecx_37.b
                                        eax_3 += 6
                                        ecx_37 = arg8
                                        int32_t edx_435 = edx_434 & 0x3f
                                        
                                        if ((edx_435.b & 0x20) == 0)
                                            edi_2 += edx_435 << 0xb
                                        else
                                            edi_2 -= (edx_435 & 0x1f) << 0xb
                                else
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_37.b = eax_3.b
                                    uint32_t edx_425 = zx.d(*esi_3) u>> ecx_37.b
                                    eax_3 += 3
                                    ecx_37 = arg8
                                    int32_t edx_426 = edx_425 & 7
                                    
                                    if ((edx_426.b & 4) == 0)
                                        edi_2 += edx_426 << 0xa
                                    else
                                        edi_2 -= (edx_426 & 3) << 0xa
                            else if (edx_393 == 0)
                                if (arg7 != edx_393)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_37.b = eax_3.b
                                    eax_3 += 1
                                    ebx = zx.d(*esi_3) u>> ecx_37.b & 1
                                    
                                    if (ebx == 1)
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_37.b = eax_3.b
                                        eax_3 += 2
                                        ebx = zx.d(*esi_3) u>> ecx_37.b & 3
                                        
                                        if (ebx == 3)
                                            if (eax_3 s>= 8)
                                                esi_3 += 1
                                                eax_3 &= 7
                                            
                                            ecx_37.b = eax_3.b
                                            ebx = zx.d((zx.d(*esi_3) u>> ecx_37.b).b)
                                            eax_3 += 8
                                
                                ecx_37 = arg8
                            else if (edx_393 == 1)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_37.b = eax_3.b
                                uint32_t edx_395 = zx.d(*esi_3) u>> ecx_37.b
                                eax_3 += 3
                                ecx_37 = arg8
                                int32_t edx_396 = edx_395 & 7
                                
                                if ((edx_396.b & 4) == 0)
                                    edi_2 += edx_396 << 5
                                else
                                    edi_2 -= (edx_396 & 3) << 5
                            else if (edx_393 != 2)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_37.b = eax_3.b
                                uint32_t edx_407 = zx.d(*esi_3) u>> ecx_37.b
                                eax_3 += 3
                                ecx_37 = arg8
                                int32_t edx_408 = edx_407 & 7
                                
                                if ((edx_408.b & 4) == 0)
                                    edi_2 += edx_408 << 7
                                else
                                    edi_2 -= (edx_408 & 3) << 7
                            else
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_37.b = eax_3.b
                                uint32_t edx_401 = zx.d(*esi_3) u>> ecx_37.b
                                eax_3 += 3
                                ecx_37 = arg8
                                int32_t edx_402 = edx_401 & 7
                                
                                if ((edx_402.b & 4) == 0)
                                    edi_2 += edx_402 << 6
                                else
                                    edi_2 -= (edx_402 & 3) << 6
                            
                            edx_390 = var_8
                        else
                            ebx -= 1
                        
                        if (var_1c_3 s>= ecx_37)
                            if (result s>= arg9)
                                break
                            
                            *arg10 = edi_2.w
                            result += 1
                            arg10 += 2
                            ecx_37 = arg8
                        
                        if (edx_390 == 0)
                            var_18_1 = edi_2
                        else
                            var_14_1 = edi_2
                        
                        edx_390 ^= 1
                        var_8 = edx_390
                        bool cond:12_1 = var_1c_3 + 1 s< var_10
                        var_1c_3 += 1
                        edi_2 = var_18_1
                        
                        if (not(cond:12_1))
                            *arg11 = result
                            return result
            case 3
                int32_t var_1c_4 = 0
                
                if (var_10 s> 0)
                    int32_t ecx_42 = arg8
                    int32_t edx_439 = 0
                    
                    while (true)
                        if (edx_439 != 0)
                            edi_2 = var_14_1
                        
                        if (ebx == 0)
                            if (eax_3 s>= 8)
                                esi_3 += 1
                                eax_3 &= 7
                            
                            ecx_42.b = eax_3.b
                            eax_3 += 3
                            int32_t edx_442 = zx.d(*esi_3) u>> ecx_42.b & 7
                            
                            if (edx_442 s>= 4)
                                if (edx_442 == 4)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_42.b = eax_3.b
                                    uint32_t edx_460 = zx.d(*esi_3) u>> ecx_42.b
                                    eax_3 += 6
                                    ecx_42 = arg8
                                    int32_t edx_461 = edx_460 & 0x3f
                                    
                                    if ((edx_461.b & 0x20) == 0)
                                        edi_2 += edx_461 << 5
                                    else
                                        edi_2 -= (edx_461 & 0x1f) << 5
                                else if (edx_442 == 5)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_42.b = eax_3.b
                                    uint32_t edx_466 = zx.d(*esi_3) u>> ecx_42.b
                                    eax_3 += 6
                                    ecx_42 = arg8
                                    int32_t edx_467 = edx_466 & 0x3f
                                    
                                    if ((edx_467.b & 0x20) == 0)
                                        edi_2 += edx_467 << 6
                                    else
                                        edi_2 -= (edx_467 & 0x1f) << 6
                                else if (edx_442 != 6)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_42.b = eax_3.b
                                    eax_3 += 1
                                    
                                    if ((zx.d(*esi_3) u>> ecx_42.b & 1) != 0)
                                        edi_2 = 0
                                        ecx_42 = arg8
                                    else
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_42.b = eax_3.b
                                        uint8_t edx_481 = (zx.d(*esi_3) u>> ecx_42.b).b
                                        eax_3 += 8
                                        ecx_42 = arg8
                                        uint32_t edx_482 = zx.d(edx_481)
                                        
                                        if (edx_482.b s>= 0)
                                            edi_2 += edx_482 << 9
                                        else
                                            edi_2 -= (edx_482 & 0x7f) << 9
                                else
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_42.b = eax_3.b
                                    uint32_t edx_472 = zx.d(*esi_3) u>> ecx_42.b
                                    eax_3 += 6
                                    ecx_42 = arg8
                                    int32_t edx_473 = edx_472 & 0x3f
                                    
                                    if ((edx_473.b & 0x20) == 0)
                                        edi_2 += edx_473 << 7
                                    else
                                        edi_2 -= (edx_473 & 0x1f) << 7
                            else if (edx_442 == 0)
                                if (arg7 != edx_442)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_42.b = eax_3.b
                                    eax_3 += 1
                                    ebx = zx.d(*esi_3) u>> ecx_42.b & 1
                                    
                                    if (ebx == 1)
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_42.b = eax_3.b
                                        eax_3 += 2
                                        ebx = zx.d(*esi_3) u>> ecx_42.b & 3
                                        
                                        if (ebx == 3)
                                            if (eax_3 s>= 8)
                                                esi_3 += 1
                                                eax_3 &= 7
                                            
                                            ecx_42.b = eax_3.b
                                            ebx = zx.d((zx.d(*esi_3) u>> ecx_42.b).b)
                                            eax_3 += 8
                                
                                ecx_42 = arg8
                            else if (edx_442 == 1)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_42.b = eax_3.b
                                uint32_t edx_444 = zx.d(*esi_3) u>> ecx_42.b
                                eax_3 += 6
                                ecx_42 = arg8
                                int32_t edx_445 = edx_444 & 0x3f
                                
                                if ((edx_445.b & 0x20) == 0)
                                    edi_2 += edx_445 << 2
                                else
                                    edi_2 -= (edx_445 & 0x1f) << 2
                            else if (edx_442 != 2)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_42.b = eax_3.b
                                uint32_t edx_454 = zx.d(*esi_3) u>> ecx_42.b
                                eax_3 += 6
                                ecx_42 = arg8
                                int32_t edx_455 = edx_454 & 0x3f
                                
                                if ((edx_455.b & 0x20) == 0)
                                    edi_2 += edx_455 << 4
                                else
                                    edi_2 -= (edx_455 & 0x1f) << 4
                            else
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_42.b = eax_3.b
                                uint32_t edx_449 = zx.d(*esi_3) u>> ecx_42.b
                                eax_3 += 6
                                ecx_42 = arg8
                                int32_t edx_450 = edx_449 & 0x3f
                                
                                if ((edx_450.b & 0x20) == 0)
                                    edi_2 += edx_450 << 3
                                else
                                    edi_2 -= (edx_450 & 0x1f) << 3
                            
                            edx_439 = var_8
                        else
                            ebx -= 1
                        
                        if (var_1c_4 s>= ecx_42)
                            if (result s>= arg9)
                                break
                            
                            *arg10 = edi_2.w
                            result += 1
                            arg10 += 2
                            ecx_42 = arg8
                        
                        if (edx_439 == 0)
                            var_18_1 = edi_2
                        else
                            var_14_1 = edi_2
                        
                        edx_439 ^= 1
                        var_8 = edx_439
                        bool cond:15_1 = var_1c_4 + 1 s< var_10
                        var_1c_4 += 1
                        edi_2 = var_18_1
                        
                        if (not(cond:15_1))
                            *arg11 = result
                            return result
            case 4
                int32_t var_1c_5 = 0
                
                if (var_10 s> 0)
                    int32_t ecx_47 = arg8
                    int32_t edx_486 = 0
                    
                    while (true)
                        if (edx_486 != 0)
                            edi_2 = var_14_1
                        
                        if (ebx == 0)
                            if (eax_3 s>= 8)
                                esi_3 += 1
                                eax_3 &= 7
                            
                            ecx_47.b = eax_3.b
                            eax_3 += 3
                            int32_t edx_489 = zx.d(*esi_3) u>> ecx_47.b & 7
                            
                            if (edx_489 s>= 4)
                                if (edx_489 == 4)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_47.b = eax_3.b
                                    uint32_t edx_507 = zx.d(*esi_3) u>> ecx_47.b
                                    eax_3 += 7
                                    ecx_47 = arg8
                                    int32_t edx_508 = edx_507 & 0x7f
                                    
                                    if ((edx_508.b & 0x40) == 0)
                                        edi_2 += edx_508 << 5
                                    else
                                        edi_2 -= (edx_508 & 0x3f) << 5
                                else if (edx_489 == 5)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_47.b = eax_3.b
                                    uint32_t edx_513 = zx.d(*esi_3) u>> ecx_47.b
                                    eax_3 += 7
                                    ecx_47 = arg8
                                    int32_t edx_514 = edx_513 & 0x7f
                                    
                                    if ((edx_514.b & 0x40) == 0)
                                        edi_2 += edx_514 << 6
                                    else
                                        edi_2 -= (edx_514 & 0x3f) << 6
                                else if (edx_489 != 6)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_47.b = eax_3.b
                                    eax_3 += 1
                                    
                                    if ((zx.d(*esi_3) u>> ecx_47.b & 1) != 0)
                                        edi_2 = 0
                                        ecx_47 = arg8
                                    else
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_47.b = eax_3.b
                                        uint8_t edx_528 = (zx.d(*esi_3) u>> ecx_47.b).b
                                        eax_3 += 8
                                        ecx_47 = arg8
                                        uint32_t edx_529 = zx.d(edx_528)
                                        
                                        if (edx_529.b s>= 0)
                                            edi_2 += edx_529 << 9
                                        else
                                            edi_2 -= (edx_529 & 0x7f) << 9
                                else
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_47.b = eax_3.b
                                    uint32_t edx_519 = zx.d(*esi_3) u>> ecx_47.b
                                    eax_3 += 7
                                    ecx_47 = arg8
                                    int32_t edx_520 = edx_519 & 0x7f
                                    
                                    if ((edx_520.b & 0x40) == 0)
                                        edi_2 += edx_520 << 7
                                    else
                                        edi_2 -= (edx_520 & 0x3f) << 7
                            else if (edx_489 == 0)
                                if (arg7 != edx_489)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_47.b = eax_3.b
                                    eax_3 += 1
                                    ebx = zx.d(*esi_3) u>> ecx_47.b & 1
                                    
                                    if (ebx == 1)
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_47.b = eax_3.b
                                        eax_3 += 2
                                        ebx = zx.d(*esi_3) u>> ecx_47.b & 3
                                        
                                        if (ebx == 3)
                                            if (eax_3 s>= 8)
                                                esi_3 += 1
                                                eax_3 &= 7
                                            
                                            ecx_47.b = eax_3.b
                                            ebx = zx.d((zx.d(*esi_3) u>> ecx_47.b).b)
                                            eax_3 += 8
                                
                                ecx_47 = arg8
                            else if (edx_489 == 1)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_47.b = eax_3.b
                                uint32_t edx_491 = zx.d(*esi_3) u>> ecx_47.b
                                eax_3 += 7
                                ecx_47 = arg8
                                int32_t edx_492 = edx_491 & 0x7f
                                
                                if ((edx_492.b & 0x40) == 0)
                                    edi_2 += edx_492 << 2
                                else
                                    edi_2 -= (edx_492 & 0x3f) << 2
                            else if (edx_489 != 2)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_47.b = eax_3.b
                                uint32_t edx_501 = zx.d(*esi_3) u>> ecx_47.b
                                eax_3 += 7
                                ecx_47 = arg8
                                int32_t edx_502 = edx_501 & 0x7f
                                
                                if ((edx_502.b & 0x40) == 0)
                                    edi_2 += edx_502 << 4
                                else
                                    edi_2 -= (edx_502 & 0x3f) << 4
                            else
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_47.b = eax_3.b
                                uint32_t edx_496 = zx.d(*esi_3) u>> ecx_47.b
                                eax_3 += 7
                                ecx_47 = arg8
                                int32_t edx_497 = edx_496 & 0x7f
                                
                                if ((edx_497.b & 0x40) == 0)
                                    edi_2 += edx_497 << 3
                                else
                                    edi_2 -= (edx_497 & 0x3f) << 3
                            
                            edx_486 = var_8
                        else
                            ebx -= 1
                        
                        if (var_1c_5 s>= ecx_47)
                            if (result s>= arg9)
                                break
                            
                            *arg10 = edi_2.w
                            result += 1
                            arg10 += 2
                            ecx_47 = arg8
                        
                        if (edx_486 == 0)
                            var_18_1 = edi_2
                        else
                            var_14_1 = edi_2
                        
                        edx_486 ^= 1
                        var_8 = edx_486
                        bool cond:16_1 = var_1c_5 + 1 s< var_10
                        var_1c_5 += 1
                        edi_2 = var_18_1
                        
                        if (not(cond:16_1))
                            *arg11 = result
                            return result
            case 5
                int32_t var_1c_6 = 0
                
                if (var_10 s> 0)
                    int32_t ecx_52 = arg8
                    int32_t edx_533 = 0
                    bool cond:17_1
                    
                    do
                        if (edx_533 != 0)
                            edi_2 = var_14_1
                        
                        if (ebx == 0)
                            if (eax_3 s>= 8)
                                esi_3 += 1
                                eax_3 &= 7
                            
                            ecx_52.b = eax_3.b
                            eax_3 += 3
                            int32_t edx_536 = zx.d(*esi_3) u>> ecx_52.b & 7
                            
                            if (edx_536 s>= 4)
                                if (edx_536 == 4)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_52.b = eax_3.b
                                    uint8_t edx_554 = (zx.d(*esi_3) u>> ecx_52.b).b
                                    eax_3 += 8
                                    ecx_52 = arg8
                                    uint32_t edx_555 = zx.d(edx_554)
                                    
                                    if (edx_555.b s>= 0)
                                        edi_2 += edx_555 << 5
                                    else
                                        edi_2 -= (edx_555 & 0x7f) << 5
                                else if (edx_536 == 5)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_52.b = eax_3.b
                                    uint8_t edx_560 = (zx.d(*esi_3) u>> ecx_52.b).b
                                    eax_3 += 8
                                    ecx_52 = arg8
                                    uint32_t edx_561 = zx.d(edx_560)
                                    
                                    if (edx_561.b s>= 0)
                                        edi_2 += edx_561 << 6
                                    else
                                        edi_2 -= (edx_561 & 0x7f) << 6
                                else if (edx_536 != 6)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_52.b = eax_3.b
                                    eax_3 += 1
                                    
                                    if ((zx.d(*esi_3) u>> ecx_52.b & 1) != 0)
                                        edi_2 = 0
                                        ecx_52 = arg8
                                    else
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_52.b = eax_3.b
                                        uint8_t edx_575 = (zx.d(*esi_3) u>> ecx_52.b).b
                                        eax_3 += 8
                                        ecx_52 = arg8
                                        uint32_t edx_576 = zx.d(edx_575)
                                        
                                        if (edx_576.b s>= 0)
                                            edi_2 += edx_576 << 9
                                        else
                                            edi_2 -= (edx_576 & 0x7f) << 9
                                else
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_52.b = eax_3.b
                                    uint8_t edx_566 = (zx.d(*esi_3) u>> ecx_52.b).b
                                    eax_3 += 8
                                    ecx_52 = arg8
                                    uint32_t edx_567 = zx.d(edx_566)
                                    
                                    if (edx_567.b s>= 0)
                                        edi_2 += edx_567 << 7
                                    else
                                        edi_2 -= (edx_567 & 0x7f) << 7
                            else if (edx_536 == 0)
                                if (arg7 != edx_536)
                                    if (eax_3 s>= 8)
                                        esi_3 += 1
                                        eax_3 &= 7
                                    
                                    ecx_52.b = eax_3.b
                                    eax_3 += 1
                                    ebx = zx.d(*esi_3) u>> ecx_52.b & 1
                                    
                                    if (ebx == 1)
                                        if (eax_3 s>= 8)
                                            esi_3 += 1
                                            eax_3 &= 7
                                        
                                        ecx_52.b = eax_3.b
                                        eax_3 += 2
                                        ebx = zx.d(*esi_3) u>> ecx_52.b & 3
                                        
                                        if (ebx == 3)
                                            if (eax_3 s>= 8)
                                                esi_3 += 1
                                                eax_3 &= 7
                                            
                                            ecx_52.b = eax_3.b
                                            ebx = zx.d((zx.d(*esi_3) u>> ecx_52.b).b)
                                            eax_3 += 8
                                
                                ecx_52 = arg8
                            else if (edx_536 == 1)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_52.b = eax_3.b
                                uint8_t edx_538 = (zx.d(*esi_3) u>> ecx_52.b).b
                                eax_3 += 8
                                ecx_52 = arg8
                                uint32_t edx_539 = zx.d(edx_538)
                                
                                if (edx_539.b s>= 0)
                                    edi_2 += edx_539 << 2
                                else
                                    edi_2 -= (edx_539 & 0x7f) << 2
                            else if (edx_536 != 2)
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_52.b = eax_3.b
                                uint8_t edx_548 = (zx.d(*esi_3) u>> ecx_52.b).b
                                eax_3 += 8
                                ecx_52 = arg8
                                uint32_t edx_549 = zx.d(edx_548)
                                
                                if (edx_549.b s>= 0)
                                    edi_2 += edx_549 << 4
                                else
                                    edi_2 -= (edx_549 & 0x7f) << 4
                            else
                                if (eax_3 s>= 8)
                                    esi_3 += 1
                                    eax_3 &= 7
                                
                                ecx_52.b = eax_3.b
                                uint8_t edx_543 = (zx.d(*esi_3) u>> ecx_52.b).b
                                eax_3 += 8
                                ecx_52 = arg8
                                uint32_t edx_544 = zx.d(edx_543)
                                
                                if (edx_544.b s>= 0)
                                    edi_2 += edx_544 << 3
                                else
                                    edi_2 -= (edx_544 & 0x7f) << 3
                            
                            edx_533 = var_8
                        else
                            ebx -= 1
                        
                        if (var_1c_6 s>= ecx_52)
                            if (result s>= arg9)
                                break
                            
                            *arg10 = edi_2.w
                            result += 1
                            arg10 += 2
                            ecx_52 = arg8
                        
                        if (edx_533 == 0)
                            var_18_1 = edi_2
                        else
                            var_14_1 = edi_2
                        
                        edx_533 ^= 1
                        var_8 = edx_533
                        cond:17_1 = var_1c_6 + 1 s< var_10
                        var_1c_6 += 1
                        edi_2 = var_18_1
                    while (cond:17_1)
else if (arg5 == 0x10)
    int32_t edi_1 = sx.d(*arg3)
    void* esi_1 = &arg3[1]
    
    switch (arg6)
        case 0
            int32_t var_8_1 = arg6
            
            if (var_10 s> 0)
                int32_t ecx_1 = arg6
                
                while (true)
                    if (ebx == 0)
                        if (eax_3 s>= 8)
                            esi_1 += 1
                            eax_3 &= 7
                        
                        ecx_1.b = eax_3.b
                        eax_3 += 3
                        int32_t edx_2 = zx.d(*esi_1) u>> ecx_1.b & 7
                        
                        if (edx_2 s>= 4)
                            if (edx_2 == 4)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_1.b = eax_3.b
                                uint32_t edx_21 = zx.d(*esi_1) u>> ecx_1.b
                                eax_3 += 5
                                ecx_1 = var_8_1
                                int32_t edx_22 = edx_21 & 0x1f
                                
                                if ((edx_22.b & 0x10) == 0)
                                    edi_1 += edx_22 << 6
                                else
                                    edi_1 -= (edx_22 & 0xf) << 6
                            else if (edx_2 == 5)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_1.b = eax_3.b
                                uint32_t edx_27 = zx.d(*esi_1) u>> ecx_1.b
                                eax_3 += 5
                                ecx_1 = var_8_1
                                int32_t edx_28 = edx_27 & 0x1f
                                
                                if ((edx_28.b & 0x10) == 0)
                                    edi_1 += edx_28 << 7
                                else
                                    edi_1 -= (edx_28 & 0xf) << 7
                            else if (edx_2 != 6)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_1.b = eax_3.b
                                eax_3 += 1
                                
                                if ((zx.d(*esi_1) u>> ecx_1.b & 1) != 0)
                                    edi_1 = 0
                                    ecx_1 = var_8_1
                                else
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_1.b = eax_3.b
                                    uint8_t edx_42 = (zx.d(*esi_1) u>> ecx_1.b).b
                                    eax_3 += 8
                                    ecx_1 = var_8_1
                                    uint32_t edx_43 = zx.d(edx_42)
                                    
                                    if (edx_43.b s>= 0)
                                        edi_1 += edx_43 << 9
                                    else
                                        edi_1 -= (edx_43 & 0x7f) << 9
                            else
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_1.b = eax_3.b
                                uint32_t edx_33 = zx.d(*esi_1) u>> ecx_1.b
                                eax_3 += 5
                                ecx_1 = var_8_1
                                int32_t edx_34 = edx_33 & 0x1f
                                
                                if ((edx_34.b & 0x10) == 0)
                                    edi_1 += edx_34 << 8
                                else
                                    edi_1 -= (edx_34 & 0xf) << 8
                        else if (edx_2 == 0)
                            if (arg7 != edx_2)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_1.b = eax_3.b
                                eax_3 += 1
                                ebx = zx.d(*esi_1) u>> ecx_1.b & 1
                                
                                if (ebx == 1)
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_1.b = eax_3.b
                                    eax_3 += 2
                                    ebx = zx.d(*esi_1) u>> ecx_1.b & 3
                                    
                                    if (ebx == 3)
                                        if (eax_3 s>= 8)
                                            esi_1 += 1
                                            eax_3 &= 7
                                        
                                        ecx_1.b = eax_3.b
                                        ebx = zx.d((zx.d(*esi_1) u>> ecx_1.b).b)
                                        eax_3 += 8
                            
                            ecx_1 = var_8_1
                        else if (edx_2 == 1)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_1.b = eax_3.b
                            uint32_t edx_4 = zx.d(*esi_1) u>> ecx_1.b
                            eax_3 += 5
                            ecx_1 = var_8_1
                            int32_t edx_5 = edx_4 & 0x1f
                            
                            if ((edx_5.b & 0x10) == 0)
                                edi_1 += edx_5 << 3
                            else
                                edi_1 -= (edx_5 & 0xf) << 3
                        else if (edx_2 != 2)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_1.b = eax_3.b
                            uint32_t edx_15 = zx.d(*esi_1) u>> ecx_1.b
                            eax_3 += 5
                            ecx_1 = var_8_1
                            int32_t edx_16 = edx_15 & 0x1f
                            
                            if ((edx_16.b & 0x10) == 0)
                                edi_1 += edx_16 << 5
                            else
                                edi_1 -= (edx_16 & 0xf) << 5
                        else
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_1.b = eax_3.b
                            uint32_t edx_9 = zx.d(*esi_1) u>> ecx_1.b
                            eax_3 += 5
                            ecx_1 = var_8_1
                            int32_t edx_10 = edx_9 & 0x1f
                            
                            if ((edx_10.b & 0x10) == 0)
                                edi_1 += edx_10 << 4
                            else
                                edi_1 -= (edx_10 & 0xf) << 4
                    else
                        ebx -= 1
                    
                    if (ecx_1 s>= arg8)
                        if (result s>= arg9)
                            break
                        
                        int16_t* ecx_2 = arg10
                        *ecx_2 = edi_1.w
                        arg10 = &ecx_2[1]
                        ecx_1 = var_8_1
                        result += 1
                    
                    ecx_1 += 1
                    var_8_1 = ecx_1
                    
                    if (ecx_1 s>= var_10)
                        *arg11 = result
                        return result
        case 1
            int32_t ecx_5 = 0
            int32_t var_8_2 = 0
            
            if (var_10 s> 0)
                while (true)
                    if (ebx == 0)
                        if (eax_3 s>= 8)
                            esi_1 += 1
                            eax_3 &= 7
                        
                        ecx_5.b = eax_3.b
                        eax_3 += 3
                        int32_t edx_51 = zx.d(*esi_1) u>> ecx_5.b & 7
                        
                        if (edx_51 s>= 4)
                            if (edx_51 == 4)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_5.b = eax_3.b
                                uint32_t edx_71 = zx.d(*esi_1) u>> ecx_5.b
                                eax_3 += 4
                                ecx_5 = var_8_2
                                int32_t edx_72 = edx_71 & 0xf
                                
                                if ((edx_72.b & 8) == 0)
                                    edi_1 += edx_72 << 7
                                else
                                    edi_1 -= (edx_72 & 7) << 7
                            else if (edx_51 == 5)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_5.b = eax_3.b
                                uint32_t edx_77 = zx.d(*esi_1) u>> ecx_5.b
                                eax_3 += 4
                                ecx_5 = var_8_2
                                int32_t edx_78 = edx_77 & 0xf
                                
                                if ((edx_78.b & 8) == 0)
                                    edi_1 += edx_78 << 8
                                else
                                    edi_1 -= (edx_78 & 7) << 8
                            else if (edx_51 != 6)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_5.b = eax_3.b
                                eax_3 += 1
                                
                                if ((zx.d(*esi_1) u>> ecx_5.b & 1) != 0)
                                    edi_1 = 0
                                    ecx_5 = var_8_2
                                else
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_5.b = eax_3.b
                                    uint32_t edx_92 = zx.d(*esi_1) u>> ecx_5.b
                                    eax_3 += 7
                                    ecx_5 = var_8_2
                                    int32_t edx_93 = edx_92 & 0x7f
                                    
                                    if ((edx_93.b & 0x40) == 0)
                                        edi_1 += edx_93 << 0xa
                                    else
                                        edi_1 -= (edx_93 & 0x3f) << 0xa
                            else
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_5.b = eax_3.b
                                uint32_t edx_83 = zx.d(*esi_1) u>> ecx_5.b
                                eax_3 += 4
                                ecx_5 = var_8_2
                                int32_t edx_84 = edx_83 & 0xf
                                
                                if ((edx_84.b & 8) == 0)
                                    edi_1 += edx_84 << 9
                                else
                                    edi_1 -= (edx_84 & 7) << 9
                        else if (edx_51 == 0)
                            if (arg7 != edx_51)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_5.b = eax_3.b
                                eax_3 += 1
                                ebx = zx.d(*esi_1) u>> ecx_5.b & 1
                                
                                if (ebx == 1)
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_5.b = eax_3.b
                                    eax_3 += 2
                                    ebx = zx.d(*esi_1) u>> ecx_5.b & 3
                                    
                                    if (ebx == 3)
                                        if (eax_3 s>= 8)
                                            esi_1 += 1
                                            eax_3 &= 7
                                        
                                        ecx_5.b = eax_3.b
                                        ebx = zx.d((zx.d(*esi_1) u>> ecx_5.b).b)
                                        eax_3 += 8
                            
                            ecx_5 = var_8_2
                        else if (edx_51 == 1)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_5.b = eax_3.b
                            uint32_t edx_53 = zx.d(*esi_1) u>> ecx_5.b
                            eax_3 += 4
                            ecx_5 = var_8_2
                            int32_t edx_54 = edx_53 & 0xf
                            
                            if ((edx_54.b & 8) == 0)
                                edi_1 += edx_54 << 4
                            else
                                edi_1 -= (edx_54 & 7) << 4
                        else if (edx_51 != 2)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_5.b = eax_3.b
                            uint32_t edx_65 = zx.d(*esi_1) u>> ecx_5.b
                            eax_3 += 4
                            ecx_5 = var_8_2
                            int32_t edx_66 = edx_65 & 0xf
                            
                            if ((edx_66.b & 8) == 0)
                                edi_1 += edx_66 << 6
                            else
                                edi_1 -= (edx_66 & 7) << 6
                        else
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_5.b = eax_3.b
                            uint32_t edx_59 = zx.d(*esi_1) u>> ecx_5.b
                            eax_3 += 4
                            ecx_5 = var_8_2
                            int32_t edx_60 = edx_59 & 0xf
                            
                            if ((edx_60.b & 8) == 0)
                                edi_1 += edx_60 << 5
                            else
                                edi_1 -= (edx_60 & 7) << 5
                    else
                        ebx -= 1
                    
                    if (ecx_5 s>= arg8)
                        if (result s>= arg9)
                            break
                        
                        *arg10 = edi_1.w
                        arg10 += 2
                        ecx_5 = var_8_2
                        result += 1
                    
                    ecx_5 += 1
                    var_8_2 = ecx_5
                    
                    if (ecx_5 s>= var_10)
                        *arg11 = result
                        return result
        case 2
            int32_t ecx_9 = 0
            int32_t var_8_3 = 0
            
            if (var_10 s> 0)
                while (true)
                    if (ebx == 0)
                        if (eax_3 s>= 8)
                            esi_1 += 1
                            eax_3 &= 7
                        
                        ecx_9.b = eax_3.b
                        eax_3 += 3
                        int32_t edx_101 = zx.d(*esi_1) u>> ecx_9.b & 7
                        
                        if (edx_101 s>= 4)
                            if (edx_101 == 4)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_9.b = eax_3.b
                                uint32_t edx_121 = zx.d(*esi_1) u>> ecx_9.b
                                eax_3 += 3
                                ecx_9 = var_8_3
                                int32_t edx_122 = edx_121 & 7
                                
                                if ((edx_122.b & 4) == 0)
                                    edi_1 += edx_122 << 8
                                else
                                    edi_1 -= (edx_122 & 3) << 8
                            else if (edx_101 == 5)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_9.b = eax_3.b
                                uint32_t edx_127 = zx.d(*esi_1) u>> ecx_9.b
                                eax_3 += 3
                                ecx_9 = var_8_3
                                int32_t edx_128 = edx_127 & 7
                                
                                if ((edx_128.b & 4) == 0)
                                    edi_1 += edx_128 << 9
                                else
                                    edi_1 -= (edx_128 & 3) << 9
                            else if (edx_101 != 6)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_9.b = eax_3.b
                                eax_3 += 1
                                
                                if ((zx.d(*esi_1) u>> ecx_9.b & 1) != 0)
                                    edi_1 = 0
                                    ecx_9 = var_8_3
                                else
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_9.b = eax_3.b
                                    uint32_t edx_142 = zx.d(*esi_1) u>> ecx_9.b
                                    eax_3 += 6
                                    ecx_9 = var_8_3
                                    int32_t edx_143 = edx_142 & 0x3f
                                    
                                    if ((edx_143.b & 0x20) == 0)
                                        edi_1 += edx_143 << 0xb
                                    else
                                        edi_1 -= (edx_143 & 0x1f) << 0xb
                            else
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_9.b = eax_3.b
                                uint32_t edx_133 = zx.d(*esi_1) u>> ecx_9.b
                                eax_3 += 3
                                ecx_9 = var_8_3
                                int32_t edx_134 = edx_133 & 7
                                
                                if ((edx_134.b & 4) == 0)
                                    edi_1 += edx_134 << 0xa
                                else
                                    edi_1 -= (edx_134 & 3) << 0xa
                        else if (edx_101 == 0)
                            if (arg7 != edx_101)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_9.b = eax_3.b
                                eax_3 += 1
                                ebx = zx.d(*esi_1) u>> ecx_9.b & 1
                                
                                if (ebx == 1)
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_9.b = eax_3.b
                                    eax_3 += 2
                                    ebx = zx.d(*esi_1) u>> ecx_9.b & 3
                                    
                                    if (ebx == 3)
                                        if (eax_3 s>= 8)
                                            esi_1 += 1
                                            eax_3 &= 7
                                        
                                        ecx_9.b = eax_3.b
                                        ebx = zx.d((zx.d(*esi_1) u>> ecx_9.b).b)
                                        eax_3 += 8
                            
                            ecx_9 = var_8_3
                        else if (edx_101 == 1)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_9.b = eax_3.b
                            uint32_t edx_103 = zx.d(*esi_1) u>> ecx_9.b
                            eax_3 += 3
                            ecx_9 = var_8_3
                            int32_t edx_104 = edx_103 & 7
                            
                            if ((edx_104.b & 4) == 0)
                                edi_1 += edx_104 << 5
                            else
                                edi_1 -= (edx_104 & 3) << 5
                        else if (edx_101 != 2)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_9.b = eax_3.b
                            uint32_t edx_115 = zx.d(*esi_1) u>> ecx_9.b
                            eax_3 += 3
                            ecx_9 = var_8_3
                            int32_t edx_116 = edx_115 & 7
                            
                            if ((edx_116.b & 4) == 0)
                                edi_1 += edx_116 << 7
                            else
                                edi_1 -= (edx_116 & 3) << 7
                        else
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_9.b = eax_3.b
                            uint32_t edx_109 = zx.d(*esi_1) u>> ecx_9.b
                            eax_3 += 3
                            ecx_9 = var_8_3
                            int32_t edx_110 = edx_109 & 7
                            
                            if ((edx_110.b & 4) == 0)
                                edi_1 += edx_110 << 6
                            else
                                edi_1 -= (edx_110 & 3) << 6
                    else
                        ebx -= 1
                    
                    if (ecx_9 s>= arg8)
                        if (result s>= arg9)
                            break
                        
                        *arg10 = edi_1.w
                        arg10 += 2
                        ecx_9 = var_8_3
                        result += 1
                    
                    ecx_9 += 1
                    var_8_3 = ecx_9
                    
                    if (ecx_9 s>= var_10)
                        *arg11 = result
                        return result
        case 3
            int32_t ecx_13 = 0
            int32_t var_8_4 = 0
            
            if (var_10 s> 0)
                while (true)
                    if (ebx == 0)
                        if (eax_3 s>= 8)
                            esi_1 += 1
                            eax_3 &= 7
                        
                        ecx_13.b = eax_3.b
                        eax_3 += 3
                        int32_t edx_151 = zx.d(*esi_1) u>> ecx_13.b & 7
                        
                        if (edx_151 s>= 4)
                            if (edx_151 == 4)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_13.b = eax_3.b
                                uint32_t edx_169 = zx.d(*esi_1) u>> ecx_13.b
                                eax_3 += 6
                                ecx_13 = var_8_4
                                int32_t edx_170 = edx_169 & 0x3f
                                
                                if ((edx_170.b & 0x20) == 0)
                                    edi_1 += edx_170 << 5
                                else
                                    edi_1 -= (edx_170 & 0x1f) << 5
                            else if (edx_151 == 5)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_13.b = eax_3.b
                                uint32_t edx_175 = zx.d(*esi_1) u>> ecx_13.b
                                eax_3 += 6
                                ecx_13 = var_8_4
                                int32_t edx_176 = edx_175 & 0x3f
                                
                                if ((edx_176.b & 0x20) == 0)
                                    edi_1 += edx_176 << 6
                                else
                                    edi_1 -= (edx_176 & 0x1f) << 6
                            else if (edx_151 != 6)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_13.b = eax_3.b
                                eax_3 += 1
                                
                                if ((zx.d(*esi_1) u>> ecx_13.b & 1) != 0)
                                    edi_1 = 0
                                    ecx_13 = var_8_4
                                else
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_13.b = eax_3.b
                                    uint8_t edx_190 = (zx.d(*esi_1) u>> ecx_13.b).b
                                    eax_3 += 8
                                    ecx_13 = var_8_4
                                    uint32_t edx_191 = zx.d(edx_190)
                                    
                                    if (edx_191.b s>= 0)
                                        edi_1 += edx_191 << 9
                                    else
                                        edi_1 -= (edx_191 & 0x7f) << 9
                            else
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_13.b = eax_3.b
                                uint32_t edx_181 = zx.d(*esi_1) u>> ecx_13.b
                                eax_3 += 6
                                ecx_13 = var_8_4
                                int32_t edx_182 = edx_181 & 0x3f
                                
                                if ((edx_182.b & 0x20) == 0)
                                    edi_1 += edx_182 << 7
                                else
                                    edi_1 -= (edx_182 & 0x1f) << 7
                        else if (edx_151 == 0)
                            if (arg7 != edx_151)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_13.b = eax_3.b
                                eax_3 += 1
                                ebx = zx.d(*esi_1) u>> ecx_13.b & 1
                                
                                if (ebx == 1)
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_13.b = eax_3.b
                                    eax_3 += 2
                                    ebx = zx.d(*esi_1) u>> ecx_13.b & 3
                                    
                                    if (ebx == 3)
                                        if (eax_3 s>= 8)
                                            esi_1 += 1
                                            eax_3 &= 7
                                        
                                        ecx_13.b = eax_3.b
                                        ebx = zx.d((zx.d(*esi_1) u>> ecx_13.b).b)
                                        eax_3 += 8
                            
                            ecx_13 = var_8_4
                        else if (edx_151 == 1)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_13.b = eax_3.b
                            uint32_t edx_153 = zx.d(*esi_1) u>> ecx_13.b
                            eax_3 += 6
                            ecx_13 = var_8_4
                            int32_t edx_154 = edx_153 & 0x3f
                            
                            if ((edx_154.b & 0x20) == 0)
                                edi_1 += edx_154 << 2
                            else
                                edi_1 -= (edx_154 & 0x1f) << 2
                        else if (edx_151 != 2)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_13.b = eax_3.b
                            uint32_t edx_163 = zx.d(*esi_1) u>> ecx_13.b
                            eax_3 += 6
                            ecx_13 = var_8_4
                            int32_t edx_164 = edx_163 & 0x3f
                            
                            if ((edx_164.b & 0x20) == 0)
                                edi_1 += edx_164 << 4
                            else
                                edi_1 -= (edx_164 & 0x1f) << 4
                        else
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_13.b = eax_3.b
                            uint32_t edx_158 = zx.d(*esi_1) u>> ecx_13.b
                            eax_3 += 6
                            ecx_13 = var_8_4
                            int32_t edx_159 = edx_158 & 0x3f
                            
                            if ((edx_159.b & 0x20) == 0)
                                edi_1 += edx_159 << 3
                            else
                                edi_1 -= (edx_159 & 0x1f) << 3
                    else
                        ebx -= 1
                    
                    if (ecx_13 s>= arg8)
                        if (result s>= arg9)
                            break
                        
                        *arg10 = edi_1.w
                        arg10 += 2
                        ecx_13 = var_8_4
                        result += 1
                    
                    ecx_13 += 1
                    var_8_4 = ecx_13
                    
                    if (ecx_13 s>= var_10)
                        *arg11 = result
                        return result
        case 4
            int32_t var_8_5 = 0
            
            if (var_10 s> 0)
                int32_t ecx_17 = 0
                
                while (true)
                    if (ebx == 0)
                        if (eax_3 s>= 8)
                            esi_1 += 1
                            eax_3 &= 7
                        
                        ecx_17.b = eax_3.b
                        eax_3 += 3
                        int32_t edx_199 = zx.d(*esi_1) u>> ecx_17.b & 7
                        
                        if (edx_199 s>= 4)
                            if (edx_199 == 4)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_17.b = eax_3.b
                                uint32_t edx_217 = zx.d(*esi_1) u>> ecx_17.b
                                eax_3 += 7
                                ecx_17 = var_8_5
                                int32_t edx_218 = edx_217 & 0x7f
                                
                                if ((edx_218.b & 0x40) == 0)
                                    edi_1 += edx_218 << 5
                                else
                                    edi_1 -= (edx_218 & 0x3f) << 5
                            else if (edx_199 == 5)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_17.b = eax_3.b
                                uint32_t edx_223 = zx.d(*esi_1) u>> ecx_17.b
                                eax_3 += 7
                                ecx_17 = var_8_5
                                int32_t edx_224 = edx_223 & 0x7f
                                
                                if ((edx_224.b & 0x40) == 0)
                                    edi_1 += edx_224 << 6
                                else
                                    edi_1 -= (edx_224 & 0x3f) << 6
                            else if (edx_199 != 6)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_17.b = eax_3.b
                                eax_3 += 1
                                
                                if ((zx.d(*esi_1) u>> ecx_17.b & 1) != 0)
                                    edi_1 = 0
                                    ecx_17 = var_8_5
                                else
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_17.b = eax_3.b
                                    uint8_t edx_238 = (zx.d(*esi_1) u>> ecx_17.b).b
                                    eax_3 += 8
                                    ecx_17 = var_8_5
                                    uint32_t edx_239 = zx.d(edx_238)
                                    
                                    if (edx_239.b s>= 0)
                                        edi_1 += edx_239 << 9
                                    else
                                        edi_1 -= (edx_239 & 0x7f) << 9
                            else
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_17.b = eax_3.b
                                uint32_t edx_229 = zx.d(*esi_1) u>> ecx_17.b
                                eax_3 += 7
                                ecx_17 = var_8_5
                                int32_t edx_230 = edx_229 & 0x7f
                                
                                if ((edx_230.b & 0x40) == 0)
                                    edi_1 += edx_230 << 7
                                else
                                    edi_1 -= (edx_230 & 0x3f) << 7
                        else if (edx_199 == 0)
                            if (arg7 != edx_199)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_17.b = eax_3.b
                                eax_3 += 1
                                ebx = zx.d(*esi_1) u>> ecx_17.b & 1
                                
                                if (ebx == 1)
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_17.b = eax_3.b
                                    eax_3 += 2
                                    ebx = zx.d(*esi_1) u>> ecx_17.b & 3
                                    
                                    if (ebx == 3)
                                        if (eax_3 s>= 8)
                                            esi_1 += 1
                                            eax_3 &= 7
                                        
                                        ecx_17.b = eax_3.b
                                        ebx = zx.d((zx.d(*esi_1) u>> ecx_17.b).b)
                                        eax_3 += 8
                            
                            ecx_17 = var_8_5
                        else if (edx_199 == 1)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_17.b = eax_3.b
                            uint32_t edx_201 = zx.d(*esi_1) u>> ecx_17.b
                            eax_3 += 7
                            ecx_17 = var_8_5
                            int32_t edx_202 = edx_201 & 0x7f
                            
                            if ((edx_202.b & 0x40) == 0)
                                edi_1 += edx_202 << 2
                            else
                                edi_1 -= (edx_202 & 0x3f) << 2
                        else if (edx_199 != 2)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_17.b = eax_3.b
                            uint32_t edx_211 = zx.d(*esi_1) u>> ecx_17.b
                            eax_3 += 7
                            ecx_17 = var_8_5
                            int32_t edx_212 = edx_211 & 0x7f
                            
                            if ((edx_212.b & 0x40) == 0)
                                edi_1 += edx_212 << 4
                            else
                                edi_1 -= (edx_212 & 0x3f) << 4
                        else
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_17.b = eax_3.b
                            uint32_t edx_206 = zx.d(*esi_1) u>> ecx_17.b
                            eax_3 += 7
                            ecx_17 = var_8_5
                            int32_t edx_207 = edx_206 & 0x7f
                            
                            if ((edx_207.b & 0x40) == 0)
                                edi_1 += edx_207 << 3
                            else
                                edi_1 -= (edx_207 & 0x3f) << 3
                    else
                        ebx -= 1
                    
                    if (ecx_17 s>= arg8)
                        if (result s>= arg9)
                            break
                        
                        *arg10 = edi_1.w
                        arg10 += 2
                        ecx_17 = var_8_5
                        result += 1
                    
                    ecx_17 += 1
                    var_8_5 = ecx_17
                    
                    if (ecx_17 s>= var_10)
                        *arg11 = result
                        return result
        case 5
            int32_t var_8_6 = 0
            
            if (var_10 s> 0)
                int32_t ecx_21 = 0
                
                while (true)
                    if (ebx == 0)
                        if (eax_3 s>= 8)
                            esi_1 += 1
                            eax_3 &= 7
                        
                        ecx_21.b = eax_3.b
                        eax_3 += 3
                        int32_t edx_247 = zx.d(*esi_1) u>> ecx_21.b & 7
                        
                        if (edx_247 s>= 4)
                            if (edx_247 == 4)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_21.b = eax_3.b
                                uint8_t edx_265 = (zx.d(*esi_1) u>> ecx_21.b).b
                                eax_3 += 8
                                ecx_21 = var_8_6
                                uint32_t edx_266 = zx.d(edx_265)
                                
                                if (edx_266.b s>= 0)
                                    edi_1 += edx_266 << 5
                                else
                                    edi_1 -= (edx_266 & 0x7f) << 5
                            else if (edx_247 == 5)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_21.b = eax_3.b
                                uint8_t edx_271 = (zx.d(*esi_1) u>> ecx_21.b).b
                                eax_3 += 8
                                ecx_21 = var_8_6
                                uint32_t edx_272 = zx.d(edx_271)
                                
                                if (edx_272.b s>= 0)
                                    edi_1 += edx_272 << 6
                                else
                                    edi_1 -= (edx_272 & 0x7f) << 6
                            else if (edx_247 != 6)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_21.b = eax_3.b
                                eax_3 += 1
                                
                                if ((zx.d(*esi_1) u>> ecx_21.b & 1) != 0)
                                    edi_1 = 0
                                    ecx_21 = var_8_6
                                else
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_21.b = eax_3.b
                                    uint8_t edx_286 = (zx.d(*esi_1) u>> ecx_21.b).b
                                    eax_3 += 8
                                    ecx_21 = var_8_6
                                    uint32_t edx_287 = zx.d(edx_286)
                                    
                                    if (edx_287.b s>= 0)
                                        edi_1 += edx_287 << 9
                                    else
                                        edi_1 -= (edx_287 & 0x7f) << 9
                            else
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_21.b = eax_3.b
                                uint8_t edx_277 = (zx.d(*esi_1) u>> ecx_21.b).b
                                eax_3 += 8
                                ecx_21 = var_8_6
                                uint32_t edx_278 = zx.d(edx_277)
                                
                                if (edx_278.b s>= 0)
                                    edi_1 += edx_278 << 7
                                else
                                    edi_1 -= (edx_278 & 0x7f) << 7
                        else if (edx_247 == 0)
                            if (arg7 != edx_247)
                                if (eax_3 s>= 8)
                                    esi_1 += 1
                                    eax_3 &= 7
                                
                                ecx_21.b = eax_3.b
                                eax_3 += 1
                                ebx = zx.d(*esi_1) u>> ecx_21.b & 1
                                
                                if (ebx == 1)
                                    if (eax_3 s>= 8)
                                        esi_1 += 1
                                        eax_3 &= 7
                                    
                                    ecx_21.b = eax_3.b
                                    eax_3 += 2
                                    ebx = zx.d(*esi_1) u>> ecx_21.b & 3
                                    
                                    if (ebx == 3)
                                        if (eax_3 s>= 8)
                                            esi_1 += 1
                                            eax_3 &= 7
                                        
                                        ecx_21.b = eax_3.b
                                        ebx = zx.d((zx.d(*esi_1) u>> ecx_21.b).b)
                                        eax_3 += 8
                            
                            ecx_21 = var_8_6
                        else if (edx_247 == 1)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_21.b = eax_3.b
                            uint8_t edx_249 = (zx.d(*esi_1) u>> ecx_21.b).b
                            eax_3 += 8
                            ecx_21 = var_8_6
                            uint32_t edx_250 = zx.d(edx_249)
                            
                            if (edx_250.b s>= 0)
                                edi_1 += edx_250 << 2
                            else
                                edi_1 -= (edx_250 & 0x7f) << 2
                        else if (edx_247 != 2)
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_21.b = eax_3.b
                            uint8_t edx_259 = (zx.d(*esi_1) u>> ecx_21.b).b
                            eax_3 += 8
                            ecx_21 = var_8_6
                            uint32_t edx_260 = zx.d(edx_259)
                            
                            if (edx_260.b s>= 0)
                                edi_1 += edx_260 << 4
                            else
                                edi_1 -= (edx_260 & 0x7f) << 4
                        else
                            if (eax_3 s>= 8)
                                esi_1 += 1
                                eax_3 &= 7
                            
                            ecx_21.b = eax_3.b
                            uint8_t edx_254 = (zx.d(*esi_1) u>> ecx_21.b).b
                            eax_3 += 8
                            ecx_21 = var_8_6
                            uint32_t edx_255 = zx.d(edx_254)
                            
                            if (edx_255.b s>= 0)
                                edi_1 += edx_255 << 3
                            else
                                edi_1 -= (edx_255 & 0x7f) << 3
                    else
                        ebx -= 1
                    
                    if (ecx_21 s>= arg8)
                        if (result s>= arg9)
                            break
                        
                        *arg10 = edi_1.w
                        arg10 += 2
                        ecx_21 = var_8_6
                        result += 1
                    
                    ecx_21 += 1
                    var_8_6 = ecx_21
                    
                    if (ecx_21 s>= var_10)
                        *arg11 = result
                        return result

*arg11 = result
return result
