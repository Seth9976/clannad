// 函数: sub_71d980
// 地址: 0x71d980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t result_1 = 0
uint32_t ebx = 0
int32_t ecx_1 = *(arg6 + 8)

if (ecx_1 == 0)
    ecx_1 = 2
else if (ecx_1 == 1)
    ecx_1 = 1
else if (ecx_1 == 2)
    ecx_1 = 0

int32_t edi = sx.d(*arg3)
void* esi_4 = &arg3[1]

if (ecx_1 u> 5)
    return 0

int32_t result

switch (ecx_1)
    case 0
        result = 0
        
        if (arg2 u> 0)
            while (true)
                if (ebx == 0)
                    if (eax u>= 8)
                        esi_4 += 1
                        eax &= 7
                    
                    result.b = eax.b
                    eax += 3
                    int32_t edx_3 = zx.d(*esi_4) u>> result.b & 7
                    
                    if (edx_3 u>= 4)
                        if (edx_3 == 4)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_23 = zx.d(*esi_4) u>> result.b
                            eax += 3
                            result = result_1
                            int32_t edx_24 = edx_23 & 7
                            
                            if ((edx_24.b & 4) == 0)
                                edi += edx_24 << 8
                            else
                                edi -= (edx_24 & 3) << 8
                        else if (edx_3 == 5)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_29 = zx.d(*esi_4) u>> result.b
                            eax += 3
                            result = result_1
                            int32_t edx_30 = edx_29 & 7
                            
                            if ((edx_30.b & 4) == 0)
                                edi += edx_30 << 9
                            else
                                edi -= (edx_30 & 3) << 9
                        else if (edx_3 != 6)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_4) u>> result.b & 1) != 0)
                                edi = 0
                                result = result_1
                            else
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                result.b = eax.b
                                uint32_t edx_44 = zx.d(*esi_4) u>> result.b
                                eax += 6
                                result = result_1
                                int32_t edx_45 = edx_44 & 0x3f
                                
                                if ((edx_45.b & 0x20) == 0)
                                    edi += edx_45 << 0xb
                                else
                                    edi -= (edx_45 & 0x1f) << 0xb
                        else
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_35 = zx.d(*esi_4) u>> result.b
                            eax += 3
                            result = result_1
                            int32_t edx_36 = edx_35 & 7
                            
                            if ((edx_36.b & 4) == 0)
                                edi += edx_36 << 0xa
                            else
                                edi -= (edx_36 & 3) << 0xa
                    else if (edx_3 == 0)
                        if (*(arg6 + 0xc) != edx_3)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            void* ecx_2
                            ecx_2.b = eax.b
                            eax += 1
                            ebx = zx.d(*esi_4) u>> ecx_2.b & 1
                            
                            if (ebx == 1)
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                ecx_2.b = eax.b
                                eax += 2
                                ebx = zx.d(*esi_4) u>> ecx_2.b & 3
                                
                                if (ebx == 3)
                                    if (eax u>= 8)
                                        esi_4 += 1
                                        eax &= 7
                                    
                                    ecx_2.b = eax.b
                                    ebx = zx.d((zx.d(*esi_4) u>> ecx_2.b).b)
                                    eax += 8
                        
                        result = result_1
                    else if (edx_3 == 1)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_5 = zx.d(*esi_4) u>> result.b
                        eax += 3
                        result = result_1
                        int32_t edx_6 = edx_5 & 7
                        
                        if ((edx_6.b & 4) == 0)
                            edi += edx_6 << 5
                        else
                            edi -= (edx_6 & 3) << 5
                    else if (edx_3 != 2)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_17 = zx.d(*esi_4) u>> result.b
                        eax += 3
                        result = result_1
                        int32_t edx_18 = edx_17 & 7
                        
                        if ((edx_18.b & 4) == 0)
                            edi += edx_18 << 7
                        else
                            edi -= (edx_18 & 3) << 7
                    else
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_11 = zx.d(*esi_4) u>> result.b
                        eax += 3
                        result = result_1
                        int32_t edx_12 = edx_11 & 7
                        
                        if ((edx_12.b & 4) == 0)
                            edi += edx_12 << 6
                        else
                            edi -= (edx_12 & 3) << 6
                else
                    ebx -= 1
                
                if (result u>= arg4)
                    break
                
                result += 1
                result_1 = result
                *arg5 = edi.w
                arg5 += 2
                
                if (result u>= arg2)
                    return result
    case 1
        result = 0
        
        if (arg2 u> 0)
            while (true)
                if (ebx == 0)
                    if (eax u>= 8)
                        esi_4 += 1
                        eax &= 7
                    
                    result.b = eax.b
                    eax += 3
                    int32_t edx_53 = zx.d(*esi_4) u>> result.b & 7
                    
                    if (edx_53 u>= 4)
                        if (edx_53 == 4)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_73 = zx.d(*esi_4) u>> result.b
                            eax += 4
                            result = result_1
                            int32_t edx_74 = edx_73 & 0xf
                            
                            if ((edx_74.b & 8) == 0)
                                edi += edx_74 << 7
                            else
                                edi -= (edx_74 & 7) << 7
                        else if (edx_53 == 5)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_79 = zx.d(*esi_4) u>> result.b
                            eax += 4
                            result = result_1
                            int32_t edx_80 = edx_79 & 0xf
                            
                            if ((edx_80.b & 8) == 0)
                                edi += edx_80 << 8
                            else
                                edi -= (edx_80 & 7) << 8
                        else if (edx_53 != 6)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_4) u>> result.b & 1) != 0)
                                edi = 0
                                result = result_1
                            else
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                result.b = eax.b
                                uint32_t edx_94 = zx.d(*esi_4) u>> result.b
                                eax += 7
                                result = result_1
                                int32_t edx_95 = edx_94 & 0x7f
                                
                                if ((edx_95.b & 0x40) == 0)
                                    edi += edx_95 << 0xa
                                else
                                    edi -= (edx_95 & 0x3f) << 0xa
                        else
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_85 = zx.d(*esi_4) u>> result.b
                            eax += 4
                            result = result_1
                            int32_t edx_86 = edx_85 & 0xf
                            
                            if ((edx_86.b & 8) == 0)
                                edi += edx_86 << 9
                            else
                                edi -= (edx_86 & 7) << 9
                    else if (edx_53 == 0)
                        if (*(arg6 + 0xc) != edx_53)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            void* ecx_3
                            ecx_3.b = eax.b
                            eax += 1
                            ebx = zx.d(*esi_4) u>> ecx_3.b & 1
                            
                            if (ebx == 1)
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                ecx_3.b = eax.b
                                eax += 2
                                ebx = zx.d(*esi_4) u>> ecx_3.b & 3
                                
                                if (ebx == 3)
                                    if (eax u>= 8)
                                        esi_4 += 1
                                        eax &= 7
                                    
                                    ecx_3.b = eax.b
                                    ebx = zx.d((zx.d(*esi_4) u>> ecx_3.b).b)
                                    eax += 8
                        
                        result = result_1
                    else if (edx_53 == 1)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_55 = zx.d(*esi_4) u>> result.b
                        eax += 4
                        result = result_1
                        int32_t edx_56 = edx_55 & 0xf
                        
                        if ((edx_56.b & 8) == 0)
                            edi += edx_56 << 4
                        else
                            edi -= (edx_56 & 7) << 4
                    else if (edx_53 != 2)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_67 = zx.d(*esi_4) u>> result.b
                        eax += 4
                        result = result_1
                        int32_t edx_68 = edx_67 & 0xf
                        
                        if ((edx_68.b & 8) == 0)
                            edi += edx_68 << 6
                        else
                            edi -= (edx_68 & 7) << 6
                    else
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_61 = zx.d(*esi_4) u>> result.b
                        eax += 4
                        result = result_1
                        int32_t edx_62 = edx_61 & 0xf
                        
                        if ((edx_62.b & 8) == 0)
                            edi += edx_62 << 5
                        else
                            edi -= (edx_62 & 7) << 5
                else
                    ebx -= 1
                
                if (result u>= arg4)
                    break
                
                result += 1
                result_1 = result
                *arg5 = edi.w
                arg5 += 2
                
                if (result u>= arg2)
                    return result
    case 2
        result = 0
        
        if (arg2 u> 0)
            while (true)
                if (ebx == 0)
                    if (eax u>= 8)
                        esi_4 += 1
                        eax &= 7
                    
                    result.b = eax.b
                    eax += 3
                    int32_t edx_103 = zx.d(*esi_4) u>> result.b & 7
                    
                    if (edx_103 u>= 4)
                        if (edx_103 == 4)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_122 = zx.d(*esi_4) u>> result.b
                            eax += 5
                            result = result_1
                            int32_t edx_123 = edx_122 & 0x1f
                            
                            if ((edx_123.b & 0x10) == 0)
                                edi += edx_123 << 6
                            else
                                edi -= (edx_123 & 0xf) << 6
                        else if (edx_103 == 5)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_128 = zx.d(*esi_4) u>> result.b
                            eax += 5
                            result = result_1
                            int32_t edx_129 = edx_128 & 0x1f
                            
                            if ((edx_129.b & 0x10) == 0)
                                edi += edx_129 << 7
                            else
                                edi -= (edx_129 & 0xf) << 7
                        else if (edx_103 != 6)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_4) u>> result.b & 1) != 0)
                                edi = 0
                                result = result_1
                            else
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                result.b = eax.b
                                uint8_t edx_143 = (zx.d(*esi_4) u>> result.b).b
                                eax += 8
                                result = result_1
                                uint32_t edx_144 = zx.d(edx_143)
                                
                                if (edx_144.b s>= 0)
                                    edi += edx_144 << 9
                                else
                                    edi -= (edx_144 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_134 = zx.d(*esi_4) u>> result.b
                            eax += 5
                            result = result_1
                            int32_t edx_135 = edx_134 & 0x1f
                            
                            if ((edx_135.b & 0x10) == 0)
                                edi += edx_135 << 8
                            else
                                edi -= (edx_135 & 0xf) << 8
                    else if (edx_103 == 0)
                        if (*(arg6 + 0xc) != edx_103)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            void* ecx_4
                            ecx_4.b = eax.b
                            eax += 1
                            ebx = zx.d(*esi_4) u>> ecx_4.b & 1
                            
                            if (ebx == 1)
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                ecx_4.b = eax.b
                                eax += 2
                                ebx = zx.d(*esi_4) u>> ecx_4.b & 3
                                
                                if (ebx == 3)
                                    if (eax u>= 8)
                                        esi_4 += 1
                                        eax &= 7
                                    
                                    ecx_4.b = eax.b
                                    ebx = zx.d((zx.d(*esi_4) u>> ecx_4.b).b)
                                    eax += 8
                        
                        result = result_1
                    else if (edx_103 == 1)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_105 = zx.d(*esi_4) u>> result.b
                        eax += 5
                        result = result_1
                        int32_t edx_106 = edx_105 & 0x1f
                        
                        if ((edx_106.b & 0x10) == 0)
                            edi += edx_106 << 3
                        else
                            edi -= (edx_106 & 0xf) << 3
                    else if (edx_103 != 2)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_116 = zx.d(*esi_4) u>> result.b
                        eax += 5
                        result = result_1
                        int32_t edx_117 = edx_116 & 0x1f
                        
                        if ((edx_117.b & 0x10) == 0)
                            edi += edx_117 << 5
                        else
                            edi -= (edx_117 & 0xf) << 5
                    else
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_110 = zx.d(*esi_4) u>> result.b
                        eax += 5
                        result = result_1
                        int32_t edx_111 = edx_110 & 0x1f
                        
                        if ((edx_111.b & 0x10) == 0)
                            edi += edx_111 << 4
                        else
                            edi -= (edx_111 & 0xf) << 4
                else
                    ebx -= 1
                
                if (result u>= arg4)
                    break
                
                result += 1
                result_1 = result
                *arg5 = edi.w
                arg5 += 2
                
                if (result u>= arg2)
                    return result
    case 3
        result = 0
        
        if (arg2 u> 0)
            while (true)
                if (ebx == 0)
                    if (eax u>= 8)
                        esi_4 += 1
                        eax &= 7
                    
                    result.b = eax.b
                    eax += 3
                    int32_t edx_152 = zx.d(*esi_4) u>> result.b & 7
                    
                    if (edx_152 u>= 4)
                        if (edx_152 == 4)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_170 = zx.d(*esi_4) u>> result.b
                            eax += 6
                            result = result_1
                            int32_t edx_171 = edx_170 & 0x3f
                            
                            if ((edx_171.b & 0x20) == 0)
                                edi += edx_171 << 5
                            else
                                edi -= (edx_171 & 0x1f) << 5
                        else if (edx_152 == 5)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_176 = zx.d(*esi_4) u>> result.b
                            eax += 6
                            result = result_1
                            int32_t edx_177 = edx_176 & 0x3f
                            
                            if ((edx_177.b & 0x20) == 0)
                                edi += edx_177 << 6
                            else
                                edi -= (edx_177 & 0x1f) << 6
                        else if (edx_152 != 6)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_4) u>> result.b & 1) != 0)
                                edi = 0
                                result = result_1
                            else
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                result.b = eax.b
                                uint8_t edx_191 = (zx.d(*esi_4) u>> result.b).b
                                eax += 8
                                result = result_1
                                uint32_t edx_192 = zx.d(edx_191)
                                
                                if (edx_192.b s>= 0)
                                    edi += edx_192 << 9
                                else
                                    edi -= (edx_192 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_182 = zx.d(*esi_4) u>> result.b
                            eax += 6
                            result = result_1
                            int32_t edx_183 = edx_182 & 0x3f
                            
                            if ((edx_183.b & 0x20) == 0)
                                edi += edx_183 << 7
                            else
                                edi -= (edx_183 & 0x1f) << 7
                    else if (edx_152 == 0)
                        if (*(arg6 + 0xc) != edx_152)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            void* ecx_5
                            ecx_5.b = eax.b
                            eax += 1
                            ebx = zx.d(*esi_4) u>> ecx_5.b & 1
                            
                            if (ebx == 1)
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                ecx_5.b = eax.b
                                eax += 2
                                ebx = zx.d(*esi_4) u>> ecx_5.b & 3
                                
                                if (ebx == 3)
                                    if (eax u>= 8)
                                        esi_4 += 1
                                        eax &= 7
                                    
                                    ecx_5.b = eax.b
                                    ebx = zx.d((zx.d(*esi_4) u>> ecx_5.b).b)
                                    eax += 8
                        
                        result = result_1
                    else if (edx_152 == 1)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_154 = zx.d(*esi_4) u>> result.b
                        eax += 6
                        result = result_1
                        int32_t edx_155 = edx_154 & 0x3f
                        
                        if ((edx_155.b & 0x20) == 0)
                            edi += edx_155 << 2
                        else
                            edi -= (edx_155 & 0x1f) << 2
                    else if (edx_152 != 2)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_164 = zx.d(*esi_4) u>> result.b
                        eax += 6
                        result = result_1
                        int32_t edx_165 = edx_164 & 0x3f
                        
                        if ((edx_165.b & 0x20) == 0)
                            edi += edx_165 << 4
                        else
                            edi -= (edx_165 & 0x1f) << 4
                    else
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_159 = zx.d(*esi_4) u>> result.b
                        eax += 6
                        result = result_1
                        int32_t edx_160 = edx_159 & 0x3f
                        
                        if ((edx_160.b & 0x20) == 0)
                            edi += edx_160 << 3
                        else
                            edi -= (edx_160 & 0x1f) << 3
                else
                    ebx -= 1
                
                if (result u>= arg4)
                    break
                
                result += 1
                result_1 = result
                *arg5 = edi.w
                arg5 += 2
                
                if (result u>= arg2)
                    return result
    case 4
        result = 0
        
        if (arg2 u> 0)
            while (true)
                if (ebx == 0)
                    if (eax u>= 8)
                        esi_4 += 1
                        eax &= 7
                    
                    result.b = eax.b
                    eax += 3
                    int32_t edx_200 = zx.d(*esi_4) u>> result.b & 7
                    
                    if (edx_200 u>= 4)
                        if (edx_200 == 4)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_218 = zx.d(*esi_4) u>> result.b
                            eax += 7
                            result = result_1
                            int32_t edx_219 = edx_218 & 0x7f
                            
                            if ((edx_219.b & 0x40) == 0)
                                edi += edx_219 << 5
                            else
                                edi -= (edx_219 & 0x3f) << 5
                        else if (edx_200 == 5)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_224 = zx.d(*esi_4) u>> result.b
                            eax += 7
                            result = result_1
                            int32_t edx_225 = edx_224 & 0x7f
                            
                            if ((edx_225.b & 0x40) == 0)
                                edi += edx_225 << 6
                            else
                                edi -= (edx_225 & 0x3f) << 6
                        else if (edx_200 != 6)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_4) u>> result.b & 1) != 0)
                                edi = 0
                                result = result_1
                            else
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                result.b = eax.b
                                uint8_t edx_239 = (zx.d(*esi_4) u>> result.b).b
                                eax += 8
                                result = result_1
                                uint32_t edx_240 = zx.d(edx_239)
                                
                                if (edx_240.b s>= 0)
                                    edi += edx_240 << 9
                                else
                                    edi -= (edx_240 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint32_t edx_230 = zx.d(*esi_4) u>> result.b
                            eax += 7
                            result = result_1
                            int32_t edx_231 = edx_230 & 0x7f
                            
                            if ((edx_231.b & 0x40) == 0)
                                edi += edx_231 << 7
                            else
                                edi -= (edx_231 & 0x3f) << 7
                    else if (edx_200 == 0)
                        if (*(arg6 + 0xc) != edx_200)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            void* ecx_6
                            ecx_6.b = eax.b
                            eax += 1
                            ebx = zx.d(*esi_4) u>> ecx_6.b & 1
                            
                            if (ebx == 1)
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                ecx_6.b = eax.b
                                eax += 2
                                ebx = zx.d(*esi_4) u>> ecx_6.b & 3
                                
                                if (ebx == 3)
                                    if (eax u>= 8)
                                        esi_4 += 1
                                        eax &= 7
                                    
                                    ecx_6.b = eax.b
                                    ebx = zx.d((zx.d(*esi_4) u>> ecx_6.b).b)
                                    eax += 8
                        
                        result = result_1
                    else if (edx_200 == 1)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_202 = zx.d(*esi_4) u>> result.b
                        eax += 7
                        result = result_1
                        int32_t edx_203 = edx_202 & 0x7f
                        
                        if ((edx_203.b & 0x40) == 0)
                            edi += edx_203 << 2
                        else
                            edi -= (edx_203 & 0x3f) << 2
                    else if (edx_200 != 2)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_212 = zx.d(*esi_4) u>> result.b
                        eax += 7
                        result = result_1
                        int32_t edx_213 = edx_212 & 0x7f
                        
                        if ((edx_213.b & 0x40) == 0)
                            edi += edx_213 << 4
                        else
                            edi -= (edx_213 & 0x3f) << 4
                    else
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint32_t edx_207 = zx.d(*esi_4) u>> result.b
                        eax += 7
                        result = result_1
                        int32_t edx_208 = edx_207 & 0x7f
                        
                        if ((edx_208.b & 0x40) == 0)
                            edi += edx_208 << 3
                        else
                            edi -= (edx_208 & 0x3f) << 3
                else
                    ebx -= 1
                
                if (result u>= arg4)
                    break
                
                result += 1
                result_1 = result
                *arg5 = edi.w
                arg5 += 2
                
                if (result u>= arg2)
                    return result
    case 5
        result = 0
        
        if (arg2 u> 0)
            while (true)
                if (ebx == 0)
                    if (eax u>= 8)
                        esi_4 += 1
                        eax &= 7
                    
                    result.b = eax.b
                    eax += 3
                    int32_t edx_248 = zx.d(*esi_4) u>> result.b & 7
                    
                    if (edx_248 u>= 4)
                        if (edx_248 == 4)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint8_t edx_266 = (zx.d(*esi_4) u>> result.b).b
                            eax += 8
                            result = result_1
                            uint32_t edx_267 = zx.d(edx_266)
                            
                            if (edx_267.b s>= 0)
                                edi += edx_267 << 5
                            else
                                edi -= (edx_267 & 0x7f) << 5
                        else if (edx_248 == 5)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint8_t edx_272 = (zx.d(*esi_4) u>> result.b).b
                            eax += 8
                            result = result_1
                            uint32_t edx_273 = zx.d(edx_272)
                            
                            if (edx_273.b s>= 0)
                                edi += edx_273 << 6
                            else
                                edi -= (edx_273 & 0x7f) << 6
                        else if (edx_248 != 6)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_4) u>> result.b & 1) != 0)
                                edi = 0
                                result = result_1
                            else
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                result.b = eax.b
                                uint8_t edx_287 = (zx.d(*esi_4) u>> result.b).b
                                eax += 8
                                result = result_1
                                uint32_t edx_288 = zx.d(edx_287)
                                
                                if (edx_288.b s>= 0)
                                    edi += edx_288 << 9
                                else
                                    edi -= (edx_288 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            result.b = eax.b
                            uint8_t edx_278 = (zx.d(*esi_4) u>> result.b).b
                            eax += 8
                            result = result_1
                            uint32_t edx_279 = zx.d(edx_278)
                            
                            if (edx_279.b s>= 0)
                                edi += edx_279 << 7
                            else
                                edi -= (edx_279 & 0x7f) << 7
                    else if (edx_248 == 0)
                        if (*(arg6 + 0xc) != edx_248)
                            if (eax u>= 8)
                                esi_4 += 1
                                eax &= 7
                            
                            void* ecx_7
                            ecx_7.b = eax.b
                            eax += 1
                            ebx = zx.d(*esi_4) u>> ecx_7.b & 1
                            
                            if (ebx == 1)
                                if (eax u>= 8)
                                    esi_4 += 1
                                    eax &= 7
                                
                                ecx_7.b = eax.b
                                eax += 2
                                ebx = zx.d(*esi_4) u>> ecx_7.b & 3
                                
                                if (ebx == 3)
                                    if (eax u>= 8)
                                        esi_4 += 1
                                        eax &= 7
                                    
                                    ecx_7.b = eax.b
                                    ebx = zx.d((zx.d(*esi_4) u>> ecx_7.b).b)
                                    eax += 8
                        
                        result = result_1
                    else if (edx_248 == 1)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint8_t edx_250 = (zx.d(*esi_4) u>> result.b).b
                        eax += 8
                        result = result_1
                        uint32_t edx_251 = zx.d(edx_250)
                        
                        if (edx_251.b s>= 0)
                            edi += edx_251 << 2
                        else
                            edi -= (edx_251 & 0x7f) << 2
                    else if (edx_248 != 2)
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint8_t edx_260 = (zx.d(*esi_4) u>> result.b).b
                        eax += 8
                        result = result_1
                        uint32_t edx_261 = zx.d(edx_260)
                        
                        if (edx_261.b s>= 0)
                            edi += edx_261 << 4
                        else
                            edi -= (edx_261 & 0x7f) << 4
                    else
                        if (eax u>= 8)
                            esi_4 += 1
                            eax &= 7
                        
                        result.b = eax.b
                        uint8_t edx_255 = (zx.d(*esi_4) u>> result.b).b
                        eax += 8
                        result = result_1
                        uint32_t edx_256 = zx.d(edx_255)
                        
                        if (edx_256.b s>= 0)
                            edi += edx_256 << 3
                        else
                            edi -= (edx_256 & 0x7f) << 3
                else
                    ebx -= 1
                
                if (result u>= arg4)
                    break
                
                int16_t* edx_292 = arg5
                result += 1
                result_1 = result
                *edx_292 = edi.w
                arg5 = &edx_292[1]
                
                if (result u>= arg2)
                    return result

return result
